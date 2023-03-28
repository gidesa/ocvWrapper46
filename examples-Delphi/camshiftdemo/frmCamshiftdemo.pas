
{ Demo of camshift algorithm on webcam
  Opencv test program translated from C++ to Pascal with ocvWrapper
  ---------------------------------------------------------------------------
  Copyright (C) 2023 Giandomenico De Sanctis gidesay@yahoo.com

  This source is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This code is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  A copy of the GNU General Public License is available on the World Wide Web
  at <http://www.gnu.org/copyleft/gpl.html>. You can also obtain it by writing
  to the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1335, USA.
}
unit frmCamshiftdemo;


interface

uses
  Messages, SysUtils, Variants, Classes,
  Graphics, Controls, Forms, System.Types,
  Dialogs,  StdCtrls, ComCtrls, ExtCtrls, Math,
  OPENCVWrapper,
  frmHistogram;

type
  TfCamShiftDemo = class(TForm)
    Panel2: TPanel;
    Label1: TLabel;
    tbVmin: TTrackBar;
    Label2: TLabel;
    tbVmax: TTrackBar;
    Label3: TLabel;
    tbSmin: TTrackBar;
    Panel1: TPanel;
    formImage: TImage;
    btnStart: TButton;
    me1: TMemo;
    btnHelp: TButton;
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormDestroy(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure btnStartClick(Sender: TObject);
    procedure formImageMouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure formImageMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure formImageMouseUp(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure btnHelpClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  fCamShiftDemo: TfCamShiftDemo;

{-----------------------}
image:        PCvMat_t;
imageroi:     PCvMat_t;
hsv:          PCvMat_t;
hue:          PCvMat_t;
hueroi:       PCvMat_t;
mask:         PCvMat_t;
maskroi:      PCvMat_t;
backproject:  PCvMat_t;
histimg:      PCvMat_t;

hist:         PCvMat_t;
rangelow:     PCvMat_t;
rangehigh:    PCvMat_t;

vecimg:       PCvvector_Mat;
vechan:       PCvvector_int;
vechsize:     PCvvector_int;
vecsplit:     PCvvector_Mat;

backproject_mode:    longint = 0;
select_object:       longint = 0;
track_object:        longint = 0;
show_hist:           longint = 0;

origin:          TPoint;
selection:       CvRectS;
track_window:    PCvRect_t;
track_box:       PCvRotatedRect_t;

hdims: longint = 16;


hranges_arr:     array[0..1] of Single = (0, 180);
vechranges:      PCvvector_float;

capture:         PCvVideoCapture_t;
frame:           PCvMat_t;
color:           PCvScalar_t;
scalarZero:      PCvScalar_t;
scalarRange:     PCvScalar_t;
cvcrit:          PCvTermCriteria_t;
bmp:             TBitmap;
selcam:          integer = 0;
viewHelp:        Boolean = False;
endProg:         Boolean = False;

{-----------------------------}
// Used to convert hsv to rgb
sector_data : array[0..5] of array[0..2] of longint =
((0,2,1), (1,2,0), (1,0,2), (2,0,1), (2,1,0), (0,1,2));

{*************************************************************************}
implementation

{$R *.dfm}


function hsv2rgb(hue: Single ): PCvScalar_t ;
var
    rgb : array[0..2] of longint;
    p, sector: longint;
begin
    hue := hue * 0.033333333333333333333333333333333;
    sector := Floor(hue);
    p := Round(255*(hue - sector));
    if (sector and 1) <> 0 then
        p := p xor 255
    else
        p := p xor 0;

    rgb[sector_data[sector][0]] := 255;
    rgb[sector_data[sector][1]] := 0;
    rgb[sector_data[sector][2]] := p;

    Result := CvScalar_(rgb[2], rgb[1], rgb[0], 0);
end;




procedure main_cycle(frame: PCvMat_t);
var
        i, bin_w: integer;
        _vmin, _vmax: integer;
        max_val: single;
        val: integer ;
        csWidth, csHeight: Integer;
        rec: TRect;
        pt1, pt2: PCvPoint_t;
        hwi, hhe: Integer;
        termcrit: CvTermCriteriaS;
begin
    begin
        if endProg then exit;
        if not(assigned(image) ) then
        begin
            //* allocate all the buffers */
            csWidth:=pCvMatGetWidth(frame);
            csHeight:=pCvMatGetHeight(frame);
            image:=pCvMatImageCreate(csWidth, csHeight, CV_8UC3);
            hsv:=pCvMatImageCreate(csWidth, csHeight, CV_8UC3);
            rangelow:=pCvMatImageCreate(csWidth, csHeight, CV_8UC3);
            rangehigh:=pCvMatImageCreate(csWidth, csHeight, CV_8UC3);

            vecimg:=pCvVectorMatCreate(1);
            vechan:=pCvVectorintCreate(1);
            vechsize:=pCvVectorintCreate(1);
            pCvVectorintSet(vechsize, 0, hdims);
            vechranges:=pCvVectorfloatCreate(2);
            pCvVectorfloatSet(vechranges, 0, hranges_arr[0]);
            pCvVectorfloatSet(vechranges, 1, hranges_arr[1]);
            vecsplit:=pCvVectorMatCreate(4);
            pCvVectorMatSet(vecsplit, 0, pCvDefaultMat);
            pCvVectorMatSet(vecsplit, 1, pCvDefaultMat);
            pCvVectorMatSet(vecsplit, 2, pCvDefaultMat);
            pCvVectorMatSet(vecsplit, 3, pCvDefaultMat);

            hue:=pCvMatImageCreate(csWidth, csHeight, CV_8UC1);
            mask:=pCvMatImageCreate(csWidth, csHeight, CV_8UC1);

            backproject:=pCvMatImageCreate(csWidth, csHeight, CV_8UC1);
            hist:=pCvMatCreateEmpty();
            histimg:=pCvMatImageCreate(320, 200, CV_8UC3);

            cvcrit:=pCvTermCriteriaCreate();
            termcrit._type :=(ord(TCvTermCriteria_Type.EPS) or  ord(TCvTermCriteria_Type.MAX_ITER));
            termcrit.max_iter:= 10;
            termcrit.epsilon:=1.0;
            pCvTermCriteriaFromStruct(cvcrit, @termcrit);
        end;

        pCvMatCopy(frame, image);
        pCvcvtColor(image, hsv, ord(COLOR_BGR2HSV), 0);

        if( track_object <> 0 ) then
        begin
            _vmin := fCamshiftdemo.tbVmin.Position;
            _vmax := fCamshiftdemo.tbVmax.Position;

            pCvMatFill(rangelow, CvScalar_(0, fCamShiftDemo.tbSmin.Position,  MIN(_vmin,_vmax), 0, scalarRange ));
            pCvMatFill(rangehigh, CvScalar_(180, 256, Max(_vmin,_vmax), 0));

            pCvinRange(hsv, rangelow, rangehigh,  mask);
            pCvVectorMatSet(vecsplit, 0, hue);
            pCvsplit(hsv, vecsplit);


            if( track_object < 0 ) then
            begin
                hueroi:=pCvMatROI(hue, @selection);
                maskroi:=pCvMatROI(mask, @selection);
                pCvVectorMatSet(vecimg, 0, hueroi);
                pCvcalcHist(vecimg, vechan, maskroi, hist, vechsize, vechranges, false );
                pCvnormalize(hist, hist, 0, 255.0, ord(TCvNormTypes.NORM_MINMAX), -1, pCvDefaultMat);
                pCvMatDelete(hueroi);
                pCvMatDelete(maskroi);
                track_window:=pCvRectCreate();
                pCvRectFromStruct(track_window, @selection);


                track_object := 1;

                pCvMatFill(histimg, scalarZero);
                hwi:=pCvMatGetWidth(histimg);
                hhe:=pCvMatGetHeight(histimg);
                bin_w := round(hwi / hdims);
                for i := 0 to hdims-1 do
                begin
                    val:=Round(pCvMatGetFloat(hist,i,0)*hhe/255);
                    color := hsv2rgb(i*180.0/hdims);
                    pt1:=CvPoint_(i * bin_w, hhe);
                    pt2:=CvPoint_((i+1) * bin_w, hhe - val);
                    pcvRectangle( histimg, pt1, pt2, color, -1, 8, 0 );
                    pCvPointDelete(pt1);
                    pCvPointDelete(pt2);
                    pCvScalarDelete(color);
                end;
            end;

            pCvVectorMatSet(vecimg, 0, hue);
            pCvcalcBackProject(vecimg, vechan, hist, backproject, vechranges, 1.0);

            pCvbitwise_and(backproject, mask, backproject, pCvDefaultMat);

              try
                track_box:=  pCvCamShift(backproject, track_window, cvcrit );
              except
                on E: Exception do
                begin
                  ShowMessage(E.Message);
                  Exit;
                end;
              end;


            if( backproject_mode <> 0 ) then
                pcvCvtColor( backproject, image, ord(COLOR_GRAY2BGR), 0 );

            {draw an ellipse around the tracked object}
           color:=CvScalar_(255,0,0,0);
           pCvellipseV3(image, track_box, color, 3, CV_AA);

            pCvScalarDelete(color);
            pCvRotatedRectDelete(track_box);
        end;

        {draw a rectangle on the area selected with mouse}
        if( select_object >0) and ( selection.width > 0) and ( selection.height > 0 ) then
        begin
            imageroi:=pCvMatROI(image, @selection);
            pCvbitwise_not(imageroi, imageroi, pCvDefaultMat);
            pCvMatDelete(imageroi);
        end;

        {visualize the camera image in the window}
        MatImage2Bitmap(image, bmp);
        rec := fCamshiftdemo.formImage.canvas.ClipRect;
        fCamshiftdemo.formImage.canvas.StretchDraw(rec , bmp);


       if (show_hist <> 0) then
       begin
        MatImage2Bitmap(histimg, bmp);
        fHistogram.histimage.canvas.StretchDraw(fHistogram.histimage.canvas.ClipRect , bmp);
       end;
    end;
end;

procedure TfCamShiftDemo.FormCreate(Sender: TObject);
begin
    scalarZero:=CvScalar_(0,0,0,0);
    scalarRange:=CvScalar_(0,0,0,0);

    capture:=pCvVideoCaptureCreate();
    frame:=pCvMatCreateEmpty();


      me1.Lines.Add( '           Hot keys: ');
      me1.Lines.Add( '  ESC - quit the program');
      me1.Lines.Add( '  c   - stop the tracking');
      me1.Lines.Add( '  b   - switch to/from backprojection view');
      me1.Lines.Add( '  h   - show/hide object histogram');
      me1.Lines.Add(' ');
      me1.Lines.Add( 'To initialize tracking, select the object with mouse' );

      tbVmin.Position := 10;
      tbVmax.Position := 256;
      tbSmin.Position := 30;
      bmp := TBitmap.Create;
      bmp.PixelFormat :=  pf24bit;
end;

procedure TfCamShiftDemo.FormDestroy(Sender: TObject);
begin
    pCvVideoCaptureDelete(capture);
    pCvMatDelete(frame);
    pCvScalarDelete(scalarZero);
    pCvScalarDelete(scalarRange);

    pCvMatDelete(image);
    pCvMatDelete(hsv);
    pCvMatDelete(rangelow);
    pCvMatDelete(rangehigh);

    pCvVectorMatDelete(vecimg);
    pCvVectorintDelete(vechan);
    pCvVectorintDelete(vechsize);
    pCvVectorfloatDelete(vechranges);
    pCvVectorMatDelete(vecsplit);

    pCvMatDelete(hue);
    pCvMatDelete(mask);
    pCvMatDelete(backproject);
    pCvMatDelete(hist);
    pCvMatDelete(histimg);

    pCvTermCriteriaDelete(cvcrit);
    if assigned(fHistogram) then
        fHistogram.Destroy;

    bmp.Free;
end;


procedure TfCamShiftDemo.btnHelpClick(Sender: TObject);
begin
  if viewHelp= False then
  begin
    me1.Visible:=True;
    viewHelp:=True;
  end  else
  begin
    me1.Visible:=False;
    viewHelp:=False;
  end;
end;

procedure TfCamShiftDemo.btnStartClick(Sender: TObject);
begin
    btnStart.Enabled:=False;
    pCvVideoCaptureopenV3(capture, 0, ord(CAP_ANY));
    if not(pCvVideoCaptureisOpened(capture)) then
    begin
        MessageDlg('Could not initialize capturing from webcam nr. 0!!', mtError, [mbOK], 0);
        halt(99);
    end;

    endProg:=false;
    while endProg=False do
    begin
        if not(pCvVideoCaptureread(capture, frame)) then Break;
        main_cycle(frame);
        application.ProcessMessages;
    end;
    btnStart.Enabled:=True;
end;


procedure TfCamShiftDemo.FormKeyPress(Sender: TObject; var Key: Char);
begin
        if( key = char(27) ) then
        begin
            endProg:=True;
            self.Destroy;
            halt;
        end;
        case key of
        'b':
            backproject_mode := backproject_mode xor 1;
        'c': begin
                track_object := 0;
                pCvMatFill(histimg, scalarZero);
            end;
        'h':
            begin
            show_hist :=  show_hist xor 1;
            if (show_hist=0) then
                fHistogram.Free
            else
            begin
                fHistogram := TfHistogram.Create(self);
                fHistogram.Show;
            end;
            end;
        else
            ;
        end;

end;




procedure TfCamShiftDemo.formImageMouseDown(Sender: TObject;
  Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
var
        xConv, yConv: integer;
begin
    {convert x and y mouse coords to OpenCV image coords}
    xConv := round(x *(pCvMatGetWidth(image) / formImage.Width));
    yConv := round(y *(pCvMatGetHeight(image) / formImage.Height));
    origin := Point(xConv ,yConv );
    selection.x:=xConv;
    selection.y:=yConv;
    selection.width :=0;
    selection.height:=0;
    select_object := 1;
end;


procedure TfCamShiftDemo.formImageMouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
var
        xConv, yConv: integer;
begin

    if not(assigned(image )) or (select_object =0 ) then
        // nop
    else
    begin

        {convert x and y mouse coords to OpenCV image coords}
        xConv := round(x *(pCvMatGetWidth(image) / formImage.Width));
        yConv := round(y *(pCvMatGetHeight(image) / formImage.Height));

        begin
            selection.x := MIN(xConv, origin.x);
            selection.y := MIN(yConv, origin.y);
            selection.width := ABS(xConv - origin.x);
            selection.height := ABS(yConv - origin.y);
            selection.x := MAX( selection.x, 0 );
            selection.y := MAX( selection.y, 0 );
            selection.width := MIN( selection.width, pCvMatGetWidth(image) );
            selection.height := MIN( selection.height, pCvMatGetHeight(image) );

        end;
     end;
end;


procedure TfCamShiftDemo.formImageMouseUp(Sender: TObject;
  Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
        select_object := 0;
        if( selection.width > 0) and (selection.height > 0 ) then
            track_object := -1;

end;

{**********************************************************************}


end.


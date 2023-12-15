{-----------------------------------------------------------------------------
 Unit Name: frmFrameRecon
 Author:    gds
 Date:      10-dic-2023
 Purpose:   Calculate the projection matrixes between a plane perpendicular to camera
       and an inclined plane. Typically they are, respectively, the image plane and
       the floor plane. Generate and display the image remapped to inclined plane.
-----------------------------------------------------------------------------}
{  Copyright (C) 2023 Giandomenico De Sanctis gidesay@yahoo.com

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


unit frmFrameRecon;

interface

uses
  Windows, Messages, SysUtils,  Classes, Graphics, Controls, Forms,
  Dialogs,  StdCtrls, ComCtrls, ExtCtrls,
  unOCVImage, OPENCVWrapper, unOpenCVContours,
  Vcl.ExtDlgs, Vcl.Samples.Spin;


type
  TDiagonals = record
    vert1: Boolean;
    m1   : Single;
    q1   : Single;
    vert2: Boolean;
    m2   : Single;
    q2   : Single;
  end;

  TOpenCVAlgor = class
  public
    class procedure initUndistort(const ocvimg: TOCVImage; const distortion: TOcvParamMat;
        const intrinsics: TOcvParamMat; out mapx: TOcvParamMat; out mapy: TOcvParamMat);
    class procedure undistortImg(ocvimg: TOCVImage; const mapx: TOcvParamMat; const mapy: TOcvParamMat);  inline;
    class function getMapMatrix(const quad1, quad2: TOcvParamMat): TOcvParamMat;
  end;


  TfFrameRecon = class(TForm)
    Panel2: TPanel;
    Panel1: TPanel;
    btnStart: TButton;
    Label1: TLabel;
    sePar1: TSpinEdit;
    sePar2: TSpinEdit;
    cbPar3: TComboBox;
    Label2: TLabel;
    sePolyPar1: TSpinEdit;
    Label4: TLabel;
    sePerimRatioDiff: TSpinEdit;
    cbCanny: TCheckBox;
    cbDisplayCont: TCheckBox;
    lbDist: TLabel;
    Image1: TImage;
    imgCamera: TImage;
    dlgOpen1: TOpenDialog;
    pnl1: TPanel;
    lbl1: TLabel;
    txSide: TEdit;
    btnSave: TButton;
    btnSaveProspMatrix: TButton;
    dlgSavePic1: TSavePictureDialog;
    dlgSaveMatrix: TSaveDialog;
    lbl2: TLabel;
    txRealSide: TEdit;
    txDistFromBaseY: TEdit;
    lbl3: TLabel;
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormDestroy(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure btnStartClick(Sender: TObject);
    procedure btnSaveClick(Sender: TObject);
    procedure btnSaveProspMatrixClick(Sender: TObject);
  private
    { Private declarations }
    bmp:        TBitmap;
    mapx, mapy: TOcvParamMat;
    pgray, pcontor: TOCVImage;
    frame:   TOCVImage;

    outImg:  TOCVImage;
    image:   TOCVImage;

    base_x, base_y, side, realSide: Integer;
    quad_base_y, quad_base_x: Integer;
    extractedFrame: TOCVImage;

    intrinsic:  TOcvParamMat;
    distortion: TOcvParamMat;
    pro:        TOcvParamMat;

    mapMatrix:  TOcvParamMat;
    inverseMapMatrix: TOcvParamMat;

    seqResult:  TOCVContour;
    origQuad:   TOcvParamMat;

    frame_found: Boolean;
    ocvContours: TOCVContoursFinder;


    procedure main_cycle(frame: TOCVImage);
    procedure extractContours(const origImg: TOCVImage; image: TOCVImage;  var numCont: Integer);
    function  calc_diagonals(const seqResult: TOCVContour): TDiagonals;
    function  processContour(const contour: TOCVContour): TOCVContour;
    function  verifyHole(contourInd: Integer; diags: TDiagonals): Boolean;
    procedure calc_mapping(contourInd: Integer; image: TOCVImage);
    function  findFrame(const origImg: TOCVImage; image: TOCVImage): boolean;
    procedure releaseImages;
    procedure showImage;
    procedure showMap;
    procedure setMapQuad(p0: TPoint; side: integer);
  public
    { Public declarations }
  end;


var
  fFrameRecon: TfFrameRecon;



{*************************************************************************}
implementation

{$R *.dfm}

const

  SQUARE_SIDE  = 200;      // for a real side of 20 cm, the value of 200 set scale to 1 pixel = 1 mm
  DIST_BASE_Y_SQUARE = 80;


class procedure TOpenCVAlgor.initUndistort(const ocvimg: TOCVImage; const distortion: TOcvParamMat;
                const intrinsics: TOcvParamMat; out mapx: TOcvParamMat; out mapy: TOcvParamMat);
var
  newCamMatrix: PCvMat_t;
  msize: PCvSize_t;
begin
try
  mapx := TOcvParamMat.Create(ocvimg.width, ocvimg.height, cvSingle);
  mapy := TOcvParamMat.Create(ocvimg.width, ocvimg.height, cvSingle);
  newCamMatrix:=pCvMatCreateEmpty();
  msize:=CvSize_(ocvimg.width, ocvimg.height);
  pCvinitUndistortRectifyMap(intrinsics.PCvMatPtr, distortion.PCvMatPtr, pCvDefaultMat, newCamMatrix,
        msize, CV_32FC1, mapx.PCvMatPtr, mapy.PCvMatPtr);
finally
  pCvMatDelete(newCamMatrix);
  pCvSizeDelete(msize);
end;
end;


class procedure TOpenCVAlgor.undistortImg(ocvimg: TOCVImage; const mapx: TOcvParamMat; const mapy: TOcvParamMat);
var
  t: TOCVImage;
begin
    // undistort image
    t := ocvimg.Clone();
    pCvremap(t.PCvMatPtr, ocvimg.pCvMatPtr, mapx.PCvMatPtr, mapy.PCvMatPtr, Ord(CV_INTER_LINEAR), Ord(BORDER_CONSTANT));
    t.Free;
end;

class function TOpenCVAlgor.getMapMatrix(const quad1: TOcvParamMat; const quad2: TOcvParamMat): TOcvParamMat;
begin
    Result:=TOcvParamMat.Create(pCvgetPerspectiveTransform(quad1.PCvMatPtr, quad2.PCvMatPtr));
end;


{*************************************************************************}
procedure TfFrameRecon.FormCreate(Sender: TObject);
begin
    bmp := TBitmap.Create;
    bmp.PixelFormat :=  pf24bit;

    image := nil;
    frame := nil;
    mapx  := nil;
    mapy  := nil;

    try
      intrinsic:=TOcvParamMat.Create('..\..\Intrinsics.xml', 'Intrinsics');
      distortion:=TOcvParamMat.Create('..\..\Distortion.xml', 'Distortion');
    except
      on E: exception do
      begin
        ShowMessage(e.ClassName+': '+ e.Message);
        Halt(99);
      end;
    end;

    // 4 rows, 1 column, 2 channels
    pro := TOcvParamMat.Create(1, 4, cvSingle, 2);
    // 4 rows, 2 columns
    origQuad:=TOcvParamMat.Create(2, 4, cvSingle);

    ocvContours:=TOCVContoursFinder.Create;

    txSide.Text := IntToStr(SQUARE_SIDE);
    txRealSide.Text := txSide.Text;
    txDistFromBaseY.Text:=IntToStr(DIST_BASE_Y_SQUARE);
    side:=SQUARE_SIDE;
end;

procedure TfFrameRecon.FormDestroy(Sender: TObject);
begin
    bmp.Free;
    releaseImages;
    origQuad.Free;
    pro.Free;
    intrinsic.Free;
    distortion.Free;
    ocvContours.Free;
end;

procedure TfFrameRecon.releaseImages;
begin
    if mapx<>nil then
        FreeAndNil(mapx);
    if mapy<>nil then
      FreeAndNil(mapy);

    if image<>nil then
        FreeAndNil(image);
    if Assigned(outImg) then
      FreeAndNil(outImg);
    if Assigned(extractedFrame) then
       FreeAndNil(extractedFrame);
    if Assigned(frame) then
       FreeAndNil(frame);
    if Assigned(mapMatrix) then
       FreeAndNil(mapMatrix);
    if Assigned(inverseMapMatrix) then
       FreeAndNil(inverseMapMatrix);
end;

procedure TfFrameRecon.showImage;
begin
    outImg.showInImage(imgCamera);
end;



procedure TfFrameRecon.main_cycle(frame: TOCVImage);
var
  gausblurSize: PCvSize_t;
begin
        if not (assigned(image )) then
        begin
            // allocate all the buffers
            image:=TOCVImage.Create(frame.Width, frame.Height, 3);
            outImg:=image.clone();

            // Polygon with 4 sides (quad) is placed in the center of X axes,
            // and at top Y position of destination image. Note that Y coordinate in OpenCV
            // image goes from top to bottom of real image

            //            +< side >+
            //  side
            //     +     P0--------+
            //     ^      |        |
            //     V      |        |
            //     +      +--------+     +  dist from base Y
            //                           |
            // ---------------+----------+  base Y = X axis
            //
            // +< half width >+



            // Side value from form
            side:=StrToInt(txSide.Text);
            base_x := (frame.width * 4) shr 1;
            base_y := (frame.height * 4);
            // Coords of quad first vertex, that is the one top left in quad
            quad_base_x:=((frame.width * 4)  shr 1) - (side shr 1);
            // Distance from base Y is the distance from x axis
            quad_base_y:= (frame.height * 4) - side - StrToInt(txDistFromBaseY.Text);
            setMapQuad(Point(quad_base_x, quad_base_y ), side);

           TOpenCVAlgor.initUndistort(frame, distortion, intrinsic, mapx, mapy);
        end;

        frame.copy(image);

        // undistorting image
        TOpenCVAlgor.undistortImg(image, mapx, mapy);

        // gaussian blur filter smoothing the image
        gausblurSize:=CvSize_(3,3);
        pCvGaussianBlur(image.PCvMatPtr, image.PCvMatPtr, gausblurSize, 0);
        pCvSizeDelete(gausblurSize);

        image.copy(outImg);

        frame_found:= findFrame(image, outImg);

        if frame_found then
        begin
          outImg.showInImage(imgCamera);
          showMap;
        end;
        Application.ProcessMessages;
end;




procedure TfFrameRecon.setMapQuad(p0: TPoint; side: Integer);
begin
    // Prepare the original quad with anticlockwise sequence
    origQuad.at[0, 0, 0] := p0.X;
    origQuad.at[0, 1, 0] := p0.y;

    origQuad.at[1, 0, 0] := p0.X+side;
    origQuad.at[1, 1, 0] := p0.Y;

    origQuad.at[2, 0, 0] := p0.X+side;
    origQuad.at[2, 1, 0] := p0.y+side;

    origQuad.at[3, 0, 0] := p0.x;
    origQuad.at[3, 1, 0] := p0.Y+side;

end;

procedure TfFrameRecon.FormKeyPress(Sender: TObject; var Key: Char);
begin
        if( key = char(27) ) then
        begin
            self.Destroy;
            halt;
        end;
end;

procedure TfFrameRecon.btnSaveClick(Sender: TObject);
begin
  if dlgSavePic1.Execute then
  begin
      extractedFrame.save(dlgSavePic1.FileName);
  end;
end;

procedure TfFrameRecon.btnSaveProspMatrixClick(Sender: TObject);
const
  PARAMS_XML = '<?xml version="1.0"?> <projection_params> '  +
    '<img_width>%d</img_width> <img_height>%d</img_height>' +
    '<base_x>%d</base_x> <base_y>%d</base_y> ' +
    '<rectSide>%d</rectSide> <realRectSide>%d</realRectSide>' +
    '<RRSideUnit>mm</RRSideUnit> </projection_params>' ;
var
  ext: string;
  fn: string;

  projParams: TStreamWriter;
begin
  if dlgSaveMatrix.Execute() then
  begin
    mapMatrix.save(dlgSaveMatrix.FileName, 'Remap');
    ext:=ExtractFileExt(dlgSaveMatrix.FileName);
    fn:= StringReplace(dlgSaveMatrix.FileName, ext, '-inv'+ext,[rfReplaceAll]);
    inverseMapMatrix.save(fn, 'InverseRemap');

    fn:= StringReplace(dlgSaveMatrix.FileName, ext, '-params'+ext,[rfReplaceAll]);
    projParams:=TStreamWriter.Create(fn);
    realSide:=StrToInt(txRealSide.Text);
    projParams.Write(Format(PARAMS_XML,[frame.Width, frame.Height, base_x, base_y, side, realSide]));
    projParams.Free;
  end;
end;



procedure TfFrameRecon.btnStartClick(Sender: TObject);

begin
  releaseImages;
  image1.Picture:=nil;
  if dlgOpen1.Execute then
  begin
    frame:=TOCVImage.Create(dlgOpen1.FileName);
    if frame=nil then
    begin
      ShowMessage('Error loading '+dlgOpen1.FileName);
    end else begin
      main_cycle(frame);
      showImage;
    end;
  end;

end;

procedure TfFrameRecon.extractContours(const origImg: TOCVImage; image: TOCVImage; var numCont: Integer);
begin
try
  // find contours and store them all as a list
  if (origImg.NChannels>1) then
      pgray:=origImg.clone(True)
  else
      pgray:=origImg.clone(False);

  if (cbCanny.Checked) then
          pcontor:=pgray.edges(sePar1.Value, sePar2.Value, StrToInt(cbPar3.Text))
  else
          pcontor:=pgray.threshold(separ1.Value, 255, Ord(TCvThresholdTypes.THRESH_BINARY_INV));
  if (image.NChannels>1) and (cbDisplayCont.Checked) then
  begin
        image.Free;
        image:=pcontor.fromGray();
  end;

// warning! findcontours destroy the input image, so display it before the call

  numCont:=ocvContours.extractContours(pcontor);

  pgray.Free;
  pcontor.Free;
except
  on E: Exception do
    ShowMessage('Error extractcontours: '+e.Message);
end;
end;

procedure TfFrameRecon.showMap;
begin
  if image = nil then Exit;
  // transform the entire original image to a map (bird-eye) image, using the calculated map matrix
  // Note that the mapped image is much greater than the original one.
  extractedFrame:=image.map(mapMatrix);
  extractedFrame.showInImage(Image1);
  Image1.Repaint;

  btnSave.Enabled:=True;
  btnSaveProspMatrix.Enabled:=True;
end;


function  TfFrameRecon.calc_diagonals(const seqResult: TOCVContour): TDiagonals;
var
  p1, p2: TPoint;
begin
try
  // calc the coefficients of diagonals lines in the input contour (with 4 vertexes)
  with Result do
  begin
  //  seqResult Mat has: 4 rows; 1 column; 2 channels; integer type
        p1:=seqResult.getContourVertex(0);
        p2:=seqResult.getContourVertex(2);
        if (p1.x <> p2.x) then
        begin
                vert1 := false;
                m1 :=  (p2.y - p1.y) / (p2.x - p1.x);
                q1 := (p2.x * p1.y - p1.x * p2.y) / (p2.x - p1.x);
        end else
        begin
               vert1 := true;
        end;
        p1:=seqResult.getContourVertex(1);
        p2:=seqResult.getContourVertex(3);
        if (p1.x <> p2.x) then
        begin
                vert2 := false;
                m2 :=  (p2.y - p1.y) / (p2.x - p1.x);
                q2 := (p2.x * p1.y - p1.x * p2.y) / (p2.x - p1.x);
        end else
        begin
               vert2 := true;
        end;
  end;
except
  on E: Exception do
  begin
       ShowMessage('CalcDiagonals- error: ' + e.Message);
  end;

end;

end;

function TfFrameRecon.verifyHole(contourInd: Integer; diags: TDiagonals): Boolean;
var
  nholes: integer;
  nextHole: Integer;
  holeMat, hole2: TOCVContour;
  holeDiags:      TDiagonals;
begin
    Result:=False;
    ocvContours.resetGetInternal;
    try
      // internal contours with CV_RETR_TREE
      // hierarchy Mat has: 1 row, <nr of contours> columns, 4 channels, integer type
       //hole := hierarchyMat.atInt[0, contourInd, CONT_FIRST_CHILD];
       holeMat:=ocvContours.getNextInternalContour(contourInd, nextHole);
       nholes := 0;
       //       4) scorre i contorni interni (TREE)
       while (holeMat<>nil) do
       begin
          inc(nholes);
          if nholes>1 then break;
          hole2:=nil;
          try
            if holeMat.height<4 then
            begin
              Continue;
            end;
               //    4.1) approssima ogni contorno con poligono
              hole2:=holeMat.approxPolygon(sePolyPar1.Value);
              //     4.2) verifica se poligono ha 4 vertici
              if hole2.height<>4 then continue;
                 holeDiags:=calc_diagonals(hole2);

                 //          4.4) se i coefficienti delle diagonali del poligono interno
                 //               sono uguali a quelli del poligono esterno, a meno di errore dato,
                 //               la ricerca e' positiva, uscire dalla funzione
                 if (diags.vert1 = holeDiags.vert1) and (diags.vert2 = holeDiags.vert2)
                     and (abs(diags.m1 - holeDiags.m1)/diags.m1 <= (sePerimRatioDiff.Value / 100))
                     and (abs(diags.q1 - holeDiags.q1)/diags.q1 <= (sePerimRatioDiff.Value / 100))
                     and (abs(diags.m2 - holeDiags.m2)/diags.m2 <= (sePerimRatioDiff.Value / 100))
                     and (abs(diags.q2 - holeDiags.q2)/diags.q2 <= (sePerimRatioDiff.Value / 100))   then
                 begin
                             Result := true;
                             Break;
                 end;

          finally
              if holeMat<>nil then
                holeMat.Free;
              holeMat:=ocvContours.getNextInternalContour(contourInd, nextHole);
              if hole2<>nil then
                 hole2.Free;
          end;
       end;    // while hole
    except
      on E: Exception do
      begin
           ShowMessage('VerifyHole- error: ' + e.Message);
      end;

    end;

end;

procedure TfFrameRecon.calc_mapping(contourInd: Integer; image: TOCVImage);
var
  i,  s, d: Integer;
  p1: TPoint;
  sumMin,  sumMax:  Integer;
  diffMin, diffMax: Integer;
  quad, quadInd:    TOcvParamMat;

  orig, proj:    TOcvParamMat;
  po1, po2 : Single;
  cvred, cvgreen, cvyellow: PCvScalar_t;
  cvpt1, cvpt2: PCvPoint_t;
begin
    try
      sumMin:=99999;
      sumMax:=0;
      diffMin:=99999;
      diffMax:=0;

      quad:=TOcvParamMat.Create(2, 4, cvSingle);
      quadInd:=TOcvParamMat.Create(2, 4, cvSingle);
      cvred:=CvScalar_(0,0,255,0);
      cvgreen:=CvScalar_(0,255,0,0);
      cvyellow:=CvScalar_(0,255,255,0);



      try
        // reorder the projection points, in the found frame, in anticlockwise sequence
        //  3------------2
        //  |            |
        //  |            |
        //  0------------1
        for i := 0 to 3 do
        begin
            p1:=seqResult.getContourVertex(i);
            s:= p1.x + p1.y;
            d:= p1.x - p1.y;
            if s<sumMin then
            begin
              quadInd.at[0,0,0]:=p1.X;
              quadInd.at[0,1,0]:=p1.Y;
              sumMin:=s;
            end;
            if s>sumMax then
            begin
              quadInd.at[2,0,0]:=p1.X;
              quadInd.at[2,1,0]:=p1.Y;
              sumMax:=s;
            end;
            if d<diffMin then
            begin
              quadInd.at[3,0,0]:=p1.X;
              quadInd.at[3,1,0]:=p1.Y;
              diffMin:=d;
            end;
            if d>diffMax then
            begin
              quadInd.at[1,0,0]:=p1.X;
              quadInd.at[1,1,0]:=p1.Y;
              diffMax:=d;
            end;
        end;

        // copy projection data to the matrix that is input for next calculations
        for i:=0 to 3 do
        begin
            pro.at[i,0,0]:=quadInd.at[i,0,0];
            pro.at[i,0,1]:=quadInd.at[i,1,0];
            quad.at[i,0,0] := quadInd.at[i,0,0];
            quad.at[i,1,0] := quadInd.at[i,1,0];

        end;





        // Now find the matrix that project (map) the original image to the inclined plane (floor)
        // The projection depends upon the two input 4-vertexes polygons: 'quad' is the found contour,
        // that is the projected polygon;  'origQuad' is the original square
        mapMatrix:=TOpenCVAlgor.getMapMatrix(origQuad, quad);

        // find the inverse map matrix
        inverseMapMatrix:=TOpenCVAlgor.getMapMatrix(quad, origQuad);

        // draw in red the extracted contour, that is the same as projected quad
        ocvContours.drawContour(image, contourInd, clRed, 2);

        // draw a red circle on first contour point  vertex
        cvpt1:=CvPoint_(pro.atInt[0,0,0],  pro.atInt[0,0,1]);
        pCvcircle(image.PCvMatPtr, cvpt1, 10, cvred, 3);

        // draw a yellow circle on third contour vertex
        cvpt2:=CvPoint_(pro.atInt[2,0,0],  pro.atInt[2,0,1]);
        pCvcircle(image.PCvMatPtr, cvpt2, 10, cvyellow, 3);

        // draw a yellow line between first and second contour vertexes
        cvpt2:=CvPoint_(pro.atInt[1,0,0],  pro.atInt[1,0,1],   cvpt2);
        pCvline(image.PCvMatPtr, cvpt1, cvpt2, cvyellow, 3, CV_AA);


        // Test the quality of projection, calcultaing the inverse projection with corresponding matrix
        // and comparing with original polygon vertexes
        orig := TOcvParamMat.Create(1, 4, cvSingle, 2);
        proj := TOcvParamMat.Create(1, 4, cvSingle, 2);
        proj.at[0,0,0]:=quad.at[0,0,0];
        proj.at[0,0,1]:=quad.at[0,1,0];
        proj.at[1,0,0]:=quad.at[1,0,0];
        proj.at[1,0,1]:=quad.at[1,1,0];
        proj.at[2,0,0]:=quad.at[2,0,0];
        proj.at[2,0,1]:=quad.at[2,1,0];
        proj.at[3,0,0]:=quad.at[3,0,0];
        proj.at[3,0,1]:=quad.at[3,1,0];

        pcvPerspectiveTransform(proj.PCvMatPtr,  orig.PCvMatPtr, inverseMapMatrix.PCvMatPtr);

        po1:=orig.at[0,0,0];
        po2:=orig.at[0,0,1];
        Assert((Abs(po1 - origquad.at[0,0,0])<0.1),'Error in inverse matrix: point 1 x');
        Assert((Abs(po2 - origquad.at[0,1,0])<0.1),'Error in inverse matrix: point 1 y');

        orig.Free;
        proj.Free;
      finally
        pCvScalarDelete(cvred);
        pCvScalarDelete(cvgreen);
        pCvScalarDelete(cvyellow);
        pCvPointDelete(cvpt1);
        pCvPointDelete(cvpt2);
        quad.Free;
        quadInd.Free;
      end;

    except
      on E: Exception do
      begin
           ShowMessage('Undistort- error: ' + e.Message);
      end;

    end;

end;



function TfFrameRecon.findFrame(const origImg: TOCVImage; image: TOCVImage): boolean;
var
    i, nrc: Integer;
    curCont: Integer;
    contours: TOCVContour;

    frame_found: Boolean;
    diags: TDiagonals;

begin
    contours:=nil;
    result:=False;
    try
      extractcontours(origImg, image,  nrc);
      if nrc = 0 then
        Exit;


      // test each contour
      ocvContours.resetGet;
      for i:=0 to nrc-1 do
      begin
        // contours Mat has: <nr vertex> rows; 1 column; 2 channels; integer type
        contours:=ocvContours.getNextContour(curCont);
        if contours=nil then break;
        frame_found := false;
        seqResult:=processContour(contours);
        if seqResult<>nil then
        begin
          // now seqResult Mat has: 4 rows; 1 column; 2 channels; integer type
          diags:=calc_diagonals(seqResult);
          frame_found:=verifyHole(i, diags);
          if (frame_found) then
          begin
                calc_mapping(i, image);
                result:=True;
          end;
        end;  // if seqresult.height=4
        FreeAndNil(contours);
        if seqResult<>nil then
            FreeAndNil(seqResult);
        if frame_found then break;
      end;
    finally
      if contours<>nil then
          contours.Free;
      if seqResult<>nil then
          seqResult.Free;
    end;
end;

function TfFrameRecon.processContour(const contour: TOCVContour): TOCVContour;
var
  a: Double;
  seqResult: TOCVContour;
begin
  Result:=nil;
   // more than 3 vertexes and area > 500
  if contour.height<4 then Exit;
  a:=contour.getContourArea();
  if (abs(a) > 500) then
  begin
  // hierarchy Mat has: 1 row, <nr of contours> columns, 4 channels, integer type
      seqResult:=contour.approxPolygon(sePolyPar1.Value);
      // exactly four vertexes
      if seqResult.height=4 then
      begin
        Result:=seqResult;
      end else
      begin
        seqResult.Free;
      end;
  end;
end;



end.

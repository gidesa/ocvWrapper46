unit Unit1;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, ocvWrapComp, Vcl.StdCtrls,
  Vcl.Buttons;

type
  TForm7 = class(TForm)
    img1: TImage;
    btnbitStart: TBitBtn;
    img2: TImage;
    ocvcapt1: TOcvVideoCapture;
    btnbitStop: TBitBtn;
    ocvobjdet1: TOcvProcObjectDetector;
    ocvfacedet1: TOcvProcFaceDetector;
    img3: TImage;
    chkObjdet: TCheckBox;
    chkFacedet: TCheckBox;
    ocvimgdir1: TOcvImageDirectory;
    procedure btnbitStartClick(Sender: TObject);
    procedure btnbitStopClick(Sender: TObject);
    procedure ocvfacedet1Error(Sender: TObject; errorMess: string);
    procedure ocvobjdet1Error(Sender: TObject; errorMess: string);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form7: TForm7;

implementation

{$R *.dfm}

procedure TForm7.btnbitStartClick(Sender: TObject);
begin
  ocvcapt1.Active:=True;

  ocvobjdet1.ThreadNum:=3;
  ocvfacedet1.ThreadNum:=2;
//  ocvimgdir1.Active:=True;
  ocvobjdet1.Active:=chkObjdet.Checked;
  ocvfacedet1.Active:=chkFacedet.Checked;
  btnbitStart.Enabled:=False;
  btnbitStop.Enabled:=True;
end;

procedure TForm7.btnbitStopClick(Sender: TObject);
begin
  Cursor:=crHourGlass;
  Application.ProcessMessages;
  ocvobjdet1.Active:=False;
  ocvfacedet1.Active:=False;
  ocvcapt1.Active:=False;
  ocvimgdir1.Active:=False;
  btnbitStart.Enabled:=True;
  btnbitStop.Enabled:=False;

  Cursor:=crDefault;
end;

procedure TForm7.ocvfacedet1Error(Sender: TObject; errorMess: string);
begin
  ShowMessage(errorMess);
end;

procedure TForm7.ocvobjdet1Error(Sender: TObject; errorMess: string);
begin
  ShowMessage(errorMess);
end;

end.

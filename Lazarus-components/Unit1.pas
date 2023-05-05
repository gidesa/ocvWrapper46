unit Unit1;

{$MODE Delphi}

interface

uses
  Windows, Messages, SysUtils, Variants,
  Classes, Graphics, Controls, Forms, Dialogs,
  ExtCtrls, Buttons, StdCtrls,
  ocvWrapComp;


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
    procedure btnbitStartClick(Sender: TObject);
    procedure btnbitStopClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form7: TForm7;

implementation

{$R *.lfm}

procedure TForm7.btnbitStartClick(Sender: TObject);
begin
  ocvcapt1.Active:=True;
  ocvobjdet1.ThreadNum:=3;
  ocvobjdet1.Active:=chkObjdet.Checked;
  ocvfacedet1.Active:=chkFacedet.Checked;
  btnbitStart.Enabled:=False;
  btnbitStop.Enabled:=True;
end;

procedure TForm7.btnbitStopClick(Sender: TObject);
begin
  ocvobjdet1.Active:=False;
  ocvfacedet1.Active:=False;
  ocvcapt1.Active:=False;
  btnbitStart.Enabled:=True;
  btnbitStop.Enabled:=False;
end;

end.

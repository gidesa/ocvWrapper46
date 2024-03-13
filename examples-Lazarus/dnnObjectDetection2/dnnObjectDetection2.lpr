program dnnObjectDetection2;

{$MODE Delphi}

uses
  Forms, Interfaces,
  frmDnnObjectDetection2 in 'frmDnnObjectDetection2.pas' {Form7};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm7, Form7);
  Application.Run;
end.

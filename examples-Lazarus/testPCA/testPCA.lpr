program testPCA;

{$MODE Delphi}

uses
  Interfaces,
  Forms,
  frmTestPCA in 'frmTestPCA.pas' {Form7};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm7, Form7);
  Application.Run;
end.

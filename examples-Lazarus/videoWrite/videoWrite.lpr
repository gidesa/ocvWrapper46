program videoWrite;

{$MODE Delphi}

uses
  Interfaces,
  Forms,
  frmVideoWrite in 'frmVideoWrite.pas' {fVideoWrite};


begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfVideoWrite, fVideoWrite);
  Application.Run;
end.

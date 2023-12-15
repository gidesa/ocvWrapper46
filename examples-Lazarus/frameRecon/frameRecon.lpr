program frameRecon;

{$MODE Delphi}

uses
  Forms, Interfaces,
  frmFrameRecon in 'frmFrameRecon.pas' {fFrameRecon};


begin
  Application.Initialize;
  Application.CreateForm(TfFrameRecon, fFrameRecon);
  Application.Run;
end.

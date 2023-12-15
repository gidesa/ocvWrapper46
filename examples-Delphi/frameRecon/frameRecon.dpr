// JCL_DEBUG_EXPERT_GENERATEJDBG OFF
// JCL_DEBUG_EXPERT_INSERTJDBG OFF
// JCL_DEBUG_EXPERT_DELETEMAPFILE OFF
program frameRecon;
{....$APPTYPE CONSOLE}
uses
  Forms,
  frmFrameRecon in 'frmFrameRecon.pas' {fFrameRecon};

{$R *.res}

begin
{$IFDEF DEBUG}
  ReportMemoryLeaksOnShutdown:=True;
{$ENDIF}
  Application.Initialize;
  Application.CreateForm(TfFrameRecon, fFrameRecon);
  Application.Run;
end.

// JCL_DEBUG_EXPERT_GENERATEJDBG OFF
// JCL_DEBUG_EXPERT_INSERTJDBG OFF
// JCL_DEBUG_EXPERT_DELETEMAPFILE OFF
program DigitsRecognitionGui;

uses
  Vcl.Forms,
  frmDigitsRecognition in 'frmDigitsRecognition.pas' {fDigitsRecon};

{$R *.res}

begin
{$IFDEF DEBUG}
  ReportMemoryLeaksOnShutdown:=True;
{$ENDIF}
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfDigitsRecon, fDigitsRecon);
  Application.Run;
end.

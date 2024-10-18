// JCL_DEBUG_EXPERT_GENERATEJDBG OFF
// JCL_DEBUG_EXPERT_INSERTJDBG OFF
// JCL_DEBUG_EXPERT_DELETEMAPFILE OFF
program videoWrite;
uses
  Vcl.Forms,
  frmVideoWrite in 'frmVideoWrite.pas' {fVideoWrite};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfVideoWrite, fVideoWrite);
  Application.Run;
end.

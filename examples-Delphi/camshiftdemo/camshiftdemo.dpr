// JCL_DEBUG_EXPERT_GENERATEJDBG OFF
// JCL_DEBUG_EXPERT_INSERTJDBG OFF
// JCL_DEBUG_EXPERT_DELETEMAPFILE OFF
program camshiftdemo;

uses
  Forms,
  frmCamshiftdemo in 'frmCamshiftdemo.pas' {fCamShiftDemo},
  frmHistogram in 'frmHistogram.pas' {fHistogram};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TfCamShiftDemo, fCamShiftDemo);
  Application.Run;
end.

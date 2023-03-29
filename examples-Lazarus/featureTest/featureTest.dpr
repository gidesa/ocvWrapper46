program featureTest;

{$IFDEF FPC}
  {$MODE Delphi}
{$ENDIF}

uses
  Interfaces,
  Forms,
  frmFeatureTest in 'frmFeatureTest.pas' {Form6};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm6, Form6);
  Application.Run;
end.

program DigitsRecognitionGui;

{$MODE Delphi}

uses
  Interfaces,
  Forms,
  frmDigitsRecognition in 'frmDigitsRecognition.pas' {fDigitsRecon};



begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfDigitsRecon, fDigitsRecon);
  Application.Run;
end.

program Project1;

{$MODE Delphi}

uses
  Interfaces,
  Forms,
  Unit1 in 'Unit1.pas' {Form7};

{.$R *.res}

begin
  {$IFDEF DEBUG}
  ReportMemoryLeaksOnShutdown:=True;
  {$ENDIF}
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm7, Form7);
  Application.Run;
end.

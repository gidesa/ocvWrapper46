{ Example of capturing webcam video on a file.
  NOTE: Opencv components package installed in Lazarus is a requisite.

  Copyright (C) 2023 Giandomenico De Sanctis gidesay@yahoo.com

  This source is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This code is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  A copy of the GNU General Public License is available on the World Wide Web
  at <http://www.gnu.org/copyleft/gpl.html>. You can also obtain it by writing
  to the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1335, USA.
}
unit frmVideoWrite;

{$MODE Delphi}

interface

uses
  SysUtils, Variants, Classes, Forms,
  Dialogs, ExtCtrls, StdCtrls,
  ocvWrapComp;

type

  { TfVideoWrite }

  TfVideoWrite = class(TForm)
    ocvcapt1: TOcvVideoCapture;
    img1: TImage;
    btnStart: TButton;
    btnStop: TButton;
    cbCodec: TComboBox;
    lbl1: TLabel;
    lbl2: TLabel;
    cbType: TComboBox;
    lbl3: TLabel;
    ocvmoviewrite1: TOcvProcMovieWrite;
    procedure btnStartClick(Sender: TObject);
    procedure btnStopClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }

    procedure flipStatus(stat: Boolean);
  public
    { Public declarations }
  end;

var
  fVideoWrite: TfVideoWrite;

implementation

{$R *.lfm}

uses TypInfo;

procedure TfVideoWrite.flipStatus(stat: Boolean);
begin
  btnStart.Enabled:=not(stat);
  btnStop.Enabled:=stat;
  ocvcapt1.Active:=stat;
end;


procedure TfVideoWrite.FormCreate(Sender: TObject);
begin
  TOcvProcMovieWrite.GetVideoCodecList(cbCodec.Items);
  cbCodec.ItemIndex:=0;

end;

procedure TfVideoWrite.btnStartClick(Sender: TObject);
begin
  try
    ocvmoviewrite1.FileName:= 'c:\temp\testvideo.'+cbType.Text;
    ocvmoviewrite1.fourccCodec:=TVideoCodec(GetEnumValue(TypeInfo(TVideoCodec),cbCodec.Text));
    ocvmoviewrite1.Active:=True;
  except
  on E:Exception do
  begin
    ShowMessage('Error opening output movie file: '+e.Message);
  end
  end;

  flipStatus(True);

end;

procedure TfVideoWrite.btnStopClick(Sender: TObject);
begin
  flipStatus(False);
  ocvmoviewrite1.Active:=False;
end;

end.

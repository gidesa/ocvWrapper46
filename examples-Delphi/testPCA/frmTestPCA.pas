{ Test for Opencv  PCA class with ocvWrapper

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
unit frmTestPCA;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs,
  OPENCVWrapper, Vcl.StdCtrls;

type
  TForm7 = class(TForm)
    btn1: TButton;
    lblProcess: TLabel;
    procedure btn1Click(Sender: TObject);
  private
    { Private declarations }
    procedure loadData(var dataMat: PCvMat_t);
    procedure saveMat(cvmat: PCvMat_t; filename: string);
  public
    { Public declarations }
  end;

var
  Form7: TForm7;

implementation

{$R *.dfm}
const
  DATA_FILE = '..\..\pca-input.csv';
  DATA_PROJ_FILE = '..\..\pca-proj.csv';
  DATA_BACKPROJ_FILE = '..\..\pca-backproj.csv';
  DATA_EIGENVALUES = '..\..\pca-eigenvalues.csv';
  MAX_PCA_COMPONENTS =8;

procedure TForm7.loadData(var dataMat: PCvMat_t);
var
  i, j: Integer;
  inpfile: TStringList;
  columns: TStringList;
  cols, rows: Integer;
begin
  inpfile:=TStringList.Create;
  inpfile.LoadFromFile(DATA_FILE);
  rows:=inpfile.Count - 1;
  columns:=TStringList.Create;
  // header of CSV
  columns.Delimiter:=';';
  columns.DelimitedText:=inpfile.Strings[0];
  cols:=columns.Count;

  dataMat:=pCvMat2dCreate(rows, cols, CV_32FC1);
  for i:=0 to rows-1 do
  begin
     columns.DelimitedText:=inpfile.Strings[i+1];
     for j:=0 to cols-1 do
     begin
        pCvMatSetFloat(dataMat, i, j, StrToFloat(columns.Strings[j]));
     end;
  end;

  inpfile.Free;
  columns.Free;
end;

procedure TForm7.saveMat(cvmat: PCvMat_t; filename: string);
var
  i, j: Integer;
  w, h: Integer;
  outfile: TStringList;
  csvrow: string;
begin
   w:=pCvMatGetWidth(cvmat);
   h:=pCvMatGetHeight(cvmat);
   outfile:=TStringList.Create;
   for i:=0 to h-1 do
   begin
      csvrow:='';
      for j:=0 to  w-1 do
      begin
        csvrow:=csvrow+FloatToStr(pCvMatGetFloat(cvmat, i, j)) +';';
      end;
      outfile.Add(csvrow);
   end;
   outfile.SaveToFile(filename);
   outfile.Free;

end;

procedure TForm7.btn1Click(Sender: TObject);
var
  h: Integer;
  dataMat: PCvMat_t;
  meanMat: PCvMat_t;
  eigenvectors: PCvMat_t;
  eigenvalues: PCvMat_t;
  dataMatProj: PCvMat_t;

begin
   lblProcess.Caption:='Processing...';
   loadData(dataMat);
   meanMat:=pCvMatCreateEmpty();
   eigenvectors:=pCvMatCreateEmpty();
   eigenvalues:=pCvMatCreateEmpty();
   pCvPCACompute2(dataMat, meanMat, eigenvectors, eigenvalues, MAX_PCA_COMPONENTS);

   saveMat(eigenvalues, DATA_EIGENVALUES);

   h:=pCvMatGetHeight(eigenvectors);
   Assert(h=MAX_PCA_COMPONENTS, 'Error in number of PCA components');
   dataMatProj:=pCvMatCreateEmpty();
   pCvPCAProject(dataMat, meanMat, eigenvectors, dataMatProj);


   saveMat(dataMatProj, DATA_PROJ_FILE);
   pCvMatDelete(dataMat);

   dataMat:=pCvMatCreateEmpty();
   pCvPCABackProject(dataMatProj, meanMat, eigenvectors, dataMat);

   saveMat(dataMat, DATA_BACKPROJ_FILE);


   pCvMatDelete(dataMatProj);
   pCvMatDelete(dataMat);
   pCvMatDelete(meanMat);
   pCvMatDelete(eigenvectors);
   pCvMatDelete(eigenvalues);

   lblProcess.Caption:='Files saved';

end;

end.

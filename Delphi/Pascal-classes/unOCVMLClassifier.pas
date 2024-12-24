{

  Copyright (C) 2024 Giandomenico De Sanctis gidesay@yahoo.com

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
{**  Machine Learning classifiers:
  - Support Vector Machine
  - K Nearest Neighbours

  NOTE: Require FPC 3.3.1 or greater. }
unit unOCVMLClassifier;

interface
{$IFDEF  FPC}
{$mode Delphi}
{$endif}

uses
{$IFDEF  FPC}
SysUtils,
{$ELSE}
System.SysUtils,
{$ENDIF}
OPENCVWrapper, unOCVImage, unOCVPtrs;
type
  IMLClassifier = interface
    function    train(const samples: TOcvParamMat; const labels: TArray<Integer>): Boolean;
    procedure   predict(const samples: TOcvParamMat; var predictions: TOcvParamMat);
  end;

  TKNearestMLClassifier = class(TInterfacedObject, IMLClassifier)
  private
    k_nearest:       TCvPasPtr_KNearest;
  public
    constructor Create;
    destructor  Destroy; override;
    //** Train the KNN classifier
    function    train(const samples: TOcvParamMat; const labels: TArray<Integer>): Boolean;
    //** Do a prediction using a trained KNN classifier
    procedure   predict(const samples: TOcvParamMat; var predictions: TOcvParamMat);
  end;

  TSVMMLClassifier = class(TInterfacedObject, IMLClassifier)
  private
    svm:             TCvPasPtr_SVM;
  public
    constructor Create; overload;
    //** Create a SVM classifier by loading a saved one
    constructor Create(const filename: string);  overload;
    destructor  Destroy; override;
    //** Set parameters for SVM classifier
    procedure   setParameters(C: Single; gamma: Single; kernel: TCvml_SVM_KernelTypes; svmType:TCvml_SVM_Types );
    //** Train the SVM classifier
    function    train(const samples: TOcvParamMat; const labels: TArray<Integer>): Boolean;
    //** Do a prediction using a trained SVM classifier
    procedure   predict(const samples: TOcvParamMat; var predictions: TOcvParamMat);
    //** Save a SVM classifier on file; file type (extension) can be: JSON, XML, YAML
    procedure   save(const filename: string);
  end;


implementation

{******************************************************************************}
{******************** TKNearestMLClassifier ***********************************}
{******************************************************************************}
{$REGION 'TKNearestMLClassifier'}
constructor TKNearestMLClassifier.Create;
begin
  inherited Create;
  k_nearest :=TCvPasPtr_KNearest.Create(pCvml_KNearest_create() );
end;

destructor TKNearestMLClassifier.Destroy;
begin
  k_nearest.Free;
  inherited Destroy;
end;

function TKNearestMLClassifier.train(const samples: TOcvParamMat;
                          const labels: TArray<integer>): Boolean;
var
  i: Integer;
  matLabels: TOcvParamMat;
begin
  Result:=False;
  Assert(Assigned(samples),'samples matrix not assigned');
  Assert(Length(labels)=samples.height,'labels must have same elements than samples rows');

  matLabels:=TOcvParamMat.Create(1, Length(labels), cvInteger);
  for i:=0 to High(labels) do
    matLabels.atInt[i,0,0]:=labels[i];
  Result:=pCvml_KNearesttrainV2(k_nearest.pCvClassObj, samples.PCvMatPtr,
                         ord(TCvml_SampleTypes.ROW_SAMPLE), matLabels.PCvMatPtr);
  matLabels.Free;
end;

procedure TKNearestMLClassifier.predict(const samples: TOcvParamMat;
                          var predictions: TOcvParamMat);
begin
  Assert(Assigned(samples),'samples matrix not assigned');
  Assert(not(Assigned(predictions)),'predictions matrix must be not assigned');
  predictions:=TOcvParamMat.CreateEmpty;
  pCvml_KNearestfindNearest(k_nearest.pCvClassObj, samples.PCvMatPtr, 4, predictions.PCvMatPtr);
end;

{$ENDREGION}

{******************************************************************************}
{******************** TSVMMLClassifier ****************************************}
{******************************************************************************}

{$REGION 'TSVMMLClassifier'}
constructor TSVMMLClassifier.Create;
begin
  inherited Create;
  svm:=nil;
  svm := TCvPasPtr_SVM.Create(pCvml_SVM_create() );
  pCvml_SVMsetC(svm.pCvClassObj, 2.67);
  pCvml_SVMsetGamma(svm.pCvClassObj, 5.383);
  pCvml_SVMsetKernel(svm.pCvClassObj, ord(SVM_RBF));
  pCvml_SVMsetType(svm.pCvClassObj, Ord(SVM_C_SVC));
end;

constructor TSVMMLClassifier.Create(const filename: string);
var
  cvs: CvString_t;
begin
  inherited Create;
  svm:=nil;
  if filename='' then
    raise EArgumentException.Create('file name is empty');
  if not(FileExists(filename)) then
    raise EArgumentException.Create('file not existing');
  cvs.pstr:=PAnsiChar(AnsiString(filename));
  svm:=TCvPasPtr_SVM.Create( pCvml_SVMload(@cvs) );
end;

destructor TSVMMLClassifier.Destroy;
begin
  svm.Free;
  inherited Destroy;
end;

procedure TSVMMLClassifier.setParameters(C: Single; gamma: Single; kernel: TCvml_SVM_KernelTypes;
              svmType: TCvml_SVM_Types);
begin
  pCvml_SVMsetC(svm.pCvClassObj, C);
  pCvml_SVMsetGamma(svm.pCvClassObj, gamma);
  pCvml_SVMsetKernel(svm.pCvClassObj, ord(kernel));
  pCvml_SVMsetType(svm.pCvClassObj, Ord(svmType));
end;

function TSVMMLClassifier.train(const samples: TOcvParamMat;
                          const labels: TArray<integer>): Boolean;
var
  i: Integer;
  matLabels: TOcvParamMat;
begin
  Result:=False;
  Assert(Assigned(samples),'samples matrix not assigned');
  Assert(Length(labels)=samples.height,'labels must have same elements than samples rows');

  matLabels:=TOcvParamMat.Create(1, Length(labels), cvInteger);
  for i:=0 to High(labels) do
    matLabels.atInt[i,0,0]:=labels[i];
  Result:=pCvml_SVMtrainV2(svm.pCvClassObj, samples.PCvMatPtr,
                                   Ord(TCvml_SampleTypes.ROW_SAMPLE), matLabels.PCvMatPtr);
  matLabels.Free;
end;

procedure TSVMMLClassifier.predict(const samples: TOcvParamMat;
                          var predictions: TOcvParamMat);
begin
  Assert(Assigned(samples),'samples matrix not assigned');
  Assert(not(Assigned(predictions)),'predictions matrix must be not assigned');
  predictions:=TOcvParamMat.CreateEmpty;
  pCvml_SVMpredict(svm.pCvClassObj, samples.PCvMatPtr, predictions.PCvMatPtr);
end;


procedure TSVMMLClassifier.save(const filename: string);
var
  cvs: CvString_t;
begin
  if filename='' then
    raise EArgumentException.Create('file name is empty');
  cvs.pstr:=PAnsiChar(AnsiString(filename));
  pCvml_SVMsave(svm.pCvClassObj, @cvs);
end;


{$ENDREGION}
end.

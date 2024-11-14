{
  SVM and KNearest digit recognition.
  Opencv C++ example translated to Pascal.

  NOTE: Require FPC 3.3.1 or more.

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
unit frmDigitsRecognition;

interface
{$WARN 03031 Off } {Values in enumeration types have to be ascending}
{$WARN 03187 Off } {C arrays are passed by reference}
{$WARN 06060 Off } {Case statement does not handle all possible cases}



uses
  SysUtils, Classes,
  Controls, Forms,
  StdCtrls, ComCtrls, ExtCtrls,
  Math,  Dialogs,
  OpencvWrapper,
  unOCVImage,
  unOCVVectors,
  unOCVMLClassifier;

const
  SZ        = 20;  // size of each digit is SZ x SZ
  CLASS_N   = 10;
  DIGITS_FN = '..\..\digits.png';


type
  TfDigitsRecon = class(TForm)
    pnl2: TPanel;
    pnl1: TPanel;
    pagectrl1: TPageControl;
    tabsheetEvalRes: TTabSheet;
    tabsheetKNNTest: TTabSheet;
    tabsheetSVMTest: TTabSheet;
    meRes: TMemo;
    imgKNNTest: TImage;
    imgSVMTest: TImage;
    btnStart: TButton;
    tabsheetUserDigit: TTabSheet;
    btnLoadDigit: TButton;
    dlgOpen1: TOpenDialog;
    btnPredict: TButton;
    lblKNNRes: TLabel;
    lblSVMRes: TLabel;
    pnl3: TPanel;
    imgUserDigit: TImage;
    pnl4: TPanel;
    imgResized: TImage;
    procedure btnStartClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure btnLoadDigitClick(Sender: TObject);
    procedure btnPredictClick(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
    userDigit: TOCVImage;
    k_nearest: TKNearestMLClassifier;
    svm:       TSVMMLClassifier;

    procedure writemsg(msg: string);
    procedure help();
    procedure EvaluateModel(const predictions: TOcvParamMat; const digits: TCvPasvector_Mat;
                              const labels: TArray<Integer>; var mos: TOCVImage);
  public
    { Public declarations }
  end;

var
  fDigitsRecon: TfDigitsRecon;

implementation

{$R *.lfm}

procedure Split2D(const image: TOCVImage; const cell_size_width: Integer; const cell_size_height: Integer; var cells: TCvPasvector_Mat);
var
  height, width, sx, sy, i, j: Integer;
  arImages: array of TOCVImage;
begin
  height := image.height; // Rows
  width := image.width;  // Cols

  sx := cell_size_Width;
  sy := cell_size_Height;

  SetLength(arImages, 0);

  for i := 0 to height - 1 do
  begin
    for j := 0 to width - 1 do
    begin
      if (i mod sy = 0) and (j mod sx = 0) then
      begin
        SetLength(arImages, Length(arImages) + 1);
        image.crop(Rect(j, i, j+sx, i+sy));
        arImages[High(arImages)] :=TOCVImage.Create(sx, sy, 1);
        image.copy(arImages[High(arImages)] );
        image.resetROI;
      end;
    end;
  end;

  cells:=TCvPasvector_Mat.Create(Length(arImages));
  for i:=0 to High(arImages) do
  begin
    cells.item[i]:=arImages[i].PCvMatPtr;
    arImages[i].Free;
  end;

end;

procedure LoadDigits(const fn: string; var digits: TCvPasvector_Mat; var labels: TArray<Integer>);
var
  digits_img: TOCVImage;
  i, j, ind: Integer;
begin
try
    digits_img:=nil;
    digits:=nil;


    digits_img:=TOCVImage.Create(fn, True);

    Split2D(digits_img, SZ, SZ, digits);

    SetLength(labels, digits.length);
    ind:=0;
    for i := 0 to CLASS_N - 1 do
    begin
      for j := 0 to (digits.length div CLASS_N) - 1 do
      begin
        labels[ind] := i;
        inc(ind);
      end;
    end;
finally
    if digits_img<>nil then
      digits_img.Free;
end;
end;

procedure shuffle(var digits: TCvPasvector_Mat; var labels: TArray<Integer>);
var
  shuffled_indexes: TOcvParamMat;
  shuffled_digits:  TCvPasvector_Mat;
  shuffled_labels:  TArray<Integer>;
  i: Integer;
begin
  try
    shuffled_indexes:=nil;
    shuffled_digits:=nil;

    shuffled_indexes:=TOcvParamMat.Create(1, digits.length, cvInteger);
    for i := 0 to digits.length-1 do
    begin
      shuffled_indexes.atInt[i,0,0] := i;
    end;

    pCvrandShuffle(shuffled_indexes.PCvMatPtr);

    shuffled_digits:=TCvPasvector_Mat.Create(digits.length);
    SetLength(shuffled_labels, Length(labels));

    for i := 0 to shuffled_indexes.height-1 do
    begin
      shuffled_digits.item[shuffled_indexes.atInt[i,0,0]] := digits.item[i];
      shuffled_labels[shuffled_indexes.atInt[i,0,0]] := labels[i];
    end;

    digits.Free;
    digits := shuffled_digits;
    SetLength(labels, 0);
    labels := shuffled_labels;
  finally
    if shuffled_indexes<>nil then
      shuffled_indexes.Free;
  end;
end;


procedure Deskew(const img: TOCVImage; var deskewed_img: TOCVImage);
var
  cvm:    PCvMoments_t;
  m:      CvMomentsS;
  skew:   Single;
  M_vals: array[0..1, 0..2] of Single;
  Mp:     TOcvParamMat;
  i, j:   Integer;
  cvSize: PCvSize_t;
begin
try
  cvm:=nil;
  deskewed_img:=nil;
  cvSize:=nil;
  Mp:=nil;

  cvm:=pCvmoments(img.PCvMatPtr);
  pCvMomentsToStruct(cvm, @m);


  if Abs(m.mu02) < 0.01 then
  begin
    deskewed_img := img.clone();
    Exit;
  end;

  skew := m.mu11 / m.mu02;
  M_vals[0, 0] := 1; M_vals[0, 1] := skew; M_vals[0, 2] := -0.5 * SZ * skew;
  M_vals[1, 0] := 0; M_vals[1, 1] := 1;    M_vals[1, 2] := 0;

  Mp := TOcvParamMat.Create(3, 2, cvSingle);

  for i := 0 to Mp.height - 1 do
  begin
    for j := 0 to Mp.width - 1 do
    begin
      Mp.atDbl[i, j, 0]:=M_vals[i, j];
    end;
  end;

  cvSize:=CvSize_(SZ, SZ);
  deskewed_img:=TOCVImage.Create(img.width, img.height, img.nchannels);
  pCvwarpAffine(img.PCvMatPtr, deskewed_img.PCvMatPtr, Mp.PCvMatPtr, cvSize, (CV_WARP_INVERSE_MAP or CV_INTER_LINEAR));
finally
  if cvm<>nil then
      pCvMomentsDelete(cvm);
  if cvSize<>nil then
      pCvSizeDelete(cvSize);
  if Mp<>nil then
      Mp.Free;
end;
end;

procedure bincount(const x: TOcvParamMat; const weights: TOcvParamMat; const min_length: Integer; var bins: TArray<Double>);
var
  max_x_val: Double;
  i, j, n: Integer;
begin
  max_x_val := 0;
  pcvminMaxLoc(x.PCvMatPtr, nil, @max_x_val);

  SetLength(bins, 0);
  SetLength(bins, Max(Round(max_x_val), min_length) );

  for i := 0 to x.height - 1 do
  begin
    for j := 0 to x.width - 1 do
    begin
      n:=x.atInt[i, j, 0];
      if n>High(bins) then
          n:=High(bins);
      bins[n] := bins[n] + weights.at[i, j, 0];
    end;
  end;
end;

// Extract image feature using Histogram of Oriented Gradients algorithm
procedure extractHOGFeatures(const cvImg: PCvMat_t; const eps: Double; const bin_n: Integer;
               const half_cell: Integer;  const gx, gy, mag, ang, hist: TOcvParamMat;
               var featureVec: TArray<Single>);
var
  i,j:       Integer;
  bin:    TOcvParamMat;
  bin_cells: array[0..3] of TOcvParamMat;
  mag_cells: array[0..3] of TOcvParamMat;

  partial_hist:   TArray<Double>;
  sum, hist_norm: Double;
  max_hist_ind:   Integer;

  procedure bincount(const x: TOcvParamMat; const weights: TOcvParamMat; const min_length: Integer;
            var bins: TArray<Double>);
  var
    max_x_val: Double;
    i, j, n: Integer;
  begin
    max_x_val := 0;
    pcvminMaxLoc(x.PCvMatPtr, nil, @max_x_val);

    SetLength(bins, 0);
    SetLength(bins, Max(Round(max_x_val), min_length) );

    for i := 0 to x.height - 1 do
    begin
      for j := 0 to x.width - 1 do
      begin
        n:=x.atInt[i, j, 0];
        if n>High(bins) then
            n:=High(bins);
        bins[n] := bins[n] + weights.at[i, j, 0];
      end;
    end;
  end;


begin
  bin:=nil;
  for i:=0 to 3 do
  begin
    bin_cells[i]:=nil;
    mag_cells[i]:=nil;
  end;
try
  // extract gradients on x and y directions, on entire image
  pCvSobel(cvImg, gx.PCvMatPtr, CV_32F, 1, 0 );
  pCvSobel(cvImg, gy.PCvMatPtr, CV_32F, 0, 1 );
  // calculate total gradient magnitude, and angle, for every pixel on entire image
  pCvcartToPolar(gx.PCvMatPtr, gy.PCvMatPtr, mag.PCvMatPtr, ang.PCvMatPtr);

  // trasnform from angles to angle intervals, that is quantize angles, with bin_n bins, on entire image
  bin := TOcvParamMat.Create(ang.width, ang.height, cvSingle);

  for i := 0 to ang.height - 1 do
  begin
    for j := 0 to ang.width - 1 do
    begin
      bin.atInt[i, j, 0] := Round(bin_n * ang.at[i, j,0] / (2 * system.Pi));
    end;
  end;

  // create 4 equal cells from quantized angles and magnitude matrices
  bin_cells[0] := bin.subMat(0, 0, half_cell, half_cell);
  bin_cells[1] := bin.subMat(half_cell, 0, half_cell, half_cell);
  bin_cells[2] := bin.subMat(0, half_cell, half_cell, half_cell);
  bin_cells[3] := bin.subMat(half_cell, half_cell, half_cell, half_cell);

  mag_cells[0] := mag.subMat(0, 0, half_cell, half_cell);
  mag_cells[1] := mag.subMat(half_cell, 0, half_cell, half_cell);
  mag_cells[2] := mag.subMat(0, half_cell, half_cell, half_cell);
  mag_cells[3] := mag.subMat(half_cell, half_cell, half_cell, half_cell);

  max_hist_ind:=0;
  for i := 0 to 3 do
  begin
    // create the partial HOG histogram for one cell
    bincount(bin_cells[i], mag_cells[i], bin_n, partial_hist);
    // copy partial histogram in corresponding elements of
    // total histogram
    for j:=0 to High(partial_hist) do
    begin
       hist.atDbl[max_hist_ind,0,0] := partial_hist[j];
       Inc(max_hist_ind);
    end;
   end;


  sum := 0;
  for i := 0 to max_hist_ind-1 do
  begin
    sum := sum + hist.atDbl[i,0,0];
  end;

  // histogram values  are normalized using sum of values and norm
  for i := 0 to max_hist_ind-1 do
  begin
    hist.atDbl[i,0,0] := Sqrt( hist.atDbl[i,0,0] / (sum + eps));
  end;

  hist_norm := pCvnorm(hist.PCvMatPtr);

  SetLength(featureVec, hist.height);
  for i := 0 to hist.height-1 do
  begin
    featureVec[i] := hist.atDbl[i,0,0] / (hist_norm + eps);
  end;

finally
  // free temp objects
  if bin<>nil then
     bin.Free;
  for i:=0 to 3 do
  begin
    if bin_cells[i] <>nil then
       bin_cells[i].Free;
    if mag_cells[i] <>nil then
       mag_cells[i].Free;
  end;
end;


end;

procedure preprocess_hog(const digits: TCvPasvector_Mat; var hog: TOcvParamMat);
var
  i:       Integer;
  bin_n, half_cell: Integer;
  eps:       Double;
  img_index: Integer;
  gx, gy, mag, ang: TOcvParamMat;
  hist:           TOcvParamMat;

  featureVec:     TArray<Single>;
//-------------------------
begin
  bin_n     := 16;
  half_cell := SZ div 2;
  eps       := 1e-7;
  hog:=nil;
  gx:=nil;
  gy:=nil;
  mag:=nil;
  ang:=nil;
  hist:=nil;
  try
    hog := TOcvParamMat.Create(4 * bin_n, digits.length, cvSingle);
    gx:=TOcvParamMat.CreateEmpty;
    gy:=TOcvParamMat.CreateEmpty;
    mag:=TOcvParamMat.CreateEmpty;
    ang:=TOcvParamMat.CreateEmpty;
    hist:=TOcvParamMat.Create(1, 4 * bin_n, cvDouble);

    for img_index := 0 to digits.length-1 do
    begin

      extractHOGFeatures(digits.item[img_index], eps, bin_n, half_cell,
                        gx, gy, mag, ang, hist,
                        featureVec);
      for i := 0 to High(featureVec) do
      begin
        hog.at[img_index, i,0] := featureVec[i];
      end;

    end;
  finally
    if gx <> nil then
        gx.Free;
    if gy <> nil then
        gy.Free;
    if mag <> nil then
        mag.Free;
    if ang <> nil then
        ang.Free;
    if hist <> nil then
        hist.Free;
  end;
end;


procedure Mosaic(const width: Integer; const images: TCvPasvector_Mat; var grid: TOCVImage);
var
  mat_width, mat_height, i: Integer;
begin
  mat_width :=  SZ * width;
  mat_height := SZ * Ceil(images.length / width);
  grid:=nil;
  if images.length > 0 then
  begin
    grid := TOCVImage.Create(mat_width, mat_height, pCvMatGetChannels(images.item[0]));

    for i := 0 to images.length-1 do
    begin
      grid.crop(Rect(SZ * (i mod width), SZ * (i div width),
                SZ * (i mod width)+SZ, SZ * (i div width)+SZ ));
      pCvMatCopy(images.item[i], grid.PCvMatPtr);
      grid.resetROI;
    end;
  end;
end;

//------------------------------------------------------------------------------------
procedure TfDigitsRecon.writemsg(msg: string);
begin
  meRes.Lines.Add(msg);
end;

procedure TfDigitsRecon.Help();
begin
  writemsg(' ');
  writemsg('SVM and KNearest digit recognition demo');
  writemsg(' ');
  writemsg('This demo loads a dataset of handwritten digits from ''digits.png''.');
  writemsg('Then it trains a SVM and KNearest classifiers on it and evaluates');
  writemsg('their accuracy.');
  writemsg(' ');
  writemsg('Following preprocessing is applied to the dataset:');
  writemsg(' - Moment-based image deskew (see deskew())');
  writemsg(' - Digit images are split into 4 10x10 cells and 16-bin');
  writemsg('   histogram of oriented gradients is computed for each');
  writemsg('   cell');
  writemsg(' - Transform histograms to space with Hellinger metric (see [1] (RootSIFT))');
  writemsg(' ');
  writemsg('[1] R. Arandjelovic, A. Zisserman');
  writemsg('    "Three things everyone should know to improve object retrieval"');
  writemsg('    http://www.robots.ox.ac.uk/~vgg/publications/2012/Arandjelovic12/arandjelovic12.pdf');
end;

procedure TfDigitsRecon.EvaluateModel(const predictions: TOcvParamMat; const digits: TCvPasvector_Mat;
                              const labels: TArray<Integer>; var mos: TOCVImage);
var
  i, j, k: Integer;
  err: Double;
  confusion: array[0..9, 0..9] of Integer;
  vis: TCvPasvector_Mat;
  digitImg, img: TOCVImage;
  stVec:   CvVec3bS;
  zeroVec: PCvVec3b_t;
  resLine: string;
begin
  err := 0;

  for i := 0 to predictions.height-1 do
  begin
    if predictions.atInt[i,0,0] <> labels[i] then
      err:=err+1;
  end;

  err := err / predictions.height;

  writemsg('---------------------------------------------');
  writemsg(Format('Error: %.2f %%', [err * 100]));

  FillChar(confusion, SizeOf(confusion), 0);

  for i := 0 to High(labels) do
  begin
    Inc(confusion[labels[i], predictions.atInt[i,0,0]]);
  end;

  writemsg('Confusion matrix:');
  resLine:='    ';
  for j := 0 to 9 do
  begin
    resLine:=resLine+Format('  %2d ', [j]);
  end;
  writemsg(resLine);
  writemsg('-----------------------------------------------------------');
  for i := 0 to 9 do
  begin
    resLine:=Format('%d ||',[i]);
    for j := 0 to 9 do
    begin
      resLine:=resLine+Format('  %2d ', [confusion[i, j]]);
    end;
    writemsg(resLine);
  end;
  writemsg('-----------------------------------------------------------');

  // create a single image as mosaic from all digit images,
  // the ones with wrong prediction are colored in red
  vis:=TCvPasvector_Mat.Create(digits.length);
  for i := 0 to digits.length-1 do
  begin
        digitImg:=TOCVImage.Create(digits.item[i]);
        img:=TOCVImage.Create(digitImg.width, digitImg.height, 3);
        pCvcvtColor(digitImg.PCvMatPtr, img.PCvMatPtr, Ord(COLOR_GRAY2BGR));

        if (predictions.atInt[i,0,0] <> labels[i]) then
        begin
            for j := 0 to img.height-1 do
            begin
                for k := 0 to  img.width-1 do
                begin
                    zeroVec:=pCvMatGetPixelC3(img.PCvMatPtr, j, k);
                    pCvVec3bToStruct(zeroVec, @stVec);
                    stVec.v0:=0; stVec.v1:=0;
                    pCvVec3bFromStruct(zeroVec, @stVec);
                    pCvMatSetPixelC3(img.PCvMatPtr, j, k, zeroVec);
                    pCvVec3bDelete(zeroVec);
                end;
            end;
        end;

        vis.item[i]:=img.PCvMatPtr;
        img.Free;
        digitImg.Free;
  end;

  mosaic(25, vis, mos);

  vis.Free;
  pCvVec3bDelete(zeroVec);
end;


procedure TfDigitsRecon.FormCreate(Sender: TObject);
begin
  userDigit:=nil;
  k_nearest:=nil;
  svm:=nil;
end;

procedure TfDigitsRecon.FormDestroy(Sender: TObject);
begin
    //k_nearest
    if k_nearest <>nil then
       k_nearest.Free;
    //svm
    if svm <>nil then
       svm.Free;
    //userDigit
    if userDigit <>nil then
       userDigit.Free;
end;

procedure TfDigitsRecon.FormShow(Sender: TObject);
begin
  tabsheetKNNTest.TabVisible:=False;
  tabsheetSVMTest.TabVisible:=False;
  tabsheetUserDigit.TabVisible:=False;
  help();
end;

//--------------------------------------------------------------------------------

procedure TfDigitsRecon.btnLoadDigitClick(Sender: TObject);
begin
  if dlgOpen1.Execute() then
  begin
    if Assigned(userDigit) then
      userDigit.Free;
    lblKNNRes.Caption:='';
    lblSVMRes.Caption:='';
    userDigit:=TOCVImage.Create(dlgOpen1.FileName, True);
    userDigit.showInImage(imgUserDigit);
    btnPredict.Enabled:=True;
  end;
end;

procedure TfDigitsRecon.btnPredictClick(Sender: TObject);
var
  digits:       TCvPasvector_Mat;
  samples:      TOcvParamMat;
  predictions:  TOcvParamMat;
  resizedImg:   TOCVImage;
  deskewed_digit: TOCVImage;
begin
  digits:=nil;
  samples:=nil;
  predictions:=nil;
  resizedImg:=nil;
  deskewed_digit:=nil;
  try
    // resize user image
    if (userDigit.width<>SZ) or (userDigit.height<>SZ) then
        resizedImg:= userDigit.resize(SZ, SZ)
    else
        resizedImg:=userDigit.clone();
    resizedImg.showInImage(imgResized);



    // deskew images
    digits:=TCvPasvector_Mat.Create(1);
    deskew(resizedImg, deskewed_digit);
    digits.item[0] := deskewed_digit.PCvMatPtr;
    // extract descriptor for  image
    preprocess_hog(digits, samples);
    // predict digits with KNearest
    k_nearest.predict(samples, predictions);
    lblKNNRes.Caption:='KNN prediction is: '+IntToStr(predictions.atInt[0,0,0]);
    predictions.Free;
    predictions:=nil;
    // predict digits with SVM
    svm.predict(samples, predictions);
    lblSVMRes.Caption:='SVM prediction is: '+IntToStr(predictions.atInt[0,0,0]);
  finally
    //digits
    if digits <>nil then
       digits.Free;
    //samples
    if samples <>nil then
       samples.Free;
    //resizedImg
    if resizedImg <>nil then
       resizedImg.Free;
    //deskewed_digit
    if deskewed_digit <>nil then
       deskewed_digit.Free;
    //predictions
    if predictions <>nil then
       predictions.Free;
  end;

end;

procedure TfDigitsRecon.btnStartClick(Sender: TObject);
var
  i, k: Integer;

  digits, digits2: TCvPasvector_Mat;
  digits_test:     TCvPasvector_Mat;
  deskewed_digit:  TOCVImage;
  appoImg:         TOCVImage;
  vis:             TOCVImage;
  labels,  labels_test: TArray<Integer>;
  labels_train:    TArray<Integer>;
  predictions:     TOcvParamMat;
  samples, samples_train, samples_test: TOcvParamMat;
  train_n:         Integer;
  saveDir:          string;
begin
  saveDir:=ExtractFilePath(Application.ExeName);
  meRes.Lines.Clear;
  btnStart.Enabled:=False;
  Application.ProcessMessages;


  digits:=nil;
  digits2:=nil;
  digits_test:=nil;
  predictions:=nil;
  samples:=nil;
  samples_train:=nil;
  samples_test:=nil;
  k_nearest:=nil;
  svm:=nil;

  SetLength(labels, 0);

  try
    writemsg('Loading '+ DIGITS_FN+ ' ...');
    // load digits from image-container
    LoadDigits(DIGITS_FN, digits, labels);

    writemsg('preprocessing...');
    // shuffle digits
    shuffle(digits, labels);

    // deskew images
    digits2:=TCvPasvector_Mat.Create(digits.length);
    for i := 0 to digits.length-1 do
    begin
      appoImg:=TOCVImage.Create(digits.item[i]);
      deskew(appoImg, deskewed_digit);
      digits2.item[i] := deskewed_digit.PCvMatPtr;

      deskewed_digit.Free;
      appoImg.Free;
    end;
    digits.Free;

    // extract descriptor for every image
    preprocess_hog(digits2, samples);

    train_n := Round(0.9 * samples.height);

    // fill vector of test images
    digits_test:=TCvPasvector_Mat.Create(digits2.length - train_n);
    k:=0;
    for i:=train_n to digits2.length-1 do
    begin
      digits_test.item[k]:=digits2.item[i];
      Inc(k);
    end;

    // fill matrix with descriptors for train images
    samples_train := samples.subMat(0,0, samples.width, train_n);

    // fill matrix with descriptors for test images
    samples_test := samples.subMat(0, train_n, samples.width, samples.height - train_n);


    // fill array with labels for test images
    SetLength(labels_test, Length(labels) - train_n);
    k:=0;
    for i:=train_n to High(labels) do
    begin
      labels_test[k]:=labels[i];
      Inc(k);
    end;
//-------------------------------------------------
    // fill matrix with labels for train images
    SetLength(labels_train, train_n);
    for i:=0 to train_n-1 do
      labels_train[i]:=labels[i];

    writemsg('training KNearest...');
    // create a Opencv KNearest classifier
    k_nearest:=TKNearestMLClassifier.Create;
    // train classifier
    k_nearest.train(samples_train, labels_train);

    // predict digits with KNearest
    k_nearest.predict(samples_test, predictions);
    // print evaluation data; merge test images in a single image, where
    // wrongly predicted images are in red
    EvaluateModel(predictions, digits_test, labels_test, vis);
    vis.showInImage(imgKNNTest);
    vis.Free;


    predictions.Free;
    predictions:=nil;

//---------------------------------------------------

    writemsg('training SVM...');
    // create a Opencv SVM classifier
    svm:=TSVMMLClassifier.Create();
    // train classifier
    svm.train(samples_train, labels_train);


    // predict digits with SVM
    svm.predict(samples_test, predictions);

    // print evaluation data; merge test images in a single image, where
    // wrongly predicted images are in red

    EvaluateModel(predictions, digits_test, labels_test, vis);
    vis.showInImage(imgSVMTest);
    vis.Free;

    writemsg('Saving SVM parameters as "digits_svm.json"...');
    svm.save(savedir+'digits_svm.json');
    writemsg('Done');

//---------------------------------------------------
  tabsheetKNNTest.TabVisible:=True;
  tabsheetSVMTest.TabVisible:=True;
  tabsheetUserDigit.TabVisible:=True;

  finally
    if digits2<>nil then
      digits2.Free;
    //digits_test
    if digits_test <>nil then
       digits_test.Free;
    //predictions
    if predictions <>nil then
       predictions.Free;
    //samples
    if samples <>nil then
       samples.Free;
    //samples_train
    if samples_train <>nil then
       samples_train.Free;
    //samples_test
    if samples_test <>nil then
       samples_test.Free;

  end;


end;

end.

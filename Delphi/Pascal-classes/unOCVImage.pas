{

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
{**  This unit contains the classes encapsulating the Mat Opencv class.  }
unit unOCVImage;
{$IFDEF FPC}
  {$mode Delphi}
  {$WARN 06058 Off } {Call to subroutine "xxx" marked as inline is not inlined}
  {$WARN 06060 Off } {Case statement does not handle all possible cases}
{$ENDIF}

interface
uses  Classes, Sysutils,
      {$IFDEF LCL}
      {$IFDEF MSWINDOWS} LCLIntf, LCLType, {$ENDIF}
      Graphics,
      Types,
      ExtCtrls,
      {$ELSE}
      Winapi.Windows,
      Vcl.Graphics,
      Types,
      Vcl.ExtCtrls,
      {$ENDIF}
      OPENCVWrapper;

type
  //** Types of data for Opencv Mat
  TOcvDataType = (cvByte, cvInt8, cvSmallint, cvWord, cvInteger, cvSingle, cvDouble, cvEmpty);
  //** This class is an abstraction over generic Opencv Mat class, used as parameter in some functions
  //** For images use instead TOCVImage
  TOcvParamMat = class
  private
    internImage: PCvMat_t;
    fWidth: Integer;
    fHeight: Integer;
    fDataType: TOcvDataType;
    fNChannels: Integer;

    function getWidth(): Integer;
    function getHeight(): Integer;
    function getDataType(): TOcvDataType;
    function getNchannels(): Integer;
    function getImagePointer: PCvMat_t;
    function dataType2NativeDataType(dt: TOcvDataType; nchans: Integer): integer;

    procedure setDataType();  inline;

    procedure checkGetTypeCompatibility(requestedType: TOcvDataType);   inline;
    procedure checkSetTypeCompatibility(requestedType: TOcvDataType);   inline;
  protected
    function  getCellInt(r, c: Integer; ch: Integer): Integer;          inline;
    function  getCellDbl(r, c: Integer; ch: Integer): Double;           inline;
    procedure setCellInt(r, c: Integer;  ch: Integer ; value: Integer); inline;
    procedure setCellDbl(r, c: Integer;  ch: Integer ; value: Double);  inline;
    function  getDataB(r, c: Integer; ch: Integer ): Byte ;             inline;
    procedure setDataB(r, c: Integer; ch: Integer ; value: Byte );      inline;

    function  getDataI8(r, c: Integer; ch: Integer ): Int8 ;             inline;
    procedure setDataI8(r, c: Integer; ch: Integer ; value: Int8 );      inline;
    function  getDataS(r, c: Integer; ch: Integer ): SmallInt;          inline;
    procedure setDataS(r, c: Integer; ch: Integer ; value:  SmallInt);  inline;
    function  getDataW(r, c: Integer; ch: Integer ): Word;              inline;
    procedure setDataW(r, c: Integer; ch: Integer ; value: Word );      inline;

    function  getDataI(r, c: Integer; ch: Integer ): Integer;           inline;
    procedure setDataI(r, c: Integer; ch: Integer ; value: Integer );   inline;
    function  getDataD(r, c: Integer; ch: Integer ): Double;            inline;
    procedure setDataD(r, c: Integer; ch: Integer; value: Double);      inline;
    function  getData(r, c: Integer; ch: Integer ): Single;             inline;
    procedure setData(r, c: Integer; ch: Integer; value: Single);       inline;
  public
       //** Constructor for Mat with assigned width (columns), height (rows), data type, and channel number if > 1
       constructor Create(const width, height: Integer; dataType: TOcvDataType; nchannels: Integer = 1); overload;
       {** Constructor for Mat with more than 2 dimensions, parameters are: @param(dimArray: array with list of dimensions)
        @param(dataType: data type of elements) @param(nchannels:  optional channels number if > 1) }
       constructor Create(const dimArray: array of Integer; dataType: TOcvDataType; nchannels: Integer = 1); overload;
       {** Constructor for Mat with more than 2 dimensions, and assigned data. Parameters are: @param(dimArray: array with list of dimensions)
        @param(dataType: data type of elements) @param(nchannels:  optional channels number ) @param(dataPtr:
        pointer to data bytes) @param(sizesArray: array with row size of every dimension, as default value
         can be passed an array of length 0 )}
       constructor Create(const dimArray: array of Integer; dataType: TOcvDataType; nchannels: Integer;
                  dataPtr: Int64; const sizesArray: array of UInt64); overload;
       //** Constructor for empty Mat. It will be filled by Opencv functions
       constructor CreateEmpty(); overload;
       //** Constructor that load a Mat object named 'matName' from a file in Opencv format (XML, Json, Yaml)
       constructor Create(const filename: string; const matName: string);  overload;
       //** Constructor that create a TOCVParamMat object over an existing Opencv Mat object
       constructor Create(const cvMatImg: PCvMat_t); overload;
       destructor Destroy(); override;
       //** Save the Mat to a text file. The format is set by name extension, and can be: XML, Json, Yaml.
       //** Inside the file the matrix has name 'matName'.
       procedure save(const filename: string; const matName: string);
       //** Return an array with list of mat dimensions
       function Shape(): TArray<Integer>;
       //** Return a new matrix copying the data starting fromRow and fromCol, for a total
       //** of numRows and numCols
       function subMat(fromCol: Integer; fromRow: Integer; numCols: Integer; numRows: integer): TOcvParamMat;

       //** The pointer to internal Opencv Mat object
       property PCvMatPtr: PCvMat_t read getImagePointer;
       //** The width (columns) of matrix
       property width: Integer read getWidth;
       //** The height (rows) of matrix
       property height: integer read getHeight;
       //** The data type of matrix
       property dataType: TOcvDataType read getDataType;
       //** The number of channels (colors)
       property nchannels: integer read getNchannels;
       //** The cell at assigned row, column, channel as single
       property at[row: Integer; col: Integer; channel: Integer]:     Single  read getData  write setData;
       //** The cell at assigned row, column, channel as byte
       property atByte[row: Integer; col: Integer;  channel: Integer]: Byte read getDataB write setDataB;
       //** The cell at assigned row, column, channel as Int8
       property atInt8[row: Integer; col: Integer;  channel: Integer]: Int8 read getDataI8 write setDataI8;
       //** The cell at assigned row, column, channel as Smallint
       property atSInt[row: Integer; col: Integer;  channel: Integer]: SmallInt read getDataS write setDataS;
       //** The cell at assigned row, column, channel as word
       property atWord[row: Integer; col: Integer;  channel: Integer]: Word read getDataW write setDataW;
       //** The cell at assigned row, column, channel as integer
       property atInt[row: Integer; col: Integer;  channel: Integer]: Integer read getDataI write setDataI;
       //** The cell at assigned row , column, channel as double
       property atDbl[row: Integer; col: Integer; channel: Integer]:  Double  read getDataD write setDataD;
  end;

  //** Types of flipping image
  TOcvFlipType = (cvFlipHorizontal = 0, cvFlipVertical = 1, cvFlipBoth = -1);
  //** This class is an abstraction over Opencv image class
  TOCVImage = class
  private
    internImage: PCvMat_t;
    fullImage: PCvMat_t;
    fWidth: Integer;
    fHeight: Integer;
    fNchannels: Integer;
    fROI: TRect;
    fId: Integer;
    fName: string;
    fPen: TPen;

    function  getImagePointer: PCvMat_t;  inline;
    procedure setROI(const ROI: TRect);
    function  getIsGray(): Boolean;
    procedure initPen();
    function  getPenOcvColor(): PCvScalar_t; inline;
  protected
  public
          //** Constructor for image with assigned width (columns), height (rows), and channels (colors in images)
          constructor Create(const width, height: Integer; const nchannels: integer); overload;
          //** Constructor that load an assigned image from file.If required
          //** the image loaded is gray (1 channel)
          constructor Create(const filename: string; loadAsGray: Boolean = False);  overload;
          //** Constructor that create a TOCVImage object over an existing Opencv Mat object
          constructor Create(const cvMatImg: PCvMat_t); overload;
          destructor Destroy(); override;
          //** Load an image from file. Image must have one of Opencv recognized types. If required
          //** the image loaded is gray (1 channel)
          procedure load(filename: string; loadAsGray: Boolean = False);
          //** Reset to default the Region Of Interest (ROI). The default is the entire image
          procedure resetROI();
          //** Show the image into a TImage graphic component
          procedure showInImage(formImg: TImage );
          //** Save to file. Image is saved with the type specified by file name extension (example: .bmp, .jpg, etc.)
          procedure save(const filename: string);
          //** Clone the image object in another new object. Parameters: gray = true: the new image is a grayscale one (1 channel);
          // fillZeros = true: the new image is totally black, i.e. empty
          function  clone(const gray: Boolean = false; const fillZeros: Boolean = false): TOCVImage; inline;
          //** Copy the image to another image object
          procedure copy(const dest: TOcvImage; const mask: TOCVImage = nil);  inline;
          //** Copy the Opencv image to a TBitmap Pascal object
          procedure toBmp(var bmp: TBitmap);
          //** Copy a TBitmap Pascal object to the Opencv image
          procedure fromBmp(bmp: TBitmap);
          //** Resize the image with new dimensions, creating a new object
          function resize(newWidth: Integer; newHeight: Integer): TOCVImage;
          //** Split the color channels of image in new separate objects, one for every channel (color). Typically 3 images, for red, blue and green
          procedure splitChannels(var channelsImg: TArray<TOCVImage>); overload;
          //** Split the color channels of image in new separate Opencv Mat objects. Useful to generate input for some Opencv functions
          procedure splitChannels(const channelsImg: PCvvector_Mat); overload;
          //** Merge different 1-channel images in a single multi-channel image
          procedure merge(const channelsImg: TArray<TOcvImage>); overload;
          //** Merge different 1-channel Opencv Mat images in a single multichannel image
          procedure merge(const channelsImg: PCvvector_Mat); overload;

          //** Crop the image to the assigned new dimensions. Same as changing the ROI
          //** Resettable to original dimensions with resetROI
          procedure crop(newDim: TRect);
          //** Fill input image with a grayscale copy of image. The input image must have same width and height, and 1 channel.
          procedure  toGray(grayImg: TOCVImage) ;   inline;
          //** Create a new 3-channel gray image from internal image. The internal image must have  1 channel.
          function  fromGray(): TOCVImage ;         inline;
          //** Calculate the histogram of pixel values of all channels: 3 for color image, 1 for grayscale.
          //** The returned array contains one column for every channel
          function  histogram(rangeLow: Integer = 0; rangeHigh: integer = 256; histSize: Integer = 16 ): TArray<TArray<Integer>>;
          //** Flip the image around the vertical, horizontal, or both axes
          procedure flip(flipType: TOcvFlipType);   inline;
          //** Rotate the image of the assigned angle, in degrees, and return a new image object
          function rotate(angle: Single): TOCVImage;
          //** Sharpen the image
          procedure sharpen(scale: single);
          //** Create a new black/white image containing the edges, with Canny algorithm
          function edges(threshold1: Double = 180; threshold2: Double = 100; apertureSize: Integer = 3;
                    L2Gradient: Boolean = false): TOCVImage;   inline;
          //** Create a new black/white image, where all pixels with value not less than a threshold are white, the others black
          function threshold(threshold: Integer = 128; maxval: Integer = 255; thrType: integer = CV_THRESH_BINARY): TOCVImage;  inline;
          //** Calculate mean and standard deviation of all image channels. Return an array of mean for every channel, and
          // an array for std. deviation for every channel
          procedure meanStddev(var mean: TArray<Single>; var stddev: TArray<single>);

          //** Change the image brightness, multiplying every pixel value for the passed value
          procedure setBrightness(brightnessVal: Double);  inline;
          //** Change the image color saturation. Only for 3-channel images
          procedure setSaturation(saturationVal: Double);
          //** Change the image contrast
          procedure setContrast(contrastVal: double);
          //** Equalize the brightness of the image on all channels
          procedure equalize();
          //** Transform the entire image to another image using a mapping matrix (homography).
          //** If out width and height are set to default, the output image will be 4 times greater.
          function  map(const mapMatrix: TOcvParamMat; const outWidth: Integer = -1; const outHeight: Integer = -1): TOCVImage;
          //** Fill the image with the values converted from a Mat having same size and CV32F (single) data type
          procedure convertFromSingle(const img32: TOcvParamMat);

          //** Draw a line between points p1 and p2
          procedure line(const p1: TPoint; const p2: TPoint);  inline;
          //** Draw a rectangle having point p1 as top-left vertex, and
          //** point p2 as bottom-right vertex. Draw a filled rectangle if isFilled = true
          procedure rectangle(const p1: TPoint; const p2: TPoint; isFilled: Boolean = False);  inline;
          //** Draw a circle with assigned center point and radius, filled if isFilled = true
          procedure circle(const pcenter: TPoint; radius: Integer; isFilled: Boolean = False);
          //** Draw an ellipse with parameters: center point, axis 1 lenght, axis 2 length, angle of inclination
          //** on X axis, in degrees; start and end angles of drawed arc, in degrees;  start = 0
          //** and end = 360 mean that the entire ellipse is drawn;  the ellipse is filled if isFilled = true
          procedure ellipse(const pcenter: TPoint; axisLength1: Integer; axisLength2: integer; angle: double;
                            startAngle: double = 0.0; endAngle: double = 360.0; isFilled: Boolean = False);
          //** Draw the lines, that connect points passed in input array; if isClosed = true then a closed
          //** polygon is drawn
          procedure polylines(const pts: TArray<TPoint>; isClosed: Boolean = True);

          //** The pointer to internal Opencv Mat object
          property PCvMatPtr: PCvMat_t read getImagePointer;
          //** The current Region Of Interest (ROI) of image
          property ROI: TRect read fROI write setROI;
          //** The width (columns) of image
          property width: Integer read fWidth;
          //** The height (rows) of image
          property height: integer read fHeight;
          //** The number of channels (colors)
          property nchannels: integer read fNchannels;
          //** True if the image is grayscale (1 channel)
          property isGray: Boolean read getIsGray;
          //** The pen property contains the current color and width used when drawing on image
          property  pen: TPen read fPen;
          //** It's possible to assign a numeric id to image
          property ID: Integer read FID write FID;
          //** It's possible to assign a name to image
          property Name: String read FName write FName;
  end;

implementation

uses {$IFDEF FPC}StrUtils{$ELSE}System.StrUtils{$ENDIF} ;



{******************************************************************************}
{******************** TOCVParamMat ********************************************}
{******************************************************************************}

{$REGION 'TOCVParamMat'}
function TOcvParamMat.dataType2NativeDataType(dt: TOcvDataType; nchans: Integer): Integer;
begin
  Result := CV_8UC1;
  case dt of
  cvByte:    begin
    case nchans of
      1: Result:= CV_8UC1;
      2: Result:= CV_8UC2;
      3: Result:= CV_8UC3;
      4: Result:= CV_8UC4;
    end;
  end;
  cvInt8:    begin
    case nchans of
      1: Result:= CV_8SC1;
      2: Result:= CV_8SC2;
      3: Result:= CV_8SC3;
      4: Result:= CV_8SC4;
    end;
  end;
  cvWord:    begin
    case nchans of
      1: Result:= CV_16UC1;
      2: Result:= CV_16UC2;
      3: Result:= CV_16UC3;
      4: Result:= CV_16UC4;
    end;
  end;
  cvSmallint:    begin
    case nchans of
      1: Result:= CV_16SC1;
      2: Result:= CV_16SC2;
      3: Result:= CV_16SC3;
      4: Result:= CV_16SC4;
    end;
  end;
  cvInteger: begin
    case nchans of
      1: Result:= CV_32SC1;
      2: Result:= CV_32SC2;
      3: Result:= CV_32SC3;
      4: Result:= CV_32SC4;
    end;
  end;
  cvSingle:  begin
    case nchans of
      1: Result:= CV_32FC1;
      2: Result:= CV_32FC2;
      3: Result:= CV_32FC3;
      4: Result:= CV_32FC4;
    end;
  end;
  cvDouble:  begin
    case nchans of
      1: Result:= CV_64FC1;
      2: Result:= CV_64FC2;
      3: Result:= CV_64FC3;
      4: Result:= CV_64FC4;
    end;
  end;
  end;
end;


constructor TOcvParamMat.Create(const width: Integer; const height: Integer; dataType: TOcvDataType;
        nchannels: Integer);
var
  mt: Integer;
begin
  inherited Create;
  Assert((nchannels>0) and (nchannels<=4), 'TOCVParamMat: Nchannels must be positive and not greater 4');
  Assert(  ((Low(tocvdatatype)<=dataType) and  (datatype <=High(tocvdatatype))  ),
                        'TOCVParamMat: data type can be: cvByte, cvInt8, cvSmallint, cvWord, cvInteger, cvSingle, cvDouble');
  fDataType:=DataType;

  mt:=dataType2NativeDataType(dataType, nchannels);
  internImage:=pCvMatImageCreate(width, height, mt );
  fWidth:=width;
  fHeight:=height;
  fNChannels:=nchannels;
end;

constructor TOcvParamMat.Create(const dimArray: array of Integer; dataType: TOcvDataType; nchannels: Integer);
var
  mt: Integer;
begin
  inherited Create;
  Assert(  ((Low(tocvdatatype)<=dataType) and  (datatype <=High(tocvdatatype))  ),
                        'TOCVParamMat: data type can be: cvByte, cvInt8, cvSmallint, cvWord, cvInteger, cvSingle, cvDouble');
  Assert( (Length(dimArray)>0), 'TOCVParamMat: array of dimensions is empty');
  fDataType:=DataType;
  mt:=dataType2NativeDataType(dataType, nchannels);
  internImage:=pCvMatCreate(Length(dimArray), @dimArray[0], mt);
  fWidth:=-1;
  fHeight:=-1;
  fNChannels:=nchannels;
end;

constructor TOcvParamMat.Create(const dimArray: array of Integer; dataType: TOcvDataType;
          nchannels: Integer; dataPtr: Int64; const sizesArray: array of UInt64);
var
  mt: Integer;
begin
  inherited Create;
  Assert(  ((Low(tocvdatatype)<=dataType) and  (datatype <=High(tocvdatatype))  ),
                        'TOCVParamMat: data type can be: cvByte, cvInt8, cvSmallint, cvWord, cvInteger, cvSingle, cvDouble');
  Assert( (Length(dimArray)>0), 'TOCVParamMat: array of dimensions is empty');
  fDataType:=DataType;
  mt:=dataType2NativeDataType(dataType, nchannels);
  if Length(sizesArray)>0 then
      internImage:=pCvMatCreate(Length(dimArray), @dimArray[0], mt, dataPtr, @sizesArray[0])
  else
      internImage:=pCvMatCreate(Length(dimArray), @dimArray[0], mt, dataPtr);
  fWidth:=-1;
  fHeight:=-1;
  fNChannels:=nchannels;
end;



constructor TOcvParamMat.Create(const filename: string; const matName: string);
var
  w, h: Integer;
  cvstr: CvString_t;
  pstr:  PCvString_t;
  fstorage: PCvFileStorage_t;
  fnode:    PCvFileNode_t;
begin
  inherited Create;
  Assert(FileName<>'','File name empty');
  Assert(FileExists(filename),'Create: file name '+filename + ' not existing');
  internImage:=nil;
  cvstr.pstr:= PAnsiChar(AnsiString(filename));

  fstorage:=nil;
  fnode:=nil;
  fstorage:=pCvFileStorageCreate();
  pCvFileStorageopen(fstorage, @cvstr, Ord(TCvFileStorage_Mode._READ));
  fnode:=pCvFileStoragegetNode(fstorage, PAnsiChar(AnsiString(matName)));
  try
    pstr:=pCvFileNodename(fnode);
    if pstr.pstr = '' then
      raise Exception.Create('Create: file '+filename+' not contains '+matName+' matrix');

    internImage:=pCvFileNodemat(fnode);

    w:= pCvMatGetWidth(internImage);
    h:= pCvMatGetHeight(internImage);
    if w*h=0 then
    begin
      raise Exception.Create('Create: file '+filename+' not loaded');
      pCvMatDelete(internImage);
      internImage:=nil;
    end;

    fWidth:=w;
    fHeight:=h;
    fDataType:=cvEmpty;
    setDataType;
    pCvFileStoragerelease(fstorage);
  finally
    if fstorage<> nil then
       pCvFileStorageDelete(fstorage);
    if fnode<>nil then
       pCvFileNodeDelete(fnode);
    pCvStringDelete(pstr);
  end;
 end;


constructor TOcvParamMat.CreateEmpty;
begin
  inherited Create;
  internImage:=pCvMatCreateEmpty;
  fWidth:=0;
  fHeight:=0;
  fNChannels:=0;
  fDataType:= cvEmpty;
end;

constructor TOcvParamMat.Create(const cvMatImg: PCvMat_t);
var
  w, h: Integer;
begin
  inherited Create;
  w:= pCvMatGetWidth(cvMatImg);
  h:= pCvMatGetHeight(cvMatImg);
  internImage:=nil;
  if w*h=0 then
  begin
    raise Exception.Create('TOCVParamMat.create: input PCvMat invalid');
  end;
  fWidth:=w;
  fHeight:=h;
  internImage:=cvMatImg;
  setDataType;
end;

destructor TOcvParamMat.Destroy;
begin
  if internImage<>nil then
  begin
      pCvMatDelete(internImage);
      internImage:=nil;
  end;
  inherited Destroy;
end;

procedure TOcvParamMat.save(const filename: string; const matName: string);
var
  fstorage: PCvFileStorage_t;
  cvstr:    CvString_t;
begin
  fstorage:=nil;
  fstorage:=pCvFileStorageCreate();
  cvstr.pstr:=PAnsiChar(AnsiString(filename));
  pCvFileStorageopen(fstorage, @cvstr, Ord(TCvFileStorage_Mode._WRITE));
  try
    cvstr.pstr:=PAnsiChar(AnsiString(matName));
    pCvFileStoragewriteV4(fstorage, @cvstr, internImage);
    pCvFileStoragerelease(fstorage);
  finally
    if fstorage<>nil then
       pCvFileStorageDelete(fstorage);
  end;
end;

function TOcvParamMat.subMat(fromCol: Integer; fromRow: Integer; numCols: Integer;
        numRows: Integer): TOcvParamMat;
var
  cvROIRect:  CvRectS;
  sourceCrop: PCvMat_t;
begin
  Result:=nil;
  if ( (fDataType = cvEmpty) and  (getWidth() * getHeight() = 0) ) // empty matrix
  then
        raise EArgumentException.Create('Matrix is empty');
  if (fromRow<0) or (fromRow>fHeight) then
      raise EArgumentException.Create('fromRow argument out of matrix dimensions');
  if (fromCol<0) or (fromCol>fWidth) then
      raise EArgumentException.Create('fromCol argument out of matrix dimensions');
  if (numRows<1) or (fromRow+numRows>fHeight) then
      raise EArgumentException.Create('numRows argument must be between 1 and (height - fromRow) ');
  if (numCols<1) or (fromCol+numCols>fWidth) then
      raise EArgumentException.Create('numCols argument must be between 1 and (width - fromCol) ');

  Result:=TOcvParamMat.Create(numCols, numRows, self.getDataType);
  cvROIRect.x:=fromCol;
  cvROIRect.y:=fromRow;
  cvROIRect.width:=numCols;
  cvROIRect.height:=numRows;
  sourceCrop:=  pCvMatROI(internImage, @cvROIRect);
  pCvMatCopy(sourceCrop, Result.PCvMatPtr);
  pCvMatDelete(sourceCrop);
end;

procedure TOcvParamMat.setDataType;
var
  cvtype: string;
begin
  if ((fDataType<>cvEmpty) and (fNChannels>0) )   // valid matrix
    or ( (fDataType = cvEmpty) and  (getWidth() * getHeight() = 0) ) // empty matrix
        then Exit;
  cvtype:='';
  CvMatTypeDecode(internImage,  cvtype, fNChannels);
  if (cvtype ='CV_8U') then      begin fDataType := cvByte;    end
  else if cvtype = 'CV_8S'  then begin fDataType := cvInt8;    end
  else if cvtype = 'CV_16U' then begin fDataType := cvWord;    end
  else if cvtype = 'CV_16S' then begin fDataType := cvSmallint;end
  else if cvtype = 'CV_32S' then begin fDataType := cvInteger; end
  else if cvtype = 'CV_32F' then begin fDataType := cvSingle;  end
  else if cvtype = 'CV_64F' then begin fDataType := cvDouble;  end
  else begin
    raise Exception.Create('TOCVParamMat: data type unknown or invalid: '+IntToStr(pCvMatGetType(internImage)));
  end;
end;


function TOcvParamMat.getImagePointer(): PCvMat_t;
begin
  Result:=internImage;
end;

function TOcvParamMat.getWidth: Integer;
begin
  if fWidth=0 then
    fWidth:=pCvMatGetWidth(internImage);
  Result:=fWidth;
end;


function TOcvParamMat.getHeight: Integer;
begin
  if fHeight=0 then
    fHeight:=pCvMatGetHeight(internImage);
  Result:=fHeight;
end;

function TOcvParamMat.getDataType: TOcvDataType;
begin
  setDataType;
  Result:=fDataType;
end;

function TOcvParamMat.getNchannels: Integer;
begin
  setDataType;
  Result:=fNChannels;
end;

function TOcvParamMat.Shape(): TArray<Integer>;
var
  nr: Integer;
begin
  nr:=pCvMatGetDimsNum(internImage);
  SetLength(Result, nr);
  pCvMatGetDims(internImage, @Result[0]);
end;

procedure TOcvParamMat.checkGetTypeCompatibility(requestedType: TOcvDataType);
begin
  if requestedType=fDataType then Exit;

  if ((requestedType = cvByte) and (fDataType in [cvInt8, cvWord, cvSmallint, cvInteger])) or
     ((requestedType = cvInt8) and (fDataType in [cvByte, cvWord, cvSmallint, cvInteger])) or
     ((requestedType = cvSmallint) and (fDataType in [cvByte, cvWord, cvInteger])) or
     ((requestedType = cvWord) and (fDataType in [cvByte, cvInt8, cvSmallint, cvInteger])) or
     ((requestedType = cvSingle) and (fDataType = cvDouble))
  then
    raise EOverflow.Create('Requested get type incompatible with Mat type: smaller, or signed versus unsigned');
end;

procedure TOcvParamMat.checkSetTypeCompatibility(requestedType: TOcvDataType);
begin
  if requestedType=fDataType then Exit;

  if ((requestedType = cvByte) and (fDataType in [cvInt8, cvWord, cvSmallint, cvInteger])) or
     ((requestedType = cvInt8) and (fDataType in [cvByte, cvWord, cvSmallint, cvInteger])) or
     ((requestedType = cvSmallint) and (fDataType in [cvByte, cvWord, cvInteger])) or
     ((requestedType = cvWord) and (fDataType in [cvByte, cvInt8, cvSmallint, cvInteger])) or
     ((requestedType = cvInteger) and (fDataType in [cvByte, cvInt8, cvWord, cvSmallint])) or
     ((requestedType = cvDouble) and (fDataType in [cvByte, cvInt8, cvSmallint, cvWord, cvInteger, cvSingle]))
  then
    raise EOverflow.Create('Requested set type incompatible with Mat type: smaller, or signed versus unsigned');
end;

function TOcvParamMat.getCellInt(r: Integer; c: Integer; ch: Integer): Integer;
begin
  setDataType;
  Result:=0;
  case fDataType of
    cvInteger: Result:=pCvMatGetInt(internImage, r, c, ch);
    cvSingle:  Result:=Round(pCvMatGetFloat(internImage, r, c, ch));
    cvDouble:  Result:=Round(pCvMatGetDouble(internImage, r, c, ch));
  end;
end;


function TOcvParamMat.getCellDbl(r: Integer; c: Integer; ch: Integer): Double;
begin
  setDataType;
  Result:=0;
  case fDataType of
    cvInteger: Result:=pCvMatGetInt(internImage, r, c, ch);
    cvSingle:  Result:=pCvMatGetFloat(internImage, r, c, ch);
    cvDouble:  Result:=pCvMatGetDouble(internImage, r, c, ch);
  end;
end;

{$RANGECHECKS ON}
procedure TOcvParamMat.setCellInt(r: Integer; c: Integer; ch: Integer; value: Integer);
begin
  setDataType;
  case fDataType of
    cvInteger: pCvMatSetInt(internImage, r, c, value, ch);
    cvSingle:  pCvMatSetFloat(internImage, r, c, value, ch);
    cvDouble:  pCvMatSetDouble(internImage, r, c, value, ch);
  end;
end;

procedure TOcvParamMat.setCellDbl(r: Integer; c: Integer; ch: Integer; value: Double);
begin
  setDataType;
  case fDataType of
    cvInteger: pCvMatSetInt(internImage, r, c,  Round(value), ch);
    cvSingle:  pCvMatSetFloat(internImage, r, c, value, ch);
    cvDouble:  pCvMatSetDouble(internImage, r, c, value, ch);
  end;
end;

{$RANGECHECKS OFF}


function TOcvParamMat.getData(r: Integer; c: Integer; ch: Integer): Single;
begin
  checkGetTypeCompatibility(cvSingle);
  Result:=getCellDbl(r,c, ch);
end;


procedure TOcvParamMat.setData(r: Integer; c: Integer; ch: Integer; value: Single);
begin
  checkSetTypeCompatibility(cvSingle);
  setCellDbl(r, c, ch, value);
end;

function TOcvParamMat.getDataB(r: Integer; c: Integer; ch: Integer): Byte;
begin
  setDataType;
  checkGetTypeCompatibility(cvByte);
  Result:=pCvMatGetByte(internImage, r, c, ch);
end;

procedure TOcvParamMat.setDataB(r: Integer; c: Integer; ch: Integer; value: Byte);
begin
  setDataType;
  checkSetTypeCompatibility(cvByte);
  pCvMatSetByte(internImage, r, c, value, ch);
end;

function TOcvParamMat.getDataI8(r: Integer; c: Integer; ch: Integer): Int8;
begin
  setDataType;
  checkGetTypeCompatibility(cvInt8);
  Result:=pCvMatGetInt8(internImage, r, c, ch);
end;

procedure TOcvParamMat.setDataI8(r: Integer; c: Integer; ch: Integer; value: Int8);
begin
  setDataType;
  checkSetTypeCompatibility(cvInt8);
  pCvMatSetInt8(internImage, r, c, value, ch);
end;

function TOcvParamMat.getDataS(r: Integer; c: Integer; ch: Integer): SmallInt;
begin
  setDataType;
  checkGetTypeCompatibility(cvSmallint);
  Result:=pCvMatGetSmallint(internImage, r, c, ch);
end;

procedure TOcvParamMat.setDataS(r: Integer; c: Integer; ch: Integer; value: SmallInt);
begin
  setDataType;
  checkSetTypeCompatibility(cvSmallint);
  pCvMatSetSmallint(internImage, r, c, value, ch);
end;

function TOcvParamMat.getDataW(r: Integer; c: Integer; ch: Integer): Word;
begin
  setDataType;
  checkGetTypeCompatibility(cvWord);
  Result:=pCvMatGetWord(internImage, r, c, ch);
end;

procedure TOcvParamMat.setDataW(r: Integer; c: Integer; ch: Integer; value: Word);
begin
  setDataType;
  checkSetTypeCompatibility(cvWord);
  pCvMatSetWord(internImage, r, c, value, ch);
end;

function TOcvParamMat.getDataI(r: Integer; c: Integer; ch: Integer): Integer;
begin
  Result:=getCellInt(r,c, ch);
end;

procedure TOcvParamMat.setDataI(r: Integer; c: Integer; ch: Integer; value: Integer);
begin
  checkSetTypeCompatibility(cvInteger);
  setCellInt(r, c, ch, value);
end;

function TOcvParamMat.getDataD(r: Integer; c: Integer; ch: Integer): Double;
begin
  Result:=getCellDbl(r,c, ch);
end;

procedure TOcvParamMat.setDataD(r: Integer; c: Integer; ch: Integer; value: Double);
begin
  checkSetTypeCompatibility(cvDouble);
  setCellDbl(r, c, ch, value);
end;

{$ENDREGION}



{******************************************************************************}
{******************** TOCVImage ***********************************************}
{******************************************************************************}

{$REGION 'TOCVImage'}
var

  VALID_COLOR_MODELS: array[0..2] of string = ('BGR', 'RGB', 'HSV');


constructor TOCVImage.Create(const width, height: Integer; const nchannels: integer);
var
  mt: Integer;
begin
  inherited Create;
  mt:=1;
  Assert((nchannels>=1) and (nchannels<=3),'Channels number must be 1, 2 or 3');
  case nchannels of
   1:  mt:=CV_8UC1;
   2:  mt:=CV_8UC2;
   3:  mt:=CV_8UC3;
  end;
  internImage:=pCvMatImageCreate(width, height, mt );
  fullImage:=internImage;
  fROI:= Rect(0,0,width, height);
  fWidth:=width;
  fHeight:=height;
  fNchannels:=nchannels;
  fId:=0;
  fName:='';
  initPen;
end;

constructor TOCVImage.Create(const filename: string; loadAsGray: Boolean);
begin
  inherited Create;
  internImage:=nil;
  load(filename, loadAsGray);
  fId:=0;
  fName:='';
  initPen;
end;

constructor TOCVImage.Create(const cvMatImg: PCvMat_t);
var
  w, h: Integer;
begin
  inherited Create;
  w:= pCvMatGetWidth(cvMatImg);
  h:= pCvMatGetHeight(cvMatImg);
  internImage:=nil;
  if w*h=0 then
  begin
    raise EArgumentException.Create('TOCVImage.create: input PCvMat invalid');
  end;
  fROI:= Rect(0,0,w, h);
  fWidth:=w;
  fHeight:=h;
  fNchannels:=pCvMatGetChannels(cvMatImg);
  internImage:=cvMatImg;
  fullImage:=internImage;
  fId:=0;
  fName:='';
  initPen;
end;


destructor TOCVImage.Destroy;
begin
  if internImage<>nil then
  begin
      pCvMatDelete(internImage);
      internImage:=nil;
  end;
  fPen.Free;
  inherited Destroy;
end;

procedure TOCVImage.initPen;
begin
  fPen:=TPen.Create;
  fPen.Color:=clBlack;
  fPen.Style:=psSolid;
  fPen.Width:=2;
end;

function TOCVImage.getImagePointer(): PCvMat_t;
begin
  Result:=internImage;
end;

function TOCVImage.getIsGray(): Boolean;
begin
  Result:= (fNchannels = 1);
end;

procedure TOCVImage.setROI(const ROI: TRect);
var
  cvr: CvRectS;
begin
  if EqualRect(fROI, ROI) then Exit;
  if PtInRect(Rect(0,0,fWidth+1, fHeight+1), Point(ROI.Left, ROI.Top))
    and PtInRect(Rect(0,0,fWidth+1, fHeight+1), Point(ROI.Right, ROI.Bottom)) then
  begin
    fROI:=ROI;
    cvr.x:=ROI.Left;
    cvr.y:=ROI.Top;
    cvr.width:=ROI.Width;
    cvr.height:=ROI.Height;
    // if image pointers are different, there is a precedent ROI
    if internImage<>fullImage then
    begin
        pCvMatDelete(internImage);
        internImage:=fullImage;
    end;
    internImage:=pCvMatROI(internImage, @cvr);
  end;
end;

procedure TOCVImage.resetROI;
begin
  fROI:=Rect(0,0,fWidth, fHeight);
  if internImage<>fullImage then
  begin
      pCvMatDelete(internImage);
      internImage:=fullImage;
  end;
end;

procedure TOCVImage.showInImage(formImg: TImage);
var
  rec: TRect;
  bmp: TBitmap;
  colorImg: PCvMat_t;
begin
    bmp := TBitmap.Create;
    bmp.PixelFormat :=  pf24bit;
    resetROI;
    if fNchannels=1 then
    begin
      colorImg:=pCvMatImageCreate(fWidth, fHeight,  CV_8UC3);
      pCvCvtColor(internImage, colorImg, Ord(COLOR_GRAY2BGR));
      MatImage2Bitmap(colorImg, bmp);
      pCvMatDelete(colorImg);
    end
    else
    begin
      MatImage2Bitmap(internImage, bmp);
    end;
    {$IFDEF LCL}
    rec:=Rect(0,0,formImg.Width, formImg.Height);
    {$ELSE}
    rec := formImg.canvas.ClipRect;
    {$ENDIF}
    formImg.canvas.StretchDraw(rec , bmp);
    bmp.Free;
    setROI(fROI);
end;

procedure TOCVImage.load(filename: string; loadAsGray: Boolean);
var
  w, h: Integer;
  cvstr: CvString_t;
begin
  Assert(FileName<>'','File name empty');
  Assert(FileExists(filename),'Load: file name '+filename + ' not existing');
  if internImage<>nil then
    pCvMatDelete(internImage);
  internImage:=nil;
  cvstr.pstr:= PAnsiChar(AnsiString(filename));
  if loadAsGray then
     internImage:=pCvimread(@cvstr, Ord(IMREAD_GRAYSCALE))
  else
     internImage:=pCvimread(@cvstr, Ord(IMREAD_UNCHANGED));
  w:= pCvMatGetWidth(internImage);
  h:= pCvMatGetHeight(internImage);
  if w*h=0 then
  begin
    raise Exception.Create('TOCVImage.create: file '+filename+' not loaded');
    pCvMatDelete(internImage);
    internImage:=nil;
  end;

  fROI:= Rect(0,0,w, h);
  fWidth:=w;
  fHeight:=h;
  fNchannels:=pCvMatGetChannels(internImage);
  fullImage:=internImage;
end;

procedure TOCVImage.save(const filename: string);
var
  cvfname: CvString_t;
begin
  Assert(filename<>'', 'File name is empty');
  cvfname.pstr:= PAnsiChar(AnsiString(filename));
  pCvimwrite(@cvfname, internImage);
end;

function TOCVImage.clone(const gray: Boolean = False; const fillZeros: Boolean = false): TOCVImage;
var
  outImg: TOCVImage;
  sczero: PCvScalar_t;
begin
  if gray then
  begin
    outImg:=TOCVImage.Create(fWidth, fHeight, 1);
  end
  else
  begin
    outImg:=TOCVImage.Create(fWidth, fHeight, fNchannels);
  end;

  if not(fillZeros) then
  begin
    if (gray) and (fNchannels<>1) then
      pCvCvtColor(internImage, outImg.PCvMatPtr, Ord(COLOR_BGR2GRAY))
    else
    begin
      pCvMatCopy(internImage, outImg.PCvMatPtr);
    end;
  end
  else
  begin
     sczero:=CvScalar_(0,0,0,0);
     pCvMatFill(outImg.PCvMatPtr, sczero);
     pCvScalarDelete(sczero);
  end;
  Result:=outImg;
end;

procedure TOCVImage.copy(const dest: TOCVImage; const mask: TOCVImage);
begin
  Assert(Assigned(dest),'destination image is not assigned');
  if mask= nil then
       pCvMatCopy(internImage, dest.PCvMatPtr)
  else
       pCvMatCopy(internImage, dest.PCvMatPtr, mask.PCvMatPtr);
end;

function TOCVImage.resize(newWidth: Integer; newHeight: Integer): TOCVImage;
var
  outImg: TOCVImage;
  newsize: PCvSize_t;
begin
  outImg:=TOCVImage.Create(newWidth, newHeight, fNchannels);
  newsize:=CvSize_(newWidth, newHeight);
  pCvresize(internImage, outImg.PCvMatPtr, newsize);
  pCvSizeDelete(newsize);
  Result:=outImg;
end;

procedure TOCVImage.toBmp(var bmp: TBitmap);
begin
  MatImage2Bitmap(internImage, bmp);
end;

procedure TOCVImage.fromBmp(bmp: TBitmap);
begin
  Bitmap2MatImage(internImage, bmp);
end;

procedure TOCVImage.splitChannels(const channelsImg: PCvvector_Mat);
begin
  pCvsplit(internImage, channelsImg);
end;

procedure TOCVImage.splitChannels(var channelsImg: TArray<TOCVImage>);
var
  i: Integer;
  vecmat: PCvvector_Mat;
begin
  SetLength(channelsImg, 0);
  SetLength(channelsImg, fNchannels);
  vecmat:=pCvVectorMatCreate(fNchannels);
  splitChannels(vecmat);
  for i:=0 to fNchannels-1 do
  begin
    channelsImg[i]:=TOCVImage.Create(pCvVectorMatGet(vecmat, I));
  end;
  pCvVectorMatDelete(vecmat);
end;

procedure TOCVImage.merge(const channelsImg: PCvvector_Mat);
begin
  pCvmerge(channelsImg, internImage);
end;


procedure TOCVImage.merge(const channelsImg: TArray<TOCVImage>);
var
  i: Integer;
  vecmat: PCvvector_Mat;
begin
  vecmat:=pCvVectorMatCreate(Length(channelsImg));
  for i:=0 to High(channelsImg) do
    pCvVectorMatSet(vecmat, i, channelsImg[i].PCvMatPtr);
  merge(vecmat);
  pCvVectorMatDelete(vecmat);
end;

procedure TOCVImage.crop(newDim: TRect);
begin
  self.ROI:=newDim;
end;

procedure TOCVImage.toGray(grayImg: TOCVImage);
begin
  Assert(Assigned(grayImg), 'toGray: input image not assigned');
  Assert((grayImg.width=fWidth) and (grayImg.height=fHeight) and (grayImg.nchannels=1),
     Format('toGray: input image must have same width and height, and only 1 channel. Input w/h/nch %d %d %d; Self w/h/nch %d %d %d',
          [grayimg.width, grayimg.height, grayimg.nchannels, fwidth, fheight, fnchannels]));
  pCvCvtColor(internImage, grayImg.PCvMatPtr, Ord(COLOR_BGR2GRAY));
end;

function TOCVImage.fromGray(): TOCVImage;
begin
  Assert(fnchannels=1,'fromGray: internal image must have 1 channel');
  Result:=TOCVImage.Create(fWidth, fHeight, 3);
  pCvCvtColor(internImage, Result.PCvMatPtr, Ord(COLOR_GRAY2BGR));
end;

function TOCVImage.histogram(rangeLow: Integer; rangeHigh: Integer; histSize: Integer): TArray<TArray<Integer>>;
var
  i: Integer;
  {$IFDEF DEBUG}
  c, tot: Integer;
  {$ENDIF}
  arHist: TArray<TArray<Integer>>;
  vecInp: PCvvector_Mat;
  vecChannels: PCvvector_Mat;
  channel: PCvMat_t;
  vecDims: PCvvector_int;
  vecHistsize: PCvvector_int;
  vecRanges: PCvvector_float;
  hist: PCvMat_t;

 procedure mat2array(channels: Integer; curchannel: Integer; pmat: PCvMat_t; var ar: TArray<TArray<Integer>>);
 var
  i: Integer;
 begin
  for  i:=0 to High(ar) do
  begin
    if curchannel=0 then
        SetLength(ar[i], channels);
    begin
       ar[i,curchannel]:=Round(pCvMatGetFloat(pmat, i, 0));
    end;
  end;
 end;

begin
  try
     vecChannels:=pCvVectorMatCreate(fNchannels);
     if fNchannels>1 then
         splitChannels(vecChannels)
     else
         pCvVectorMatSet(vecChannels, 0, internImage);
     vecInp:=pCvVectorMatCreate(1);
     vecDims:=pCvVectorintCreate(1);
     pCvVectorintSet(vecDims, 0, 0);
     vecHistsize:=pCvVectorintCreate(1);
     pCvVectorintSet(vecHistsize, 0, histSize);
     vecRanges:=pCvVectorfloatCreate(2);
     pCvVectorfloatSet(vecRanges, 0, rangeLow);
     pCvVectorfloatSet(vecRanges, 1, rangeHigh);

     SetLength(arHist, histSize);
     for i:=0 to fNchannels-1 do
     begin
         hist:=pCvMatCreateEmpty();
         channel:= pCvVectorMatGet(vecChannels, i);
         pCvVectorMatSet(vecInp, 0, channel);
         pCvcalcHist(vecInp, vecDims, pCvDefaultMat, hist, vecHistsize, vecRanges);
         mat2array(fNchannels,  i, hist, arHist);
         pCvMatDelete(hist);
         // channel is a copy of the vector element,
         // so must be always deleted after processing
         pCvMatDelete(channel);
     end;

    // verify histogram totals
    {$IFDEF DEBUG}
    for c:=0 to fNchannels-1 do
    begin
      tot:=0;
      for i:=0 to histSize-1 do
      begin
        tot:=tot+arhist[i,c];
      end;
      Assert(tot=fWidth*fHeight, 'Wrong Histogram totals');
    end;
    {$ENDIF}


    Result:=arHist;

  finally
    pCvVectorMatDelete(vecInp);
    pCvVectorMatDelete(vecChannels);
    pCvVectorintDelete(vecDims);
    pCvVectorintDelete(vecHistsize);
    pCvVectorfloatDelete(vecRanges);
  end;
end;

procedure TOCVImage.flip(flipType: TOcvFlipType);
begin
    pCvflip(internImage, internImage, Ord(flipType));
end;

function TOCVImage.rotate(angle: Single): TOCVImage;
var
  angleInt: Integer;
  center:  PCvPoint2f_t;
  centerS: CvPoint2fS;
  rotMat:  TOcvParamMat;
  size:    PCvSize_t;
  abs_cos: Single;
  abs_sin: Single;
  bound_w: Integer;
  bound_h: Integer;
  outImg:  TOCVImage;

  dx, dy: Double;
begin
  angleInt:=Round(angle);
  case angleInt of
  90: begin
    outImg:=clone(False, True);
    pCvrotate( internImage, outImg.PCvMatPtr, ord(TCvRotateFlags.ROTATE_90_COUNTERCLOCKWISE));
  end;
  -90: begin
    outImg:=clone(False, True);
    pCvrotate( internImage, outImg.PCvMatPtr, ord(TCvRotateFlags.ROTATE_90_CLOCKWISE));
  end;
  180: begin
    outImg:=clone(False, True);
    pCvrotate( internImage, outImg.PCvMatPtr, ord(TCvRotateFlags.ROTATE_180));
  end
  else
    // other generic angles
    begin
      center:=pCvPoint2fCreate();
      centerS.x:=(fWidth)  /2;
      centerS.y:=(fHeight) /2;

      pCvPoint2fFromStruct(center, @centerS);
      try
        rotMat:=TOcvParamMat.Create( pCvgetRotationMatrix2D(center, angle, 1) );

        abs_cos := abs(rotMat.atDbl[0,0,0]);
        abs_sin := abs(rotMat.atDbl[0,1,0]);

        bound_w := round(fHeight * abs_sin + fWidth * abs_cos);
        bound_h := round(fHeight * abs_cos + fWidth * abs_sin);
        dx:=rotMat.atDbl[0,2,0];     //pCvMatGetDouble(rotMat, 0, 2);
        rotMat.atDbl[0, 2, 0]:= dx + bound_w/2 - centerS.x;
        dy:=rotMat.atDbl[1,2,0];            //pCvMatGetDouble(rotMat, 1, 2);
        rotMat.atDbl[1, 2, 0]:= dy + bound_h/2 - centerS.y;

        outImg:=TOCVImage.Create(bound_w, bound_h, fNchannels);
        size:=CvSize_(bound_w, bound_h);
        pCvwarpAffine(internImage, outImg.PCvMatPtr, rotMat.PCvMatPtr, size);
      finally
        pCvPoint2fDelete(center);
        pCvSizeDelete(size);
        rotMat.Free;
      end;
    end;
  end;

  Result:=outImg;
end;


procedure TOCVImage.sharpen(scale: Single);
var
  kernel: TOcvParamMat; //  PCvMat_t;
  img1, img2: PCvMat_t;
  itype: Integer;

begin
  kernel:=TOcvParamMat.Create(3,3, cvSingle);
  // fill Kernel
  Kernel.at[0,0,0] :=  -1 * scale;
  Kernel.at[0,1,0] :=  -1 * scale;
  Kernel.at[0,2,0] :=  -1 * scale;
  Kernel.at[1,0,0] :=  -1 * scale;
  Kernel.at[1,1,0] :=   8 * scale;
  Kernel.at[1,2,0] :=  -1 * scale;
  Kernel.at[2,0,0] :=  -1 * scale;
  Kernel.at[2,1,0] :=  -1 * scale;
  Kernel.at[2,2,0] :=  -1 * scale;

  try
    img1:=pCvMatClone(internImage);
    pCvfilter2D(internImage, img1, -1, kernel.PCvMatPtr); // other parameters optional
    kernel.Free;
    case fNchannels of
      1: itype:=CV_32FC1;
      2: itype:=CV_32FC2;
      3: itype:=CV_32FC3;
    end;
    img2:=pCvMatImageCreate(fWidth, fHeight, itype);
    pCvadd(internImage, img1, img2);
    pCvconvertScaleAbs(img2, internImage);
  finally
    if img1<>nil then
      pCvMatDelete(img1);
    if img2<>nil then
      pCvMatDelete(img2);
  end;
end;

function TOCVImage.edges(threshold1: Double; threshold2: Double; apertureSize: Integer; L2Gradient: Boolean): TOCVImage;
var
  outImg: TOCVImage;
begin
  outImg:=clone(true);
  pCvCanny(internImage, outImg.PCvMatPtr, threshold1, threshold2, apertureSize, L2Gradient);
  Result:=outImg;
end;

function TOCVImage.threshold(threshold: Integer; maxval: Integer; thrType: integer): TOCVImage;
var
  outImg: TOCVImage;
begin
  outImg:=clone(True);
  pCvthreshold(outImg.PCvMatPtr, outImg.PCvMatPtr, threshold, maxval, thrType);
  Result:=outImg;
end;

procedure TOCVImage.setBrightness(brightnessVal: Double);
begin
  pCvMatScalarOp(internImage,'*', brightnessVal);
end;

procedure TOCVImage.setSaturation(saturationVal: Double);
var
  iplimg: PIplImage;
  isHsv: Boolean;
  modelInd: Integer;
  convertFlag, deconvertFlag: Integer;
  hsvMat: PCvMat_t;
  vecChan: PCvvector_Mat;
  satChannel: PCvMat_t;
begin
  if fNchannels<3 then Exit;
  try
    iplimg:=pCvMatToIplImage(internImage);
    hsvMat:=nil;
    isHsv:=False;
    modelInd:= IndexStr(iplimg.ColorModel, VALID_COLOR_MODELS);
    if (modelInd = -1) then
      raise Exception.Create('setSaturation works only on BGR,RGB,HSV images');
    if VALID_COLOR_MODELS[modelInd]<>'HSV' then
    begin
      hsvMat:=pCvMatClone(internImage);
      if VALID_COLOR_MODELS[modelInd] = 'BGR' then
      begin
          convertFlag:=ord(COLOR_BGR2HSV);
          deconvertFlag:=Ord(COLOR_HSV2BGR);
      end;
      if VALID_COLOR_MODELS[modelInd] ='RGB' then
      begin
          convertFlag:=ord(COLOR_RGB2HSV);
          deconvertFlag:=Ord(COLOR_HSV2RGB);
      end;
      pCvcvtColor(internImage, hsvMat, convertFlag);
    end else
    begin
      isHsv:=True;
      hsvMat:=internImage;
    end;
    vecChan:=pCvVectorMatCreate(fNchannels);
    // split HSV image in 3 channels
    pCvsplit(hsvMat, vecChan);
    // channel 2 is saturation in HSV model
    // with get operation obtain a workable copy of vector Mat element
    satChannel:=pCvVectorMatGet(vecChan, 1);
    pCvMatScalarOp(satChannel,'*', saturationVal);
    // update the vector
    pCvVectorMatSet(vecChan, 1, satChannel);
    // merge channels in resulting image
    pCvmerge(vecChan, hsvMat);
    // convert backward to original color model
    if isHsv=False then
    begin
      pCvcvtColor(hsvMat, internImage, deconvertFlag);
    end;

  finally
    pCvIplImageDelete(iplimg);
    pCvVectorMatDelete(vecChan);
    pCvMatDelete(satChannel);
    if (hsvMat<>nil) and (isHsv=False) then
      pCvMatDelete(hsvMat);
  end;
end;

procedure TOCVImage.equalize();
var
  i: Integer;
  vecChan: PCvvector_Mat;
  vecChanOut: PCvvector_Mat;
  channel: PCvMat_t;
begin
  vecChan:=nil;
  vecChanOut:=nil;
  if fNchannels=1 then
  begin
     pCvequalizeHist(internImage, internImage);
     Exit;
  end;
  // equalize on every channel
  try
    vecChan:=pCvVectorMatCreate(fNchannels);
    splitChannels(vecChan);
    vecChanOut:=pCvVectorMatCreate(fNchannels);
    for i:=0 to fNchannels-1 do
    begin
      channel:=pCvVectorMatGet(vecChan, i);
      pCvequalizeHist(channel, channel);
      pCvVectorMatSet(vecChanOut, i, channel);
      // channel is a copy of the vector element,
      // so must be always deleted after processing
      pCvMatDelete(channel);
    end;
    merge(vecChanOut);
  finally
    if vecChan<>nil then
       pCvVectorMatDelete(vecChan);
    if vecChanOut<>nil then
       pCvVectorMatDelete(vecChanOut);
  end;

end;

procedure TOCVImage.setContrast(contrastVal: Double);
var
  i: Integer;
  psize: PCvSize_t;
  ptrclahe: PCvPtr_CLAHE;
  pclassClahe: PCvCLAHE_t;
  vecChan: PCvvector_Mat;
  vecChanOut: PCvvector_Mat;
  channel: PCvMat_t;
begin
try
  vecChan:=nil;
  vecChanOut:=nil;
  psize:=CvSize_(8,8);
  ptrclahe:=pCvcreateCLAHE(contrastVal, psize);
  pclassClahe:= pCvPtr_CLAHEConvert(ptrclahe);
  if fNchannels=1 then
  begin
        pCvCLAHEapply(pclassClahe, internImage, internImage );
        Exit;
  end;
  // apply contrast to every channel
  vecChan:=pCvVectorMatCreate(fNchannels);
  splitChannels(vecChan);
  vecChanOut:=pCvVectorMatCreate(fNchannels);
  for i:=0 to fNchannels-1 do
  begin
    channel:=pCvVectorMatGet(vecChan, i);
    pCvCLAHEapply(pclassClahe, channel, channel );
    pCvVectorMatSet(vecChanOut, i, channel);
    // channel is a copy of the vector element,
    // so must be always deleted after processing
    pCvMatDelete(channel);
  end;
  merge(vecChanOut);
finally
  pCvSizeDelete(psize);
  pCvPtr_CLAHEDelete(ptrclahe, pclassClahe);
  if vecChan<>nil then
     pCvVectorMatDelete(vecChan);
  if vecChanOut<>nil then
     pCvVectorMatDelete(vecChanOut);
end;
end;

procedure TOCVImage.meanStddev(var mean: TArray<System.Single>; var stddev: TArray<System.Single>);
var
  i: Integer;
  cvmean: TOcvParamMat;
  cvstddev: TOcvParamMat;
begin
try
  SetLength(mean, fNchannels);
  SetLength(stddev, fNchannels);
  cvmean:=TOcvParamMat.CreateEmpty;
  cvstddev:=TOcvParamMat.CreateEmpty;
  // returned Mat are 4 rows 1 cols of type CV_64, i.e. double
  pCvmeanStdDev(internImage, cvmean.PCvMatPtr, cvstddev.PCvMatPtr);

  for I:=0 to fNchannels-1 do
  begin
    mean[i]  :=cvmean.at[ i, 0, 0];
    stddev[i]:=cvstddev.at[i, 0, 0];
  end;
finally
    cvmean.Free;
    cvstddev.Free;
end;
end;

function TOCVImage.map(const mapMatrix: TOcvParamMat; const outWidth: Integer; const outHeight: Integer): TOCVImage;
const
  OUT_MULTIPLIER = 4;
var
  outSize: PCvSize_t;
  w, h: Integer;
begin
  w:=outWidth;
  h:=outHeight;
  if outWidth=-1 then
    w:=fWidth * OUT_MULTIPLIER;
  if outHeight = -1 then
    h := fHeight * OUT_MULTIPLIER;
  outSize:=CvSize_(w, h);
  Result:=TOCVImage.Create(w, h, 3);

  // transform the entire original image to a map (bird-eye) image, using the calculated map matrix
  // Note that the mapped image is much greater than the original one.
  pCvwarpPerspective(internImage, Result.PCvMatPtr, mapMatrix.PCvMatPtr,
        outSize,
        ord(TCvInterpolationFlags.INTER_LINEAR)+ord(TCvInterpolationFlags.WARP_FILL_OUTLIERS)+ord(TCvInterpolationFlags.WARP_INVERSE_MAP));
  pCvSizeDelete(outSize);
end;

procedure TOCVImage.convertFromSingle(const img32: TOcvParamMat);
  VAR
    scale, shift, diff: Double;
    minVal, maxVal: Double;
  begin
  TRY
    Assert((Img32.dataType = cvSingle)
                and ( ((self.NChannels = 1) and (Img32.NChannels = 1))  ),
                'Input must be cvSingle (32F) data type, 1 channel; output image must be 1 channel');
    Assert((img32.width = fWidth) and (img32.height = fHeight),' Input mat must have same width and height of image');

    pcvMinMaxLoc(img32.PCvMatPtr,  @minVal, @maxVal);
    diff := maxVal - minVal;
    if diff <>0 then
        scale := 255/diff
    else
        scale := 0;
    shift := -minVal*scale;

    pCvconvertScaleAbs (img32.PCvMatPtr, internImage, scale, shift);
  Except
        on E: Exception do
        begin
             raise  Exception.Create('ConvertFromSingle- error - ' + e.Message);
        end;

  END; //try

end;

function TOCVImage.getPenOcvColor(): PCvScalar_t;
begin
 // color as BGR
 {$ifdef LCL}
   Result:=CvScalar_(Blue(fPen.color), Green(fPen.color), Red(fPen.color),  0);
 {$else}
   Result:=CvScalar_(GetBValue(fPen.color), GetGValue(fPen.color), GetRValue(fPen.color), 0);
 {$endif}
end;

procedure TOCVImage.line(const p1: TPoint; const p2: TPoint);
var
  cvpt1, cvpt2: PCvPoint_t;
  cvcolor: PCvScalar_t;
begin
try
  cvcolor:=getPenOcvColor();
  cvpt1:=cvPoint_(p1.X, p1.Y);
  cvpt2:=cvPoint_(p2.X, p2.Y);
  pcvLine(internImage, cvpt1, cvpt2, cvcolor, fPen.Width);
finally
  pCvPointDelete(cvpt1);
  pCvPointDelete(cvpt2);
  pCvScalarDelete(cvcolor);
end;
end;

procedure TOCVImage.rectangle(const p1: TPoint; const p2: TPoint; isFilled: Boolean);
var
  cvpt1, cvpt2: PCvPoint_t;
  cvcolor: PCvScalar_t;
  thick: Integer;
begin
try
  cvcolor:=getPenOcvColor();
  cvpt1:=cvPoint_(p1.X, p1.Y);
  cvpt2:=cvPoint_(p2.X, p2.Y);
  thick:=fPen.Width;
  if isFilled then
    thick := OPENCVWrapper.FILLED;
  pcvRectangle(internImage, cvpt1,cvpt2, cvcolor, thick);
finally
  pCvPointDelete(cvpt1);
  pCvPointDelete(cvpt2);
  pCvScalarDelete(cvcolor);
end;
end;

procedure TOCVImage.circle(const pcenter: TPoint; radius: Integer; isFilled: Boolean);
var
  cvpt1: PCvPoint_t;
  cvcolor: PCvScalar_t;
  thick: Integer;
begin
try
  cvcolor:=getPenOcvColor();
  cvpt1:=cvPoint_(pcenter.X, pcenter.Y);
  thick:=fPen.Width;
  if isFilled then
    thick := OPENCVWrapper.FILLED;
  pCvcircle(internImage, cvpt1,radius, cvcolor, thick);
finally
  pCvPointDelete(cvpt1);
  pCvScalarDelete(cvcolor);
end;
end;

procedure TOCVImage.ellipse(const pcenter: TPoint; axisLength1: Integer; axisLength2: Integer; angle: Double;
          startAngle: Double; endAngle: Double; isFilled: Boolean);
var
  cvpt1: PCvPoint_t;
  axes: PCvSize_t;
  cvcolor: PCvScalar_t;
  thick: Integer;
begin
try
  cvcolor:=getPenOcvColor();
  cvpt1:=cvPoint_(pcenter.X, pcenter.Y);
  axes:=CvSize_(axisLength1, axisLength2);
  thick:=fPen.Width;
  if isFilled then
    thick := OPENCVWrapper.FILLED;
  pCvellipse(internImage, cvpt1, axes, angle, startAngle, endAngle,  cvcolor, thick);
finally
  pCvPointDelete(cvpt1);
  pCvSizeDelete(axes);
  pCvScalarDelete(cvcolor);
end;
end;

procedure TOCVImage.polylines(const pts: TArray<TPoint>; isClosed: Boolean = True);
var
  i: Integer;
  cvcolor: PCvScalar_t;
  cvvecpts: PCvvector_Mat;
  cvpts: TOcvParamMat;
begin
try
  cvcolor:=getPenOcvColor();
  // Mat with N rows as number of points; 1 column; integer type; 2 channels
  cvpts:=TOcvParamMat.Create(1, Length(pts), TOcvDataType.cvInteger, 2);
  for i:=0 to high(pts) do
  begin
    cvpts.atInt[i,0,0]:=pts[i].X;
    cvpts.atInt[i,0,1]:=pts[i].Y;
  end;
  cvvecpts:=pCvVectorMatCreate(1);
  pCvVectorMatSet(cvvecpts, 0, cvpts.PCvMatPtr);

  pCvpolylines(internImage, cvvecpts, isClosed, cvcolor, fPen.Width);
finally
  pCvVectorMatDelete(cvvecpts);
  pCvScalarDelete(cvcolor);

  cvpts.Free;
end;
end;



{$ENDREGION}

end.

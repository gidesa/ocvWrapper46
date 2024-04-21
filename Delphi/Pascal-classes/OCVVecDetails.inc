procedure TOcvVector<T, U>.setOcvFunctions();
begin
  ocvFromArray:=nil;
  ocvToArray:=nil; 
  if TypeInfo(T) = TypeInfo(PCvMatShape) then
  begin
    ocvCreate:= @pCvMatShapeCreate;
    ocvDelete:= @pCvMatShapeDelete;
    ocvLength:= @pCvMatShapeLength;
    ocvGet   := @pCvMatShapeGet;
    ocvSet   := @pCvMatShapeSet;   
    ocvToArray  :=@PCvMatShapeToArray;
    ocvFromArray:=@PCvMatShapeFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_CameraParams) then
  begin
    ocvCreate:= @pCvVectordetail_CameraParamsCreate;
    ocvDelete:= @pCvVectordetail_CameraParamsDelete;
    ocvLength:= @pCvVectordetail_CameraParamsLength;
    ocvGet   := @pCvVectordetail_CameraParamsGet;
    ocvSet   := @pCvVectordetail_CameraParamsSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_DMatch) then
  begin
    ocvCreate:= @pCvVectorDMatchCreate;
    ocvDelete:= @pCvVectorDMatchDelete;
    ocvLength:= @pCvVectorDMatchLength;
    ocvGet   := @pCvVectorDMatchGet;
    ocvSet   := @pCvVectorDMatchSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_ImageFeatures) then
  begin
    ocvCreate:= @pCvVectordetail_ImageFeaturesCreate;
    ocvDelete:= @pCvVectordetail_ImageFeaturesDelete;
    ocvLength:= @pCvVectordetail_ImageFeaturesLength;
    ocvGet   := @pCvVectordetail_ImageFeaturesGet;
    ocvSet   := @pCvVectordetail_ImageFeaturesSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_KeyPoint) then
  begin
    ocvCreate:= @pCvVectorKeyPointCreate;
    ocvDelete:= @pCvVectorKeyPointDelete;
    ocvLength:= @pCvVectorKeyPointLength;
    ocvGet   := @pCvVectorKeyPointGet;
    ocvSet   := @pCvVectorKeyPointSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Mat) then
  begin
    ocvCreate:= @pCvVectorMatCreate;
    ocvDelete:= @pCvVectorMatDelete;
    ocvLength:= @pCvVectorMatLength;
    ocvGet   := @pCvVectorMatGet;
    ocvSet   := @pCvVectorMatSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_MatShape) then
  begin
    ocvCreate:= @pCvVectorMatShapeCreate;
    ocvDelete:= @pCvVectorMatShapeDelete;
    ocvLength:= @pCvVectorMatShapeLength;
    ocvGet   := @pCvVectorMatShapeGet;
    ocvSet   := @pCvVectorMatShapeSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_MatchesInfo) then
  begin
    ocvCreate:= @pCvVectordetail_MatchesInfoCreate;
    ocvDelete:= @pCvVectordetail_MatchesInfoDelete;
    ocvLength:= @pCvVectordetail_MatchesInfoLength;
    ocvGet   := @pCvVectordetail_MatchesInfoGet;
    ocvSet   := @pCvVectordetail_MatchesInfoSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Point) then
  begin
    ocvCreate:= @pCvVectorPointCreate;
    ocvDelete:= @pCvVectorPointDelete;
    ocvLength:= @pCvVectorPointLength;
    ocvGet   := @pCvVectorPointGet;
    ocvSet   := @pCvVectorPointSet;   
    ocvToArray  :=@PCvVectorPointToArray;
    ocvFromArray:=@PCvVectorPointFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Point2f) then
  begin
    ocvCreate:= @pCvVectorPoint2fCreate;
    ocvDelete:= @pCvVectorPoint2fDelete;
    ocvLength:= @pCvVectorPoint2fLength;
    ocvGet   := @pCvVectorPoint2fGet;
    ocvSet   := @pCvVectorPoint2fSet;   
    ocvToArray  :=@PCvVectorPoint2fToArray;
    ocvFromArray:=@PCvVectorPoint2fFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Range) then
  begin
    ocvCreate:= @pCvVectorRangeCreate;
    ocvDelete:= @pCvVectorRangeDelete;
    ocvLength:= @pCvVectorRangeLength;
    ocvGet   := @pCvVectorRangeGet;
    ocvSet   := @pCvVectorRangeSet;   
    ocvToArray  :=@PCvVectorRangeToArray;
    ocvFromArray:=@PCvVectorRangeFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Rect) then
  begin
    ocvCreate:= @pCvVectorRectCreate;
    ocvDelete:= @pCvVectorRectDelete;
    ocvLength:= @pCvVectorRectLength;
    ocvGet   := @pCvVectorRectGet;
    ocvSet   := @pCvVectorRectSet;   
    ocvToArray  :=@PCvVectorRectToArray;
    ocvFromArray:=@PCvVectorRectFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Rect2d) then
  begin
    ocvCreate:= @pCvVectorRect2dCreate;
    ocvDelete:= @pCvVectorRect2dDelete;
    ocvLength:= @pCvVectorRect2dLength;
    ocvGet   := @pCvVectorRect2dGet;
    ocvSet   := @pCvVectorRect2dSet;   
    ocvToArray  :=@PCvVectorRect2dToArray;
    ocvFromArray:=@PCvVectorRect2dFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_RotatedRect) then
  begin
    ocvCreate:= @pCvVectorRotatedRectCreate;
    ocvDelete:= @pCvVectorRotatedRectDelete;
    ocvLength:= @pCvVectorRotatedRectLength;
    ocvGet   := @pCvVectorRotatedRectGet;
    ocvSet   := @pCvVectorRotatedRectSet;   
    ocvToArray  :=@PCvVectorRotatedRectToArray;
    ocvFromArray:=@PCvVectorRotatedRectFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Size) then
  begin
    ocvCreate:= @pCvVectorSizeCreate;
    ocvDelete:= @pCvVectorSizeDelete;
    ocvLength:= @pCvVectorSizeLength;
    ocvGet   := @pCvVectorSizeGet;
    ocvSet   := @pCvVectorSizeSet;   
    ocvToArray  :=@PCvVectorSizeToArray;
    ocvFromArray:=@PCvVectorSizeFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_String) then
  begin
    ocvCreate:= @pCvVectorStringCreate;
    ocvDelete:= @pCvVectorStringDelete;
    ocvLength:= @pCvVectorStringLength;
    ocvGet   := @pCvVectorStringGet;
    ocvSet   := @pCvVectorStringSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Target) then
  begin
    ocvCreate:= @pCvVectordnn_TargetCreate;
    ocvDelete:= @pCvVectordnn_TargetDelete;
    ocvLength:= @pCvVectordnn_TargetLength;
    ocvGet   := @pCvVectordnn_TargetGet;
    ocvSet   := @pCvVectordnn_TargetSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_UMat) then
  begin
    ocvCreate:= @pCvVectorUMatCreate;
    ocvDelete:= @pCvVectorUMatDelete;
    ocvLength:= @pCvVectorUMatLength;
    ocvGet   := @pCvVectorUMatGet;
    ocvSet   := @pCvVectorUMatSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Vec4f) then
  begin
    ocvCreate:= @pCvVectorVec4fCreate;
    ocvDelete:= @pCvVectorVec4fDelete;
    ocvLength:= @pCvVectorVec4fLength;
    ocvGet   := @pCvVectorVec4fGet;
    ocvSet   := @pCvVectorVec4fSet;   
    ocvToArray  :=@PCvVectorVec4fToArray;
    ocvFromArray:=@PCvVectorVec4fFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_Vec6f) then
  begin
    ocvCreate:= @pCvVectorVec6fCreate;
    ocvDelete:= @pCvVectorVec6fDelete;
    ocvLength:= @pCvVectorVec6fLength;
    ocvGet   := @pCvVectorVec6fGet;
    ocvSet   := @pCvVectorVec6fSet;   
    ocvToArray  :=@PCvVectorVec6fToArray;
    ocvFromArray:=@PCvVectorVec6fFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_char) then
  begin
    ocvCreate:= @pCvVectorcharCreate;
    ocvDelete:= @pCvVectorcharDelete;
    ocvLength:= @pCvVectorcharLength;
    ocvGet   := @pCvVectorcharGet;
    ocvSet   := @pCvVectorcharSet;   
    ocvToArray  :=@PCvVectorcharToArray;
    ocvFromArray:=@PCvVectorcharFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_double) then
  begin
    ocvCreate:= @pCvVectordoubleCreate;
    ocvDelete:= @pCvVectordoubleDelete;
    ocvLength:= @pCvVectordoubleLength;
    ocvGet   := @pCvVectordoubleGet;
    ocvSet   := @pCvVectordoubleSet;   
    ocvToArray  :=@PCvVectordoubleToArray;
    ocvFromArray:=@PCvVectordoubleFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_float) then
  begin
    ocvCreate:= @pCvVectorfloatCreate;
    ocvDelete:= @pCvVectorfloatDelete;
    ocvLength:= @pCvVectorfloatLength;
    ocvGet   := @pCvVectorfloatGet;
    ocvSet   := @pCvVectorfloatSet;   
    ocvToArray  :=@PCvVectorfloatToArray;
    ocvFromArray:=@PCvVectorfloatFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_int) then
  begin
    ocvCreate:= @pCvVectorintCreate;
    ocvDelete:= @pCvVectorintDelete;
    ocvLength:= @pCvVectorintLength;
    ocvGet   := @pCvVectorintGet;
    ocvSet   := @pCvVectorintSet;   
    ocvToArray  :=@PCvVectorintToArray;
    ocvFromArray:=@PCvVectorintFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector__string) then
  begin
    ocvCreate:= @pCvVector_stringCreate;
    ocvDelete:= @pCvVector_stringDelete;
    ocvLength:= @pCvVector_stringLength;
    ocvGet   := @pCvVector_stringGet;
    ocvSet   := @pCvVector_stringSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_uchar) then
  begin
    ocvCreate:= @pCvVectorucharCreate;
    ocvDelete:= @pCvVectorucharDelete;
    ocvLength:= @pCvVectorucharLength;
    ocvGet   := @pCvVectorucharGet;
    ocvSet   := @pCvVectorucharSet;   
    ocvToArray  :=@PCvVectorucharToArray;
    ocvFromArray:=@PCvVectorucharFromArray;

    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_DMatch) then
  begin
    ocvCreate:= @pCvVectorvector_DMatchCreate;
    ocvDelete:= @pCvVectorvector_DMatchDelete;
    ocvLength:= @pCvVectorvector_DMatchLength;
    ocvGet   := @pCvVectorvector_DMatchGet;
    ocvSet   := @pCvVectorvector_DMatchSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_KeyPoint) then
  begin
    ocvCreate:= @pCvVectorvector_KeyPointCreate;
    ocvDelete:= @pCvVectorvector_KeyPointDelete;
    ocvLength:= @pCvVectorvector_KeyPointLength;
    ocvGet   := @pCvVectorvector_KeyPointGet;
    ocvSet   := @pCvVectorvector_KeyPointSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_Mat) then
  begin
    ocvCreate:= @pCvVectorvector_MatCreate;
    ocvDelete:= @pCvVectorvector_MatDelete;
    ocvLength:= @pCvVectorvector_MatLength;
    ocvGet   := @pCvVectorvector_MatGet;
    ocvSet   := @pCvVectorvector_MatSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_MatShape) then
  begin
    ocvCreate:= @pCvVectorvector_MatShapeCreate;
    ocvDelete:= @pCvVectorvector_MatShapeDelete;
    ocvLength:= @pCvVectorvector_MatShapeLength;
    ocvGet   := @pCvVectorvector_MatShapeGet;
    ocvSet   := @pCvVectorvector_MatShapeSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_Point) then
  begin
    ocvCreate:= @pCvVectorvector_PointCreate;
    ocvDelete:= @pCvVectorvector_PointDelete;
    ocvLength:= @pCvVectorvector_PointLength;
    ocvGet   := @pCvVectorvector_PointGet;
    ocvSet   := @pCvVectorvector_PointSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_Point2f) then
  begin
    ocvCreate:= @pCvVectorvector_Point2fCreate;
    ocvDelete:= @pCvVectorvector_Point2fDelete;
    ocvLength:= @pCvVectorvector_Point2fLength;
    ocvGet   := @pCvVectorvector_Point2fGet;
    ocvSet   := @pCvVectorvector_Point2fSet;   
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvvector_vector_char) then
  begin
    ocvCreate:= @pCvVectorvector_charCreate;
    ocvDelete:= @pCvVectorvector_charDelete;
    ocvLength:= @pCvVectorvector_charLength;
    ocvGet   := @pCvVectorvector_charGet;
    ocvSet   := @pCvVectorvector_charSet;   
    Exit;
  end ;
  raise Exception.Create('Unrecognized Opencv vector type');
end;

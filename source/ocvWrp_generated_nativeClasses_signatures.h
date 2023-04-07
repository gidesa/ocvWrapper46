#ifdef __cplusplus
extern "C" {
#endif
Size_t*   pCvSizeCreate();
void     pCvSizeDelete( Size_t* wrapper);
void     pCvSizeToStruct( Size_t* wrapper, CvSizeS* dest);
void     pCvSizeFromStruct( Size_t* wrapper, CvSizeS* dest);
Rect_t*   pCvRectCreate();
void     pCvRectDelete( Rect_t* wrapper);
void     pCvRectToStruct( Rect_t* wrapper, CvRectS* dest);
void     pCvRectFromStruct( Rect_t* wrapper, CvRectS* dest);
Range_t*   pCvRangeCreate();
void     pCvRangeDelete( Range_t* wrapper);
void     pCvRangeToStruct( Range_t* wrapper, CvRangeS* dest);
void     pCvRangeFromStruct( Range_t* wrapper, CvRangeS* dest);
CvSlice_t*   pCvCvSliceCreate();
void     pCvCvSliceDelete( CvSlice_t* wrapper);
void     pCvCvSliceToStruct( CvSlice_t* wrapper, CvSliceS* dest);
void     pCvCvSliceFromStruct( CvSlice_t* wrapper, CvSliceS* dest);
Point_t*   pCvPointCreate();
void     pCvPointDelete( Point_t* wrapper);
void     pCvPointToStruct( Point_t* wrapper, CvPointS* dest);
void     pCvPointFromStruct( Point_t* wrapper, CvPointS* dest);
Point2f_t*   pCvPoint2fCreate();
void     pCvPoint2fDelete( Point2f_t* wrapper);
void     pCvPoint2fToStruct( Point2f_t* wrapper, CvPoint2fS* dest);
void     pCvPoint2fFromStruct( Point2f_t* wrapper, CvPoint2fS* dest);
Point2d_t*   pCvPoint2dCreate();
void     pCvPoint2dDelete( Point2d_t* wrapper);
void     pCvPoint2dToStruct( Point2d_t* wrapper, CvPoint2dS* dest);
void     pCvPoint2dFromStruct( Point2d_t* wrapper, CvPoint2dS* dest);
Vec2d_t*   pCvVec2dCreate();
void     pCvVec2dDelete( Vec2d_t* wrapper);
void     pCvVec2dToStruct( Vec2d_t* wrapper, CvVec2dS* dest);
void     pCvVec2dFromStruct( Vec2d_t* wrapper, CvVec2dS* dest);
Vec3d_t*   pCvVec3dCreate();
void     pCvVec3dDelete( Vec3d_t* wrapper);
void     pCvVec3dToStruct( Vec3d_t* wrapper, CvVec3dS* dest);
void     pCvVec3dFromStruct( Vec3d_t* wrapper, CvVec3dS* dest);
Vec3b_t*   pCvVec3bCreate();
void     pCvVec3bDelete( Vec3b_t* wrapper);
void     pCvVec3bToStruct( Vec3b_t* wrapper, CvVec3bS* dest);
void     pCvVec3bFromStruct( Vec3b_t* wrapper, CvVec3bS* dest);
Vec4f_t*   pCvVec4fCreate();
void     pCvVec4fDelete( Vec4f_t* wrapper);
void     pCvVec4fToStruct( Vec4f_t* wrapper, CvVec4fS* dest);
void     pCvVec4fFromStruct( Vec4f_t* wrapper, CvVec4fS* dest);
Vec6f_t*   pCvVec6fCreate();
void     pCvVec6fDelete( Vec6f_t* wrapper);
void     pCvVec6fToStruct( Vec6f_t* wrapper, CvVec6fS* dest);
void     pCvVec6fFromStruct( Vec6f_t* wrapper, CvVec6fS* dest);
Scalar_t*   pCvScalarCreate();
void     pCvScalarDelete( Scalar_t* wrapper);
void     pCvScalarToStruct( Scalar_t* wrapper, CvScalarS* dest);
void     pCvScalarFromStruct( Scalar_t* wrapper, CvScalarS* dest);
RotatedRect_t*   pCvRotatedRectCreate();
void     pCvRotatedRectDelete( RotatedRect_t* wrapper);
void     pCvRotatedRectToStruct( RotatedRect_t* wrapper, CvRotatedRectS* dest);
void     pCvRotatedRectFromStruct( RotatedRect_t* wrapper, CvRotatedRectS* dest);
TermCriteria_t*   pCvTermCriteriaCreate();
void     pCvTermCriteriaDelete( TermCriteria_t* wrapper);
void     pCvTermCriteriaToStruct( TermCriteria_t* wrapper, CvTermCriteriaS* dest);
void     pCvTermCriteriaFromStruct( TermCriteria_t* wrapper, CvTermCriteriaS* dest);
CvTermCriteria_t*   pCvCvTermCriteriaCreate();
void     pCvCvTermCriteriaDelete( CvTermCriteria_t* wrapper);
void     pCvCvTermCriteriaToStruct( CvTermCriteria_t* wrapper, CvTermCriteriaS* dest);
void     pCvCvTermCriteriaFromStruct( CvTermCriteria_t* wrapper, CvTermCriteriaS* dest);
Moments_t*   pCvMomentsCreate();
void     pCvMomentsDelete( Moments_t* wrapper);
void     pCvMomentsToStruct( Moments_t* wrapper, CvMomentsS* dest);
void     pCvMomentsFromStruct( Moments_t* wrapper, CvMomentsS* dest);
IndexParams_t*   pCvIndexParamsCreate();
void     pCvIndexParamsDelete( IndexParams_t* wrapper);
SearchParams_t*   pCvSearchParamsCreate();
void     pCvSearchParamsDelete( SearchParams_t* wrapper);
LayerId_t*   pCvLayerIdCreate();
void     pCvLayerIdDelete( LayerId_t* wrapper);
RNG_t*   pCvRNGCreate();
void     pCvRNGDelete( RNG_t* wrapper);
Size2f_t*   pCvSize2fCreate();
void     pCvSize2fDelete( Size2f_t* wrapper);
void     pCvSize2fToStruct( Size2f_t* wrapper, CvSize2fS* dest);
void     pCvSize2fFromStruct( Size2f_t* wrapper, CvSize2fS* dest);
Vec2i_t*   pCvVec2iCreate();
void     pCvVec2iDelete( Vec2i_t* wrapper);
void     pCvVec2iToStruct( Vec2i_t* wrapper, CvVec2iS* dest);
void     pCvVec2iFromStruct( Vec2i_t* wrapper, CvVec2iS* dest);
Vec3i_t*   pCvVec3iCreate();
void     pCvVec3iDelete( Vec3i_t* wrapper);
void     pCvVec3iToStruct( Vec3i_t* wrapper, CvVec3iS* dest);
void     pCvVec3iFromStruct( Vec3i_t* wrapper, CvVec3iS* dest);
Rect2d_t*   pCvRect2dCreate();
void     pCvRect2dDelete( Rect2d_t* wrapper);
void     pCvRect2dToStruct( Rect2d_t* wrapper, CvRect2dS* dest);
void     pCvRect2dFromStruct( Rect2d_t* wrapper, CvRect2dS* dest);
MatShape*   pCvMatShapeCreate(int n);
void   pCvMatShapeDelete(MatShape* wrapper);
int   pCvMatShapeLength(MatShape* wrapper);
int   pCvMatShapeGet(MatShape* wrapper, int index);
int   pCvMatShapeSet(MatShape* wrapper, int index, int value);
void   pCvMatShapeToArray(MatShape* wrapper, int* outstructs);
void   pCvMatShapeFromArray(MatShape* wrapper, int* inpstructs);
vector_CameraParams*   pCvVectordetail_CameraParamsCreate(int n);
void   pCvVectordetail_CameraParamsDelete(vector_CameraParams* wrapper);
int   pCvVectordetail_CameraParamsLength(vector_CameraParams* wrapper);
detail_CameraParams_t*   pCvVectordetail_CameraParamsGet(vector_CameraParams* wrapper, int index);
detail_CameraParams_t*   pCvVectordetail_CameraParamsSet(vector_CameraParams* wrapper, int index, detail_CameraParams_t* value);
vector_DMatch*   pCvVectorDMatchCreate(int n);
void   pCvVectorDMatchDelete(vector_DMatch* wrapper);
int   pCvVectorDMatchLength(vector_DMatch* wrapper);
DMatch_t*   pCvVectorDMatchGet(vector_DMatch* wrapper, int index);
DMatch_t*   pCvVectorDMatchSet(vector_DMatch* wrapper, int index, DMatch_t* value);
vector_ImageFeatures*   pCvVectordetail_ImageFeaturesCreate(int n);
void   pCvVectordetail_ImageFeaturesDelete(vector_ImageFeatures* wrapper);
int   pCvVectordetail_ImageFeaturesLength(vector_ImageFeatures* wrapper);
detail_ImageFeatures_t*   pCvVectordetail_ImageFeaturesGet(vector_ImageFeatures* wrapper, int index);
detail_ImageFeatures_t*   pCvVectordetail_ImageFeaturesSet(vector_ImageFeatures* wrapper, int index, detail_ImageFeatures_t* value);
vector_KeyPoint*   pCvVectorKeyPointCreate(int n);
void   pCvVectorKeyPointDelete(vector_KeyPoint* wrapper);
int   pCvVectorKeyPointLength(vector_KeyPoint* wrapper);
KeyPoint_t*   pCvVectorKeyPointGet(vector_KeyPoint* wrapper, int index);
KeyPoint_t*   pCvVectorKeyPointSet(vector_KeyPoint* wrapper, int index, KeyPoint_t* value);
vector_Mat*   pCvVectorMatCreate(int n);
void   pCvVectorMatDelete(vector_Mat* wrapper);
int   pCvVectorMatLength(vector_Mat* wrapper);
Mat_t*   pCvVectorMatGet(vector_Mat* wrapper, int index);
Mat_t*   pCvVectorMatSet(vector_Mat* wrapper, int index, Mat_t* value);
vector_MatShape*   pCvVectorMatShapeCreate(int n);
void   pCvVectorMatShapeDelete(vector_MatShape* wrapper);
int   pCvVectorMatShapeLength(vector_MatShape* wrapper);
MatShape*   pCvVectorMatShapeGet(vector_MatShape* wrapper, int index);
MatShape*   pCvVectorMatShapeSet(vector_MatShape* wrapper, int index, MatShape* value);
vector_MatchesInfo*   pCvVectordetail_MatchesInfoCreate(int n);
void   pCvVectordetail_MatchesInfoDelete(vector_MatchesInfo* wrapper);
int   pCvVectordetail_MatchesInfoLength(vector_MatchesInfo* wrapper);
detail_MatchesInfo_t*   pCvVectordetail_MatchesInfoGet(vector_MatchesInfo* wrapper, int index);
detail_MatchesInfo_t*   pCvVectordetail_MatchesInfoSet(vector_MatchesInfo* wrapper, int index, detail_MatchesInfo_t* value);
vector_Point*   pCvVectorPointCreate(int n);
void   pCvVectorPointDelete(vector_Point* wrapper);
int   pCvVectorPointLength(vector_Point* wrapper);
Point_t*   pCvVectorPointGet(vector_Point* wrapper, int index);
Point_t*   pCvVectorPointSet(vector_Point* wrapper, int index, Point_t* value);
void   pCvVectorPointToArray(vector_Point* wrapper, CvPointS* outstructs);
void   pCvVectorPointFromArray(vector_Point* wrapper, CvPointS* inpstructs);
vector_Point2f*   pCvVectorPoint2fCreate(int n);
void   pCvVectorPoint2fDelete(vector_Point2f* wrapper);
int   pCvVectorPoint2fLength(vector_Point2f* wrapper);
Point2f_t*   pCvVectorPoint2fGet(vector_Point2f* wrapper, int index);
Point2f_t*   pCvVectorPoint2fSet(vector_Point2f* wrapper, int index, Point2f_t* value);
void   pCvVectorPoint2fToArray(vector_Point2f* wrapper, CvPoint2fS* outstructs);
void   pCvVectorPoint2fFromArray(vector_Point2f* wrapper, CvPoint2fS* inpstructs);
vector_Range*   pCvVectorRangeCreate(int n);
void   pCvVectorRangeDelete(vector_Range* wrapper);
int   pCvVectorRangeLength(vector_Range* wrapper);
Range_t*   pCvVectorRangeGet(vector_Range* wrapper, int index);
Range_t*   pCvVectorRangeSet(vector_Range* wrapper, int index, Range_t* value);
void   pCvVectorRangeToArray(vector_Range* wrapper, CvRangeS* outstructs);
void   pCvVectorRangeFromArray(vector_Range* wrapper, CvRangeS* inpstructs);
vector_Rect*   pCvVectorRectCreate(int n);
void   pCvVectorRectDelete(vector_Rect* wrapper);
int   pCvVectorRectLength(vector_Rect* wrapper);
Rect_t*   pCvVectorRectGet(vector_Rect* wrapper, int index);
Rect_t*   pCvVectorRectSet(vector_Rect* wrapper, int index, Rect_t* value);
void   pCvVectorRectToArray(vector_Rect* wrapper, CvRectS* outstructs);
void   pCvVectorRectFromArray(vector_Rect* wrapper, CvRectS* inpstructs);
vector_Rect2d*   pCvVectorRect2dCreate(int n);
void   pCvVectorRect2dDelete(vector_Rect2d* wrapper);
int   pCvVectorRect2dLength(vector_Rect2d* wrapper);
Rect2d_t*   pCvVectorRect2dGet(vector_Rect2d* wrapper, int index);
Rect2d_t*   pCvVectorRect2dSet(vector_Rect2d* wrapper, int index, Rect2d_t* value);
void   pCvVectorRect2dToArray(vector_Rect2d* wrapper, CvRect2dS* outstructs);
void   pCvVectorRect2dFromArray(vector_Rect2d* wrapper, CvRect2dS* inpstructs);
vector_RotatedRect*   pCvVectorRotatedRectCreate(int n);
void   pCvVectorRotatedRectDelete(vector_RotatedRect* wrapper);
int   pCvVectorRotatedRectLength(vector_RotatedRect* wrapper);
RotatedRect_t*   pCvVectorRotatedRectGet(vector_RotatedRect* wrapper, int index);
RotatedRect_t*   pCvVectorRotatedRectSet(vector_RotatedRect* wrapper, int index, RotatedRect_t* value);
void   pCvVectorRotatedRectToArray(vector_RotatedRect* wrapper, CvRotatedRectS* outstructs);
void   pCvVectorRotatedRectFromArray(vector_RotatedRect* wrapper, CvRotatedRectS* inpstructs);
vector_Size*   pCvVectorSizeCreate(int n);
void   pCvVectorSizeDelete(vector_Size* wrapper);
int   pCvVectorSizeLength(vector_Size* wrapper);
Size_t*   pCvVectorSizeGet(vector_Size* wrapper, int index);
Size_t*   pCvVectorSizeSet(vector_Size* wrapper, int index, Size_t* value);
void   pCvVectorSizeToArray(vector_Size* wrapper, CvSizeS* outstructs);
void   pCvVectorSizeFromArray(vector_Size* wrapper, CvSizeS* inpstructs);
vector_String*   pCvVectorStringCreate(int n);
void   pCvVectorStringDelete(vector_String* wrapper);
int   pCvVectorStringLength(vector_String* wrapper);
string_t*   pCvVectorStringGet(vector_String* wrapper, int index);
string_t*   pCvVectorStringSet(vector_String* wrapper, int index, string_t* value);
vector_Target*   pCvVectordnn_TargetCreate(int n);
void   pCvVectordnn_TargetDelete(vector_Target* wrapper);
int   pCvVectordnn_TargetLength(vector_Target* wrapper);
dnn_Target_t*   pCvVectordnn_TargetGet(vector_Target* wrapper, int index);
dnn_Target_t*   pCvVectordnn_TargetSet(vector_Target* wrapper, int index, dnn_Target_t* value);
vector_UMat*   pCvVectorUMatCreate(int n);
void   pCvVectorUMatDelete(vector_UMat* wrapper);
int   pCvVectorUMatLength(vector_UMat* wrapper);
UMat_t*   pCvVectorUMatGet(vector_UMat* wrapper, int index);
UMat_t*   pCvVectorUMatSet(vector_UMat* wrapper, int index, UMat_t* value);
vector_Vec4f*   pCvVectorVec4fCreate(int n);
void   pCvVectorVec4fDelete(vector_Vec4f* wrapper);
int   pCvVectorVec4fLength(vector_Vec4f* wrapper);
Vec4f_t*   pCvVectorVec4fGet(vector_Vec4f* wrapper, int index);
Vec4f_t*   pCvVectorVec4fSet(vector_Vec4f* wrapper, int index, Vec4f_t* value);
void   pCvVectorVec4fToArray(vector_Vec4f* wrapper, CvVec4fS* outstructs);
void   pCvVectorVec4fFromArray(vector_Vec4f* wrapper, CvVec4fS* inpstructs);
vector_Vec6f*   pCvVectorVec6fCreate(int n);
void   pCvVectorVec6fDelete(vector_Vec6f* wrapper);
int   pCvVectorVec6fLength(vector_Vec6f* wrapper);
Vec6f_t*   pCvVectorVec6fGet(vector_Vec6f* wrapper, int index);
Vec6f_t*   pCvVectorVec6fSet(vector_Vec6f* wrapper, int index, Vec6f_t* value);
void   pCvVectorVec6fToArray(vector_Vec6f* wrapper, CvVec6fS* outstructs);
void   pCvVectorVec6fFromArray(vector_Vec6f* wrapper, CvVec6fS* inpstructs);
vector_char*   pCvVectorcharCreate(int n);
void   pCvVectorcharDelete(vector_char* wrapper);
int   pCvVectorcharLength(vector_char* wrapper);
char   pCvVectorcharGet(vector_char* wrapper, int index);
char   pCvVectorcharSet(vector_char* wrapper, int index, char value);
void   pCvVectorcharToArray(vector_char* wrapper, char* outstructs);
void   pCvVectorcharFromArray(vector_char* wrapper, char* inpstructs);
vector_double*   pCvVectordoubleCreate(int n);
void   pCvVectordoubleDelete(vector_double* wrapper);
int   pCvVectordoubleLength(vector_double* wrapper);
double   pCvVectordoubleGet(vector_double* wrapper, int index);
double   pCvVectordoubleSet(vector_double* wrapper, int index, double value);
void   pCvVectordoubleToArray(vector_double* wrapper, double* outstructs);
void   pCvVectordoubleFromArray(vector_double* wrapper, double* inpstructs);
vector_float*   pCvVectorfloatCreate(int n);
void   pCvVectorfloatDelete(vector_float* wrapper);
int   pCvVectorfloatLength(vector_float* wrapper);
float   pCvVectorfloatGet(vector_float* wrapper, int index);
float   pCvVectorfloatSet(vector_float* wrapper, int index, float value);
void   pCvVectorfloatToArray(vector_float* wrapper, float* outstructs);
void   pCvVectorfloatFromArray(vector_float* wrapper, float* inpstructs);
vector_int*   pCvVectorintCreate(int n);
void   pCvVectorintDelete(vector_int* wrapper);
int   pCvVectorintLength(vector_int* wrapper);
int   pCvVectorintGet(vector_int* wrapper, int index);
int   pCvVectorintSet(vector_int* wrapper, int index, int value);
void   pCvVectorintToArray(vector_int* wrapper, int* outstructs);
void   pCvVectorintFromArray(vector_int* wrapper, int* inpstructs);
vector_string*   pCvVector_stringCreate(int n);
void   pCvVector_stringDelete(vector_string* wrapper);
int   pCvVector_stringLength(vector_string* wrapper);
string_t*   pCvVector_stringGet(vector_string* wrapper, int index);
string_t*   pCvVector_stringSet(vector_string* wrapper, int index, string_t* value);
vector_uchar*   pCvVectorucharCreate(int n);
void   pCvVectorucharDelete(vector_uchar* wrapper);
int   pCvVectorucharLength(vector_uchar* wrapper);
uchar   pCvVectorucharGet(vector_uchar* wrapper, int index);
uchar   pCvVectorucharSet(vector_uchar* wrapper, int index, uchar value);
void   pCvVectorucharToArray(vector_uchar* wrapper, uchar* outstructs);
void   pCvVectorucharFromArray(vector_uchar* wrapper, uchar* inpstructs);
vector_vector_DMatch*   pCvVectorvector_DMatchCreate(int n);
void   pCvVectorvector_DMatchDelete(vector_vector_DMatch* wrapper);
int   pCvVectorvector_DMatchLength(vector_vector_DMatch* wrapper);
vector_DMatch*   pCvVectorvector_DMatchGet(vector_vector_DMatch* wrapper, int index);
vector_DMatch*   pCvVectorvector_DMatchSet(vector_vector_DMatch* wrapper, int index, vector_DMatch* value);
vector_vector_KeyPoint*   pCvVectorvector_KeyPointCreate(int n);
void   pCvVectorvector_KeyPointDelete(vector_vector_KeyPoint* wrapper);
int   pCvVectorvector_KeyPointLength(vector_vector_KeyPoint* wrapper);
vector_KeyPoint*   pCvVectorvector_KeyPointGet(vector_vector_KeyPoint* wrapper, int index);
vector_KeyPoint*   pCvVectorvector_KeyPointSet(vector_vector_KeyPoint* wrapper, int index, vector_KeyPoint* value);
vector_vector_Mat*   pCvVectorvector_MatCreate(int n);
void   pCvVectorvector_MatDelete(vector_vector_Mat* wrapper);
int   pCvVectorvector_MatLength(vector_vector_Mat* wrapper);
vector_Mat*   pCvVectorvector_MatGet(vector_vector_Mat* wrapper, int index);
vector_Mat*   pCvVectorvector_MatSet(vector_vector_Mat* wrapper, int index, vector_Mat* value);
vector_vector_MatShape*   pCvVectorvector_MatShapeCreate(int n);
void   pCvVectorvector_MatShapeDelete(vector_vector_MatShape* wrapper);
int   pCvVectorvector_MatShapeLength(vector_vector_MatShape* wrapper);
vector_MatShape*   pCvVectorvector_MatShapeGet(vector_vector_MatShape* wrapper, int index);
vector_MatShape*   pCvVectorvector_MatShapeSet(vector_vector_MatShape* wrapper, int index, vector_MatShape* value);
vector_vector_Point*   pCvVectorvector_PointCreate(int n);
void   pCvVectorvector_PointDelete(vector_vector_Point* wrapper);
int   pCvVectorvector_PointLength(vector_vector_Point* wrapper);
vector_Point*   pCvVectorvector_PointGet(vector_vector_Point* wrapper, int index);
vector_Point*   pCvVectorvector_PointSet(vector_vector_Point* wrapper, int index, vector_Point* value);
vector_vector_Point2f*   pCvVectorvector_Point2fCreate(int n);
void   pCvVectorvector_Point2fDelete(vector_vector_Point2f* wrapper);
int   pCvVectorvector_Point2fLength(vector_vector_Point2f* wrapper);
vector_Point2f*   pCvVectorvector_Point2fGet(vector_vector_Point2f* wrapper, int index);
vector_Point2f*   pCvVectorvector_Point2fSet(vector_vector_Point2f* wrapper, int index, vector_Point2f* value);
vector_vector_char*   pCvVectorvector_charCreate(int n);
void   pCvVectorvector_charDelete(vector_vector_char* wrapper);
int   pCvVectorvector_charLength(vector_vector_char* wrapper);
vector_char*   pCvVectorvector_charGet(vector_vector_char* wrapper, int index);
vector_char*   pCvVectorvector_charSet(vector_vector_char* wrapper, int index, vector_char* value);
AKAZE_t*   pCvPtr_AKAZEConvert(Ptr_AKAZE* wrapper);
Ptr_AKAZE*    pCvPtr_AKAZECreate( AKAZE_t* wrapper);
void             pCvPtr_AKAZEDelete( Ptr_AKAZE* ptr, AKAZE_t* wrapper = 0);
ml_ANN_MLP_t*   pCvPtr_ANN_MLPConvert(Ptr_ANN_MLP* wrapper);
Ptr_ANN_MLP*    pCvPtr_ANN_MLPCreate( ml_ANN_MLP_t* wrapper);
void             pCvPtr_ANN_MLPDelete( Ptr_ANN_MLP* ptr, ml_ANN_MLP_t* wrapper = 0);
AffineFeature_t*   pCvPtr_AffineFeatureConvert(Ptr_AffineFeature* wrapper);
Ptr_AffineFeature*    pCvPtr_AffineFeatureCreate( AffineFeature_t* wrapper);
void             pCvPtr_AffineFeatureDelete( Ptr_AffineFeature* ptr, AffineFeature_t* wrapper = 0);
AgastFeatureDetector_t*   pCvPtr_AgastFeatureDetectorConvert(Ptr_AgastFeatureDetector* wrapper);
Ptr_AgastFeatureDetector*    pCvPtr_AgastFeatureDetectorCreate( AgastFeatureDetector_t* wrapper);
void             pCvPtr_AgastFeatureDetectorDelete( Ptr_AgastFeatureDetector* ptr, AgastFeatureDetector_t* wrapper = 0);
AlignMTB_t*   pCvPtr_AlignMTBConvert(Ptr_AlignMTB* wrapper);
Ptr_AlignMTB*    pCvPtr_AlignMTBCreate( AlignMTB_t* wrapper);
void             pCvPtr_AlignMTBDelete( Ptr_AlignMTB* ptr, AlignMTB_t* wrapper = 0);
BRISK_t*   pCvPtr_BRISKConvert(Ptr_BRISK* wrapper);
Ptr_BRISK*    pCvPtr_BRISKCreate( BRISK_t* wrapper);
void             pCvPtr_BRISKDelete( Ptr_BRISK* ptr, BRISK_t* wrapper = 0);
BackgroundSubtractorKNN_t*   pCvPtr_BackgroundSubtractorKNNConvert(Ptr_BackgroundSubtractorKNN* wrapper);
Ptr_BackgroundSubtractorKNN*    pCvPtr_BackgroundSubtractorKNNCreate( BackgroundSubtractorKNN_t* wrapper);
void             pCvPtr_BackgroundSubtractorKNNDelete( Ptr_BackgroundSubtractorKNN* ptr, BackgroundSubtractorKNN_t* wrapper = 0);
BackgroundSubtractorMOG2_t*   pCvPtr_BackgroundSubtractorMOG2Convert(Ptr_BackgroundSubtractorMOG2* wrapper);
Ptr_BackgroundSubtractorMOG2*    pCvPtr_BackgroundSubtractorMOG2Create( BackgroundSubtractorMOG2_t* wrapper);
void             pCvPtr_BackgroundSubtractorMOG2Delete( Ptr_BackgroundSubtractorMOG2* ptr, BackgroundSubtractorMOG2_t* wrapper = 0);
detail_BestOf2NearestMatcher_t*   pCvPtr_BestOf2NearestMatcherConvert(Ptr_BestOf2NearestMatcher* wrapper);
Ptr_BestOf2NearestMatcher*    pCvPtr_BestOf2NearestMatcherCreate( detail_BestOf2NearestMatcher_t* wrapper);
void             pCvPtr_BestOf2NearestMatcherDelete( Ptr_BestOf2NearestMatcher* ptr, detail_BestOf2NearestMatcher_t* wrapper = 0);
detail_Blender_t*   pCvPtr_BlenderConvert(Ptr_Blender* wrapper);
Ptr_Blender*    pCvPtr_BlenderCreate( detail_Blender_t* wrapper);
void             pCvPtr_BlenderDelete( Ptr_Blender* ptr, detail_Blender_t* wrapper = 0);
CLAHE_t*   pCvPtr_CLAHEConvert(Ptr_CLAHE* wrapper);
Ptr_CLAHE*    pCvPtr_CLAHECreate( CLAHE_t* wrapper);
void             pCvPtr_CLAHEDelete( Ptr_CLAHE* ptr, CLAHE_t* wrapper = 0);
CalibrateDebevec_t*   pCvPtr_CalibrateDebevecConvert(Ptr_CalibrateDebevec* wrapper);
Ptr_CalibrateDebevec*    pCvPtr_CalibrateDebevecCreate( CalibrateDebevec_t* wrapper);
void             pCvPtr_CalibrateDebevecDelete( Ptr_CalibrateDebevec* ptr, CalibrateDebevec_t* wrapper = 0);
CalibrateRobertson_t*   pCvPtr_CalibrateRobertsonConvert(Ptr_CalibrateRobertson* wrapper);
Ptr_CalibrateRobertson*    pCvPtr_CalibrateRobertsonCreate( CalibrateRobertson_t* wrapper);
void             pCvPtr_CalibrateRobertsonDelete( Ptr_CalibrateRobertson* ptr, CalibrateRobertson_t* wrapper = 0);
DISOpticalFlow_t*   pCvPtr_DISOpticalFlowConvert(Ptr_DISOpticalFlow* wrapper);
Ptr_DISOpticalFlow*    pCvPtr_DISOpticalFlowCreate( DISOpticalFlow_t* wrapper);
void             pCvPtr_DISOpticalFlowDelete( Ptr_DISOpticalFlow* ptr, DISOpticalFlow_t* wrapper = 0);
ml_DTrees_t*   pCvPtr_DTreesConvert(Ptr_DTrees* wrapper);
Ptr_DTrees*    pCvPtr_DTreesCreate( ml_DTrees_t* wrapper);
void             pCvPtr_DTreesDelete( Ptr_DTrees* ptr, ml_DTrees_t* wrapper = 0);
DescriptorExtractor_t*   pCvPtr_DescriptorExtractorConvert(Ptr_DescriptorExtractor* wrapper);
Ptr_DescriptorExtractor*    pCvPtr_DescriptorExtractorCreate( DescriptorExtractor_t* wrapper);
void             pCvPtr_DescriptorExtractorDelete( Ptr_DescriptorExtractor* ptr, DescriptorExtractor_t* wrapper = 0);
BFMatcher_t*   pCvPtr_BFMatcherConvert(Ptr_BFMatcher* wrapper);
Ptr_BFMatcher*    pCvPtr_BFMatcherCreate( BFMatcher_t* wrapper);
void             pCvPtr_BFMatcherDelete( Ptr_BFMatcher* ptr, BFMatcher_t* wrapper = 0);
DescriptorMatcher_t*   pCvPtr_DescriptorMatcherConvert(Ptr_DescriptorMatcher* wrapper);
Ptr_DescriptorMatcher*    pCvPtr_DescriptorMatcherCreate( DescriptorMatcher_t* wrapper);
void             pCvPtr_DescriptorMatcherDelete( Ptr_DescriptorMatcher* ptr, DescriptorMatcher_t* wrapper = 0);
FlannBasedMatcher_t*   pCvPtr_FlannBasedMatcherConvert(Ptr_FlannBasedMatcher* wrapper);
Ptr_FlannBasedMatcher*    pCvPtr_FlannBasedMatcherCreate( FlannBasedMatcher_t* wrapper);
void             pCvPtr_FlannBasedMatcherDelete( Ptr_FlannBasedMatcher* ptr, FlannBasedMatcher_t* wrapper = 0);
ml_EM_t*   pCvPtr_EMConvert(Ptr_EM* wrapper);
Ptr_EM*    pCvPtr_EMCreate( ml_EM_t* wrapper);
void             pCvPtr_EMDelete( Ptr_EM* ptr, ml_EM_t* wrapper = 0);
detail_ExposureCompensator_t*   pCvPtr_ExposureCompensatorConvert(Ptr_ExposureCompensator* wrapper);
Ptr_ExposureCompensator*    pCvPtr_ExposureCompensatorCreate( detail_ExposureCompensator_t* wrapper);
void             pCvPtr_ExposureCompensatorDelete( Ptr_ExposureCompensator* ptr, detail_ExposureCompensator_t* wrapper = 0);
FaceDetectorYN_t*   pCvPtr_FaceDetectorYNConvert(Ptr_FaceDetectorYN* wrapper);
Ptr_FaceDetectorYN*    pCvPtr_FaceDetectorYNCreate( FaceDetectorYN_t* wrapper);
void             pCvPtr_FaceDetectorYNDelete( Ptr_FaceDetectorYN* ptr, FaceDetectorYN_t* wrapper = 0);
ml_RTrees_t*   pCvPtr_RTreesConvert(Ptr_RTrees* wrapper);
Ptr_RTrees*    pCvPtr_RTreesCreate( ml_RTrees_t* wrapper);
void             pCvPtr_RTreesDelete( Ptr_RTrees* ptr, ml_RTrees_t* wrapper = 0);
ml_Boost_t*   pCvPtr_BoostConvert(Ptr_Boost* wrapper);
Ptr_Boost*    pCvPtr_BoostCreate( ml_Boost_t* wrapper);
void             pCvPtr_BoostDelete( Ptr_Boost* ptr, ml_Boost_t* wrapper = 0);
FaceRecognizerSF_t*   pCvPtr_FaceRecognizerSFConvert(Ptr_FaceRecognizerSF* wrapper);
Ptr_FaceRecognizerSF*    pCvPtr_FaceRecognizerSFCreate( FaceRecognizerSF_t* wrapper);
void             pCvPtr_FaceRecognizerSFDelete( Ptr_FaceRecognizerSF* ptr, FaceRecognizerSF_t* wrapper = 0);
FarnebackOpticalFlow_t*   pCvPtr_FarnebackOpticalFlowConvert(Ptr_FarnebackOpticalFlow* wrapper);
Ptr_FarnebackOpticalFlow*    pCvPtr_FarnebackOpticalFlowCreate( FarnebackOpticalFlow_t* wrapper);
void             pCvPtr_FarnebackOpticalFlowDelete( Ptr_FarnebackOpticalFlow* ptr, FarnebackOpticalFlow_t* wrapper = 0);
FastFeatureDetector_t*   pCvPtr_FastFeatureDetectorConvert(Ptr_FastFeatureDetector* wrapper);
Ptr_FastFeatureDetector*    pCvPtr_FastFeatureDetectorCreate( FastFeatureDetector_t* wrapper);
void             pCvPtr_FastFeatureDetectorDelete( Ptr_FastFeatureDetector* ptr, FastFeatureDetector_t* wrapper = 0);
Feature2D_t*   pCvPtr_Feature2DConvert(Ptr_Feature2D* wrapper);
Ptr_Feature2D*    pCvPtr_Feature2DCreate( Feature2D_t* wrapper);
void             pCvPtr_Feature2DDelete( Ptr_Feature2D* ptr, Feature2D_t* wrapper = 0);
FeatureDetector_t*   pCvPtr_FeatureDetectorConvert(Ptr_FeatureDetector* wrapper);
Ptr_FeatureDetector*    pCvPtr_FeatureDetectorCreate( FeatureDetector_t* wrapper);
void             pCvPtr_FeatureDetectorDelete( Ptr_FeatureDetector* ptr, FeatureDetector_t* wrapper = 0);
FileStorage_t*   pCvPtr_FileStorageConvert(Ptr_FileStorage* wrapper);
Ptr_FileStorage*    pCvPtr_FileStorageCreate( FileStorage_t* wrapper);
void             pCvPtr_FileStorageDelete( Ptr_FileStorage* ptr, FileStorage_t* wrapper = 0);
GFTTDetector_t*   pCvPtr_GFTTDetectorConvert(Ptr_GFTTDetector* wrapper);
Ptr_GFTTDetector*    pCvPtr_GFTTDetectorCreate( GFTTDetector_t* wrapper);
void             pCvPtr_GFTTDetectorDelete( Ptr_GFTTDetector* ptr, GFTTDetector_t* wrapper = 0);
GeneralizedHoughBallard_t*   pCvPtr_GeneralizedHoughBallardConvert(Ptr_GeneralizedHoughBallard* wrapper);
Ptr_GeneralizedHoughBallard*    pCvPtr_GeneralizedHoughBallardCreate( GeneralizedHoughBallard_t* wrapper);
void             pCvPtr_GeneralizedHoughBallardDelete( Ptr_GeneralizedHoughBallard* ptr, GeneralizedHoughBallard_t* wrapper = 0);
GeneralizedHoughGuil_t*   pCvPtr_GeneralizedHoughGuilConvert(Ptr_GeneralizedHoughGuil* wrapper);
Ptr_GeneralizedHoughGuil*    pCvPtr_GeneralizedHoughGuilCreate( GeneralizedHoughGuil_t* wrapper);
void             pCvPtr_GeneralizedHoughGuilDelete( Ptr_GeneralizedHoughGuil* ptr, GeneralizedHoughGuil_t* wrapper = 0);
KAZE_t*   pCvPtr_KAZEConvert(Ptr_KAZE* wrapper);
Ptr_KAZE*    pCvPtr_KAZECreate( KAZE_t* wrapper);
void             pCvPtr_KAZEDelete( Ptr_KAZE* ptr, KAZE_t* wrapper = 0);
ml_KNearest_t*   pCvPtr_KNearestConvert(Ptr_KNearest* wrapper);
Ptr_KNearest*    pCvPtr_KNearestCreate( ml_KNearest_t* wrapper);
void             pCvPtr_KNearestDelete( Ptr_KNearest* ptr, ml_KNearest_t* wrapper = 0);
dnn_Layer_t*   pCvPtr_LayerConvert(Ptr_Layer* wrapper);
Ptr_Layer*    pCvPtr_LayerCreate( dnn_Layer_t* wrapper);
void             pCvPtr_LayerDelete( Ptr_Layer* ptr, dnn_Layer_t* wrapper = 0);
LineSegmentDetector_t*   pCvPtr_LineSegmentDetectorConvert(Ptr_LineSegmentDetector* wrapper);
Ptr_LineSegmentDetector*    pCvPtr_LineSegmentDetectorCreate( LineSegmentDetector_t* wrapper);
void             pCvPtr_LineSegmentDetectorDelete( Ptr_LineSegmentDetector* ptr, LineSegmentDetector_t* wrapper = 0);
ml_LogisticRegression_t*   pCvPtr_LogisticRegressionConvert(Ptr_LogisticRegression* wrapper);
Ptr_LogisticRegression*    pCvPtr_LogisticRegressionCreate( ml_LogisticRegression_t* wrapper);
void             pCvPtr_LogisticRegressionDelete( Ptr_LogisticRegression* ptr, ml_LogisticRegression_t* wrapper = 0);
MSER_t*   pCvPtr_MSERConvert(Ptr_MSER* wrapper);
Ptr_MSER*    pCvPtr_MSERCreate( MSER_t* wrapper);
void             pCvPtr_MSERDelete( Ptr_MSER* ptr, MSER_t* wrapper = 0);
MergeDebevec_t*   pCvPtr_MergeDebevecConvert(Ptr_MergeDebevec* wrapper);
Ptr_MergeDebevec*    pCvPtr_MergeDebevecCreate( MergeDebevec_t* wrapper);
void             pCvPtr_MergeDebevecDelete( Ptr_MergeDebevec* ptr, MergeDebevec_t* wrapper = 0);
MergeMertens_t*   pCvPtr_MergeMertensConvert(Ptr_MergeMertens* wrapper);
Ptr_MergeMertens*    pCvPtr_MergeMertensCreate( MergeMertens_t* wrapper);
void             pCvPtr_MergeMertensDelete( Ptr_MergeMertens* ptr, MergeMertens_t* wrapper = 0);
MergeRobertson_t*   pCvPtr_MergeRobertsonConvert(Ptr_MergeRobertson* wrapper);
Ptr_MergeRobertson*    pCvPtr_MergeRobertsonCreate( MergeRobertson_t* wrapper);
void             pCvPtr_MergeRobertsonDelete( Ptr_MergeRobertson* ptr, MergeRobertson_t* wrapper = 0);
ml_NormalBayesClassifier_t*   pCvPtr_NormalBayesClassifierConvert(Ptr_NormalBayesClassifier* wrapper);
Ptr_NormalBayesClassifier*    pCvPtr_NormalBayesClassifierCreate( ml_NormalBayesClassifier_t* wrapper);
void             pCvPtr_NormalBayesClassifierDelete( Ptr_NormalBayesClassifier* ptr, ml_NormalBayesClassifier_t* wrapper = 0);
ORB_t*   pCvPtr_ORBConvert(Ptr_ORB* wrapper);
Ptr_ORB*    pCvPtr_ORBCreate( ORB_t* wrapper);
void             pCvPtr_ORBDelete( Ptr_ORB* ptr, ORB_t* wrapper = 0);
utils_nested_OriginalClassName_t*   pCvPtr_OriginalClassNameConvert(Ptr_OriginalClassName* wrapper);
Ptr_OriginalClassName*    pCvPtr_OriginalClassNameCreate( utils_nested_OriginalClassName_t* wrapper);
void             pCvPtr_OriginalClassNameDelete( Ptr_OriginalClassName* ptr, utils_nested_OriginalClassName_t* wrapper = 0);
ml_ParamGrid_t*   pCvPtr_ParamGridConvert(Ptr_ParamGrid* wrapper);
Ptr_ParamGrid*    pCvPtr_ParamGridCreate( ml_ParamGrid_t* wrapper);
void             pCvPtr_ParamGridDelete( Ptr_ParamGrid* ptr, ml_ParamGrid_t* wrapper = 0);
QRCodeEncoder_t*   pCvPtr_QRCodeEncoderConvert(Ptr_QRCodeEncoder* wrapper);
Ptr_QRCodeEncoder*    pCvPtr_QRCodeEncoderCreate( QRCodeEncoder_t* wrapper);
void             pCvPtr_QRCodeEncoderDelete( Ptr_QRCodeEncoder* ptr, QRCodeEncoder_t* wrapper = 0);
SIFT_t*   pCvPtr_SIFTConvert(Ptr_SIFT* wrapper);
Ptr_SIFT*    pCvPtr_SIFTCreate( SIFT_t* wrapper);
void             pCvPtr_SIFTDelete( Ptr_SIFT* ptr, SIFT_t* wrapper = 0);
ml_SVM_t*   pCvPtr_SVMConvert(Ptr_SVM* wrapper);
Ptr_SVM*    pCvPtr_SVMCreate( ml_SVM_t* wrapper);
void             pCvPtr_SVMDelete( Ptr_SVM* ptr, ml_SVM_t* wrapper = 0);
ml_SVMSGD_t*   pCvPtr_SVMSGDConvert(Ptr_SVMSGD* wrapper);
Ptr_SVMSGD*    pCvPtr_SVMSGDCreate( ml_SVMSGD_t* wrapper);
void             pCvPtr_SVMSGDDelete( Ptr_SVMSGD* ptr, ml_SVMSGD_t* wrapper = 0);
detail_SeamFinder_t*   pCvPtr_SeamFinderConvert(Ptr_SeamFinder* wrapper);
Ptr_SeamFinder*    pCvPtr_SeamFinderCreate( detail_SeamFinder_t* wrapper);
void             pCvPtr_SeamFinderDelete( Ptr_SeamFinder* ptr, detail_SeamFinder_t* wrapper = 0);
SimpleBlobDetector_t*   pCvPtr_SimpleBlobDetectorConvert(Ptr_SimpleBlobDetector* wrapper);
Ptr_SimpleBlobDetector*    pCvPtr_SimpleBlobDetectorCreate( SimpleBlobDetector_t* wrapper);
void             pCvPtr_SimpleBlobDetectorDelete( Ptr_SimpleBlobDetector* ptr, SimpleBlobDetector_t* wrapper = 0);
SparsePyrLKOpticalFlow_t*   pCvPtr_SparsePyrLKOpticalFlowConvert(Ptr_SparsePyrLKOpticalFlow* wrapper);
Ptr_SparsePyrLKOpticalFlow*    pCvPtr_SparsePyrLKOpticalFlowCreate( SparsePyrLKOpticalFlow_t* wrapper);
void             pCvPtr_SparsePyrLKOpticalFlowDelete( Ptr_SparsePyrLKOpticalFlow* ptr, SparsePyrLKOpticalFlow_t* wrapper = 0);
StereoBM_t*   pCvPtr_StereoBMConvert(Ptr_StereoBM* wrapper);
Ptr_StereoBM*    pCvPtr_StereoBMCreate( StereoBM_t* wrapper);
void             pCvPtr_StereoBMDelete( Ptr_StereoBM* ptr, StereoBM_t* wrapper = 0);
StereoSGBM_t*   pCvPtr_StereoSGBMConvert(Ptr_StereoSGBM* wrapper);
Ptr_StereoSGBM*    pCvPtr_StereoSGBMCreate( StereoSGBM_t* wrapper);
void             pCvPtr_StereoSGBMDelete( Ptr_StereoSGBM* ptr, StereoSGBM_t* wrapper = 0);
Stitcher_t*   pCvPtr_StitcherConvert(Ptr_Stitcher* wrapper);
Ptr_Stitcher*    pCvPtr_StitcherCreate( Stitcher_t* wrapper);
void             pCvPtr_StitcherDelete( Ptr_Stitcher* ptr, Stitcher_t* wrapper = 0);
detail_Timelapser_t*   pCvPtr_TimelapserConvert(Ptr_Timelapser* wrapper);
Ptr_Timelapser*    pCvPtr_TimelapserCreate( detail_Timelapser_t* wrapper);
void             pCvPtr_TimelapserDelete( Ptr_Timelapser* ptr, detail_Timelapser_t* wrapper = 0);
Tonemap_t*   pCvPtr_TonemapConvert(Ptr_Tonemap* wrapper);
Ptr_Tonemap*    pCvPtr_TonemapCreate( Tonemap_t* wrapper);
void             pCvPtr_TonemapDelete( Ptr_Tonemap* ptr, Tonemap_t* wrapper = 0);
TonemapDrago_t*   pCvPtr_TonemapDragoConvert(Ptr_TonemapDrago* wrapper);
Ptr_TonemapDrago*    pCvPtr_TonemapDragoCreate( TonemapDrago_t* wrapper);
void             pCvPtr_TonemapDragoDelete( Ptr_TonemapDrago* ptr, TonemapDrago_t* wrapper = 0);
TonemapMantiuk_t*   pCvPtr_TonemapMantiukConvert(Ptr_TonemapMantiuk* wrapper);
Ptr_TonemapMantiuk*    pCvPtr_TonemapMantiukCreate( TonemapMantiuk_t* wrapper);
void             pCvPtr_TonemapMantiukDelete( Ptr_TonemapMantiuk* ptr, TonemapMantiuk_t* wrapper = 0);
TonemapReinhard_t*   pCvPtr_TonemapReinhardConvert(Ptr_TonemapReinhard* wrapper);
Ptr_TonemapReinhard*    pCvPtr_TonemapReinhardCreate( TonemapReinhard_t* wrapper);
void             pCvPtr_TonemapReinhardDelete( Ptr_TonemapReinhard* ptr, TonemapReinhard_t* wrapper = 0);
TrackerDaSiamRPN_t*   pCvPtr_TrackerDaSiamRPNConvert(Ptr_TrackerDaSiamRPN* wrapper);
Ptr_TrackerDaSiamRPN*    pCvPtr_TrackerDaSiamRPNCreate( TrackerDaSiamRPN_t* wrapper);
void             pCvPtr_TrackerDaSiamRPNDelete( Ptr_TrackerDaSiamRPN* ptr, TrackerDaSiamRPN_t* wrapper = 0);
TrackerGOTURN_t*   pCvPtr_TrackerGOTURNConvert(Ptr_TrackerGOTURN* wrapper);
Ptr_TrackerGOTURN*    pCvPtr_TrackerGOTURNCreate( TrackerGOTURN_t* wrapper);
void             pCvPtr_TrackerGOTURNDelete( Ptr_TrackerGOTURN* ptr, TrackerGOTURN_t* wrapper = 0);
TrackerMIL_t*   pCvPtr_TrackerMILConvert(Ptr_TrackerMIL* wrapper);
Ptr_TrackerMIL*    pCvPtr_TrackerMILCreate( TrackerMIL_t* wrapper);
void             pCvPtr_TrackerMILDelete( Ptr_TrackerMIL* ptr, TrackerMIL_t* wrapper = 0);
ml_TrainData_t*   pCvPtr_TrainDataConvert(Ptr_TrainData* wrapper);
Ptr_TrainData*    pCvPtr_TrainDataCreate( ml_TrainData_t* wrapper);
void             pCvPtr_TrainDataDelete( Ptr_TrainData* ptr, ml_TrainData_t* wrapper = 0);
VariationalRefinement_t*   pCvPtr_VariationalRefinementConvert(Ptr_VariationalRefinement* wrapper);
Ptr_VariationalRefinement*    pCvPtr_VariationalRefinementCreate( VariationalRefinement_t* wrapper);
void             pCvPtr_VariationalRefinementDelete( Ptr_VariationalRefinement* ptr, VariationalRefinement_t* wrapper = 0);
IndexParams_t*   pCvPtr_flann_IndexParamsConvert(Ptr_flann_IndexParams* wrapper);
Ptr_flann_IndexParams*    pCvPtr_flann_IndexParamsCreate( IndexParams_t* wrapper);
void             pCvPtr_flann_IndexParamsDelete( Ptr_flann_IndexParams* ptr, IndexParams_t* wrapper = 0);
SearchParams_t*   pCvPtr_flann_SearchParamsConvert(Ptr_flann_SearchParams* wrapper);
Ptr_flann_SearchParams*    pCvPtr_flann_SearchParamsCreate( SearchParams_t* wrapper);
void             pCvPtr_flann_SearchParamsDelete( Ptr_flann_SearchParams* ptr, SearchParams_t* wrapper = 0);
float   pCvPtr_floatConvert(Ptr_float* wrapper);
Ptr_float*    pCvPtr_floatCreate();
void             pCvPtr_floatDelete( Ptr_float* ptr);
#ifdef __cplusplus
 }
#endif
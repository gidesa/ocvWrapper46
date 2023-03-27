#pragma once

struct  vector_CameraParams; 
struct  vector_DMatch;
struct  vector_ImageFeatures;
struct  vector_KeyPoint;
struct  vector_Mat;
struct  vector_MatchesInfo;
struct  vector_Point;
struct  vector_Point2f;
struct  vector_Range;
struct  vector_Rect;
struct  vector_Rect2d;
struct  vector_RotatedRect;
struct  vector_Size;
struct  vector_String;
struct  vector_Target;
struct  vector_UMat;
struct  vector_Vec4f;
struct  vector_Vec6f;
struct  vector_char;
struct  vector_double;
struct  vector_float;
struct  vector_int;
struct  vector_string;
struct  vector_uchar;
struct  vector_vector_DMatch;
struct  vector_vector_KeyPoint;
struct  vector_vector_Mat;
struct  vector_vector_Point;
struct  vector_vector_Point2f;
struct  vector_vector_char;

struct  MatShape;
struct  vector_MatShape;
struct  vector_vector_MatShape;


struct  Ptr_AKAZE;
struct  Ptr_ANN_MLP;
struct  Ptr_AffineFeature;
struct  Ptr_AgastFeatureDetector;
struct  Ptr_AlignMTB;
struct  Ptr_BFMatcher;
struct  Ptr_BRISK;
struct  Ptr_BackgroundSubtractorKNN;
struct  Ptr_BackgroundSubtractorMOG2;
struct  Ptr_BestOf2NearestMatcher;
struct  Ptr_Blender;
struct  Ptr_Boost;
struct  Ptr_CLAHE;
struct  Ptr_CalibrateDebevec;
struct  Ptr_CalibrateRobertson;
struct  Ptr_DISOpticalFlow;
struct  Ptr_DTrees;
struct  Ptr_DescriptorExtractor;
struct  Ptr_DescriptorMatcher;
struct  Ptr_EM;
struct  Ptr_ExposureCompensator;
struct  Ptr_FaceDetectorYN;
struct  Ptr_FaceRecognizerSF;
struct  Ptr_FarnebackOpticalFlow;
struct  Ptr_FastFeatureDetector;
struct  Ptr_Feature2D;
struct  Ptr_FeatureDetector;
struct  Ptr_FlannBasedMatcher;
struct  Ptr_FileStorage;
struct  Ptr_GFTTDetector;
struct  Ptr_GeneralizedHoughBallard;
struct  Ptr_GeneralizedHoughGuil;
//struct   Ptr_GpuMat_Allocator;    cuda not supported
struct  Ptr_KAZE;
struct  Ptr_KNearest;
struct  Ptr_Layer;
struct  Ptr_LineSegmentDetector;
struct  Ptr_LogisticRegression;
struct  Ptr_MSER;
struct  Ptr_MergeDebevec;
struct  Ptr_MergeMertens;
struct  Ptr_MergeRobertson;
struct  Ptr_NormalBayesClassifier;
struct  Ptr_ORB;
struct  Ptr_OriginalClassName;
struct  Ptr_ParamGrid;
struct  Ptr_QRCodeEncoder;
struct  Ptr_RTrees;
struct  Ptr_SIFT;
struct  Ptr_SVM;
struct  Ptr_SVMSGD;
struct  Ptr_SeamFinder;
struct  Ptr_SimpleBlobDetector;
struct  Ptr_SparsePyrLKOpticalFlow;
struct  Ptr_StereoBM;
struct  Ptr_StereoSGBM;
struct  Ptr_Stitcher;
struct  Ptr_Timelapser;
struct  Ptr_Tonemap;
struct  Ptr_TonemapDrago;
struct  Ptr_TonemapMantiuk;
struct  Ptr_TonemapReinhard;
struct  Ptr_TrackerDaSiamRPN;
struct  Ptr_TrackerGOTURN;
struct  Ptr_TrackerMIL;
struct  Ptr_TrainData;
struct  Ptr_VariationalRefinement;
struct  Ptr_flann_IndexParams;
struct  Ptr_flann_SearchParams;
struct  Ptr_float;

struct SimpleBlobDetector_Params;

typedef char*  c_string;
typedef unsigned char uchar;
typedef long long int64;


struct Mat_t;
struct string_t; 
struct Point2f_t; 
struct Point2d_t; 
struct Point_t; 
struct Size_t; 
struct Rect_t; 
struct Range_t; 
struct CvSlice_t; 
struct Vec2d_t; 
struct Vec3b_t; 
struct Vec3d_t; 
struct Vec4f_t; 
struct Vec6f_t; 
struct Scalar_t; 
struct RotatedRect_t; 
struct Filenode_t; 
struct TermCriteria_t;
struct CvTermCriteria_t;
struct IndexParams_t;
struct SearchParams_t; 

// nuove classi
struct FeatureDetector_t;
struct LayerId_t;
struct dnn_Target_t;  
struct DescriptorExtractor_t; 
struct Rect2d_t;  
struct Stream_t; 
struct Vec2i_t; 
struct Vec3i_t; 
struct RNG_t; 
struct Size2f_t;





struct IplImage
{
	int  nSize;             /**< sizeof(IplImage) */
	int  ID;                /**< version (=0)*/
	int  nChannels;         /**< Most of OpenCV functions support 1,2,3 or 4 channels */
	int  alphaChannel;      /**< Ignored by OpenCV */
	int  depth;             /**< Pixel depth in bits: IPL_DEPTH_8U, IPL_DEPTH_8S, IPL_DEPTH_16S,
							   IPL_DEPTH_32S, IPL_DEPTH_32F and IPL_DEPTH_64F are supported.  */
	char colorModel[4];     /**< Ignored by OpenCV */
	char channelSeq[4];     /**< ditto */
	int  dataOrder;         /**< 0 - interleaved color channels, 1 - separate color channels.
							   cvCreateImage can only create interleaved images */
	int  origin;            /**< 0 - top-left origin,
							   1 - bottom-left origin (Windows bitmaps style).  */
	int  align;             /**< Alignment of image rows (4 or 8).
							   OpenCV ignores it and uses widthStep instead.    */
	int  width;             /**< Image width in pixels.                           */
	int  height;            /**< Image height in pixels.                          */
	struct _IplROI *roi;    /**< Image ROI. If NULL, the whole image is selected. */
	struct _IplImage *maskROI;      /**< Must be NULL. */
	void  *imageId;                 /**< "           " */
	struct _IplTileInfo *tileInfo;  /**< "           " */
	int  imageSize;         /**< Image data size in bytes
							   (==image->height*image->widthStep
							   in case of interleaved data)*/
	char *imageData;        /**< Pointer to aligned image data.         */
	int  widthStep;         /**< Size of aligned image row in bytes.    */
	int  BorderMode[4];     /**< Ignored by OpenCV.                     */
	int  BorderConst[4];    /**< Ditto.                                 */
	char *imageDataOrigin;  /**< Pointer to very origin of image data
							   (not necessarily aligned) -
							   needed for correct deallocation */
};


struct CvPoint2fS
{
    float x;
    float y;
};
struct CvPoint2dS
{
    double x;
    double y;
};
struct CvPointS
{
    int x;
    int y;
};
struct CvSizeS
{
    int width;
    int height;
};



struct CvRectS
{
    int x;
    int y;
    int width;
    int height;
};

struct CvRect2dS
{
	double x;
	double y;
	double width;
	double height;
};

struct CvRangeS
{
	int  start;
	int  end;
};
struct CvSliceS
{
    int  start; 
    int  end;
};
struct CvVec2dS {
	double v0;
	double v1;
};
struct CvVec3dS {
	double v0;
	double v1;
	double v2;
};
struct CvVec3bS {
	uchar v0;
	uchar v1;
	uchar v2;
};
struct CvVec4fS {
	float  v0;
	float  v1;
	float  v2;
	float  v3;
};
struct CvVec6fS {
	float  v0;
	float  v1;
	float  v2;
	float  v3;
	float  v4;
	float  v5;
};

struct CvScalarS {
    double v0; 
    double v1; 
    double v2; 
    double v3; 
};
struct CvRotatedRectS {
	CvPoint2fS center; //< the rectangle mass center
	CvSizeS size; //< width and height of the rectangle
	float angle;    //< the rotation angle. When the angle is 0, 90, 180, 270 etc., the rectangle becomes an up-right rectangle.
};
struct CvFileNodeS
{
    int tag;
    void* info; /* type information
            (only for user-defined object, for others it is 0) */
    double f; /* scalar floating-point number */
    int i;    /* scalar integer number */
	int strlen;  /* text string */
	char* str;
	void* seq; /* sequence (ordered collection of file nodes) */
    void* map; /* map (collection of named file nodes) */
};

struct CvTermCriteriaS
{
    int    type;  /* may be combination of
                     CV_TERMCRIT_ITER
                     CV_TERMCRIT_EPS */
    int    max_iter;
    double epsilon;
};

struct CvMomentsS
{
    double  m00, m10, m01, m20, m11,  m30, m21, m12, m03; /* spatial moments */
    double  mu20, mu11, mu02, mu30, mu21, mu12, mu03; /* central moments */
    double  nu20, nu11, nu02, nu30, nu21, nu12, nu03;
};

// nuove
struct CvSize2fS
{
	float width;
	float height;
};
struct CvVec2iS {
	int v0;
	int v1;
};
struct CvVec3iS {
	int v0;
	int v1;
	int v2;
};














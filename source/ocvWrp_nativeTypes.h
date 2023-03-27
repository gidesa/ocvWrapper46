#pragma once

typedef std::vector<cv::detail::CameraParams>  vector_CameraParams;
typedef std::vector<DMatch>  vector_DMatch;
typedef std::vector<cv::detail::ImageFeatures>  vector_ImageFeatures;
typedef std::vector<KeyPoint>  vector_KeyPoint;
typedef std::vector<Mat>  vector_Mat;
typedef std::vector<cv::detail::MatchesInfo>  vector_MatchesInfo;
typedef std::vector<Point>  vector_Point;
typedef std::vector<Point2f>  vector_Point2f;
typedef std::vector<Range>  vector_Range;
typedef std::vector<Rect>  vector_Rect;
typedef std::vector<Rect2d>  vector_Rect2d;
typedef std::vector<RotatedRect>  vector_RotatedRect;
typedef std::vector<Size>  vector_Size;
typedef std::vector<String>  vector_String;
typedef std::vector<cv::dnn::Target>  vector_Target;
typedef std::vector<UMat>  vector_UMat;
typedef std::vector<Vec4f>  vector_Vec4f;
typedef std::vector<Vec6f>  vector_Vec6f;
typedef std::vector<char>  vector_char;
typedef std::vector<double>  vector_double;
typedef std::vector<float>  vector_float;
typedef std::vector<int>  vector_int;
typedef std::vector<string>  vector_string;
typedef std::vector<uchar>  vector_uchar;
typedef std::vector<vector_DMatch>  vector_vector_DMatch;
typedef std::vector<vector_KeyPoint>  vector_vector_KeyPoint;
typedef std::vector<vector_Mat>  vector_vector_Mat;
typedef std::vector<vector_Point>  vector_vector_Point;
typedef std::vector<vector_Point2f>  vector_vector_Point2f;
typedef std::vector<vector_char>  vector_vector_char;

typedef std::vector<int>  MatShape;
typedef std::vector<MatShape>  vector_MatShape;
typedef std::vector<vector_MatShape>  vector_vector_MatShape;


typedef cv::Ptr<cv::AKAZE>  Ptr_AKAZE;
typedef cv::Ptr<cv::ml::ANN_MLP>  Ptr_ANN_MLP;
typedef cv::Ptr<cv::AffineFeature>  Ptr_AffineFeature;
typedef cv::Ptr<cv::AgastFeatureDetector>  Ptr_AgastFeatureDetector;
typedef cv::Ptr<cv::AlignMTB>  Ptr_AlignMTB;
typedef cv::Ptr<cv::BFMatcher>  Ptr_BFMatcher;
typedef cv::Ptr<cv::BRISK>  Ptr_BRISK;
typedef cv::Ptr<cv::BackgroundSubtractorKNN>  Ptr_BackgroundSubtractorKNN;
typedef cv::Ptr<cv::BackgroundSubtractorMOG2>  Ptr_BackgroundSubtractorMOG2;
typedef cv::Ptr<cv::detail::BestOf2NearestMatcher>  Ptr_BestOf2NearestMatcher;
typedef cv::Ptr<cv::detail::Blender>  Ptr_Blender;
typedef cv::Ptr<cv::ml::Boost> Ptr_Boost;
typedef cv::Ptr<cv::CLAHE>  Ptr_CLAHE;
typedef cv::Ptr<cv::CalibrateDebevec>  Ptr_CalibrateDebevec;
typedef cv::Ptr<cv::CalibrateRobertson>  Ptr_CalibrateRobertson;
typedef cv::Ptr<cv::DISOpticalFlow>  Ptr_DISOpticalFlow;
typedef cv::Ptr<cv::ml::DTrees>  Ptr_DTrees;
typedef cv::Ptr<cv::DescriptorExtractor>  Ptr_DescriptorExtractor;
typedef cv::Ptr<cv::DescriptorMatcher>  Ptr_DescriptorMatcher;
typedef cv::Ptr<cv::ml::EM>  Ptr_EM;
typedef cv::Ptr<cv::detail::ExposureCompensator>  Ptr_ExposureCompensator;
typedef cv::Ptr<cv::FaceDetectorYN>  Ptr_FaceDetectorYN;
typedef cv::Ptr<cv::FaceRecognizerSF>  Ptr_FaceRecognizerSF;
typedef cv::Ptr<cv::FarnebackOpticalFlow>  Ptr_FarnebackOpticalFlow;
typedef cv::Ptr<cv::FastFeatureDetector>  Ptr_FastFeatureDetector;
typedef cv::Ptr<cv::Feature2D>  Ptr_Feature2D;
typedef cv::Ptr<cv::FeatureDetector>  Ptr_FeatureDetector;
typedef cv::Ptr<cv::FlannBasedMatcher> Ptr_FlannBasedMatcher;
typedef cv::Ptr<cv::FileStorage>  Ptr_FileStorage;
typedef cv::Ptr<cv::GFTTDetector>  Ptr_GFTTDetector;
typedef cv::Ptr<cv::GeneralizedHoughBallard>  Ptr_GeneralizedHoughBallard;
typedef cv::Ptr<cv::GeneralizedHoughGuil>  Ptr_GeneralizedHoughGuil;
//typedef cv::Ptr<cv::cuda::GpuMat::Allocator>  Ptr_GpuMat_Allocator;    cuda not supported
typedef cv::Ptr<cv::KAZE>  Ptr_KAZE;
typedef cv::Ptr<cv::ml::KNearest>  Ptr_KNearest;
typedef cv::Ptr<cv::dnn::Layer>  Ptr_Layer;
typedef cv::Ptr<cv::LineSegmentDetector>  Ptr_LineSegmentDetector;
typedef cv::Ptr<cv::ml::LogisticRegression>  Ptr_LogisticRegression;
typedef cv::Ptr<cv::MSER>  Ptr_MSER;
typedef cv::Ptr<cv::MergeDebevec>  Ptr_MergeDebevec;
typedef cv::Ptr<cv::MergeMertens>  Ptr_MergeMertens;
typedef cv::Ptr<cv::MergeRobertson>  Ptr_MergeRobertson;
typedef cv::Ptr<cv::ml::NormalBayesClassifier>  Ptr_NormalBayesClassifier;
typedef cv::Ptr<cv::ORB>  Ptr_ORB;
typedef cv::Ptr<cv::utils::nested::OriginalClassName>  Ptr_OriginalClassName;
typedef cv::Ptr<cv::ml::ParamGrid>  Ptr_ParamGrid;
typedef cv::Ptr<cv::QRCodeEncoder>  Ptr_QRCodeEncoder;
typedef cv::Ptr<cv::ml::RTrees> Ptr_RTrees;
typedef cv::Ptr<cv::SIFT>  Ptr_SIFT;
typedef cv::Ptr<cv::ml::SVM>  Ptr_SVM;
typedef cv::Ptr<cv::ml::SVMSGD>  Ptr_SVMSGD;
typedef cv::Ptr<cv::detail::SeamFinder>  Ptr_SeamFinder;
typedef cv::Ptr<cv::SimpleBlobDetector>  Ptr_SimpleBlobDetector;
typedef cv::Ptr<cv::SparsePyrLKOpticalFlow>  Ptr_SparsePyrLKOpticalFlow;
typedef cv::Ptr<cv::StereoBM>  Ptr_StereoBM;
typedef cv::Ptr<cv::StereoSGBM>  Ptr_StereoSGBM;
typedef cv::Ptr<cv::Stitcher>  Ptr_Stitcher;
typedef cv::Ptr<cv::detail::Timelapser>  Ptr_Timelapser;
typedef cv::Ptr<cv::Tonemap>  Ptr_Tonemap;
typedef cv::Ptr<cv::TonemapDrago>  Ptr_TonemapDrago;
typedef cv::Ptr<cv::TonemapMantiuk>  Ptr_TonemapMantiuk;
typedef cv::Ptr<cv::TonemapReinhard>  Ptr_TonemapReinhard;
typedef cv::Ptr<cv::TrackerDaSiamRPN>  Ptr_TrackerDaSiamRPN;
typedef cv::Ptr<cv::TrackerGOTURN>  Ptr_TrackerGOTURN;
typedef cv::Ptr<cv::TrackerMIL>  Ptr_TrackerMIL;
typedef cv::Ptr<cv::ml::TrainData>  Ptr_TrainData;
typedef cv::Ptr<cv::VariationalRefinement>  Ptr_VariationalRefinement;
typedef cv::Ptr<cv::flann::IndexParams>  Ptr_flann_IndexParams;
typedef cv::Ptr<cv::flann::SearchParams>  Ptr_flann_SearchParams;
typedef cv::Ptr<float>  Ptr_float;




typedef SimpleBlobDetector::Params    SimpleBlobDetector_Params;


typedef char*  c_string;

struct Mat_t { Mat*  v; };
struct string_t { char*  v; int nrchar; };
struct Point2f_t { Point2f*  v;  };
struct Point2d_t { Point2d*  v; };
struct Point_t { Point*  v; };
struct Size_t { Size*  v; };
struct Rect_t { Rect*  v; };
struct Range_t { Range*  v; };
struct CvSlice_t { CvSlice*  v; };
struct Vec2d_t { Vec2d*  v; };
struct Vec3b_t { Vec3b*  v; };
struct Vec3d_t { Vec3d*  v; };
struct Vec4f_t { Vec4f*  v; };
struct Vec6f_t { Vec6f*  v; };struct Scalar_t { Scalar*  v; };
struct RotatedRect_t { RotatedRect*  v; };
struct Filenode_t { FileNode* v; };
struct TermCriteria_t { TermCriteria* v; };
struct CvTermCriteria_t { CvTermCriteria* v; };
struct IndexParams_t { flann::IndexParams* v;  };
struct SearchParams_t { flann::SearchParams* v; };

// nuove classi
struct FeatureDetector_t { FeatureDetector* v;  };
struct LayerId_t { cv::dnn::Net::LayerId* v; };
struct dnn_Target_t { cv::dnn::Target* v;  }; 
struct DescriptorExtractor_t { DescriptorExtractor* v; };
struct Rect2d_t { Rect2d* v;  };   
struct Stream_t { cuda::Stream* v;  };
struct Vec2i_t { Vec2i*  v; };
struct Vec3i_t { Vec3i*  v; };
struct RNG_t { RNG* v; };
struct Size2f_t { Size2f* v; };


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














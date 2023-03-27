#ifdef __cplusplus
extern "C" {
#endif

struct AKAZE_t;

struct AffineFeature_t;

struct AgastFeatureDetector_t;

struct Algorithm_t;

struct AlignExposures_t;

struct AlignMTB_t;

struct AsyncArray_t;

struct BFMatcher_t;

struct BOWImgDescriptorExtractor_t;

struct BOWKMeansTrainer_t;

struct BOWTrainer_t;

struct BRISK_t;

struct BackgroundSubtractor_t;

struct BackgroundSubtractorKNN_t;

struct BackgroundSubtractorMOG2_t;

struct BaseCascadeClassifier_t;

struct CLAHE_t;

struct CalibrateCRF_t;

struct CalibrateDebevec_t;

struct CalibrateRobertson_t;

struct CascadeClassifier_t;

struct CirclesGridFinderParameters_t;

struct DISOpticalFlow_t;

struct DMatch_t;

struct DenseOpticalFlow_t;

struct DescriptorMatcher_t;

struct FaceDetectorYN_t;

struct FaceRecognizerSF_t;

struct FarnebackOpticalFlow_t;

struct FastFeatureDetector_t;

struct Feature2D_t;

struct FileNode_t;

struct FileStorage_t;

struct FlannBasedMatcher_t;

struct GFTTDetector_t;

struct GeneralizedHough_t;

struct GeneralizedHoughBallard_t;

struct GeneralizedHoughGuil_t;

struct HOGDescriptor_t;

struct KAZE_t;

struct KalmanFilter_t;

struct KeyPoint_t;

struct LineSegmentDetector_t;

struct MSER_t;

struct MergeDebevec_t;

struct MergeExposures_t;

struct MergeMertens_t;

struct MergeRobertson_t;

struct Moments_t;

struct ORB_t;

struct PyRotationWarper_t;

struct QRCodeDetector_t;

struct QRCodeEncoder_t;

struct QRCodeEncoder_Params_t;

struct SIFT_t;

struct SimpleBlobDetector_t;

struct SimpleBlobDetector_Params_t;

struct SparseOpticalFlow_t;

struct SparsePyrLKOpticalFlow_t;

struct StereoBM_t;

struct StereoMatcher_t;

struct StereoSGBM_t;

struct Stitcher_t;

struct Subdiv2D_t;

struct TickMeter_t;

struct Tonemap_t;

struct TonemapDrago_t;

struct TonemapMantiuk_t;

struct TonemapReinhard_t;

struct Tracker_t;

struct TrackerDaSiamRPN_t;

struct TrackerDaSiamRPN_Params_t;

struct TrackerGOTURN_t;

struct TrackerGOTURN_Params_t;

struct TrackerMIL_t;

struct TrackerMIL_Params_t;

struct UMat_t;

struct UsacParams_t;

struct VariationalRefinement_t;

struct VideoCapture_t;

struct VideoWriter_t;

struct WarperCreator_t;

struct detail_AffineBasedEstimator_t;

struct detail_AffineBestOf2NearestMatcher_t;

struct detail_BestOf2NearestMatcher_t;

struct detail_BestOf2NearestRangeMatcher_t;

struct detail_Blender_t;

struct detail_BlocksChannelsCompensator_t;

struct detail_BlocksCompensator_t;

struct detail_BlocksGainCompensator_t;

struct detail_BundleAdjusterAffine_t;

struct detail_BundleAdjusterAffinePartial_t;

struct detail_BundleAdjusterBase_t;

struct detail_BundleAdjusterRay_t;

struct detail_BundleAdjusterReproj_t;

struct detail_CameraParams_t;

struct detail_ChannelsCompensator_t;

struct detail_DpSeamFinder_t;

struct detail_Estimator_t;

struct detail_ExposureCompensator_t;

struct detail_FeatherBlender_t;

struct detail_FeaturesMatcher_t;

struct detail_GainCompensator_t;

struct detail_GraphCutSeamFinder_t;

struct detail_HomographyBasedEstimator_t;

struct detail_ImageFeatures_t;

struct detail_MatchesInfo_t;

struct detail_MultiBandBlender_t;

struct detail_NoBundleAdjuster_t;

struct detail_NoExposureCompensator_t;

struct detail_NoSeamFinder_t;

struct detail_PairwiseSeamFinder_t;

struct detail_ProjectorBase_t;

struct detail_SeamFinder_t;

struct detail_SphericalProjector_t;

struct detail_Timelapser_t;

struct detail_TimelapserCrop_t;

struct detail_VoronoiSeamFinder_t;

struct dnn_ClassificationModel_t;

struct dnn_DetectionModel_t;

struct dnn_DictValue_t;

struct dnn_KeypointsModel_t;

struct dnn_Layer_t;

struct dnn_Model_t;

struct dnn_Net_t;

struct dnn_SegmentationModel_t;

struct dnn_TextDetectionModel_t;

struct dnn_TextDetectionModel_DB_t;

struct dnn_TextDetectionModel_EAST_t;

struct dnn_TextRecognitionModel_t;

struct flann_Index_t;

struct ml_ANN_MLP_t;

struct ml_Boost_t;

struct ml_DTrees_t;

struct ml_EM_t;

struct ml_KDTree_t;

struct ml_KNearest_t;

struct ml_LogisticRegression_t;

struct ml_NormalBayesClassifier_t;

struct ml_ParamGrid_t;

struct ml_RTrees_t;

struct ml_SVM_t;

struct ml_SVMSGD_t;

struct ml_StatModel_t;

struct ml_TrainData_t;

struct ocl_Device_t;

struct ocl_OpenCLExecutionContext_t;

struct segmentation_IntelligentScissorsMB_t;

struct utils_nested_OriginalClassName_t;

struct utils_nested_OriginalClassName_Params_t;
struct  detail_AffineBasedEstimator_t*  pCvdetail_AffineBasedEstimatorCreate();
void                      pCvdetail_AffineBasedEstimatorDelete(struct detail_AffineBasedEstimator_t* wrapper);
struct  detail_AffineBestOf2NearestMatcher_t*  pCvdetail_AffineBestOf2NearestMatcherCreate(bool full_affine /* default: false */, 
                                   bool try_use_gpu /* default: false */, float match_conf /* default: 0.3f */, 
                                   int num_matches_thresh1 /* default: 6 */);
void                      pCvdetail_AffineBestOf2NearestMatcherDelete(struct detail_AffineBestOf2NearestMatcher_t* wrapper);
struct  AsyncArray_t*     pCvAsyncArrayCreate();
void                      pCvAsyncArrayDelete(struct AsyncArray_t* wrapper);
struct  BFMatcher_t*      pCvBFMatcherCreate(int normType /* default: NORM_L2 */, bool crossCheck /* default: false */);
void                      pCvBFMatcherDelete(struct BFMatcher_t* wrapper);
struct  BOWImgDescriptorExtractor_t*  pCvBOWImgDescriptorExtractorCreate(Ptr_DescriptorExtractor* dextractor, 
                                   Ptr_DescriptorMatcher* dmatcher);
void                      pCvBOWImgDescriptorExtractorDelete(struct BOWImgDescriptorExtractor_t* wrapper);
struct  BOWKMeansTrainer_t*  pCvBOWKMeansTrainerCreate(int clusterCount, 
                                   TermCriteria_t* termcrit /* default: TermCriteria() */, int attempts /* default: 3 */, 
                                   int flags /* default: KMEANS_PP_CENTERS */);
void                      pCvBOWKMeansTrainerDelete(struct BOWKMeansTrainer_t* wrapper);
struct  detail_BestOf2NearestMatcher_t*  pCvdetail_BestOf2NearestMatcherCreate(bool try_use_gpu /* default: false */, 
                                   float match_conf /* default: 0.3f */, int num_matches_thresh1 /* default: 6 */, 
                                   int num_matches_thresh2 /* default: 6 */);
void                      pCvdetail_BestOf2NearestMatcherDelete(struct detail_BestOf2NearestMatcher_t* wrapper);
struct  detail_BestOf2NearestRangeMatcher_t*  pCvdetail_BestOf2NearestRangeMatcherCreate(int range_width /* default: 5 */, 
                                   bool try_use_gpu /* default: false */, float match_conf /* default: 0.3f */, 
                                   int num_matches_thresh1 /* default: 6 */, int num_matches_thresh2 /* default: 6 */);
void                      pCvdetail_BestOf2NearestRangeMatcherDelete(struct detail_BestOf2NearestRangeMatcher_t* wrapper);
struct  detail_BlocksChannelsCompensator_t*  pCvdetail_BlocksChannelsCompensatorCreate(int bl_width /* default: 32 */, 
                                   int bl_height /* default: 32 */, int nr_feeds /* default: 1 */);
void                      pCvdetail_BlocksChannelsCompensatorDelete(struct detail_BlocksChannelsCompensator_t* wrapper);
struct  detail_BlocksGainCompensator_t*  pCvdetail_BlocksGainCompensatorCreate(int bl_width /* default: 32 */, 
                                   int bl_height /* default: 32 */);
struct  detail_BlocksGainCompensator_t*  pCvdetail_BlocksGainCompensatorCreateV2(int bl_width, int bl_height, int nr_feeds);
void                      pCvdetail_BlocksGainCompensatorDelete(struct detail_BlocksGainCompensator_t* wrapper);
struct  detail_BundleAdjusterAffine_t*  pCvdetail_BundleAdjusterAffineCreate();
void                      pCvdetail_BundleAdjusterAffineDelete(struct detail_BundleAdjusterAffine_t* wrapper);
struct  detail_BundleAdjusterAffinePartial_t*  pCvdetail_BundleAdjusterAffinePartialCreate();
void                      pCvdetail_BundleAdjusterAffinePartialDelete(struct detail_BundleAdjusterAffinePartial_t* wrapper);
struct  detail_BundleAdjusterRay_t*  pCvdetail_BundleAdjusterRayCreate();
void                      pCvdetail_BundleAdjusterRayDelete(struct detail_BundleAdjusterRay_t* wrapper);
struct  detail_BundleAdjusterReproj_t*  pCvdetail_BundleAdjusterReprojCreate();
void                      pCvdetail_BundleAdjusterReprojDelete(struct detail_BundleAdjusterReproj_t* wrapper);
struct  CascadeClassifier_t*  pCvCascadeClassifierCreate();
struct  CascadeClassifier_t*  pCvCascadeClassifierCreateV2(string_t* filename);
void                      pCvCascadeClassifierDelete(struct CascadeClassifier_t* wrapper);
struct  detail_ChannelsCompensator_t*  pCvdetail_ChannelsCompensatorCreate(int nr_feeds /* default: 1 */);
void                      pCvdetail_ChannelsCompensatorDelete(struct detail_ChannelsCompensator_t* wrapper);
struct  CirclesGridFinderParameters_t*  pCvCirclesGridFinderParametersCreate();
void                      pCvCirclesGridFinderParametersDelete(struct CirclesGridFinderParameters_t* wrapper);
struct  dnn_ClassificationModel_t*  pCvdnn_ClassificationModelCreate(string_t* model, string_t* config /* default: "" */);
struct  dnn_ClassificationModel_t*  pCvdnn_ClassificationModelCreateV2(dnn_Net_t* network);
void                      pCvdnn_ClassificationModelDelete(struct dnn_ClassificationModel_t* wrapper);
struct  DMatch_t*         pCvDMatchCreate();
struct  DMatch_t*         pCvDMatchCreateV2(int _queryIdx, int _trainIdx, float _distance);
struct  DMatch_t*         pCvDMatchCreateV3(int _queryIdx, int _trainIdx, int _imgIdx, float _distance);
void                      pCvDMatchDelete(struct DMatch_t* wrapper);
struct  dnn_DetectionModel_t*  pCvdnn_DetectionModelCreate(string_t* model, string_t* config /* default: "" */);
struct  dnn_DetectionModel_t*  pCvdnn_DetectionModelCreateV2(dnn_Net_t* network);
void                      pCvdnn_DetectionModelDelete(struct dnn_DetectionModel_t* wrapper);
struct  ocl_Device_t*     pCvocl_DeviceCreate();
void                      pCvocl_DeviceDelete(struct ocl_Device_t* wrapper);
struct  dnn_DictValue_t*  pCvdnn_DictValueCreate(int i);
struct  dnn_DictValue_t*  pCvdnn_DictValueCreateV2(double p);
struct  dnn_DictValue_t*  pCvdnn_DictValueCreateV3(string_t* s);
void                      pCvdnn_DictValueDelete(struct dnn_DictValue_t* wrapper);
struct  detail_DpSeamFinder_t*  pCvdetail_DpSeamFinderCreate(string_t* costFunc);
void                      pCvdetail_DpSeamFinderDelete(struct detail_DpSeamFinder_t* wrapper);
struct  detail_FeatherBlender_t*  pCvdetail_FeatherBlenderCreate(float sharpness /* default: 0.02f */);
void                      pCvdetail_FeatherBlenderDelete(struct detail_FeatherBlender_t* wrapper);
struct  FileNode_t*       pCvFileNodeCreate();
void                      pCvFileNodeDelete(struct FileNode_t* wrapper);
struct  FileStorage_t*    pCvFileStorageCreate();
struct  FileStorage_t*    pCvFileStorageCreateV2(string_t* filename, int flags, 
                                   string_t* encoding /* default: String() */);
void                      pCvFileStorageDelete(struct FileStorage_t* wrapper);
struct  FlannBasedMatcher_t*  pCvFlannBasedMatcherCreate(
                                   Ptr_flann_IndexParams* indexParams /* default: makePtr<flann::KDTreeIndexParams>() */, 
                                   Ptr_flann_SearchParams* searchParams /* default: makePtr<flann::SearchParams>() */);
void                      pCvFlannBasedMatcherDelete(struct FlannBasedMatcher_t* wrapper);
struct  detail_GainCompensator_t*  pCvdetail_GainCompensatorCreate();
struct  detail_GainCompensator_t*  pCvdetail_GainCompensatorCreateV2(int nr_feeds);
void                      pCvdetail_GainCompensatorDelete(struct detail_GainCompensator_t* wrapper);
struct  detail_GraphCutSeamFinder_t*  pCvdetail_GraphCutSeamFinderCreate(string_t* cost_type, 
                                   float terminal_cost /* default: 10000.f */, float bad_region_penalty /* default: 1000.f */);
void                      pCvdetail_GraphCutSeamFinderDelete(struct detail_GraphCutSeamFinder_t* wrapper);
struct  HOGDescriptor_t*  pCvHOGDescriptorCreate();
struct  HOGDescriptor_t*  pCvHOGDescriptorCreateV2(Size_t* _winSize, Size_t* _blockSize, Size_t* _blockStride, 
                                   Size_t* _cellSize, int _nbins, int _derivAperture /* default: 1 */, 
                                   double _winSigma /* default: -1 */, 
                                   HOGDescriptor_HistogramNormType _histogramNormType /* default: HOGDescriptor::L2Hys */, double _L2HysThreshold /* default: 0.2 */, 
                                   bool _gammaCorrection /* default: false */, int _nlevels /* default: HOGDescriptor::DEFAULT_NLEVELS */, 
                                   bool _signedGradient /* default: false */);
struct  HOGDescriptor_t*  pCvHOGDescriptorCreateV3(string_t* filename);
void                      pCvHOGDescriptorDelete(struct HOGDescriptor_t* wrapper);
struct  detail_HomographyBasedEstimator_t*  pCvdetail_HomographyBasedEstimatorCreate(bool is_focals_estimated /* default: false */);
void                      pCvdetail_HomographyBasedEstimatorDelete(struct detail_HomographyBasedEstimator_t* wrapper);
struct  flann_Index_t*    pCvflann_IndexCreate();
struct  flann_Index_t*    pCvflann_IndexCreateV2(Mat_t* features, IndexParams_t* params, 
                                   cvflann_flann_distance_t distType /* default: cvflann::FLANN_DIST_L2 */);
struct  flann_Index_t*    pCvflann_IndexCreateV3(UMat_t* features, IndexParams_t* params, 
                                   cvflann_flann_distance_t distType /* default: cvflann::FLANN_DIST_L2 */);
void                      pCvflann_IndexDelete(struct flann_Index_t* wrapper);
struct  segmentation_IntelligentScissorsMB_t*  pCvsegmentation_IntelligentScissorsMBCreate();
void                      pCvsegmentation_IntelligentScissorsMBDelete(struct segmentation_IntelligentScissorsMB_t* wrapper);
struct  ml_KDTree_t*      pCvml_KDTreeCreate();
struct  ml_KDTree_t*      pCvml_KDTreeCreateV2(Mat_t* points, bool copyAndReorderPoints /* default: false */);
struct  ml_KDTree_t*      pCvml_KDTreeCreateV3(UMat_t* points, bool copyAndReorderPoints /* default: false */);
struct  ml_KDTree_t*      pCvml_KDTreeCreateV4(Mat_t* points, Mat_t* _labels, 
                                   bool copyAndReorderPoints /* default: false */);
struct  ml_KDTree_t*      pCvml_KDTreeCreateV5(UMat_t* points, UMat_t* _labels, 
                                   bool copyAndReorderPoints /* default: false */);
void                      pCvml_KDTreeDelete(struct ml_KDTree_t* wrapper);
struct  KalmanFilter_t*   pCvKalmanFilterCreate();
struct  KalmanFilter_t*   pCvKalmanFilterCreateV2(int dynamParams, int measureParams, 
                                   int controlParams /* default: 0 */, int _type /* default: CV_32F */);
void                      pCvKalmanFilterDelete(struct KalmanFilter_t* wrapper);
struct  KeyPoint_t*       pCvKeyPointCreate();
struct  KeyPoint_t*       pCvKeyPointCreateV2(float x, float y, float size, float angle /* default: -1 */, 
                                   float response /* default: 0 */, int octave /* default: 0 */, int class_id /* default: -1 */);
void                      pCvKeyPointDelete(struct KeyPoint_t* wrapper);
struct  dnn_KeypointsModel_t*  pCvdnn_KeypointsModelCreate(string_t* model, string_t* config /* default: "" */);
struct  dnn_KeypointsModel_t*  pCvdnn_KeypointsModelCreateV2(dnn_Net_t* network);
void                      pCvdnn_KeypointsModelDelete(struct dnn_KeypointsModel_t* wrapper);
struct  dnn_Model_t*      pCvdnn_ModelCreate(string_t* model, string_t* config /* default: "" */);
struct  dnn_Model_t*      pCvdnn_ModelCreateV2(dnn_Net_t* network);
void                      pCvdnn_ModelDelete(struct dnn_Model_t* wrapper);
struct  detail_MultiBandBlender_t*  pCvdetail_MultiBandBlenderCreate(int try_gpu /* default: false */, 
                                   int num_bands /* default: 5 */, int weight_type /* default: CV_32F */);
void                      pCvdetail_MultiBandBlenderDelete(struct detail_MultiBandBlender_t* wrapper);
struct  dnn_Net_t*        pCvdnn_NetCreate();
void                      pCvdnn_NetDelete(struct dnn_Net_t* wrapper);
struct  detail_NoBundleAdjuster_t*  pCvdetail_NoBundleAdjusterCreate();
void                      pCvdetail_NoBundleAdjusterDelete(struct detail_NoBundleAdjuster_t* wrapper);
struct  utils_nested_OriginalClassName_Params_t*  pCvutils_nested_OriginalClassName_ParamsCreate(int int_param /* default: 123 */, 
                                   float float_param /* default: 3.5f */);
void                      pCvutils_nested_OriginalClassName_ParamsDelete(struct utils_nested_OriginalClassName_Params_t* wrapper);
struct  PyRotationWarper_t*  pCvPyRotationWarperCreate(string_t* _type, float scale);
struct  PyRotationWarper_t*  pCvPyRotationWarperCreateV2();
void                      pCvPyRotationWarperDelete(struct PyRotationWarper_t* wrapper);
struct  QRCodeDetector_t*  pCvQRCodeDetectorCreate();
void                      pCvQRCodeDetectorDelete(struct QRCodeDetector_t* wrapper);
struct  QRCodeEncoder_Params_t*  pCvQRCodeEncoder_ParamsCreate();
void                      pCvQRCodeEncoder_ParamsDelete(struct QRCodeEncoder_Params_t* wrapper);
struct  dnn_SegmentationModel_t*  pCvdnn_SegmentationModelCreate(string_t* model, string_t* config /* default: "" */);
struct  dnn_SegmentationModel_t*  pCvdnn_SegmentationModelCreateV2(dnn_Net_t* network);
void                      pCvdnn_SegmentationModelDelete(struct dnn_SegmentationModel_t* wrapper);
struct  SimpleBlobDetector_Params_t*  pCvSimpleBlobDetector_ParamsCreate();
void                      pCvSimpleBlobDetector_ParamsDelete(struct SimpleBlobDetector_Params_t* wrapper);
struct  Subdiv2D_t*       pCvSubdiv2DCreate();
struct  Subdiv2D_t*       pCvSubdiv2DCreateV2(Rect_t* rect);
void                      pCvSubdiv2DDelete(struct Subdiv2D_t* wrapper);
struct  dnn_TextDetectionModel_DB_t*  pCvdnn_TextDetectionModel_DBCreate(dnn_Net_t* network);
struct  dnn_TextDetectionModel_DB_t*  pCvdnn_TextDetectionModel_DBCreateV2(string_t* model, string_t* config /* default: "" */);
void                      pCvdnn_TextDetectionModel_DBDelete(struct dnn_TextDetectionModel_DB_t* wrapper);
struct  dnn_TextDetectionModel_EAST_t*  pCvdnn_TextDetectionModel_EASTCreate(dnn_Net_t* network);
struct  dnn_TextDetectionModel_EAST_t*  pCvdnn_TextDetectionModel_EASTCreateV2(string_t* model, string_t* config /* default: "" */);
void                      pCvdnn_TextDetectionModel_EASTDelete(struct dnn_TextDetectionModel_EAST_t* wrapper);
struct  dnn_TextRecognitionModel_t*  pCvdnn_TextRecognitionModelCreate(dnn_Net_t* network);
struct  dnn_TextRecognitionModel_t*  pCvdnn_TextRecognitionModelCreateV2(string_t* model, string_t* config /* default: "" */);
void                      pCvdnn_TextRecognitionModelDelete(struct dnn_TextRecognitionModel_t* wrapper);
struct  TickMeter_t*      pCvTickMeterCreate();
void                      pCvTickMeterDelete(struct TickMeter_t* wrapper);
struct  TrackerDaSiamRPN_Params_t*  pCvTrackerDaSiamRPN_ParamsCreate();
void                      pCvTrackerDaSiamRPN_ParamsDelete(struct TrackerDaSiamRPN_Params_t* wrapper);
struct  TrackerGOTURN_Params_t*  pCvTrackerGOTURN_ParamsCreate();
void                      pCvTrackerGOTURN_ParamsDelete(struct TrackerGOTURN_Params_t* wrapper);
struct  TrackerMIL_Params_t*  pCvTrackerMIL_ParamsCreate();
void                      pCvTrackerMIL_ParamsDelete(struct TrackerMIL_Params_t* wrapper);
struct  UMat_t*           pCvUMatCreate(UMatUsageFlags usageFlags /* default: USAGE_DEFAULT */);
struct  UMat_t*           pCvUMatCreateV2(int rows, int cols, int _type, 
                                   UMatUsageFlags usageFlags /* default: USAGE_DEFAULT */);
struct  UMat_t*           pCvUMatCreateV3(Size_t* size, int _type, 
                                   UMatUsageFlags usageFlags /* default: USAGE_DEFAULT */);
struct  UMat_t*           pCvUMatCreateV4(int rows, int cols, int _type, Scalar_t* s, 
                                   UMatUsageFlags usageFlags /* default: USAGE_DEFAULT */);
struct  UMat_t*           pCvUMatCreateV5(Size_t* size, int _type, Scalar_t* s, 
                                   UMatUsageFlags usageFlags /* default: USAGE_DEFAULT */);
struct  UMat_t*           pCvUMatCreateV6(UMat_t* m);
struct  UMat_t*           pCvUMatCreateV7(UMat_t* m, Range_t* rowRange, Range_t* colRange /* default: Range::all() */);
struct  UMat_t*           pCvUMatCreateV8(UMat_t* m, Rect_t* roi);
struct  UMat_t*           pCvUMatCreateV9(UMat_t* m, vector_Range* ranges);
void                      pCvUMatDelete(struct UMat_t* wrapper);
struct  UsacParams_t*     pCvUsacParamsCreate();
void                      pCvUsacParamsDelete(struct UsacParams_t* wrapper);
struct  VideoCapture_t*   pCvVideoCaptureCreate();
struct  VideoCapture_t*   pCvVideoCaptureCreateV2(string_t* filename, int apiPreference /* default: CAP_ANY */);
struct  VideoCapture_t*   pCvVideoCaptureCreateV3(string_t* filename, int apiPreference, vector_int* params);
struct  VideoCapture_t*   pCvVideoCaptureCreateV4(int index, int apiPreference /* default: CAP_ANY */);
struct  VideoCapture_t*   pCvVideoCaptureCreateV5(int index, int apiPreference, vector_int* params);
void                      pCvVideoCaptureDelete(struct VideoCapture_t* wrapper);
struct  VideoWriter_t*    pCvVideoWriterCreate();
struct  VideoWriter_t*    pCvVideoWriterCreateV2(string_t* filename, int fourcc, double fps, Size_t* frameSize, 
                                   bool isColor /* default: true */);
struct  VideoWriter_t*    pCvVideoWriterCreateV3(string_t* filename, int apiPreference, int fourcc, double fps, 
                                   Size_t* frameSize, bool isColor /* default: true */);
struct  VideoWriter_t*    pCvVideoWriterCreateV4(string_t* filename, int fourcc, double fps, Size_t* frameSize, 
                                   vector_int* params);
struct  VideoWriter_t*    pCvVideoWriterCreateV5(string_t* filename, int apiPreference, int fourcc, double fps, 
                                   Size_t* frameSize, vector_int* params);
void                      pCvVideoWriterDelete(struct VideoWriter_t* wrapper);
void                      pCvAKAZEclear(struct  AKAZE_t* wrapper);
void                      pCvAKAZEcompute(struct  AKAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvAKAZEcomputeV2(struct  AKAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvAKAZEcomputeV3(struct  AKAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvAKAZEcomputeV4(struct  AKAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_AKAZE*                pCvAKAZE_create(AKAZE_DescriptorType descriptor_type /* default: AKAZE::DESCRIPTOR_MLDB */, 
                                   int descriptor_size /* default: 0 */, int descriptor_channels /* default: 3 */, 
                                   float threshold /* default: 0.001f */, int nOctaves /* default: 4 */, int nOctaveLayers /* default: 4 */, 
                                   KAZE_DiffusivityType diffusivity /* default: KAZE::DIFF_PM_G2 */);
int                       pCvAKAZEdefaultNorm(struct  AKAZE_t* wrapper);
int                       pCvAKAZEdescriptorSize(struct  AKAZE_t* wrapper);
int                       pCvAKAZEdescriptorType(struct  AKAZE_t* wrapper);
void                      pCvAKAZEdetect(struct  AKAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvAKAZEdetectV2(struct  AKAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvAKAZEdetectV3(struct  AKAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvAKAZEdetectV4(struct  AKAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvAKAZEdetectAndCompute(struct  AKAZE_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints /* default: false */);
void                      pCvAKAZEdetectAndComputeV2(struct  AKAZE_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvAKAZEempty(struct  AKAZE_t* wrapper);
string_t*                 pCvAKAZEgetDefaultName(struct  AKAZE_t* wrapper);
int                       pCvAKAZEgetDescriptorChannels(struct  AKAZE_t* wrapper);
int                       pCvAKAZEgetDescriptorSize(struct  AKAZE_t* wrapper);
AKAZE_DescriptorType      pCvAKAZEgetDescriptorType(struct  AKAZE_t* wrapper);
KAZE_DiffusivityType      pCvAKAZEgetDiffusivity(struct  AKAZE_t* wrapper);
int                       pCvAKAZEgetNOctaveLayers(struct  AKAZE_t* wrapper);
int                       pCvAKAZEgetNOctaves(struct  AKAZE_t* wrapper);
double                    pCvAKAZEgetThreshold(struct  AKAZE_t* wrapper);
void                      pCvAKAZEread(struct  AKAZE_t* wrapper, string_t* fileName);
void                      pCvAKAZEreadV2(struct  AKAZE_t* wrapper, FileNode_t* arg1);
void                      pCvAKAZEsave(struct  AKAZE_t* wrapper, string_t* filename);
void                      pCvAKAZEsetDescriptorChannels(struct  AKAZE_t* wrapper, int dch);
void                      pCvAKAZEsetDescriptorSize(struct  AKAZE_t* wrapper, int dsize);
void                      pCvAKAZEsetDescriptorType(struct  AKAZE_t* wrapper, AKAZE_DescriptorType dtype);
void                      pCvAKAZEsetDiffusivity(struct  AKAZE_t* wrapper, KAZE_DiffusivityType diff);
void                      pCvAKAZEsetNOctaveLayers(struct  AKAZE_t* wrapper, int octaveLayers);
void                      pCvAKAZEsetNOctaves(struct  AKAZE_t* wrapper, int octaves);
void                      pCvAKAZEsetThreshold(struct  AKAZE_t* wrapper, double threshold);
void                      pCvAKAZEwrite(struct  AKAZE_t* wrapper, string_t* fileName);
void                      pCvAKAZEwriteV2(struct  AKAZE_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvAffineFeatureclear(struct  AffineFeature_t* wrapper);
void                      pCvAffineFeaturecompute(struct  AffineFeature_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors);
void                      pCvAffineFeaturecomputeV2(struct  AffineFeature_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors);
void                      pCvAffineFeaturecomputeV3(struct  AffineFeature_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvAffineFeaturecomputeV4(struct  AffineFeature_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_AffineFeature*        pCvAffineFeature_create(Ptr_Feature2D* backend, int maxTilt /* default: 5 */, 
                                   int minTilt /* default: 0 */, float tiltStep /* default: 1.4142135623730951f */, 
                                   float rotateStepBase /* default: 72 */);
int                       pCvAffineFeaturedefaultNorm(struct  AffineFeature_t* wrapper);
int                       pCvAffineFeaturedescriptorSize(struct  AffineFeature_t* wrapper);
int                       pCvAffineFeaturedescriptorType(struct  AffineFeature_t* wrapper);
void                      pCvAffineFeaturedetect(struct  AffineFeature_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask /* default: Mat() */);
void                      pCvAffineFeaturedetectV2(struct  AffineFeature_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask /* default: UMat() */);
void                      pCvAffineFeaturedetectV3(struct  AffineFeature_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvAffineFeaturedetectV4(struct  AffineFeature_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvAffineFeaturedetectAndCompute(struct  AffineFeature_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvAffineFeaturedetectAndComputeV2(struct  AffineFeature_t* wrapper, UMat_t* image, 
                                   UMat_t* mask, vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvAffineFeatureempty(struct  AffineFeature_t* wrapper);
string_t*                 pCvAffineFeaturegetDefaultName(struct  AffineFeature_t* wrapper);
void                      pCvAffineFeaturegetViewParams(struct  AffineFeature_t* wrapper, vector_float* tilts, 
                                   vector_float* rolls);
void                      pCvAffineFeatureread(struct  AffineFeature_t* wrapper, string_t* fileName);
void                      pCvAffineFeaturereadV2(struct  AffineFeature_t* wrapper, FileNode_t* arg1);
void                      pCvAffineFeaturesave(struct  AffineFeature_t* wrapper, string_t* filename);
void                      pCvAffineFeaturesetViewParams(struct  AffineFeature_t* wrapper, vector_float* tilts, 
                                   vector_float* rolls);
void                      pCvAffineFeaturewrite(struct  AffineFeature_t* wrapper, string_t* fileName);
void                      pCvAffineFeaturewriteV2(struct  AffineFeature_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvAgastFeatureDetectorclear(struct  AgastFeatureDetector_t* wrapper);
void                      pCvAgastFeatureDetectorcompute(struct  AgastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors);
void                      pCvAgastFeatureDetectorcomputeV2(struct  AgastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors);
void                      pCvAgastFeatureDetectorcomputeV3(struct  AgastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvAgastFeatureDetectorcomputeV4(struct  AgastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_AgastFeatureDetector* pCvAgastFeatureDetector_create(int threshold /* default: 10 */, 
                                   bool nonmaxSuppression /* default: true */, 
                                   AgastFeatureDetector_DetectorType _type /* default: AgastFeatureDetector::OAST_9_16 */);
int                       pCvAgastFeatureDetectordefaultNorm(struct  AgastFeatureDetector_t* wrapper);
int                       pCvAgastFeatureDetectordescriptorSize(struct  AgastFeatureDetector_t* wrapper);
int                       pCvAgastFeatureDetectordescriptorType(struct  AgastFeatureDetector_t* wrapper);
void                      pCvAgastFeatureDetectordetect(struct  AgastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask /* default: Mat() */);
void                      pCvAgastFeatureDetectordetectV2(struct  AgastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask /* default: UMat() */);
void                      pCvAgastFeatureDetectordetectV3(struct  AgastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvAgastFeatureDetectordetectV4(struct  AgastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvAgastFeatureDetectordetectAndCompute(struct  AgastFeatureDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* mask, vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvAgastFeatureDetectordetectAndComputeV2(struct  AgastFeatureDetector_t* wrapper, 
                                   UMat_t* image, UMat_t* mask, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors, bool useProvidedKeypoints /* default: false */);
bool                      pCvAgastFeatureDetectorempty(struct  AgastFeatureDetector_t* wrapper);
string_t*                 pCvAgastFeatureDetectorgetDefaultName(struct  AgastFeatureDetector_t* wrapper);
bool                      pCvAgastFeatureDetectorgetNonmaxSuppression(struct  AgastFeatureDetector_t* wrapper);
int                       pCvAgastFeatureDetectorgetThreshold(struct  AgastFeatureDetector_t* wrapper);
AgastFeatureDetector_DetectorType pCvAgastFeatureDetectorgetType(struct  AgastFeatureDetector_t* wrapper);
void                      pCvAgastFeatureDetectorread(struct  AgastFeatureDetector_t* wrapper, string_t* fileName);
void                      pCvAgastFeatureDetectorreadV2(struct  AgastFeatureDetector_t* wrapper, FileNode_t* arg1);
void                      pCvAgastFeatureDetectorsave(struct  AgastFeatureDetector_t* wrapper, string_t* filename);
void                      pCvAgastFeatureDetectorsetNonmaxSuppression(struct  AgastFeatureDetector_t* wrapper, bool f);
void                      pCvAgastFeatureDetectorsetThreshold(struct  AgastFeatureDetector_t* wrapper, int threshold);
void                      pCvAgastFeatureDetectorsetType(struct  AgastFeatureDetector_t* wrapper, 
                                   AgastFeatureDetector_DetectorType _type);
void                      pCvAgastFeatureDetectorwrite(struct  AgastFeatureDetector_t* wrapper, string_t* fileName);
void                      pCvAgastFeatureDetectorwriteV2(struct  AgastFeatureDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvAlgorithmclear(struct  Algorithm_t* wrapper);
bool                      pCvAlgorithmempty(struct  Algorithm_t* wrapper);
string_t*                 pCvAlgorithmgetDefaultName(struct  Algorithm_t* wrapper);
void                      pCvAlgorithmread(struct  Algorithm_t* wrapper, FileNode_t* fn);
void                      pCvAlgorithmsave(struct  Algorithm_t* wrapper, string_t* filename);
void                      pCvAlgorithmwrite(struct  Algorithm_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvAlignExposuresclear(struct  AlignExposures_t* wrapper);
bool                      pCvAlignExposuresempty(struct  AlignExposures_t* wrapper);
string_t*                 pCvAlignExposuresgetDefaultName(struct  AlignExposures_t* wrapper);
void                      pCvAlignExposuresprocess(struct  AlignExposures_t* wrapper, vector_Mat* src, vector_Mat* dst, 
                                   Mat_t* times, Mat_t* response);
void                      pCvAlignExposuresprocessV2(struct  AlignExposures_t* wrapper, vector_UMat* src, 
                                   vector_Mat* dst, UMat_t* times, UMat_t* response);
void                      pCvAlignExposuresread(struct  AlignExposures_t* wrapper, FileNode_t* fn);
void                      pCvAlignExposuressave(struct  AlignExposures_t* wrapper, string_t* filename);
void                      pCvAlignExposureswrite(struct  AlignExposures_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
Point_t*                  pCvAlignMTBcalculateShift(struct  AlignMTB_t* wrapper, Mat_t* img0, Mat_t* img1);
Point_t*                  pCvAlignMTBcalculateShiftV2(struct  AlignMTB_t* wrapper, UMat_t* img0, UMat_t* img1);
void                      pCvAlignMTBclear(struct  AlignMTB_t* wrapper);
void                      pCvAlignMTBcomputeBitmaps(struct  AlignMTB_t* wrapper, Mat_t* img, Mat_t* tb, Mat_t* eb);
void                      pCvAlignMTBcomputeBitmapsV2(struct  AlignMTB_t* wrapper, UMat_t* img, UMat_t* tb, UMat_t* eb);
bool                      pCvAlignMTBempty(struct  AlignMTB_t* wrapper);
bool                      pCvAlignMTBgetCut(struct  AlignMTB_t* wrapper);
string_t*                 pCvAlignMTBgetDefaultName(struct  AlignMTB_t* wrapper);
int                       pCvAlignMTBgetExcludeRange(struct  AlignMTB_t* wrapper);
int                       pCvAlignMTBgetMaxBits(struct  AlignMTB_t* wrapper);
void                      pCvAlignMTBprocess(struct  AlignMTB_t* wrapper, vector_Mat* src, vector_Mat* dst, 
                                   Mat_t* times, Mat_t* response);
void                      pCvAlignMTBprocessV2(struct  AlignMTB_t* wrapper, vector_UMat* src, vector_Mat* dst, 
                                   UMat_t* times, UMat_t* response);
void                      pCvAlignMTBprocessV3(struct  AlignMTB_t* wrapper, vector_Mat* src, vector_Mat* dst);
void                      pCvAlignMTBprocessV4(struct  AlignMTB_t* wrapper, vector_UMat* src, vector_Mat* dst);
void                      pCvAlignMTBread(struct  AlignMTB_t* wrapper, FileNode_t* fn);
void                      pCvAlignMTBsave(struct  AlignMTB_t* wrapper, string_t* filename);
void                      pCvAlignMTBsetCut(struct  AlignMTB_t* wrapper, bool value);
void                      pCvAlignMTBsetExcludeRange(struct  AlignMTB_t* wrapper, int exclude_range);
void                      pCvAlignMTBsetMaxBits(struct  AlignMTB_t* wrapper, int max_bits);
void                      pCvAlignMTBshiftMat(struct  AlignMTB_t* wrapper, Mat_t* src, Mat_t* dst, Point_t* shift);
void                      pCvAlignMTBshiftMatV2(struct  AlignMTB_t* wrapper, UMat_t* src, UMat_t* dst, Point_t* shift);
void                      pCvAlignMTBwrite(struct  AlignMTB_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvAsyncArrayget(struct  AsyncArray_t* wrapper, Mat_t* dst);
void                      pCvAsyncArraygetV2(struct  AsyncArray_t* wrapper, UMat_t* dst);
bool                      pCvAsyncArraygetV3(struct  AsyncArray_t* wrapper, Mat_t* dst, double timeoutNs);
bool                      pCvAsyncArraygetV4(struct  AsyncArray_t* wrapper, UMat_t* dst, double timeoutNs);
void                      pCvAsyncArrayrelease(struct  AsyncArray_t* wrapper);
bool                      pCvAsyncArrayvalid(struct  AsyncArray_t* wrapper);
bool                      pCvAsyncArraywait_for(struct  AsyncArray_t* wrapper, double timeoutNs);
void                      pCvBFMatcheradd(struct  BFMatcher_t* wrapper, vector_Mat* descriptors);
void                      pCvBFMatcheraddV2(struct  BFMatcher_t* wrapper, vector_UMat* descriptors);
void                      pCvBFMatcherclear(struct  BFMatcher_t* wrapper);
Ptr_DescriptorMatcher*    pCvBFMatcherclone(struct  BFMatcher_t* wrapper, bool emptyTrainData /* default: false */);
Ptr_BFMatcher*            pCvBFMatcher_create(int normType /* default: NORM_L2 */, bool crossCheck /* default: false */);
bool                      pCvBFMatcherempty(struct  BFMatcher_t* wrapper);
string_t*                 pCvBFMatchergetDefaultName(struct  BFMatcher_t* wrapper);
vector_Mat*               pCvBFMatchergetTrainDescriptors(struct  BFMatcher_t* wrapper);
bool                      pCvBFMatcherisMaskSupported(struct  BFMatcher_t* wrapper);
void                      pCvBFMatcherknnMatch(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, int k, Mat_t* mask /* default: Mat() */, 
                                   bool compactResult /* default: false */);
void                      pCvBFMatcherknnMatchV2(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, int k, 
                                   UMat_t* mask /* default: UMat() */, bool compactResult /* default: false */);
void                      pCvBFMatcherknnMatchV3(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_Mat* masks /* default: vector_Mat() */, 
                                   bool compactResult /* default: false */);
void                      pCvBFMatcherknnMatchV4(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_UMat* masks /* default: vector_UMat() */, 
                                   bool compactResult /* default: false */);
void                      pCvBFMatchermatch(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_DMatch* matches, Mat_t* mask /* default: Mat() */);
void                      pCvBFMatchermatchV2(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_DMatch* matches, UMat_t* mask /* default: UMat() */);
void                      pCvBFMatchermatchV3(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvBFMatchermatchV4(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvBFMatcherradiusMatch(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   Mat_t* mask /* default: Mat() */, bool compactResult /* default: false */);
void                      pCvBFMatcherradiusMatchV2(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   UMat_t* mask /* default: UMat() */, bool compactResult /* default: false */);
void                      pCvBFMatcherradiusMatchV3(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, float maxDistance, vector_Mat* masks /* default: vector_Mat() */, 
                                   bool compactResult /* default: false */);
void                      pCvBFMatcherradiusMatchV4(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, float maxDistance, 
                                   vector_UMat* masks /* default: vector_UMat() */, bool compactResult /* default: false */);
void                      pCvBFMatcherread(struct  BFMatcher_t* wrapper, string_t* fileName);
void                      pCvBFMatcherreadV2(struct  BFMatcher_t* wrapper, FileNode_t* arg1);
void                      pCvBFMatchersave(struct  BFMatcher_t* wrapper, string_t* filename);
void                      pCvBFMatchertrain(struct  BFMatcher_t* wrapper);
void                      pCvBFMatcherwrite(struct  BFMatcher_t* wrapper, string_t* fileName);
void                      pCvBFMatcherwriteV2(struct  BFMatcher_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvBOWImgDescriptorExtractorcompute(struct  BOWImgDescriptorExtractor_t* wrapper, 
                                   Mat_t* image, vector_KeyPoint* keypoints, Mat_t* imgDescriptor);
int                       pCvBOWImgDescriptorExtractordescriptorSize(struct  BOWImgDescriptorExtractor_t* wrapper);
int                       pCvBOWImgDescriptorExtractordescriptorType(struct  BOWImgDescriptorExtractor_t* wrapper);
Mat_t*                    pCvBOWImgDescriptorExtractorgetVocabulary(struct  BOWImgDescriptorExtractor_t* wrapper);
void                      pCvBOWImgDescriptorExtractorsetVocabulary(struct  BOWImgDescriptorExtractor_t* wrapper, 
                                   Mat_t* vocabulary);
void                      pCvBOWKMeansTraineradd(struct  BOWKMeansTrainer_t* wrapper, Mat_t* descriptors);
void                      pCvBOWKMeansTrainerclear(struct  BOWKMeansTrainer_t* wrapper);
Mat_t*                    pCvBOWKMeansTrainercluster(struct  BOWKMeansTrainer_t* wrapper);
Mat_t*                    pCvBOWKMeansTrainerclusterV2(struct  BOWKMeansTrainer_t* wrapper, Mat_t* descriptors);
int                       pCvBOWKMeansTrainerdescriptorsCount(struct  BOWKMeansTrainer_t* wrapper);
vector_Mat*               pCvBOWKMeansTrainergetDescriptors(struct  BOWKMeansTrainer_t* wrapper);
void                      pCvBOWTraineradd(struct  BOWTrainer_t* wrapper, Mat_t* descriptors);
void                      pCvBOWTrainerclear(struct  BOWTrainer_t* wrapper);
Mat_t*                    pCvBOWTrainercluster(struct  BOWTrainer_t* wrapper);
Mat_t*                    pCvBOWTrainerclusterV2(struct  BOWTrainer_t* wrapper, Mat_t* descriptors);
int                       pCvBOWTrainerdescriptorsCount(struct  BOWTrainer_t* wrapper);
vector_Mat*               pCvBOWTrainergetDescriptors(struct  BOWTrainer_t* wrapper);
void                      pCvBRISKclear(struct  BRISK_t* wrapper);
void                      pCvBRISKcompute(struct  BRISK_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvBRISKcomputeV2(struct  BRISK_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvBRISKcomputeV3(struct  BRISK_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvBRISKcomputeV4(struct  BRISK_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_BRISK*                pCvBRISK_create(int thresh /* default: 30 */, int octaves /* default: 3 */, 
                                   float patternScale /* default: 1.0f */);
Ptr_BRISK*                pCvBRISK_createV2(vector_float* radiusList, vector_int* numberList, 
                                   float dMax /* default: 5.85f */, float dMin /* default: 8.2f */, 
                                   vector_int* indexChange /* default: std::vector<int>() */);
Ptr_BRISK*                pCvBRISK_createV3(int thresh, int octaves, vector_float* radiusList, vector_int* numberList, 
                                   float dMax /* default: 5.85f */, float dMin /* default: 8.2f */, 
                                   vector_int* indexChange /* default: std::vector<int>() */);
int                       pCvBRISKdefaultNorm(struct  BRISK_t* wrapper);
int                       pCvBRISKdescriptorSize(struct  BRISK_t* wrapper);
int                       pCvBRISKdescriptorType(struct  BRISK_t* wrapper);
void                      pCvBRISKdetect(struct  BRISK_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvBRISKdetectV2(struct  BRISK_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvBRISKdetectV3(struct  BRISK_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvBRISKdetectV4(struct  BRISK_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvBRISKdetectAndCompute(struct  BRISK_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints /* default: false */);
void                      pCvBRISKdetectAndComputeV2(struct  BRISK_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvBRISKempty(struct  BRISK_t* wrapper);
string_t*                 pCvBRISKgetDefaultName(struct  BRISK_t* wrapper);
int                       pCvBRISKgetOctaves(struct  BRISK_t* wrapper);
int                       pCvBRISKgetThreshold(struct  BRISK_t* wrapper);
void                      pCvBRISKread(struct  BRISK_t* wrapper, string_t* fileName);
void                      pCvBRISKreadV2(struct  BRISK_t* wrapper, FileNode_t* arg1);
void                      pCvBRISKsave(struct  BRISK_t* wrapper, string_t* filename);
void                      pCvBRISKsetOctaves(struct  BRISK_t* wrapper, int octaves);
void                      pCvBRISKsetThreshold(struct  BRISK_t* wrapper, int threshold);
void                      pCvBRISKwrite(struct  BRISK_t* wrapper, string_t* fileName);
void                      pCvBRISKwriteV2(struct  BRISK_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvBackgroundSubtractorapply(struct  BackgroundSubtractor_t* wrapper, Mat_t* image, 
                                   Mat_t* fgmask, double learningRate /* default: -1 */);
void                      pCvBackgroundSubtractorapplyV2(struct  BackgroundSubtractor_t* wrapper, UMat_t* image, 
                                   UMat_t* fgmask, double learningRate /* default: -1 */);
void                      pCvBackgroundSubtractorclear(struct  BackgroundSubtractor_t* wrapper);
bool                      pCvBackgroundSubtractorempty(struct  BackgroundSubtractor_t* wrapper);
void                      pCvBackgroundSubtractorgetBackgroundImage(struct  BackgroundSubtractor_t* wrapper, 
                                   Mat_t* backgroundImage);
void                      pCvBackgroundSubtractorgetBackgroundImageV2(struct  BackgroundSubtractor_t* wrapper, 
                                   UMat_t* backgroundImage);
string_t*                 pCvBackgroundSubtractorgetDefaultName(struct  BackgroundSubtractor_t* wrapper);
void                      pCvBackgroundSubtractorread(struct  BackgroundSubtractor_t* wrapper, FileNode_t* fn);
void                      pCvBackgroundSubtractorsave(struct  BackgroundSubtractor_t* wrapper, string_t* filename);
void                      pCvBackgroundSubtractorwrite(struct  BackgroundSubtractor_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvBackgroundSubtractorKNNapply(struct  BackgroundSubtractorKNN_t* wrapper, Mat_t* image, 
                                   Mat_t* fgmask, double learningRate /* default: -1 */);
void                      pCvBackgroundSubtractorKNNapplyV2(struct  BackgroundSubtractorKNN_t* wrapper, UMat_t* image, 
                                   UMat_t* fgmask, double learningRate /* default: -1 */);
void                      pCvBackgroundSubtractorKNNclear(struct  BackgroundSubtractorKNN_t* wrapper);
bool                      pCvBackgroundSubtractorKNNempty(struct  BackgroundSubtractorKNN_t* wrapper);
void                      pCvBackgroundSubtractorKNNgetBackgroundImage(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   Mat_t* backgroundImage);
void                      pCvBackgroundSubtractorKNNgetBackgroundImageV2(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   UMat_t* backgroundImage);
string_t*                 pCvBackgroundSubtractorKNNgetDefaultName(struct  BackgroundSubtractorKNN_t* wrapper);
bool                      pCvBackgroundSubtractorKNNgetDetectShadows(struct  BackgroundSubtractorKNN_t* wrapper);
double                    pCvBackgroundSubtractorKNNgetDist2Threshold(struct  BackgroundSubtractorKNN_t* wrapper);
int                       pCvBackgroundSubtractorKNNgetHistory(struct  BackgroundSubtractorKNN_t* wrapper);
int                       pCvBackgroundSubtractorKNNgetNSamples(struct  BackgroundSubtractorKNN_t* wrapper);
double                    pCvBackgroundSubtractorKNNgetShadowThreshold(struct  BackgroundSubtractorKNN_t* wrapper);
int                       pCvBackgroundSubtractorKNNgetShadowValue(struct  BackgroundSubtractorKNN_t* wrapper);
int                       pCvBackgroundSubtractorKNNgetkNNSamples(struct  BackgroundSubtractorKNN_t* wrapper);
void                      pCvBackgroundSubtractorKNNread(struct  BackgroundSubtractorKNN_t* wrapper, FileNode_t* fn);
void                      pCvBackgroundSubtractorKNNsave(struct  BackgroundSubtractorKNN_t* wrapper, string_t* filename);
void                      pCvBackgroundSubtractorKNNsetDetectShadows(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   bool detectShadows);
void                      pCvBackgroundSubtractorKNNsetDist2Threshold(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   double _dist2Threshold);
void                      pCvBackgroundSubtractorKNNsetHistory(struct  BackgroundSubtractorKNN_t* wrapper, int history);
void                      pCvBackgroundSubtractorKNNsetNSamples(struct  BackgroundSubtractorKNN_t* wrapper, int _nN);
void                      pCvBackgroundSubtractorKNNsetShadowThreshold(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   double threshold);
void                      pCvBackgroundSubtractorKNNsetShadowValue(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   int value);
void                      pCvBackgroundSubtractorKNNsetkNNSamples(struct  BackgroundSubtractorKNN_t* wrapper, int _nkNN);
void                      pCvBackgroundSubtractorKNNwrite(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name /* default: String() */);
void                      pCvBackgroundSubtractorMOG2apply(struct  BackgroundSubtractorMOG2_t* wrapper, Mat_t* image, 
                                   Mat_t* fgmask, double learningRate /* default: -1 */);
void                      pCvBackgroundSubtractorMOG2applyV2(struct  BackgroundSubtractorMOG2_t* wrapper, UMat_t* image, 
                                   UMat_t* fgmask, double learningRate /* default: -1 */);
void                      pCvBackgroundSubtractorMOG2clear(struct  BackgroundSubtractorMOG2_t* wrapper);
bool                      pCvBackgroundSubtractorMOG2empty(struct  BackgroundSubtractorMOG2_t* wrapper);
void                      pCvBackgroundSubtractorMOG2getBackgroundImage(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   Mat_t* backgroundImage);
void                      pCvBackgroundSubtractorMOG2getBackgroundImageV2(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   UMat_t* backgroundImage);
double                    pCvBackgroundSubtractorMOG2getBackgroundRatio(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getComplexityReductionThreshold(struct  BackgroundSubtractorMOG2_t* wrapper);
string_t*                 pCvBackgroundSubtractorMOG2getDefaultName(struct  BackgroundSubtractorMOG2_t* wrapper);
bool                      pCvBackgroundSubtractorMOG2getDetectShadows(struct  BackgroundSubtractorMOG2_t* wrapper);
int                       pCvBackgroundSubtractorMOG2getHistory(struct  BackgroundSubtractorMOG2_t* wrapper);
int                       pCvBackgroundSubtractorMOG2getNMixtures(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getShadowThreshold(struct  BackgroundSubtractorMOG2_t* wrapper);
int                       pCvBackgroundSubtractorMOG2getShadowValue(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getVarInit(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getVarMax(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getVarMin(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getVarThreshold(struct  BackgroundSubtractorMOG2_t* wrapper);
double                    pCvBackgroundSubtractorMOG2getVarThresholdGen(struct  BackgroundSubtractorMOG2_t* wrapper);
void                      pCvBackgroundSubtractorMOG2read(struct  BackgroundSubtractorMOG2_t* wrapper, FileNode_t* fn);
void                      pCvBackgroundSubtractorMOG2save(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   string_t* filename);
void                      pCvBackgroundSubtractorMOG2setBackgroundRatio(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double ratio);
void                      pCvBackgroundSubtractorMOG2setComplexityReductionThreshold(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double ct);
void                      pCvBackgroundSubtractorMOG2setDetectShadows(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   bool detectShadows);
void                      pCvBackgroundSubtractorMOG2setHistory(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   int history);
void                      pCvBackgroundSubtractorMOG2setNMixtures(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   int nmixtures);
void                      pCvBackgroundSubtractorMOG2setShadowThreshold(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double threshold);
void                      pCvBackgroundSubtractorMOG2setShadowValue(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   int value);
void                      pCvBackgroundSubtractorMOG2setVarInit(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varInit);
void                      pCvBackgroundSubtractorMOG2setVarMax(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varMax);
void                      pCvBackgroundSubtractorMOG2setVarMin(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varMin);
void                      pCvBackgroundSubtractorMOG2setVarThreshold(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varThreshold);
void                      pCvBackgroundSubtractorMOG2setVarThresholdGen(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varThresholdGen);
void                      pCvBackgroundSubtractorMOG2write(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name /* default: String() */);
void                      pCvBaseCascadeClassifierclear(struct  BaseCascadeClassifier_t* wrapper);
bool                      pCvBaseCascadeClassifierempty(struct  BaseCascadeClassifier_t* wrapper);
string_t*                 pCvBaseCascadeClassifiergetDefaultName(struct  BaseCascadeClassifier_t* wrapper);
void                      pCvBaseCascadeClassifierread(struct  BaseCascadeClassifier_t* wrapper, FileNode_t* fn);
void                      pCvBaseCascadeClassifiersave(struct  BaseCascadeClassifier_t* wrapper, string_t* filename);
void                      pCvBaseCascadeClassifierwrite(struct  BaseCascadeClassifier_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvCLAHEapply(struct  CLAHE_t* wrapper, Mat_t* src, Mat_t* dst);
void                      pCvCLAHEapplyV2(struct  CLAHE_t* wrapper, UMat_t* src, UMat_t* dst);
void                      pCvCLAHEclear(struct  CLAHE_t* wrapper);
void                      pCvCLAHEcollectGarbage(struct  CLAHE_t* wrapper);
bool                      pCvCLAHEempty(struct  CLAHE_t* wrapper);
double                    pCvCLAHEgetClipLimit(struct  CLAHE_t* wrapper);
string_t*                 pCvCLAHEgetDefaultName(struct  CLAHE_t* wrapper);
Size_t*                   pCvCLAHEgetTilesGridSize(struct  CLAHE_t* wrapper);
void                      pCvCLAHEread(struct  CLAHE_t* wrapper, FileNode_t* fn);
void                      pCvCLAHEsave(struct  CLAHE_t* wrapper, string_t* filename);
void                      pCvCLAHEsetClipLimit(struct  CLAHE_t* wrapper, double clipLimit);
void                      pCvCLAHEsetTilesGridSize(struct  CLAHE_t* wrapper, Size_t* tileGridSize);
void                      pCvCLAHEwrite(struct  CLAHE_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvCalibrateCRFclear(struct  CalibrateCRF_t* wrapper);
bool                      pCvCalibrateCRFempty(struct  CalibrateCRF_t* wrapper);
string_t*                 pCvCalibrateCRFgetDefaultName(struct  CalibrateCRF_t* wrapper);
void                      pCvCalibrateCRFprocess(struct  CalibrateCRF_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times);
void                      pCvCalibrateCRFprocessV2(struct  CalibrateCRF_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times);
void                      pCvCalibrateCRFread(struct  CalibrateCRF_t* wrapper, FileNode_t* fn);
void                      pCvCalibrateCRFsave(struct  CalibrateCRF_t* wrapper, string_t* filename);
void                      pCvCalibrateCRFwrite(struct  CalibrateCRF_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvCalibrateDebevecclear(struct  CalibrateDebevec_t* wrapper);
bool                      pCvCalibrateDebevecempty(struct  CalibrateDebevec_t* wrapper);
string_t*                 pCvCalibrateDebevecgetDefaultName(struct  CalibrateDebevec_t* wrapper);
float                     pCvCalibrateDebevecgetLambda(struct  CalibrateDebevec_t* wrapper);
bool                      pCvCalibrateDebevecgetRandom(struct  CalibrateDebevec_t* wrapper);
int                       pCvCalibrateDebevecgetSamples(struct  CalibrateDebevec_t* wrapper);
void                      pCvCalibrateDebevecprocess(struct  CalibrateDebevec_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times);
void                      pCvCalibrateDebevecprocessV2(struct  CalibrateDebevec_t* wrapper, vector_UMat* src, 
                                   UMat_t* dst, UMat_t* times);
void                      pCvCalibrateDebevecread(struct  CalibrateDebevec_t* wrapper, FileNode_t* fn);
void                      pCvCalibrateDebevecsave(struct  CalibrateDebevec_t* wrapper, string_t* filename);
void                      pCvCalibrateDebevecsetLambda(struct  CalibrateDebevec_t* wrapper, float lambda);
void                      pCvCalibrateDebevecsetRandom(struct  CalibrateDebevec_t* wrapper, bool _random);
void                      pCvCalibrateDebevecsetSamples(struct  CalibrateDebevec_t* wrapper, int samples);
void                      pCvCalibrateDebevecwrite(struct  CalibrateDebevec_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvCalibrateRobertsonclear(struct  CalibrateRobertson_t* wrapper);
bool                      pCvCalibrateRobertsonempty(struct  CalibrateRobertson_t* wrapper);
string_t*                 pCvCalibrateRobertsongetDefaultName(struct  CalibrateRobertson_t* wrapper);
int                       pCvCalibrateRobertsongetMaxIter(struct  CalibrateRobertson_t* wrapper);
Mat_t*                    pCvCalibrateRobertsongetRadiance(struct  CalibrateRobertson_t* wrapper);
float                     pCvCalibrateRobertsongetThreshold(struct  CalibrateRobertson_t* wrapper);
void                      pCvCalibrateRobertsonprocess(struct  CalibrateRobertson_t* wrapper, vector_Mat* src, 
                                   Mat_t* dst, Mat_t* times);
void                      pCvCalibrateRobertsonprocessV2(struct  CalibrateRobertson_t* wrapper, vector_UMat* src, 
                                   UMat_t* dst, UMat_t* times);
void                      pCvCalibrateRobertsonread(struct  CalibrateRobertson_t* wrapper, FileNode_t* fn);
void                      pCvCalibrateRobertsonsave(struct  CalibrateRobertson_t* wrapper, string_t* filename);
void                      pCvCalibrateRobertsonsetMaxIter(struct  CalibrateRobertson_t* wrapper, int max_iter);
void                      pCvCalibrateRobertsonsetThreshold(struct  CalibrateRobertson_t* wrapper, float threshold);
void                      pCvCalibrateRobertsonwrite(struct  CalibrateRobertson_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
bool                      pCvCascadeClassifierconvert(string_t* oldcascade, string_t* newcascade);
void                      pCvCascadeClassifierdetectMultiScale(struct  CascadeClassifier_t* wrapper, Mat_t* image, 
                                   vector_Rect* objects, double scaleFactor /* default: 1.1 */, 
                                   int minNeighbors /* default: 3 */, int flags /* default: 0 */, 
                                   Size_t* minSize /* default: Size() */, Size_t* maxSize /* default: Size() */);
void                      pCvCascadeClassifierdetectMultiScaleV2(struct  CascadeClassifier_t* wrapper, UMat_t* image, 
                                   vector_Rect* objects, double scaleFactor /* default: 1.1 */, 
                                   int minNeighbors /* default: 3 */, int flags /* default: 0 */, 
                                   Size_t* minSize /* default: Size() */, Size_t* maxSize /* default: Size() */);
void                      pCvCascadeClassifierdetectMultiScale2(struct  CascadeClassifier_t* wrapper, Mat_t* image, 
                                   vector_Rect* objects, vector_int* numDetections, 
                                   double scaleFactor /* default: 1.1 */, int minNeighbors /* default: 3 */, 
                                   int flags /* default: 0 */, Size_t* minSize /* default: Size() */, 
                                   Size_t* maxSize /* default: Size() */);
void                      pCvCascadeClassifierdetectMultiScale2V2(struct  CascadeClassifier_t* wrapper, UMat_t* image, 
                                   vector_Rect* objects, vector_int* numDetections, 
                                   double scaleFactor /* default: 1.1 */, int minNeighbors /* default: 3 */, 
                                   int flags /* default: 0 */, Size_t* minSize /* default: Size() */, 
                                   Size_t* maxSize /* default: Size() */);
void                      pCvCascadeClassifierdetectMultiScale3(struct  CascadeClassifier_t* wrapper, Mat_t* image, 
                                   vector_Rect* objects, vector_int* rejectLevels, vector_double* levelWeights, 
                                   double scaleFactor /* default: 1.1 */, int minNeighbors /* default: 3 */, 
                                   int flags /* default: 0 */, Size_t* minSize /* default: Size() */, 
                                   Size_t* maxSize /* default: Size() */, bool outputRejectLevels /* default: false */);
void                      pCvCascadeClassifierdetectMultiScale3V2(struct  CascadeClassifier_t* wrapper, UMat_t* image, 
                                   vector_Rect* objects, vector_int* rejectLevels, 
                                   vector_double* levelWeights, double scaleFactor /* default: 1.1 */, 
                                   int minNeighbors /* default: 3 */, int flags /* default: 0 */, 
                                   Size_t* minSize /* default: Size() */, Size_t* maxSize /* default: Size() */, 
                                   bool outputRejectLevels /* default: false */);
bool                      pCvCascadeClassifierempty(struct  CascadeClassifier_t* wrapper);
int                       pCvCascadeClassifiergetFeatureType(struct  CascadeClassifier_t* wrapper);
Size_t*                   pCvCascadeClassifiergetOriginalWindowSize(struct  CascadeClassifier_t* wrapper);
bool                      pCvCascadeClassifierisOldFormatCascade(struct  CascadeClassifier_t* wrapper);
bool                      pCvCascadeClassifierload(struct  CascadeClassifier_t* wrapper, string_t* filename);
bool                      pCvCascadeClassifierread(struct  CascadeClassifier_t* wrapper, FileNode_t* node);
float                       pCvCirclesGridFinderParametersGet_convexHullFactor(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_convexHullFactor(CirclesGridFinderParameters_t* p, float propval);
Size2f_t*                       pCvCirclesGridFinderParametersGet_densityNeighborhoodSize(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_densityNeighborhoodSize(CirclesGridFinderParameters_t* p, Size2f_t* propval);
float                       pCvCirclesGridFinderParametersGet_edgeGain(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_edgeGain(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_edgePenalty(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_edgePenalty(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_existingVertexGain(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_existingVertexGain(CirclesGridFinderParameters_t* p, float propval);
int                       pCvCirclesGridFinderParametersGet_keypointScale(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_keypointScale(CirclesGridFinderParameters_t* p, int propval);
int                       pCvCirclesGridFinderParametersGet_kmeansAttempts(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_kmeansAttempts(CirclesGridFinderParameters_t* p, int propval);
float                       pCvCirclesGridFinderParametersGet_maxRectifiedDistance(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_maxRectifiedDistance(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_minDensity(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_minDensity(CirclesGridFinderParameters_t* p, float propval);
int                       pCvCirclesGridFinderParametersGet_minDistanceToAddKeypoint(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_minDistanceToAddKeypoint(CirclesGridFinderParameters_t* p, int propval);
float                       pCvCirclesGridFinderParametersGet_minGraphConfidence(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_minGraphConfidence(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_minRNGEdgeSwitchDist(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_minRNGEdgeSwitchDist(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_squareSize(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_squareSize(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_vertexGain(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_vertexGain(CirclesGridFinderParameters_t* p, float propval);
float                       pCvCirclesGridFinderParametersGet_vertexPenalty(CirclesGridFinderParameters_t* p);
void                      pCvCirclesGridFinderParametersSet_vertexPenalty(CirclesGridFinderParameters_t* p, float propval);
void                      pCvDISOpticalFlowcalc(struct  DISOpticalFlow_t* wrapper, Mat_t* I0, Mat_t* I1, Mat_t* flow);
void                      pCvDISOpticalFlowcalcV2(struct  DISOpticalFlow_t* wrapper, UMat_t* I0, UMat_t* I1, 
                                   UMat_t* flow);
void                      pCvDISOpticalFlowclear(struct  DISOpticalFlow_t* wrapper);
void                      pCvDISOpticalFlowcollectGarbage(struct  DISOpticalFlow_t* wrapper);
Ptr_DISOpticalFlow*       pCvDISOpticalFlow_create(int preset /* default: DISOpticalFlow::PRESET_FAST */);
bool                      pCvDISOpticalFlowempty(struct  DISOpticalFlow_t* wrapper);
string_t*                 pCvDISOpticalFlowgetDefaultName(struct  DISOpticalFlow_t* wrapper);
int                       pCvDISOpticalFlowgetFinestScale(struct  DISOpticalFlow_t* wrapper);
int                       pCvDISOpticalFlowgetGradientDescentIterations(struct  DISOpticalFlow_t* wrapper);
int                       pCvDISOpticalFlowgetPatchSize(struct  DISOpticalFlow_t* wrapper);
int                       pCvDISOpticalFlowgetPatchStride(struct  DISOpticalFlow_t* wrapper);
bool                      pCvDISOpticalFlowgetUseMeanNormalization(struct  DISOpticalFlow_t* wrapper);
bool                      pCvDISOpticalFlowgetUseSpatialPropagation(struct  DISOpticalFlow_t* wrapper);
float                     pCvDISOpticalFlowgetVariationalRefinementAlpha(struct  DISOpticalFlow_t* wrapper);
float                     pCvDISOpticalFlowgetVariationalRefinementDelta(struct  DISOpticalFlow_t* wrapper);
float                     pCvDISOpticalFlowgetVariationalRefinementGamma(struct  DISOpticalFlow_t* wrapper);
int                       pCvDISOpticalFlowgetVariationalRefinementIterations(struct  DISOpticalFlow_t* wrapper);
void                      pCvDISOpticalFlowread(struct  DISOpticalFlow_t* wrapper, FileNode_t* fn);
void                      pCvDISOpticalFlowsave(struct  DISOpticalFlow_t* wrapper, string_t* filename);
void                      pCvDISOpticalFlowsetFinestScale(struct  DISOpticalFlow_t* wrapper, int _val);
void                      pCvDISOpticalFlowsetGradientDescentIterations(struct  DISOpticalFlow_t* wrapper, int _val);
void                      pCvDISOpticalFlowsetPatchSize(struct  DISOpticalFlow_t* wrapper, int _val);
void                      pCvDISOpticalFlowsetPatchStride(struct  DISOpticalFlow_t* wrapper, int _val);
void                      pCvDISOpticalFlowsetUseMeanNormalization(struct  DISOpticalFlow_t* wrapper, bool _val);
void                      pCvDISOpticalFlowsetUseSpatialPropagation(struct  DISOpticalFlow_t* wrapper, bool _val);
void                      pCvDISOpticalFlowsetVariationalRefinementAlpha(struct  DISOpticalFlow_t* wrapper, float _val);
void                      pCvDISOpticalFlowsetVariationalRefinementDelta(struct  DISOpticalFlow_t* wrapper, float _val);
void                      pCvDISOpticalFlowsetVariationalRefinementGamma(struct  DISOpticalFlow_t* wrapper, float _val);
void                      pCvDISOpticalFlowsetVariationalRefinementIterations(struct  DISOpticalFlow_t* wrapper, 
                                   int _val);
void                      pCvDISOpticalFlowwrite(struct  DISOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                       pCvDMatchGet_distance(DMatch_t* p);
void                      pCvDMatchSet_distance(DMatch_t* p, float propval);
int                       pCvDMatchGet_imgIdx(DMatch_t* p);
void                      pCvDMatchSet_imgIdx(DMatch_t* p, int propval);
int                       pCvDMatchGet_queryIdx(DMatch_t* p);
void                      pCvDMatchSet_queryIdx(DMatch_t* p, int propval);
int                       pCvDMatchGet_trainIdx(DMatch_t* p);
void                      pCvDMatchSet_trainIdx(DMatch_t* p, int propval);
void                      pCvDenseOpticalFlowcalc(struct  DenseOpticalFlow_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow);
void                      pCvDenseOpticalFlowcalcV2(struct  DenseOpticalFlow_t* wrapper, UMat_t* I0, UMat_t* I1, 
                                   UMat_t* flow);
void                      pCvDenseOpticalFlowclear(struct  DenseOpticalFlow_t* wrapper);
void                      pCvDenseOpticalFlowcollectGarbage(struct  DenseOpticalFlow_t* wrapper);
bool                      pCvDenseOpticalFlowempty(struct  DenseOpticalFlow_t* wrapper);
string_t*                 pCvDenseOpticalFlowgetDefaultName(struct  DenseOpticalFlow_t* wrapper);
void                      pCvDenseOpticalFlowread(struct  DenseOpticalFlow_t* wrapper, FileNode_t* fn);
void                      pCvDenseOpticalFlowsave(struct  DenseOpticalFlow_t* wrapper, string_t* filename);
void                      pCvDenseOpticalFlowwrite(struct  DenseOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvDescriptorMatcheradd(struct  DescriptorMatcher_t* wrapper, vector_Mat* descriptors);
void                      pCvDescriptorMatcheraddV2(struct  DescriptorMatcher_t* wrapper, vector_UMat* descriptors);
void                      pCvDescriptorMatcherclear(struct  DescriptorMatcher_t* wrapper);
Ptr_DescriptorMatcher*    pCvDescriptorMatcherclone(struct  DescriptorMatcher_t* wrapper, 
                                   bool emptyTrainData /* default: false */);
Ptr_DescriptorMatcher*    pCvDescriptorMatcher_create(string_t* descriptorMatcherType);
Ptr_DescriptorMatcher*    pCvDescriptorMatcher_createV2(DescriptorMatcher_MatcherType matcherType);
bool                      pCvDescriptorMatcherempty(struct  DescriptorMatcher_t* wrapper);
string_t*                 pCvDescriptorMatchergetDefaultName(struct  DescriptorMatcher_t* wrapper);
vector_Mat*               pCvDescriptorMatchergetTrainDescriptors(struct  DescriptorMatcher_t* wrapper);
bool                      pCvDescriptorMatcherisMaskSupported(struct  DescriptorMatcher_t* wrapper);
void                      pCvDescriptorMatcherknnMatch(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, int k, 
                                   Mat_t* mask /* default: Mat() */, bool compactResult /* default: false */);
void                      pCvDescriptorMatcherknnMatchV2(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, int k, 
                                   UMat_t* mask /* default: UMat() */, bool compactResult /* default: false */);
void                      pCvDescriptorMatcherknnMatchV3(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_Mat* masks /* default: vector_Mat() */, 
                                   bool compactResult /* default: false */);
void                      pCvDescriptorMatcherknnMatchV4(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_UMat* masks /* default: vector_UMat() */, 
                                   bool compactResult /* default: false */);
void                      pCvDescriptorMatchermatch(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_DMatch* matches, Mat_t* mask /* default: Mat() */);
void                      pCvDescriptorMatchermatchV2(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_DMatch* matches, UMat_t* mask /* default: UMat() */);
void                      pCvDescriptorMatchermatchV3(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvDescriptorMatchermatchV4(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvDescriptorMatcherradiusMatch(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   Mat_t* mask /* default: Mat() */, bool compactResult /* default: false */);
void                      pCvDescriptorMatcherradiusMatchV2(struct  DescriptorMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, UMat_t* trainDescriptors, vector_vector_DMatch* matches, 
                                   float maxDistance, UMat_t* mask /* default: UMat() */, 
                                   bool compactResult /* default: false */);
void                      pCvDescriptorMatcherradiusMatchV3(struct  DescriptorMatcher_t* wrapper, 
                                   Mat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_Mat* masks /* default: vector_Mat() */, bool compactResult /* default: false */);
void                      pCvDescriptorMatcherradiusMatchV4(struct  DescriptorMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_UMat* masks /* default: vector_UMat() */, bool compactResult /* default: false */);
void                      pCvDescriptorMatcherread(struct  DescriptorMatcher_t* wrapper, string_t* fileName);
void                      pCvDescriptorMatcherreadV2(struct  DescriptorMatcher_t* wrapper, FileNode_t* arg1);
void                      pCvDescriptorMatchersave(struct  DescriptorMatcher_t* wrapper, string_t* filename);
void                      pCvDescriptorMatchertrain(struct  DescriptorMatcher_t* wrapper);
void                      pCvDescriptorMatcherwrite(struct  DescriptorMatcher_t* wrapper, string_t* fileName);
void                      pCvDescriptorMatcherwriteV2(struct  DescriptorMatcher_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
Ptr_FaceDetectorYN*       pCvFaceDetectorYN_create(string_t* model, string_t* config, Size_t* input_size, 
                                   float score_threshold /* default: 0.9f */, float nms_threshold /* default: 0.3f */, 
                                   int top_k /* default: 5000 */, int backend_id /* default: 0 */, int target_id /* default: 0 */);
int                       pCvFaceDetectorYNdetect(struct  FaceDetectorYN_t* wrapper, Mat_t* image, Mat_t* faces);
int                       pCvFaceDetectorYNdetectV2(struct  FaceDetectorYN_t* wrapper, UMat_t* image, UMat_t* faces);
Size_t*                   pCvFaceDetectorYNgetInputSize(struct  FaceDetectorYN_t* wrapper);
float                     pCvFaceDetectorYNgetNMSThreshold(struct  FaceDetectorYN_t* wrapper);
float                     pCvFaceDetectorYNgetScoreThreshold(struct  FaceDetectorYN_t* wrapper);
int                       pCvFaceDetectorYNgetTopK(struct  FaceDetectorYN_t* wrapper);
void                      pCvFaceDetectorYNsetInputSize(struct  FaceDetectorYN_t* wrapper, Size_t* input_size);
void                      pCvFaceDetectorYNsetNMSThreshold(struct  FaceDetectorYN_t* wrapper, float nms_threshold);
void                      pCvFaceDetectorYNsetScoreThreshold(struct  FaceDetectorYN_t* wrapper, float score_threshold);
void                      pCvFaceDetectorYNsetTopK(struct  FaceDetectorYN_t* wrapper, int top_k);
void                      pCvFaceRecognizerSFalignCrop(struct  FaceRecognizerSF_t* wrapper, Mat_t* src_img, 
                                   Mat_t* face_box, Mat_t* aligned_img);
void                      pCvFaceRecognizerSFalignCropV2(struct  FaceRecognizerSF_t* wrapper, UMat_t* src_img, 
                                   UMat_t* face_box, UMat_t* aligned_img);
Ptr_FaceRecognizerSF*     pCvFaceRecognizerSF_create(string_t* model, string_t* config, int backend_id /* default: 0 */, 
                                   int target_id /* default: 0 */);
void                      pCvFaceRecognizerSFfeature(struct  FaceRecognizerSF_t* wrapper, Mat_t* aligned_img, 
                                   Mat_t* face_feature);
void                      pCvFaceRecognizerSFfeatureV2(struct  FaceRecognizerSF_t* wrapper, UMat_t* aligned_img, 
                                   UMat_t* face_feature);
double                    pCvFaceRecognizerSFmatch(struct  FaceRecognizerSF_t* wrapper, Mat_t* face_feature1, 
                                   Mat_t* face_feature2, int dis_type /* default: FaceRecognizerSF::FR_COSINE */);
double                    pCvFaceRecognizerSFmatchV2(struct  FaceRecognizerSF_t* wrapper, UMat_t* face_feature1, 
                                   UMat_t* face_feature2, int dis_type /* default: FaceRecognizerSF::FR_COSINE */);
void                      pCvFarnebackOpticalFlowcalc(struct  FarnebackOpticalFlow_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow);
void                      pCvFarnebackOpticalFlowcalcV2(struct  FarnebackOpticalFlow_t* wrapper, UMat_t* I0, UMat_t* I1, 
                                   UMat_t* flow);
void                      pCvFarnebackOpticalFlowclear(struct  FarnebackOpticalFlow_t* wrapper);
void                      pCvFarnebackOpticalFlowcollectGarbage(struct  FarnebackOpticalFlow_t* wrapper);
Ptr_FarnebackOpticalFlow* pCvFarnebackOpticalFlow_create(int numLevels /* default: 5 */, 
                                   double pyrScale /* default: 0.5 */, bool fastPyramids /* default: false */, 
                                   int winSize /* default: 13 */, int numIters /* default: 10 */, int polyN /* default: 5 */, 
                                   double polySigma /* default: 1.1 */, int flags /* default: 0 */);
bool                      pCvFarnebackOpticalFlowempty(struct  FarnebackOpticalFlow_t* wrapper);
string_t*                 pCvFarnebackOpticalFlowgetDefaultName(struct  FarnebackOpticalFlow_t* wrapper);
bool                      pCvFarnebackOpticalFlowgetFastPyramids(struct  FarnebackOpticalFlow_t* wrapper);
int                       pCvFarnebackOpticalFlowgetFlags(struct  FarnebackOpticalFlow_t* wrapper);
int                       pCvFarnebackOpticalFlowgetNumIters(struct  FarnebackOpticalFlow_t* wrapper);
int                       pCvFarnebackOpticalFlowgetNumLevels(struct  FarnebackOpticalFlow_t* wrapper);
int                       pCvFarnebackOpticalFlowgetPolyN(struct  FarnebackOpticalFlow_t* wrapper);
double                    pCvFarnebackOpticalFlowgetPolySigma(struct  FarnebackOpticalFlow_t* wrapper);
double                    pCvFarnebackOpticalFlowgetPyrScale(struct  FarnebackOpticalFlow_t* wrapper);
int                       pCvFarnebackOpticalFlowgetWinSize(struct  FarnebackOpticalFlow_t* wrapper);
void                      pCvFarnebackOpticalFlowread(struct  FarnebackOpticalFlow_t* wrapper, FileNode_t* fn);
void                      pCvFarnebackOpticalFlowsave(struct  FarnebackOpticalFlow_t* wrapper, string_t* filename);
void                      pCvFarnebackOpticalFlowsetFastPyramids(struct  FarnebackOpticalFlow_t* wrapper, 
                                   bool fastPyramids);
void                      pCvFarnebackOpticalFlowsetFlags(struct  FarnebackOpticalFlow_t* wrapper, int flags);
void                      pCvFarnebackOpticalFlowsetNumIters(struct  FarnebackOpticalFlow_t* wrapper, int numIters);
void                      pCvFarnebackOpticalFlowsetNumLevels(struct  FarnebackOpticalFlow_t* wrapper, int numLevels);
void                      pCvFarnebackOpticalFlowsetPolyN(struct  FarnebackOpticalFlow_t* wrapper, int polyN);
void                      pCvFarnebackOpticalFlowsetPolySigma(struct  FarnebackOpticalFlow_t* wrapper, double polySigma);
void                      pCvFarnebackOpticalFlowsetPyrScale(struct  FarnebackOpticalFlow_t* wrapper, double pyrScale);
void                      pCvFarnebackOpticalFlowsetWinSize(struct  FarnebackOpticalFlow_t* wrapper, int winSize);
void                      pCvFarnebackOpticalFlowwrite(struct  FarnebackOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvFastFeatureDetectorclear(struct  FastFeatureDetector_t* wrapper);
void                      pCvFastFeatureDetectorcompute(struct  FastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors);
void                      pCvFastFeatureDetectorcomputeV2(struct  FastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors);
void                      pCvFastFeatureDetectorcomputeV3(struct  FastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvFastFeatureDetectorcomputeV4(struct  FastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_FastFeatureDetector*  pCvFastFeatureDetector_create(int threshold /* default: 10 */, 
                                   bool nonmaxSuppression /* default: true */, 
                                   FastFeatureDetector_DetectorType _type /* default: FastFeatureDetector::TYPE_9_16 */);
int                       pCvFastFeatureDetectordefaultNorm(struct  FastFeatureDetector_t* wrapper);
int                       pCvFastFeatureDetectordescriptorSize(struct  FastFeatureDetector_t* wrapper);
int                       pCvFastFeatureDetectordescriptorType(struct  FastFeatureDetector_t* wrapper);
void                      pCvFastFeatureDetectordetect(struct  FastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask /* default: Mat() */);
void                      pCvFastFeatureDetectordetectV2(struct  FastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask /* default: UMat() */);
void                      pCvFastFeatureDetectordetectV3(struct  FastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvFastFeatureDetectordetectV4(struct  FastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvFastFeatureDetectordetectAndCompute(struct  FastFeatureDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* mask, vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvFastFeatureDetectordetectAndComputeV2(struct  FastFeatureDetector_t* wrapper, 
                                   UMat_t* image, UMat_t* mask, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors, bool useProvidedKeypoints /* default: false */);
bool                      pCvFastFeatureDetectorempty(struct  FastFeatureDetector_t* wrapper);
string_t*                 pCvFastFeatureDetectorgetDefaultName(struct  FastFeatureDetector_t* wrapper);
bool                      pCvFastFeatureDetectorgetNonmaxSuppression(struct  FastFeatureDetector_t* wrapper);
int                       pCvFastFeatureDetectorgetThreshold(struct  FastFeatureDetector_t* wrapper);
FastFeatureDetector_DetectorType pCvFastFeatureDetectorgetType(struct  FastFeatureDetector_t* wrapper);
void                      pCvFastFeatureDetectorread(struct  FastFeatureDetector_t* wrapper, string_t* fileName);
void                      pCvFastFeatureDetectorreadV2(struct  FastFeatureDetector_t* wrapper, FileNode_t* arg1);
void                      pCvFastFeatureDetectorsave(struct  FastFeatureDetector_t* wrapper, string_t* filename);
void                      pCvFastFeatureDetectorsetNonmaxSuppression(struct  FastFeatureDetector_t* wrapper, bool f);
void                      pCvFastFeatureDetectorsetThreshold(struct  FastFeatureDetector_t* wrapper, int threshold);
void                      pCvFastFeatureDetectorsetType(struct  FastFeatureDetector_t* wrapper, 
                                   FastFeatureDetector_DetectorType _type);
void                      pCvFastFeatureDetectorwrite(struct  FastFeatureDetector_t* wrapper, string_t* fileName);
void                      pCvFastFeatureDetectorwriteV2(struct  FastFeatureDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvFeature2Dclear(struct  Feature2D_t* wrapper);
void                      pCvFeature2Dcompute(struct  Feature2D_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvFeature2DcomputeV2(struct  Feature2D_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvFeature2DcomputeV3(struct  Feature2D_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvFeature2DcomputeV4(struct  Feature2D_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
int                       pCvFeature2DdefaultNorm(struct  Feature2D_t* wrapper);
int                       pCvFeature2DdescriptorSize(struct  Feature2D_t* wrapper);
int                       pCvFeature2DdescriptorType(struct  Feature2D_t* wrapper);
void                      pCvFeature2Ddetect(struct  Feature2D_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvFeature2DdetectV2(struct  Feature2D_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvFeature2DdetectV3(struct  Feature2D_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvFeature2DdetectV4(struct  Feature2D_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvFeature2DdetectAndCompute(struct  Feature2D_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvFeature2DdetectAndComputeV2(struct  Feature2D_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvFeature2Dempty(struct  Feature2D_t* wrapper);
string_t*                 pCvFeature2DgetDefaultName(struct  Feature2D_t* wrapper);
void                      pCvFeature2Dread(struct  Feature2D_t* wrapper, string_t* fileName);
void                      pCvFeature2DreadV2(struct  Feature2D_t* wrapper, FileNode_t* arg1);
void                      pCvFeature2Dsave(struct  Feature2D_t* wrapper, string_t* filename);
void                      pCvFeature2Dwrite(struct  Feature2D_t* wrapper, string_t* fileName);
void                      pCvFeature2DwriteV2(struct  Feature2D_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
FileNode_t*               pCvFileNodeat(struct  FileNode_t* wrapper, int i);
bool                      pCvFileNodeempty(struct  FileNode_t* wrapper);
FileNode_t*               pCvFileNodegetNode(struct  FileNode_t* wrapper, c_string nodename);
bool                      pCvFileNodeisInt(struct  FileNode_t* wrapper);
bool                      pCvFileNodeisMap(struct  FileNode_t* wrapper);
bool                      pCvFileNodeisNamed(struct  FileNode_t* wrapper);
bool                      pCvFileNodeisNone(struct  FileNode_t* wrapper);
bool                      pCvFileNodeisReal(struct  FileNode_t* wrapper);
bool                      pCvFileNodeisSeq(struct  FileNode_t* wrapper);
bool                      pCvFileNodeisString(struct  FileNode_t* wrapper);
vector_String*            pCvFileNodekeys(struct  FileNode_t* wrapper);
Mat_t*                    pCvFileNodemat(struct  FileNode_t* wrapper);
string_t*                 pCvFileNodename(struct  FileNode_t* wrapper);
size_t                    pCvFileNoderawSize(struct  FileNode_t* wrapper);
double                    pCvFileNodereal(struct  FileNode_t* wrapper);
size_t                    pCvFileNodesize(struct  FileNode_t* wrapper);
string_t*                 pCvFileNodestring(struct  FileNode_t* wrapper);
int                       pCvFileNodetype(struct  FileNode_t* wrapper);
void                      pCvFileStorageendWriteStruct(struct  FileStorage_t* wrapper);
FileNode_t*               pCvFileStoragegetFirstTopLevelNode(struct  FileStorage_t* wrapper);
int                       pCvFileStoragegetFormat(struct  FileStorage_t* wrapper);
FileNode_t*               pCvFileStoragegetNode(struct  FileStorage_t* wrapper, c_string nodename);
bool                      pCvFileStorageisOpened(struct  FileStorage_t* wrapper);
bool                      pCvFileStorageopen(struct  FileStorage_t* wrapper, string_t* filename, int flags, 
                                   string_t* encoding /* default: String() */);
void                      pCvFileStoragerelease(struct  FileStorage_t* wrapper);
string_t*                 pCvFileStoragereleaseAndGetString(struct  FileStorage_t* wrapper);
FileNode_t*               pCvFileStorageroot(struct  FileStorage_t* wrapper, int streamidx /* default: 0 */);
void                      pCvFileStoragestartWriteStruct(struct  FileStorage_t* wrapper, string_t* name, int flags, 
                                   string_t* typeName /* default: String() */);
void                      pCvFileStoragewrite(struct  FileStorage_t* wrapper, string_t* name, int _val);
void                      pCvFileStoragewriteV2(struct  FileStorage_t* wrapper, string_t* name, double _val);
void                      pCvFileStoragewriteV3(struct  FileStorage_t* wrapper, string_t* name, string_t* _val);
void                      pCvFileStoragewriteV4(struct  FileStorage_t* wrapper, string_t* name, Mat_t* _val);
void                      pCvFileStoragewriteV5(struct  FileStorage_t* wrapper, string_t* name, vector_String* _val);
void                      pCvFileStoragewriteComment(struct  FileStorage_t* wrapper, string_t* comment, 
                                   bool _append /* default: false */);
void                      pCvFlannBasedMatcheradd(struct  FlannBasedMatcher_t* wrapper, vector_Mat* descriptors);
void                      pCvFlannBasedMatcheraddV2(struct  FlannBasedMatcher_t* wrapper, vector_UMat* descriptors);
void                      pCvFlannBasedMatcherclear(struct  FlannBasedMatcher_t* wrapper);
Ptr_DescriptorMatcher*    pCvFlannBasedMatcherclone(struct  FlannBasedMatcher_t* wrapper, 
                                   bool emptyTrainData /* default: false */);
Ptr_FlannBasedMatcher*    pCvFlannBasedMatcher_create();
bool                      pCvFlannBasedMatcherempty(struct  FlannBasedMatcher_t* wrapper);
string_t*                 pCvFlannBasedMatchergetDefaultName(struct  FlannBasedMatcher_t* wrapper);
vector_Mat*               pCvFlannBasedMatchergetTrainDescriptors(struct  FlannBasedMatcher_t* wrapper);
bool                      pCvFlannBasedMatcherisMaskSupported(struct  FlannBasedMatcher_t* wrapper);
void                      pCvFlannBasedMatcherknnMatch(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, int k, 
                                   Mat_t* mask /* default: Mat() */, bool compactResult /* default: false */);
void                      pCvFlannBasedMatcherknnMatchV2(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, int k, 
                                   UMat_t* mask /* default: UMat() */, bool compactResult /* default: false */);
void                      pCvFlannBasedMatcherknnMatchV3(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_Mat* masks /* default: vector_Mat() */, 
                                   bool compactResult /* default: false */);
void                      pCvFlannBasedMatcherknnMatchV4(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_UMat* masks /* default: vector_UMat() */, 
                                   bool compactResult /* default: false */);
void                      pCvFlannBasedMatchermatch(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_DMatch* matches, Mat_t* mask /* default: Mat() */);
void                      pCvFlannBasedMatchermatchV2(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_DMatch* matches, UMat_t* mask /* default: UMat() */);
void                      pCvFlannBasedMatchermatchV3(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvFlannBasedMatchermatchV4(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvFlannBasedMatcherradiusMatch(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   Mat_t* mask /* default: Mat() */, bool compactResult /* default: false */);
void                      pCvFlannBasedMatcherradiusMatchV2(struct  FlannBasedMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, UMat_t* trainDescriptors, vector_vector_DMatch* matches, 
                                   float maxDistance, UMat_t* mask /* default: UMat() */, 
                                   bool compactResult /* default: false */);
void                      pCvFlannBasedMatcherradiusMatchV3(struct  FlannBasedMatcher_t* wrapper, 
                                   Mat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_Mat* masks /* default: vector_Mat() */, bool compactResult /* default: false */);
void                      pCvFlannBasedMatcherradiusMatchV4(struct  FlannBasedMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_UMat* masks /* default: vector_UMat() */, bool compactResult /* default: false */);
void                      pCvFlannBasedMatchersave(struct  FlannBasedMatcher_t* wrapper, string_t* filename);
void                      pCvFlannBasedMatchertrain(struct  FlannBasedMatcher_t* wrapper);
void                      pCvGFTTDetectorclear(struct  GFTTDetector_t* wrapper);
void                      pCvGFTTDetectorcompute(struct  GFTTDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors);
void                      pCvGFTTDetectorcomputeV2(struct  GFTTDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors);
void                      pCvGFTTDetectorcomputeV3(struct  GFTTDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvGFTTDetectorcomputeV4(struct  GFTTDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_GFTTDetector*         pCvGFTTDetector_create(int maxCorners /* default: 1000 */, 
                                   double qualityLevel /* default: 0.01 */, double minDistance /* default: 1 */, int blockSize /* default: 3 */, 
                                   bool useHarrisDetector /* default: false */, double k /* default: 0.04 */);
Ptr_GFTTDetector*         pCvGFTTDetector_createV2(int maxCorners, double qualityLevel, double minDistance, 
                                   int blockSize, int gradiantSize, bool useHarrisDetector /* default: false */, 
                                   double k /* default: 0.04 */);
int                       pCvGFTTDetectordefaultNorm(struct  GFTTDetector_t* wrapper);
int                       pCvGFTTDetectordescriptorSize(struct  GFTTDetector_t* wrapper);
int                       pCvGFTTDetectordescriptorType(struct  GFTTDetector_t* wrapper);
void                      pCvGFTTDetectordetect(struct  GFTTDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask /* default: Mat() */);
void                      pCvGFTTDetectordetectV2(struct  GFTTDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask /* default: UMat() */);
void                      pCvGFTTDetectordetectV3(struct  GFTTDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvGFTTDetectordetectV4(struct  GFTTDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvGFTTDetectordetectAndCompute(struct  GFTTDetector_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvGFTTDetectordetectAndComputeV2(struct  GFTTDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* mask, vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvGFTTDetectorempty(struct  GFTTDetector_t* wrapper);
int                       pCvGFTTDetectorgetBlockSize(struct  GFTTDetector_t* wrapper);
string_t*                 pCvGFTTDetectorgetDefaultName(struct  GFTTDetector_t* wrapper);
bool                      pCvGFTTDetectorgetHarrisDetector(struct  GFTTDetector_t* wrapper);
double                    pCvGFTTDetectorgetK(struct  GFTTDetector_t* wrapper);
int                       pCvGFTTDetectorgetMaxFeatures(struct  GFTTDetector_t* wrapper);
double                    pCvGFTTDetectorgetMinDistance(struct  GFTTDetector_t* wrapper);
double                    pCvGFTTDetectorgetQualityLevel(struct  GFTTDetector_t* wrapper);
void                      pCvGFTTDetectorread(struct  GFTTDetector_t* wrapper, string_t* fileName);
void                      pCvGFTTDetectorreadV2(struct  GFTTDetector_t* wrapper, FileNode_t* arg1);
void                      pCvGFTTDetectorsave(struct  GFTTDetector_t* wrapper, string_t* filename);
void                      pCvGFTTDetectorsetBlockSize(struct  GFTTDetector_t* wrapper, int blockSize);
void                      pCvGFTTDetectorsetHarrisDetector(struct  GFTTDetector_t* wrapper, bool _val);
void                      pCvGFTTDetectorsetK(struct  GFTTDetector_t* wrapper, double k);
void                      pCvGFTTDetectorsetMaxFeatures(struct  GFTTDetector_t* wrapper, int maxFeatures);
void                      pCvGFTTDetectorsetMinDistance(struct  GFTTDetector_t* wrapper, double minDistance);
void                      pCvGFTTDetectorsetQualityLevel(struct  GFTTDetector_t* wrapper, double qlevel);
void                      pCvGFTTDetectorwrite(struct  GFTTDetector_t* wrapper, string_t* fileName);
void                      pCvGFTTDetectorwriteV2(struct  GFTTDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvGeneralizedHoughclear(struct  GeneralizedHough_t* wrapper);
void                      pCvGeneralizedHoughdetect(struct  GeneralizedHough_t* wrapper, Mat_t* image, Mat_t* positions, 
                                   Mat_t* votes /* default: Mat() */);
void                      pCvGeneralizedHoughdetectV2(struct  GeneralizedHough_t* wrapper, UMat_t* image, 
                                   UMat_t* positions, UMat_t* votes /* default: UMat() */);
void                      pCvGeneralizedHoughdetectV3(struct  GeneralizedHough_t* wrapper, Mat_t* edges, Mat_t* dx, 
                                   Mat_t* dy, Mat_t* positions, Mat_t* votes /* default: Mat() */);
void                      pCvGeneralizedHoughdetectV4(struct  GeneralizedHough_t* wrapper, UMat_t* edges, UMat_t* dx, 
                                   UMat_t* dy, UMat_t* positions, UMat_t* votes /* default: UMat() */);
bool                      pCvGeneralizedHoughempty(struct  GeneralizedHough_t* wrapper);
int                       pCvGeneralizedHoughgetCannyHighThresh(struct  GeneralizedHough_t* wrapper);
int                       pCvGeneralizedHoughgetCannyLowThresh(struct  GeneralizedHough_t* wrapper);
string_t*                 pCvGeneralizedHoughgetDefaultName(struct  GeneralizedHough_t* wrapper);
double                    pCvGeneralizedHoughgetDp(struct  GeneralizedHough_t* wrapper);
int                       pCvGeneralizedHoughgetMaxBufferSize(struct  GeneralizedHough_t* wrapper);
double                    pCvGeneralizedHoughgetMinDist(struct  GeneralizedHough_t* wrapper);
void                      pCvGeneralizedHoughread(struct  GeneralizedHough_t* wrapper, FileNode_t* fn);
void                      pCvGeneralizedHoughsave(struct  GeneralizedHough_t* wrapper, string_t* filename);
void                      pCvGeneralizedHoughsetCannyHighThresh(struct  GeneralizedHough_t* wrapper, 
                                   int cannyHighThresh);
void                      pCvGeneralizedHoughsetCannyLowThresh(struct  GeneralizedHough_t* wrapper, int cannyLowThresh);
void                      pCvGeneralizedHoughsetDp(struct  GeneralizedHough_t* wrapper, double dp);
void                      pCvGeneralizedHoughsetMaxBufferSize(struct  GeneralizedHough_t* wrapper, int maxBufferSize);
void                      pCvGeneralizedHoughsetMinDist(struct  GeneralizedHough_t* wrapper, double minDist);
void                      pCvGeneralizedHoughsetTemplate(struct  GeneralizedHough_t* wrapper, Mat_t* templ, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughsetTemplateV2(struct  GeneralizedHough_t* wrapper, UMat_t* templ, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughsetTemplateV3(struct  GeneralizedHough_t* wrapper, Mat_t* edges, Mat_t* dx, 
                                   Mat_t* dy, Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughsetTemplateV4(struct  GeneralizedHough_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughwrite(struct  GeneralizedHough_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvGeneralizedHoughBallardclear(struct  GeneralizedHoughBallard_t* wrapper);
void                      pCvGeneralizedHoughBallarddetect(struct  GeneralizedHoughBallard_t* wrapper, Mat_t* image, 
                                   Mat_t* positions, Mat_t* votes /* default: Mat() */);
void                      pCvGeneralizedHoughBallarddetectV2(struct  GeneralizedHoughBallard_t* wrapper, UMat_t* image, 
                                   UMat_t* positions, UMat_t* votes /* default: UMat() */);
void                      pCvGeneralizedHoughBallarddetectV3(struct  GeneralizedHoughBallard_t* wrapper, Mat_t* edges, 
                                   Mat_t* dx, Mat_t* dy, Mat_t* positions, 
                                   Mat_t* votes /* default: Mat() */);
void                      pCvGeneralizedHoughBallarddetectV4(struct  GeneralizedHoughBallard_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, UMat_t* positions, 
                                   UMat_t* votes /* default: UMat() */);
bool                      pCvGeneralizedHoughBallardempty(struct  GeneralizedHoughBallard_t* wrapper);
int                       pCvGeneralizedHoughBallardgetCannyHighThresh(struct  GeneralizedHoughBallard_t* wrapper);
int                       pCvGeneralizedHoughBallardgetCannyLowThresh(struct  GeneralizedHoughBallard_t* wrapper);
string_t*                 pCvGeneralizedHoughBallardgetDefaultName(struct  GeneralizedHoughBallard_t* wrapper);
double                    pCvGeneralizedHoughBallardgetDp(struct  GeneralizedHoughBallard_t* wrapper);
int                       pCvGeneralizedHoughBallardgetLevels(struct  GeneralizedHoughBallard_t* wrapper);
int                       pCvGeneralizedHoughBallardgetMaxBufferSize(struct  GeneralizedHoughBallard_t* wrapper);
double                    pCvGeneralizedHoughBallardgetMinDist(struct  GeneralizedHoughBallard_t* wrapper);
int                       pCvGeneralizedHoughBallardgetVotesThreshold(struct  GeneralizedHoughBallard_t* wrapper);
void                      pCvGeneralizedHoughBallardread(struct  GeneralizedHoughBallard_t* wrapper, FileNode_t* fn);
void                      pCvGeneralizedHoughBallardsave(struct  GeneralizedHoughBallard_t* wrapper, string_t* filename);
void                      pCvGeneralizedHoughBallardsetCannyHighThresh(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int cannyHighThresh);
void                      pCvGeneralizedHoughBallardsetCannyLowThresh(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int cannyLowThresh);
void                      pCvGeneralizedHoughBallardsetDp(struct  GeneralizedHoughBallard_t* wrapper, double dp);
void                      pCvGeneralizedHoughBallardsetLevels(struct  GeneralizedHoughBallard_t* wrapper, int levels);
void                      pCvGeneralizedHoughBallardsetMaxBufferSize(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int maxBufferSize);
void                      pCvGeneralizedHoughBallardsetMinDist(struct  GeneralizedHoughBallard_t* wrapper, 
                                   double minDist);
void                      pCvGeneralizedHoughBallardsetTemplate(struct  GeneralizedHoughBallard_t* wrapper, 
                                   Mat_t* templ, Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughBallardsetTemplateV2(struct  GeneralizedHoughBallard_t* wrapper, 
                                   UMat_t* templ, Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughBallardsetTemplateV3(struct  GeneralizedHoughBallard_t* wrapper, 
                                   Mat_t* edges, Mat_t* dx, Mat_t* dy, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughBallardsetTemplateV4(struct  GeneralizedHoughBallard_t* wrapper, 
                                   UMat_t* edges, UMat_t* dx, UMat_t* dy, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughBallardsetVotesThreshold(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int votesThreshold);
void                      pCvGeneralizedHoughBallardwrite(struct  GeneralizedHoughBallard_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name /* default: String() */);
void                      pCvGeneralizedHoughGuilclear(struct  GeneralizedHoughGuil_t* wrapper);
void                      pCvGeneralizedHoughGuildetect(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* image, 
                                   Mat_t* positions, Mat_t* votes /* default: Mat() */);
void                      pCvGeneralizedHoughGuildetectV2(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* image, 
                                   UMat_t* positions, UMat_t* votes /* default: UMat() */);
void                      pCvGeneralizedHoughGuildetectV3(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* edges, 
                                   Mat_t* dx, Mat_t* dy, Mat_t* positions, 
                                   Mat_t* votes /* default: Mat() */);
void                      pCvGeneralizedHoughGuildetectV4(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, UMat_t* positions, 
                                   UMat_t* votes /* default: UMat() */);
bool                      pCvGeneralizedHoughGuilempty(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetAngleEpsilon(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetAngleStep(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetAngleThresh(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetCannyHighThresh(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetCannyLowThresh(struct  GeneralizedHoughGuil_t* wrapper);
string_t*                 pCvGeneralizedHoughGuilgetDefaultName(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetDp(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetLevels(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetMaxAngle(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetMaxBufferSize(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetMaxScale(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetMinAngle(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetMinDist(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetMinScale(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetPosThresh(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetScaleStep(struct  GeneralizedHoughGuil_t* wrapper);
int                       pCvGeneralizedHoughGuilgetScaleThresh(struct  GeneralizedHoughGuil_t* wrapper);
double                    pCvGeneralizedHoughGuilgetXi(struct  GeneralizedHoughGuil_t* wrapper);
void                      pCvGeneralizedHoughGuilread(struct  GeneralizedHoughGuil_t* wrapper, FileNode_t* fn);
void                      pCvGeneralizedHoughGuilsave(struct  GeneralizedHoughGuil_t* wrapper, string_t* filename);
void                      pCvGeneralizedHoughGuilsetAngleEpsilon(struct  GeneralizedHoughGuil_t* wrapper, 
                                   double angleEpsilon);
void                      pCvGeneralizedHoughGuilsetAngleStep(struct  GeneralizedHoughGuil_t* wrapper, double angleStep);
void                      pCvGeneralizedHoughGuilsetAngleThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int angleThresh);
void                      pCvGeneralizedHoughGuilsetCannyHighThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int cannyHighThresh);
void                      pCvGeneralizedHoughGuilsetCannyLowThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int cannyLowThresh);
void                      pCvGeneralizedHoughGuilsetDp(struct  GeneralizedHoughGuil_t* wrapper, double dp);
void                      pCvGeneralizedHoughGuilsetLevels(struct  GeneralizedHoughGuil_t* wrapper, int levels);
void                      pCvGeneralizedHoughGuilsetMaxAngle(struct  GeneralizedHoughGuil_t* wrapper, double maxAngle);
void                      pCvGeneralizedHoughGuilsetMaxBufferSize(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int maxBufferSize);
void                      pCvGeneralizedHoughGuilsetMaxScale(struct  GeneralizedHoughGuil_t* wrapper, double maxScale);
void                      pCvGeneralizedHoughGuilsetMinAngle(struct  GeneralizedHoughGuil_t* wrapper, double minAngle);
void                      pCvGeneralizedHoughGuilsetMinDist(struct  GeneralizedHoughGuil_t* wrapper, double minDist);
void                      pCvGeneralizedHoughGuilsetMinScale(struct  GeneralizedHoughGuil_t* wrapper, double minScale);
void                      pCvGeneralizedHoughGuilsetPosThresh(struct  GeneralizedHoughGuil_t* wrapper, int posThresh);
void                      pCvGeneralizedHoughGuilsetScaleStep(struct  GeneralizedHoughGuil_t* wrapper, double scaleStep);
void                      pCvGeneralizedHoughGuilsetScaleThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int scaleThresh);
void                      pCvGeneralizedHoughGuilsetTemplate(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* templ, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughGuilsetTemplateV2(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* templ, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughGuilsetTemplateV3(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* edges, 
                                   Mat_t* dx, Mat_t* dy, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughGuilsetTemplateV4(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, 
                                   Point_t* templCenter /* default: Point(-1, -1) */);
void                      pCvGeneralizedHoughGuilsetXi(struct  GeneralizedHoughGuil_t* wrapper, double xi);
void                      pCvGeneralizedHoughGuilwrite(struct  GeneralizedHoughGuil_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
bool                      pCvHOGDescriptorcheckDetectorSize(struct  HOGDescriptor_t* wrapper);
void                      pCvHOGDescriptorcompute(struct  HOGDescriptor_t* wrapper, Mat_t* img, 
                                   vector_float* descriptors, Size_t* winStride /* default: Size() */, 
                                   Size_t* padding /* default: Size() */, vector_Point* locations /* default: std::vector<Point>() */);
void                      pCvHOGDescriptorcomputeV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, 
                                   vector_float* descriptors, Size_t* winStride /* default: Size() */, 
                                   Size_t* padding /* default: Size() */, vector_Point* locations /* default: std::vector<Point>() */);
void                      pCvHOGDescriptorcomputeGradient(struct  HOGDescriptor_t* wrapper, Mat_t* img, Mat_t* grad, 
                                   Mat_t* angleOfs, Size_t* paddingTL /* default: Size() */, 
                                   Size_t* paddingBR /* default: Size() */);
void                      pCvHOGDescriptorcomputeGradientV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, UMat_t* grad, 
                                   UMat_t* angleOfs, Size_t* paddingTL /* default: Size() */, 
                                   Size_t* paddingBR /* default: Size() */);
void                      pCvHOGDescriptordetect(struct  HOGDescriptor_t* wrapper, Mat_t* img, 
                                   vector_Point* foundLocations, vector_double* weights, double hitThreshold /* default: 0 */, 
                                   Size_t* winStride /* default: Size() */, Size_t* padding /* default: Size() */, 
                                   vector_Point* searchLocations /* default: std::vector<Point>() */);
void                      pCvHOGDescriptordetectV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, 
                                   vector_Point* foundLocations, vector_double* weights, double hitThreshold /* default: 0 */, 
                                   Size_t* winStride /* default: Size() */, Size_t* padding /* default: Size() */, 
                                   vector_Point* searchLocations /* default: std::vector<Point>() */);
void                      pCvHOGDescriptordetectMultiScale(struct  HOGDescriptor_t* wrapper, Mat_t* img, 
                                   vector_Rect* foundLocations, vector_double* foundWeights, 
                                   double hitThreshold /* default: 0 */, Size_t* winStride /* default: Size() */, 
                                   Size_t* padding /* default: Size() */, double scale /* default: 1.05 */, 
                                   double groupThreshold /* default: 2.0 */, bool useMeanshiftGrouping /* default: false */);
void                      pCvHOGDescriptordetectMultiScaleV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, 
                                   vector_Rect* foundLocations, vector_double* foundWeights, 
                                   double hitThreshold /* default: 0 */, Size_t* winStride /* default: Size() */, 
                                   Size_t* padding /* default: Size() */, double scale /* default: 1.05 */, 
                                   double groupThreshold /* default: 2.0 */, bool useMeanshiftGrouping /* default: false */);
vector_float*             pCvHOGDescriptorgetDaimlerPeopleDetector();
vector_float*             pCvHOGDescriptorgetDefaultPeopleDetector();
size_t                    pCvHOGDescriptorgetDescriptorSize(struct  HOGDescriptor_t* wrapper);
double                    pCvHOGDescriptorgetWinSigma(struct  HOGDescriptor_t* wrapper);
bool                      pCvHOGDescriptorload(struct  HOGDescriptor_t* wrapper, string_t* filename, 
                                   string_t* objname /* default: String() */);
void                      pCvHOGDescriptorsave(struct  HOGDescriptor_t* wrapper, string_t* filename, 
                                   string_t* objname /* default: String() */);
void                      pCvHOGDescriptorsetSVMDetector(struct  HOGDescriptor_t* wrapper, Mat_t* svmdetector);
void                      pCvHOGDescriptorsetSVMDetectorV2(struct  HOGDescriptor_t* wrapper, UMat_t* svmdetector);
double                       pCvHOGDescriptorGet_L2HysThreshold(HOGDescriptor_t* p);
Size_t*                       pCvHOGDescriptorGet_blockSize(HOGDescriptor_t* p);
Size_t*                       pCvHOGDescriptorGet_blockStride(HOGDescriptor_t* p);
Size_t*                       pCvHOGDescriptorGet_cellSize(HOGDescriptor_t* p);
int                       pCvHOGDescriptorGet_derivAperture(HOGDescriptor_t* p);
bool                       pCvHOGDescriptorGet_gammaCorrection(HOGDescriptor_t* p);
HOGDescriptor_HistogramNormType                       pCvHOGDescriptorGet_histogramNormType(HOGDescriptor_t* p);
int                       pCvHOGDescriptorGet_nbins(HOGDescriptor_t* p);
int                       pCvHOGDescriptorGet_nlevels(HOGDescriptor_t* p);
bool                       pCvHOGDescriptorGet_signedGradient(HOGDescriptor_t* p);
vector_float*                       pCvHOGDescriptorGet_svmDetector(HOGDescriptor_t* p);
double                       pCvHOGDescriptorGet_winSigma(HOGDescriptor_t* p);
Size_t*                       pCvHOGDescriptorGet_winSize(HOGDescriptor_t* p);
void                      pCvKAZEclear(struct  KAZE_t* wrapper);
void                      pCvKAZEcompute(struct  KAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvKAZEcomputeV2(struct  KAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvKAZEcomputeV3(struct  KAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvKAZEcomputeV4(struct  KAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_KAZE*                 pCvKAZE_create(bool extended /* default: false */, bool upright /* default: false */, 
                                   float threshold /* default: 0.001f */, int nOctaves /* default: 4 */, int nOctaveLayers /* default: 4 */, 
                                   KAZE_DiffusivityType diffusivity /* default: KAZE::DIFF_PM_G2 */);
int                       pCvKAZEdefaultNorm(struct  KAZE_t* wrapper);
int                       pCvKAZEdescriptorSize(struct  KAZE_t* wrapper);
int                       pCvKAZEdescriptorType(struct  KAZE_t* wrapper);
void                      pCvKAZEdetect(struct  KAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvKAZEdetectV2(struct  KAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvKAZEdetectV3(struct  KAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvKAZEdetectV4(struct  KAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvKAZEdetectAndCompute(struct  KAZE_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints /* default: false */);
void                      pCvKAZEdetectAndComputeV2(struct  KAZE_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvKAZEempty(struct  KAZE_t* wrapper);
string_t*                 pCvKAZEgetDefaultName(struct  KAZE_t* wrapper);
KAZE_DiffusivityType      pCvKAZEgetDiffusivity(struct  KAZE_t* wrapper);
bool                      pCvKAZEgetExtended(struct  KAZE_t* wrapper);
int                       pCvKAZEgetNOctaveLayers(struct  KAZE_t* wrapper);
int                       pCvKAZEgetNOctaves(struct  KAZE_t* wrapper);
double                    pCvKAZEgetThreshold(struct  KAZE_t* wrapper);
bool                      pCvKAZEgetUpright(struct  KAZE_t* wrapper);
void                      pCvKAZEread(struct  KAZE_t* wrapper, string_t* fileName);
void                      pCvKAZEreadV2(struct  KAZE_t* wrapper, FileNode_t* arg1);
void                      pCvKAZEsave(struct  KAZE_t* wrapper, string_t* filename);
void                      pCvKAZEsetDiffusivity(struct  KAZE_t* wrapper, KAZE_DiffusivityType diff);
void                      pCvKAZEsetExtended(struct  KAZE_t* wrapper, bool extended);
void                      pCvKAZEsetNOctaveLayers(struct  KAZE_t* wrapper, int octaveLayers);
void                      pCvKAZEsetNOctaves(struct  KAZE_t* wrapper, int octaves);
void                      pCvKAZEsetThreshold(struct  KAZE_t* wrapper, double threshold);
void                      pCvKAZEsetUpright(struct  KAZE_t* wrapper, bool upright);
void                      pCvKAZEwrite(struct  KAZE_t* wrapper, string_t* fileName);
void                      pCvKAZEwriteV2(struct  KAZE_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
Mat_t*                    pCvKalmanFiltercorrect(struct  KalmanFilter_t* wrapper, Mat_t* measurement);
Mat_t*                    pCvKalmanFilterpredict(struct  KalmanFilter_t* wrapper, Mat_t* control /* default: Mat() */);
Mat_t*                       pCvKalmanFilterGet_controlMatrix(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_controlMatrix(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_errorCovPost(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_errorCovPost(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_errorCovPre(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_errorCovPre(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_gain(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_gain(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_measurementMatrix(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_measurementMatrix(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_measurementNoiseCov(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_measurementNoiseCov(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_processNoiseCov(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_processNoiseCov(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_statePost(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_statePost(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_statePre(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_statePre(KalmanFilter_t* p, Mat_t* propval);
Mat_t*                       pCvKalmanFilterGet_transitionMatrix(KalmanFilter_t* p);
void                      pCvKalmanFilterSet_transitionMatrix(KalmanFilter_t* p, Mat_t* propval);
void                      pCvKeyPointconvert(vector_KeyPoint* keypoints, vector_Point2f* points2f, 
                                   vector_int* keypointIndexes /* default: std::vector<int>() */);
void                      pCvKeyPointconvertV2(vector_Point2f* points2f, vector_KeyPoint* keypoints, 
                                   float size /* default: 1 */, float response /* default: 1 */, int octave /* default: 0 */, 
                                   int class_id /* default: -1 */);
float                     pCvKeyPointoverlap(KeyPoint_t* kp1, KeyPoint_t* kp2);
float                       pCvKeyPointGet_angle(KeyPoint_t* p);
void                      pCvKeyPointSet_angle(KeyPoint_t* p, float propval);
int                       pCvKeyPointGet_class_id(KeyPoint_t* p);
void                      pCvKeyPointSet_class_id(KeyPoint_t* p, int propval);
int                       pCvKeyPointGet_octave(KeyPoint_t* p);
void                      pCvKeyPointSet_octave(KeyPoint_t* p, int propval);
Point2f_t*                       pCvKeyPointGet_pt(KeyPoint_t* p);
void                      pCvKeyPointSet_pt(KeyPoint_t* p, Point2f_t* propval);
float                       pCvKeyPointGet_response(KeyPoint_t* p);
void                      pCvKeyPointSet_response(KeyPoint_t* p, float propval);
float                       pCvKeyPointGet_size(KeyPoint_t* p);
void                      pCvKeyPointSet_size(KeyPoint_t* p, float propval);
void                      pCvLineSegmentDetectorclear(struct  LineSegmentDetector_t* wrapper);
int                       pCvLineSegmentDetectorcompareSegments(struct  LineSegmentDetector_t* wrapper, Size_t* size, 
                                   Mat_t* lines1, Mat_t* lines2, Mat_t* image /* default: Mat() */);
int                       pCvLineSegmentDetectorcompareSegmentsV2(struct  LineSegmentDetector_t* wrapper, Size_t* size, 
                                   UMat_t* lines1, UMat_t* lines2, UMat_t* image /* default: UMat() */);
void                      pCvLineSegmentDetectordetect(struct  LineSegmentDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* lines, Mat_t* width /* default: Mat() */, 
                                   Mat_t* prec /* default: Mat() */, Mat_t* nfa /* default: Mat() */);
void                      pCvLineSegmentDetectordetectV2(struct  LineSegmentDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* lines, UMat_t* width /* default: UMat() */, 
                                   UMat_t* prec /* default: UMat() */, UMat_t* nfa /* default: UMat() */);
void                      pCvLineSegmentDetectordrawSegments(struct  LineSegmentDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* lines);
void                      pCvLineSegmentDetectordrawSegmentsV2(struct  LineSegmentDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* lines);
bool                      pCvLineSegmentDetectorempty(struct  LineSegmentDetector_t* wrapper);
string_t*                 pCvLineSegmentDetectorgetDefaultName(struct  LineSegmentDetector_t* wrapper);
void                      pCvLineSegmentDetectorread(struct  LineSegmentDetector_t* wrapper, FileNode_t* fn);
void                      pCvLineSegmentDetectorsave(struct  LineSegmentDetector_t* wrapper, string_t* filename);
void                      pCvLineSegmentDetectorwrite(struct  LineSegmentDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvMSERclear(struct  MSER_t* wrapper);
void                      pCvMSERcompute(struct  MSER_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvMSERcomputeV2(struct  MSER_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvMSERcomputeV3(struct  MSER_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvMSERcomputeV4(struct  MSER_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_MSER*                 pCvMSER_create(int delta /* default: 5 */, int min_area /* default: 60 */, 
                                   int max_area /* default: 14400 */, double max_variation /* default: 0.25 */, 
                                   double min_diversity /* default: .2 */, int max_evolution /* default: 200 */, 
                                   double area_threshold /* default: 1.01 */, double min_margin /* default: 0.003 */, int edge_blur_size /* default: 5 */);
int                       pCvMSERdefaultNorm(struct  MSER_t* wrapper);
int                       pCvMSERdescriptorSize(struct  MSER_t* wrapper);
int                       pCvMSERdescriptorType(struct  MSER_t* wrapper);
void                      pCvMSERdetect(struct  MSER_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvMSERdetectV2(struct  MSER_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvMSERdetectV3(struct  MSER_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvMSERdetectV4(struct  MSER_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvMSERdetectAndCompute(struct  MSER_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints /* default: false */);
void                      pCvMSERdetectAndComputeV2(struct  MSER_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvMSERdetectRegions(struct  MSER_t* wrapper, Mat_t* image, vector_vector_Point* msers, 
                                   vector_Rect* bboxes);
void                      pCvMSERdetectRegionsV2(struct  MSER_t* wrapper, UMat_t* image, vector_vector_Point* msers, 
                                   vector_Rect* bboxes);
bool                      pCvMSERempty(struct  MSER_t* wrapper);
string_t*                 pCvMSERgetDefaultName(struct  MSER_t* wrapper);
int                       pCvMSERgetDelta(struct  MSER_t* wrapper);
int                       pCvMSERgetMaxArea(struct  MSER_t* wrapper);
int                       pCvMSERgetMinArea(struct  MSER_t* wrapper);
bool                      pCvMSERgetPass2Only(struct  MSER_t* wrapper);
void                      pCvMSERread(struct  MSER_t* wrapper, string_t* fileName);
void                      pCvMSERreadV2(struct  MSER_t* wrapper, FileNode_t* arg1);
void                      pCvMSERsave(struct  MSER_t* wrapper, string_t* filename);
void                      pCvMSERsetDelta(struct  MSER_t* wrapper, int delta);
void                      pCvMSERsetMaxArea(struct  MSER_t* wrapper, int maxArea);
void                      pCvMSERsetMinArea(struct  MSER_t* wrapper, int minArea);
void                      pCvMSERsetPass2Only(struct  MSER_t* wrapper, bool f);
void                      pCvMSERwrite(struct  MSER_t* wrapper, string_t* fileName);
void                      pCvMSERwriteV2(struct  MSER_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvMergeDebevecclear(struct  MergeDebevec_t* wrapper);
bool                      pCvMergeDebevecempty(struct  MergeDebevec_t* wrapper);
string_t*                 pCvMergeDebevecgetDefaultName(struct  MergeDebevec_t* wrapper);
void                      pCvMergeDebevecprocess(struct  MergeDebevec_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response);
void                      pCvMergeDebevecprocessV2(struct  MergeDebevec_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response);
void                      pCvMergeDebevecprocessV3(struct  MergeDebevec_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times);
void                      pCvMergeDebevecprocessV4(struct  MergeDebevec_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times);
void                      pCvMergeDebevecread(struct  MergeDebevec_t* wrapper, FileNode_t* fn);
void                      pCvMergeDebevecsave(struct  MergeDebevec_t* wrapper, string_t* filename);
void                      pCvMergeDebevecwrite(struct  MergeDebevec_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvMergeExposuresclear(struct  MergeExposures_t* wrapper);
bool                      pCvMergeExposuresempty(struct  MergeExposures_t* wrapper);
string_t*                 pCvMergeExposuresgetDefaultName(struct  MergeExposures_t* wrapper);
void                      pCvMergeExposuresprocess(struct  MergeExposures_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response);
void                      pCvMergeExposuresprocessV2(struct  MergeExposures_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response);
void                      pCvMergeExposuresread(struct  MergeExposures_t* wrapper, FileNode_t* fn);
void                      pCvMergeExposuressave(struct  MergeExposures_t* wrapper, string_t* filename);
void                      pCvMergeExposureswrite(struct  MergeExposures_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvMergeMertensclear(struct  MergeMertens_t* wrapper);
bool                      pCvMergeMertensempty(struct  MergeMertens_t* wrapper);
float                     pCvMergeMertensgetContrastWeight(struct  MergeMertens_t* wrapper);
string_t*                 pCvMergeMertensgetDefaultName(struct  MergeMertens_t* wrapper);
float                     pCvMergeMertensgetExposureWeight(struct  MergeMertens_t* wrapper);
float                     pCvMergeMertensgetSaturationWeight(struct  MergeMertens_t* wrapper);
void                      pCvMergeMertensprocess(struct  MergeMertens_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response);
void                      pCvMergeMertensprocessV2(struct  MergeMertens_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response);
void                      pCvMergeMertensprocessV3(struct  MergeMertens_t* wrapper, vector_Mat* src, Mat_t* dst);
void                      pCvMergeMertensprocessV4(struct  MergeMertens_t* wrapper, vector_UMat* src, UMat_t* dst);
void                      pCvMergeMertensread(struct  MergeMertens_t* wrapper, FileNode_t* fn);
void                      pCvMergeMertenssave(struct  MergeMertens_t* wrapper, string_t* filename);
void                      pCvMergeMertenssetContrastWeight(struct  MergeMertens_t* wrapper, float contrast_weiht);
void                      pCvMergeMertenssetExposureWeight(struct  MergeMertens_t* wrapper, float exposure_weight);
void                      pCvMergeMertenssetSaturationWeight(struct  MergeMertens_t* wrapper, float saturation_weight);
void                      pCvMergeMertenswrite(struct  MergeMertens_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvMergeRobertsonclear(struct  MergeRobertson_t* wrapper);
bool                      pCvMergeRobertsonempty(struct  MergeRobertson_t* wrapper);
string_t*                 pCvMergeRobertsongetDefaultName(struct  MergeRobertson_t* wrapper);
void                      pCvMergeRobertsonprocess(struct  MergeRobertson_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response);
void                      pCvMergeRobertsonprocessV2(struct  MergeRobertson_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response);
void                      pCvMergeRobertsonprocessV3(struct  MergeRobertson_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times);
void                      pCvMergeRobertsonprocessV4(struct  MergeRobertson_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times);
void                      pCvMergeRobertsonread(struct  MergeRobertson_t* wrapper, FileNode_t* fn);
void                      pCvMergeRobertsonsave(struct  MergeRobertson_t* wrapper, string_t* filename);
void                      pCvMergeRobertsonwrite(struct  MergeRobertson_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
double                       pCvMomentsGet_m00(Moments_t* p);
void                      pCvMomentsSet_m00(Moments_t* p, double propval);
double                       pCvMomentsGet_m01(Moments_t* p);
void                      pCvMomentsSet_m01(Moments_t* p, double propval);
double                       pCvMomentsGet_m02(Moments_t* p);
void                      pCvMomentsSet_m02(Moments_t* p, double propval);
double                       pCvMomentsGet_m03(Moments_t* p);
void                      pCvMomentsSet_m03(Moments_t* p, double propval);
double                       pCvMomentsGet_m10(Moments_t* p);
void                      pCvMomentsSet_m10(Moments_t* p, double propval);
double                       pCvMomentsGet_m11(Moments_t* p);
void                      pCvMomentsSet_m11(Moments_t* p, double propval);
double                       pCvMomentsGet_m12(Moments_t* p);
void                      pCvMomentsSet_m12(Moments_t* p, double propval);
double                       pCvMomentsGet_m20(Moments_t* p);
void                      pCvMomentsSet_m20(Moments_t* p, double propval);
double                       pCvMomentsGet_m21(Moments_t* p);
void                      pCvMomentsSet_m21(Moments_t* p, double propval);
double                       pCvMomentsGet_m30(Moments_t* p);
void                      pCvMomentsSet_m30(Moments_t* p, double propval);
double                       pCvMomentsGet_mu02(Moments_t* p);
void                      pCvMomentsSet_mu02(Moments_t* p, double propval);
double                       pCvMomentsGet_mu03(Moments_t* p);
void                      pCvMomentsSet_mu03(Moments_t* p, double propval);
double                       pCvMomentsGet_mu11(Moments_t* p);
void                      pCvMomentsSet_mu11(Moments_t* p, double propval);
double                       pCvMomentsGet_mu12(Moments_t* p);
void                      pCvMomentsSet_mu12(Moments_t* p, double propval);
double                       pCvMomentsGet_mu20(Moments_t* p);
void                      pCvMomentsSet_mu20(Moments_t* p, double propval);
double                       pCvMomentsGet_mu21(Moments_t* p);
void                      pCvMomentsSet_mu21(Moments_t* p, double propval);
double                       pCvMomentsGet_mu30(Moments_t* p);
void                      pCvMomentsSet_mu30(Moments_t* p, double propval);
double                       pCvMomentsGet_nu02(Moments_t* p);
void                      pCvMomentsSet_nu02(Moments_t* p, double propval);
double                       pCvMomentsGet_nu03(Moments_t* p);
void                      pCvMomentsSet_nu03(Moments_t* p, double propval);
double                       pCvMomentsGet_nu11(Moments_t* p);
void                      pCvMomentsSet_nu11(Moments_t* p, double propval);
double                       pCvMomentsGet_nu12(Moments_t* p);
void                      pCvMomentsSet_nu12(Moments_t* p, double propval);
double                       pCvMomentsGet_nu20(Moments_t* p);
void                      pCvMomentsSet_nu20(Moments_t* p, double propval);
double                       pCvMomentsGet_nu21(Moments_t* p);
void                      pCvMomentsSet_nu21(Moments_t* p, double propval);
double                       pCvMomentsGet_nu30(Moments_t* p);
void                      pCvMomentsSet_nu30(Moments_t* p, double propval);
void                      pCvORBclear(struct  ORB_t* wrapper);
void                      pCvORBcompute(struct  ORB_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvORBcomputeV2(struct  ORB_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvORBcomputeV3(struct  ORB_t* wrapper, vector_Mat* images, vector_vector_KeyPoint* keypoints, 
                                   vector_Mat* descriptors);
void                      pCvORBcomputeV4(struct  ORB_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_ORB*                  pCvORB_create(int nfeatures /* default: 500 */, float scaleFactor /* default: 1.2f */, 
                                   int nlevels /* default: 8 */, int edgeThreshold /* default: 31 */, int firstLevel /* default: 0 */, 
                                   int WTA_K /* default: 2 */, ORB_ScoreType scoreType /* default: ORB::HARRIS_SCORE */, 
                                   int patchSize /* default: 31 */, int fastThreshold /* default: 20 */);
int                       pCvORBdefaultNorm(struct  ORB_t* wrapper);
int                       pCvORBdescriptorSize(struct  ORB_t* wrapper);
int                       pCvORBdescriptorType(struct  ORB_t* wrapper);
void                      pCvORBdetect(struct  ORB_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvORBdetectV2(struct  ORB_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvORBdetectV3(struct  ORB_t* wrapper, vector_Mat* images, vector_vector_KeyPoint* keypoints, 
                                   vector_Mat* masks /* default: vector_Mat() */);
void                      pCvORBdetectV4(struct  ORB_t* wrapper, vector_UMat* images, vector_vector_KeyPoint* keypoints, 
                                   vector_UMat* masks /* default: vector_UMat() */);
void                      pCvORBdetectAndCompute(struct  ORB_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints /* default: false */);
void                      pCvORBdetectAndComputeV2(struct  ORB_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvORBempty(struct  ORB_t* wrapper);
string_t*                 pCvORBgetDefaultName(struct  ORB_t* wrapper);
int                       pCvORBgetEdgeThreshold(struct  ORB_t* wrapper);
int                       pCvORBgetFastThreshold(struct  ORB_t* wrapper);
int                       pCvORBgetFirstLevel(struct  ORB_t* wrapper);
int                       pCvORBgetMaxFeatures(struct  ORB_t* wrapper);
int                       pCvORBgetNLevels(struct  ORB_t* wrapper);
int                       pCvORBgetPatchSize(struct  ORB_t* wrapper);
double                    pCvORBgetScaleFactor(struct  ORB_t* wrapper);
ORB_ScoreType             pCvORBgetScoreType(struct  ORB_t* wrapper);
int                       pCvORBgetWTA_K(struct  ORB_t* wrapper);
void                      pCvORBread(struct  ORB_t* wrapper, string_t* fileName);
void                      pCvORBreadV2(struct  ORB_t* wrapper, FileNode_t* arg1);
void                      pCvORBsave(struct  ORB_t* wrapper, string_t* filename);
void                      pCvORBsetEdgeThreshold(struct  ORB_t* wrapper, int edgeThreshold);
void                      pCvORBsetFastThreshold(struct  ORB_t* wrapper, int fastThreshold);
void                      pCvORBsetFirstLevel(struct  ORB_t* wrapper, int firstLevel);
void                      pCvORBsetMaxFeatures(struct  ORB_t* wrapper, int maxFeatures);
void                      pCvORBsetNLevels(struct  ORB_t* wrapper, int nlevels);
void                      pCvORBsetPatchSize(struct  ORB_t* wrapper, int patchSize);
void                      pCvORBsetScaleFactor(struct  ORB_t* wrapper, double scaleFactor);
void                      pCvORBsetScoreType(struct  ORB_t* wrapper, ORB_ScoreType scoreType);
void                      pCvORBsetWTA_K(struct  ORB_t* wrapper, int wta_k);
void                      pCvORBwrite(struct  ORB_t* wrapper, string_t* fileName);
void                      pCvORBwriteV2(struct  ORB_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
Rect_t*                   pCvPyRotationWarperbuildMaps(struct  PyRotationWarper_t* wrapper, Size_t* src_size, Mat_t* K, 
                                   Mat_t* R, Mat_t* xmap, Mat_t* ymap);
Rect_t*                   pCvPyRotationWarperbuildMapsV2(struct  PyRotationWarper_t* wrapper, Size_t* src_size, 
                                   UMat_t* K, UMat_t* R, UMat_t* xmap, UMat_t* ymap);
float                     pCvPyRotationWarpergetScale(struct  PyRotationWarper_t* wrapper);
void                      pCvPyRotationWarpersetScale(struct  PyRotationWarper_t* wrapper, float arg1);
Point_t*                  pCvPyRotationWarperwarp(struct  PyRotationWarper_t* wrapper, Mat_t* src, Mat_t* K, Mat_t* R, 
                                   int interp_mode, int border_mode, Mat_t* dst);
Point_t*                  pCvPyRotationWarperwarpV2(struct  PyRotationWarper_t* wrapper, UMat_t* src, UMat_t* K, 
                                   UMat_t* R, int interp_mode, int border_mode, UMat_t* dst);
void                      pCvPyRotationWarperwarpBackward(struct  PyRotationWarper_t* wrapper, Mat_t* src, Mat_t* K, 
                                   Mat_t* R, int interp_mode, int border_mode, Size_t* dst_size, 
                                   Mat_t* dst);
void                      pCvPyRotationWarperwarpBackwardV2(struct  PyRotationWarper_t* wrapper, UMat_t* src, UMat_t* K, 
                                   UMat_t* R, int interp_mode, int border_mode, Size_t* dst_size, 
                                   UMat_t* dst);
Point2f_t*                pCvPyRotationWarperwarpPoint(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, Mat_t* K, 
                                   Mat_t* R);
Point2f_t*                pCvPyRotationWarperwarpPointV2(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, UMat_t* K, 
                                   UMat_t* R);
Point2f_t*                pCvPyRotationWarperwarpPointBackward(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   Mat_t* K, Mat_t* R);
Point2f_t*                pCvPyRotationWarperwarpPointBackwardV2(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   UMat_t* K, UMat_t* R);
Point2f_t*                pCvPyRotationWarperwarpPointBackwardV3(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   Mat_t* K, Mat_t* R);
Point2f_t*                pCvPyRotationWarperwarpPointBackwardV4(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   UMat_t* K, UMat_t* R);
Rect_t*                   pCvPyRotationWarperwarpRoi(struct  PyRotationWarper_t* wrapper, Size_t* src_size, Mat_t* K, 
                                   Mat_t* R);
Rect_t*                   pCvPyRotationWarperwarpRoiV2(struct  PyRotationWarper_t* wrapper, Size_t* src_size, UMat_t* K, 
                                   UMat_t* R);
string_t*                 pCvQRCodeDetectordecode(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   Mat_t* straight_qrcode /* default: Mat() */);
string_t*                 pCvQRCodeDetectordecodeV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points, 
                                   UMat_t* straight_qrcode /* default: UMat() */);
string_t*                 pCvQRCodeDetectordecodeCurved(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   Mat_t* straight_qrcode /* default: Mat() */);
string_t*                 pCvQRCodeDetectordecodeCurvedV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   UMat_t* points, UMat_t* straight_qrcode /* default: UMat() */);
bool                      pCvQRCodeDetectordecodeMulti(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   vector_string* decoded_info, vector_Mat* straight_qrcode /* default: vector_Mat() */);
bool                      pCvQRCodeDetectordecodeMultiV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points, 
                                   vector_string* decoded_info, vector_UMat* straight_qrcode /* default: vector_UMat() */);
bool                      pCvQRCodeDetectordetect(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points);
bool                      pCvQRCodeDetectordetectV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points);
string_t*                 pCvQRCodeDetectordetectAndDecode(struct  QRCodeDetector_t* wrapper, Mat_t* img, 
                                   Mat_t* points /* default: Mat() */, Mat_t* straight_qrcode /* default: Mat() */);
string_t*                 pCvQRCodeDetectordetectAndDecodeV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   UMat_t* points /* default: UMat() */, UMat_t* straight_qrcode /* default: UMat() */);
string_t*                 pCvQRCodeDetectordetectAndDecodeCurved(struct  QRCodeDetector_t* wrapper, Mat_t* img, 
                                   Mat_t* points /* default: Mat() */, Mat_t* straight_qrcode /* default: Mat() */);
string_t*                 pCvQRCodeDetectordetectAndDecodeCurvedV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   UMat_t* points /* default: UMat() */, UMat_t* straight_qrcode /* default: UMat() */);
bool                      pCvQRCodeDetectordetectAndDecodeMulti(struct  QRCodeDetector_t* wrapper, Mat_t* img, 
                                   vector_string* decoded_info, Mat_t* points /* default: Mat() */, 
                                   vector_Mat* straight_qrcode /* default: vector_Mat() */);
bool                      pCvQRCodeDetectordetectAndDecodeMultiV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   vector_string* decoded_info, UMat_t* points /* default: UMat() */, 
                                   vector_UMat* straight_qrcode /* default: vector_UMat() */);
bool                      pCvQRCodeDetectordetectMulti(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points);
bool                      pCvQRCodeDetectordetectMultiV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points);
void                      pCvQRCodeDetectorsetEpsX(struct  QRCodeDetector_t* wrapper, double epsX);
void                      pCvQRCodeDetectorsetEpsY(struct  QRCodeDetector_t* wrapper, double epsY);
Ptr_QRCodeEncoder*        pCvQRCodeEncoder_create(
                                   QRCodeEncoder_Params_t* parameters /* default: QRCodeEncoder::Params() */);
void                      pCvQRCodeEncoderencode(struct  QRCodeEncoder_t* wrapper, string_t* encoded_info, 
                                   Mat_t* qrcode);
void                      pCvQRCodeEncoderencodeV2(struct  QRCodeEncoder_t* wrapper, string_t* encoded_info, 
                                   UMat_t* qrcode);
void                      pCvQRCodeEncoderencodeStructuredAppend(struct  QRCodeEncoder_t* wrapper, 
                                   string_t* encoded_info, vector_Mat* qrcodes);
void                      pCvQRCodeEncoderencodeStructuredAppendV2(struct  QRCodeEncoder_t* wrapper, 
                                   string_t* encoded_info, vector_UMat* qrcodes);
QRCodeEncoder_CorrectionLevel                       pCvQRCodeEncoder_ParamsGet_correction_level(QRCodeEncoder_Params_t* p);
void                      pCvQRCodeEncoder_ParamsSet_correction_level(QRCodeEncoder_Params_t* p, QRCodeEncoder_CorrectionLevel propval);
QRCodeEncoder_EncodeMode                       pCvQRCodeEncoder_ParamsGet_mode(QRCodeEncoder_Params_t* p);
void                      pCvQRCodeEncoder_ParamsSet_mode(QRCodeEncoder_Params_t* p, QRCodeEncoder_EncodeMode propval);
int                       pCvQRCodeEncoder_ParamsGet_structure_number(QRCodeEncoder_Params_t* p);
void                      pCvQRCodeEncoder_ParamsSet_structure_number(QRCodeEncoder_Params_t* p, int propval);
int                       pCvQRCodeEncoder_ParamsGet_version(QRCodeEncoder_Params_t* p);
void                      pCvQRCodeEncoder_ParamsSet_version(QRCodeEncoder_Params_t* p, int propval);
void                      pCvSIFTclear(struct  SIFT_t* wrapper);
void                      pCvSIFTcompute(struct  SIFT_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors);
void                      pCvSIFTcomputeV2(struct  SIFT_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors);
void                      pCvSIFTcomputeV3(struct  SIFT_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvSIFTcomputeV4(struct  SIFT_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_SIFT*                 pCvSIFT_create(int nfeatures /* default: 0 */, int nOctaveLayers /* default: 3 */, 
                                   double contrastThreshold /* default: 0.04 */, double edgeThreshold /* default: 10 */, double sigma /* default: 1.6 */);
Ptr_SIFT*                 pCvSIFT_createV2(int nfeatures, int nOctaveLayers, double contrastThreshold, 
                                   double edgeThreshold, double sigma, int descriptorType);
int                       pCvSIFTdefaultNorm(struct  SIFT_t* wrapper);
int                       pCvSIFTdescriptorSize(struct  SIFT_t* wrapper);
int                       pCvSIFTdescriptorType(struct  SIFT_t* wrapper);
void                      pCvSIFTdetect(struct  SIFT_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvSIFTdetectV2(struct  SIFT_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvSIFTdetectV3(struct  SIFT_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvSIFTdetectV4(struct  SIFT_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvSIFTdetectAndCompute(struct  SIFT_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints /* default: false */);
void                      pCvSIFTdetectAndComputeV2(struct  SIFT_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvSIFTempty(struct  SIFT_t* wrapper);
string_t*                 pCvSIFTgetDefaultName(struct  SIFT_t* wrapper);
void                      pCvSIFTread(struct  SIFT_t* wrapper, string_t* fileName);
void                      pCvSIFTreadV2(struct  SIFT_t* wrapper, FileNode_t* arg1);
void                      pCvSIFTsave(struct  SIFT_t* wrapper, string_t* filename);
void                      pCvSIFTwrite(struct  SIFT_t* wrapper, string_t* fileName);
void                      pCvSIFTwriteV2(struct  SIFT_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvSimpleBlobDetectorclear(struct  SimpleBlobDetector_t* wrapper);
void                      pCvSimpleBlobDetectorcompute(struct  SimpleBlobDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors);
void                      pCvSimpleBlobDetectorcomputeV2(struct  SimpleBlobDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors);
void                      pCvSimpleBlobDetectorcomputeV3(struct  SimpleBlobDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors);
void                      pCvSimpleBlobDetectorcomputeV4(struct  SimpleBlobDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors);
Ptr_SimpleBlobDetector*   pCvSimpleBlobDetector_create(
                                   SimpleBlobDetector_Params_t* parameters /* default: SimpleBlobDetector::Params() */);
int                       pCvSimpleBlobDetectordefaultNorm(struct  SimpleBlobDetector_t* wrapper);
int                       pCvSimpleBlobDetectordescriptorSize(struct  SimpleBlobDetector_t* wrapper);
int                       pCvSimpleBlobDetectordescriptorType(struct  SimpleBlobDetector_t* wrapper);
void                      pCvSimpleBlobDetectordetect(struct  SimpleBlobDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask /* default: Mat() */);
void                      pCvSimpleBlobDetectordetectV2(struct  SimpleBlobDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask /* default: UMat() */);
void                      pCvSimpleBlobDetectordetectV3(struct  SimpleBlobDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvSimpleBlobDetectordetectV4(struct  SimpleBlobDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvSimpleBlobDetectordetectAndCompute(struct  SimpleBlobDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* mask, vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
void                      pCvSimpleBlobDetectordetectAndComputeV2(struct  SimpleBlobDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* mask, vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints /* default: false */);
bool                      pCvSimpleBlobDetectorempty(struct  SimpleBlobDetector_t* wrapper);
string_t*                 pCvSimpleBlobDetectorgetDefaultName(struct  SimpleBlobDetector_t* wrapper);
void                      pCvSimpleBlobDetectorread(struct  SimpleBlobDetector_t* wrapper, string_t* fileName);
void                      pCvSimpleBlobDetectorreadV2(struct  SimpleBlobDetector_t* wrapper, FileNode_t* arg1);
void                      pCvSimpleBlobDetectorsave(struct  SimpleBlobDetector_t* wrapper, string_t* filename);
void                      pCvSimpleBlobDetectorwrite(struct  SimpleBlobDetector_t* wrapper, string_t* fileName);
void                      pCvSimpleBlobDetectorwriteV2(struct  SimpleBlobDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
uchar                       pCvSimpleBlobDetector_ParamsGet_blobColor(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_blobColor(SimpleBlobDetector_Params_t* p, uchar propval);
bool                       pCvSimpleBlobDetector_ParamsGet_filterByArea(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_filterByArea(SimpleBlobDetector_Params_t* p, bool propval);
bool                       pCvSimpleBlobDetector_ParamsGet_filterByCircularity(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_filterByCircularity(SimpleBlobDetector_Params_t* p, bool propval);
bool                       pCvSimpleBlobDetector_ParamsGet_filterByColor(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_filterByColor(SimpleBlobDetector_Params_t* p, bool propval);
bool                       pCvSimpleBlobDetector_ParamsGet_filterByConvexity(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_filterByConvexity(SimpleBlobDetector_Params_t* p, bool propval);
bool                       pCvSimpleBlobDetector_ParamsGet_filterByInertia(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_filterByInertia(SimpleBlobDetector_Params_t* p, bool propval);
float                       pCvSimpleBlobDetector_ParamsGet_maxArea(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_maxArea(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_maxCircularity(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_maxCircularity(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_maxConvexity(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_maxConvexity(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_maxInertiaRatio(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_maxInertiaRatio(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_maxThreshold(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_maxThreshold(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_minArea(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minArea(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_minCircularity(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minCircularity(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_minConvexity(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minConvexity(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_minDistBetweenBlobs(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minDistBetweenBlobs(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_minInertiaRatio(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minInertiaRatio(SimpleBlobDetector_Params_t* p, float propval);
size_t                       pCvSimpleBlobDetector_ParamsGet_minRepeatability(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minRepeatability(SimpleBlobDetector_Params_t* p, size_t propval);
float                       pCvSimpleBlobDetector_ParamsGet_minThreshold(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_minThreshold(SimpleBlobDetector_Params_t* p, float propval);
float                       pCvSimpleBlobDetector_ParamsGet_thresholdStep(SimpleBlobDetector_Params_t* p);
void                      pCvSimpleBlobDetector_ParamsSet_thresholdStep(SimpleBlobDetector_Params_t* p, float propval);
void                      pCvSparseOpticalFlowcalc(struct  SparseOpticalFlow_t* wrapper, Mat_t* prevImg, Mat_t* nextImg, 
                                   Mat_t* prevPts, Mat_t* nextPts, Mat_t* status, Mat_t* err /* default: cv::Mat() */);
void                      pCvSparseOpticalFlowcalcV2(struct  SparseOpticalFlow_t* wrapper, UMat_t* prevImg, 
                                   UMat_t* nextImg, UMat_t* prevPts, UMat_t* nextPts, UMat_t* status, 
                                   UMat_t* err /* default: cv::UMat() */);
void                      pCvSparseOpticalFlowclear(struct  SparseOpticalFlow_t* wrapper);
bool                      pCvSparseOpticalFlowempty(struct  SparseOpticalFlow_t* wrapper);
string_t*                 pCvSparseOpticalFlowgetDefaultName(struct  SparseOpticalFlow_t* wrapper);
void                      pCvSparseOpticalFlowread(struct  SparseOpticalFlow_t* wrapper, FileNode_t* fn);
void                      pCvSparseOpticalFlowsave(struct  SparseOpticalFlow_t* wrapper, string_t* filename);
void                      pCvSparseOpticalFlowwrite(struct  SparseOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvSparsePyrLKOpticalFlowcalc(struct  SparsePyrLKOpticalFlow_t* wrapper, Mat_t* prevImg, 
                                   Mat_t* nextImg, Mat_t* prevPts, Mat_t* nextPts, Mat_t* status, 
                                   Mat_t* err /* default: cv::Mat() */);
void                      pCvSparsePyrLKOpticalFlowcalcV2(struct  SparsePyrLKOpticalFlow_t* wrapper, UMat_t* prevImg, 
                                   UMat_t* nextImg, UMat_t* prevPts, UMat_t* nextPts, UMat_t* status, 
                                   UMat_t* err /* default: cv::UMat() */);
void                      pCvSparsePyrLKOpticalFlowclear(struct  SparsePyrLKOpticalFlow_t* wrapper);
Ptr_SparsePyrLKOpticalFlow* pCvSparsePyrLKOpticalFlow_create(Size_t* winSize /* default: Size(21, 21) */, 
                                   int maxLevel /* default: 3 */, 
                                   TermCriteria_t* crit /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01) */, int flags /* default: 0 */, 
                                   double minEigThreshold /* default: 1e-4 */);
bool                      pCvSparsePyrLKOpticalFlowempty(struct  SparsePyrLKOpticalFlow_t* wrapper);
string_t*                 pCvSparsePyrLKOpticalFlowgetDefaultName(struct  SparsePyrLKOpticalFlow_t* wrapper);
int                       pCvSparsePyrLKOpticalFlowgetFlags(struct  SparsePyrLKOpticalFlow_t* wrapper);
int                       pCvSparsePyrLKOpticalFlowgetMaxLevel(struct  SparsePyrLKOpticalFlow_t* wrapper);
double                    pCvSparsePyrLKOpticalFlowgetMinEigThreshold(struct  SparsePyrLKOpticalFlow_t* wrapper);
TermCriteria_t*           pCvSparsePyrLKOpticalFlowgetTermCriteria(struct  SparsePyrLKOpticalFlow_t* wrapper);
Size_t*                   pCvSparsePyrLKOpticalFlowgetWinSize(struct  SparsePyrLKOpticalFlow_t* wrapper);
void                      pCvSparsePyrLKOpticalFlowread(struct  SparsePyrLKOpticalFlow_t* wrapper, FileNode_t* fn);
void                      pCvSparsePyrLKOpticalFlowsave(struct  SparsePyrLKOpticalFlow_t* wrapper, string_t* filename);
void                      pCvSparsePyrLKOpticalFlowsetFlags(struct  SparsePyrLKOpticalFlow_t* wrapper, int flags);
void                      pCvSparsePyrLKOpticalFlowsetMaxLevel(struct  SparsePyrLKOpticalFlow_t* wrapper, int maxLevel);
void                      pCvSparsePyrLKOpticalFlowsetMinEigThreshold(struct  SparsePyrLKOpticalFlow_t* wrapper, 
                                   double minEigThreshold);
void                      pCvSparsePyrLKOpticalFlowsetTermCriteria(struct  SparsePyrLKOpticalFlow_t* wrapper, 
                                   TermCriteria_t* crit);
void                      pCvSparsePyrLKOpticalFlowsetWinSize(struct  SparsePyrLKOpticalFlow_t* wrapper, 
                                   Size_t* winSize);
void                      pCvSparsePyrLKOpticalFlowwrite(struct  SparsePyrLKOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvStereoBMclear(struct  StereoBM_t* wrapper);
void                      pCvStereoBMcompute(struct  StereoBM_t* wrapper, Mat_t* left, Mat_t* right, Mat_t* disparity);
void                      pCvStereoBMcomputeV2(struct  StereoBM_t* wrapper, UMat_t* left, UMat_t* right, 
                                   UMat_t* disparity);
Ptr_StereoBM*             pCvStereoBM_create(int numDisparities /* default: 0 */, int blockSize /* default: 21 */);
bool                      pCvStereoBMempty(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetBlockSize(struct  StereoBM_t* wrapper);
string_t*                 pCvStereoBMgetDefaultName(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetDisp12MaxDiff(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetMinDisparity(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetNumDisparities(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetPreFilterCap(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetPreFilterSize(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetPreFilterType(struct  StereoBM_t* wrapper);
Rect_t*                   pCvStereoBMgetROI1(struct  StereoBM_t* wrapper);
Rect_t*                   pCvStereoBMgetROI2(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetSmallerBlockSize(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetSpeckleRange(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetSpeckleWindowSize(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetTextureThreshold(struct  StereoBM_t* wrapper);
int                       pCvStereoBMgetUniquenessRatio(struct  StereoBM_t* wrapper);
void                      pCvStereoBMread(struct  StereoBM_t* wrapper, FileNode_t* fn);
void                      pCvStereoBMsave(struct  StereoBM_t* wrapper, string_t* filename);
void                      pCvStereoBMsetBlockSize(struct  StereoBM_t* wrapper, int blockSize);
void                      pCvStereoBMsetDisp12MaxDiff(struct  StereoBM_t* wrapper, int disp12MaxDiff);
void                      pCvStereoBMsetMinDisparity(struct  StereoBM_t* wrapper, int minDisparity);
void                      pCvStereoBMsetNumDisparities(struct  StereoBM_t* wrapper, int numDisparities);
void                      pCvStereoBMsetPreFilterCap(struct  StereoBM_t* wrapper, int preFilterCap);
void                      pCvStereoBMsetPreFilterSize(struct  StereoBM_t* wrapper, int preFilterSize);
void                      pCvStereoBMsetPreFilterType(struct  StereoBM_t* wrapper, int preFilterType);
void                      pCvStereoBMsetROI1(struct  StereoBM_t* wrapper, Rect_t* roi1);
void                      pCvStereoBMsetROI2(struct  StereoBM_t* wrapper, Rect_t* roi2);
void                      pCvStereoBMsetSmallerBlockSize(struct  StereoBM_t* wrapper, int blockSize);
void                      pCvStereoBMsetSpeckleRange(struct  StereoBM_t* wrapper, int speckleRange);
void                      pCvStereoBMsetSpeckleWindowSize(struct  StereoBM_t* wrapper, int speckleWindowSize);
void                      pCvStereoBMsetTextureThreshold(struct  StereoBM_t* wrapper, int textureThreshold);
void                      pCvStereoBMsetUniquenessRatio(struct  StereoBM_t* wrapper, int uniquenessRatio);
void                      pCvStereoBMwrite(struct  StereoBM_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvStereoMatcherclear(struct  StereoMatcher_t* wrapper);
void                      pCvStereoMatchercompute(struct  StereoMatcher_t* wrapper, Mat_t* left, Mat_t* right, 
                                   Mat_t* disparity);
void                      pCvStereoMatchercomputeV2(struct  StereoMatcher_t* wrapper, UMat_t* left, UMat_t* right, 
                                   UMat_t* disparity);
bool                      pCvStereoMatcherempty(struct  StereoMatcher_t* wrapper);
int                       pCvStereoMatchergetBlockSize(struct  StereoMatcher_t* wrapper);
string_t*                 pCvStereoMatchergetDefaultName(struct  StereoMatcher_t* wrapper);
int                       pCvStereoMatchergetDisp12MaxDiff(struct  StereoMatcher_t* wrapper);
int                       pCvStereoMatchergetMinDisparity(struct  StereoMatcher_t* wrapper);
int                       pCvStereoMatchergetNumDisparities(struct  StereoMatcher_t* wrapper);
int                       pCvStereoMatchergetSpeckleRange(struct  StereoMatcher_t* wrapper);
int                       pCvStereoMatchergetSpeckleWindowSize(struct  StereoMatcher_t* wrapper);
void                      pCvStereoMatcherread(struct  StereoMatcher_t* wrapper, FileNode_t* fn);
void                      pCvStereoMatchersave(struct  StereoMatcher_t* wrapper, string_t* filename);
void                      pCvStereoMatchersetBlockSize(struct  StereoMatcher_t* wrapper, int blockSize);
void                      pCvStereoMatchersetDisp12MaxDiff(struct  StereoMatcher_t* wrapper, int disp12MaxDiff);
void                      pCvStereoMatchersetMinDisparity(struct  StereoMatcher_t* wrapper, int minDisparity);
void                      pCvStereoMatchersetNumDisparities(struct  StereoMatcher_t* wrapper, int numDisparities);
void                      pCvStereoMatchersetSpeckleRange(struct  StereoMatcher_t* wrapper, int speckleRange);
void                      pCvStereoMatchersetSpeckleWindowSize(struct  StereoMatcher_t* wrapper, int speckleWindowSize);
void                      pCvStereoMatcherwrite(struct  StereoMatcher_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvStereoSGBMclear(struct  StereoSGBM_t* wrapper);
void                      pCvStereoSGBMcompute(struct  StereoSGBM_t* wrapper, Mat_t* left, Mat_t* right, 
                                   Mat_t* disparity);
void                      pCvStereoSGBMcomputeV2(struct  StereoSGBM_t* wrapper, UMat_t* left, UMat_t* right, 
                                   UMat_t* disparity);
Ptr_StereoSGBM*           pCvStereoSGBM_create(int minDisparity /* default: 0 */, int numDisparities /* default: 16 */, 
                                   int blockSize /* default: 3 */, int P1 /* default: 0 */, int P2 /* default: 0 */, 
                                   int disp12MaxDiff /* default: 0 */, int preFilterCap /* default: 0 */, 
                                   int uniquenessRatio /* default: 0 */, int speckleWindowSize /* default: 0 */, 
                                   int speckleRange /* default: 0 */, int mode /* default: StereoSGBM::MODE_SGBM */);
bool                      pCvStereoSGBMempty(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetBlockSize(struct  StereoSGBM_t* wrapper);
string_t*                 pCvStereoSGBMgetDefaultName(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetDisp12MaxDiff(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetMinDisparity(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetMode(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetNumDisparities(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetP1(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetP2(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetPreFilterCap(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetSpeckleRange(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetSpeckleWindowSize(struct  StereoSGBM_t* wrapper);
int                       pCvStereoSGBMgetUniquenessRatio(struct  StereoSGBM_t* wrapper);
void                      pCvStereoSGBMread(struct  StereoSGBM_t* wrapper, FileNode_t* fn);
void                      pCvStereoSGBMsave(struct  StereoSGBM_t* wrapper, string_t* filename);
void                      pCvStereoSGBMsetBlockSize(struct  StereoSGBM_t* wrapper, int blockSize);
void                      pCvStereoSGBMsetDisp12MaxDiff(struct  StereoSGBM_t* wrapper, int disp12MaxDiff);
void                      pCvStereoSGBMsetMinDisparity(struct  StereoSGBM_t* wrapper, int minDisparity);
void                      pCvStereoSGBMsetMode(struct  StereoSGBM_t* wrapper, int mode);
void                      pCvStereoSGBMsetNumDisparities(struct  StereoSGBM_t* wrapper, int numDisparities);
void                      pCvStereoSGBMsetP1(struct  StereoSGBM_t* wrapper, int P1);
void                      pCvStereoSGBMsetP2(struct  StereoSGBM_t* wrapper, int P2);
void                      pCvStereoSGBMsetPreFilterCap(struct  StereoSGBM_t* wrapper, int preFilterCap);
void                      pCvStereoSGBMsetSpeckleRange(struct  StereoSGBM_t* wrapper, int speckleRange);
void                      pCvStereoSGBMsetSpeckleWindowSize(struct  StereoSGBM_t* wrapper, int speckleWindowSize);
void                      pCvStereoSGBMsetUniquenessRatio(struct  StereoSGBM_t* wrapper, int uniquenessRatio);
void                      pCvStereoSGBMwrite(struct  StereoSGBM_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
Stitcher_Status           pCvStitchercomposePanorama(struct  Stitcher_t* wrapper, Mat_t* pano);
Stitcher_Status           pCvStitchercomposePanoramaV2(struct  Stitcher_t* wrapper, UMat_t* pano);
Stitcher_Status           pCvStitchercomposePanoramaV3(struct  Stitcher_t* wrapper, vector_Mat* images, Mat_t* pano);
Stitcher_Status           pCvStitchercomposePanoramaV4(struct  Stitcher_t* wrapper, vector_UMat* images, UMat_t* pano);
double                    pCvStitchercompositingResol(struct  Stitcher_t* wrapper);
Ptr_Stitcher*             pCvStitcher_create(Stitcher_Mode mode /* default: Stitcher::PANORAMA */);
Stitcher_Status           pCvStitcherestimateTransform(struct  Stitcher_t* wrapper, vector_Mat* images, 
                                   vector_Mat* masks /* default: vector_Mat() */);
Stitcher_Status           pCvStitcherestimateTransformV2(struct  Stitcher_t* wrapper, vector_UMat* images, 
                                   vector_UMat* masks /* default: vector_UMat() */);
InterpolationFlags        pCvStitcherinterpolationFlags(struct  Stitcher_t* wrapper);
double                    pCvStitcherpanoConfidenceThresh(struct  Stitcher_t* wrapper);
double                    pCvStitcherregistrationResol(struct  Stitcher_t* wrapper);
double                    pCvStitcherseamEstimationResol(struct  Stitcher_t* wrapper);
void                      pCvStitchersetCompositingResol(struct  Stitcher_t* wrapper, double resol_mpx);
void                      pCvStitchersetInterpolationFlags(struct  Stitcher_t* wrapper, InterpolationFlags interp_flags);
void                      pCvStitchersetPanoConfidenceThresh(struct  Stitcher_t* wrapper, double conf_thresh);
void                      pCvStitchersetRegistrationResol(struct  Stitcher_t* wrapper, double resol_mpx);
void                      pCvStitchersetSeamEstimationResol(struct  Stitcher_t* wrapper, double resol_mpx);
void                      pCvStitchersetWaveCorrection(struct  Stitcher_t* wrapper, bool flag);
Stitcher_Status           pCvStitcherstitch(struct  Stitcher_t* wrapper, vector_Mat* images, Mat_t* pano);
Stitcher_Status           pCvStitcherstitchV2(struct  Stitcher_t* wrapper, vector_UMat* images, UMat_t* pano);
Stitcher_Status           pCvStitcherstitchV3(struct  Stitcher_t* wrapper, vector_Mat* images, vector_Mat* masks, 
                                   Mat_t* pano);
Stitcher_Status           pCvStitcherstitchV4(struct  Stitcher_t* wrapper, vector_UMat* images, vector_UMat* masks, 
                                   UMat_t* pano);
bool                      pCvStitcherwaveCorrection(struct  Stitcher_t* wrapper);
double                    pCvStitcherworkScale(struct  Stitcher_t* wrapper);
int                       pCvSubdiv2DedgeDst(struct  Subdiv2D_t* wrapper, int edge, Point2f_t* dstpt /* default: 0 */);
int                       pCvSubdiv2DedgeOrg(struct  Subdiv2D_t* wrapper, int edge, Point2f_t* orgpt /* default: 0 */);
int                       pCvSubdiv2DfindNearest(struct  Subdiv2D_t* wrapper, Point2f_t* pt, 
                                   Point2f_t* nearestPt /* default: 0 */);
int                       pCvSubdiv2DgetEdge(struct  Subdiv2D_t* wrapper, int edge, int nextEdgeType);
void                      pCvSubdiv2DgetEdgeList(struct  Subdiv2D_t* wrapper, vector_Vec4f* edgeList);
void                      pCvSubdiv2DgetLeadingEdgeList(struct  Subdiv2D_t* wrapper, vector_int* leadingEdgeList);
void                      pCvSubdiv2DgetTriangleList(struct  Subdiv2D_t* wrapper, vector_Vec6f* triangleList);
Point2f_t*                pCvSubdiv2DgetVertex(struct  Subdiv2D_t* wrapper, int vertex, int* firstEdge /* default: 0 */);
void                      pCvSubdiv2DgetVoronoiFacetList(struct  Subdiv2D_t* wrapper, vector_int* idx, 
                                   vector_vector_Point2f* facetList, vector_Point2f* facetCenters);
void                      pCvSubdiv2DinitDelaunay(struct  Subdiv2D_t* wrapper, Rect_t* rect);
int                       pCvSubdiv2Dinsert(struct  Subdiv2D_t* wrapper, Point2f_t* pt);
void                      pCvSubdiv2DinsertV2(struct  Subdiv2D_t* wrapper, vector_Point2f* ptvec);
int                       pCvSubdiv2Dlocate(struct  Subdiv2D_t* wrapper, Point2f_t* pt, int edge, int vertex);
int                       pCvSubdiv2DnextEdge(struct  Subdiv2D_t* wrapper, int edge);
int                       pCvSubdiv2DrotateEdge(struct  Subdiv2D_t* wrapper, int edge, int rotate);
int                       pCvSubdiv2DsymEdge(struct  Subdiv2D_t* wrapper, int edge);
double                    pCvTickMetergetAvgTimeMilli(struct  TickMeter_t* wrapper);
double                    pCvTickMetergetAvgTimeSec(struct  TickMeter_t* wrapper);
int64                     pCvTickMetergetCounter(struct  TickMeter_t* wrapper);
double                    pCvTickMetergetFPS(struct  TickMeter_t* wrapper);
double                    pCvTickMetergetTimeMicro(struct  TickMeter_t* wrapper);
double                    pCvTickMetergetTimeMilli(struct  TickMeter_t* wrapper);
double                    pCvTickMetergetTimeSec(struct  TickMeter_t* wrapper);
int64                     pCvTickMetergetTimeTicks(struct  TickMeter_t* wrapper);
void                      pCvTickMeterreset(struct  TickMeter_t* wrapper);
void                      pCvTickMeterstart(struct  TickMeter_t* wrapper);
void                      pCvTickMeterstop(struct  TickMeter_t* wrapper);
void                      pCvTonemapclear(struct  Tonemap_t* wrapper);
bool                      pCvTonemapempty(struct  Tonemap_t* wrapper);
string_t*                 pCvTonemapgetDefaultName(struct  Tonemap_t* wrapper);
float                     pCvTonemapgetGamma(struct  Tonemap_t* wrapper);
void                      pCvTonemapprocess(struct  Tonemap_t* wrapper, Mat_t* src, Mat_t* dst);
void                      pCvTonemapprocessV2(struct  Tonemap_t* wrapper, UMat_t* src, UMat_t* dst);
void                      pCvTonemapread(struct  Tonemap_t* wrapper, FileNode_t* fn);
void                      pCvTonemapsave(struct  Tonemap_t* wrapper, string_t* filename);
void                      pCvTonemapsetGamma(struct  Tonemap_t* wrapper, float gamma);
void                      pCvTonemapwrite(struct  Tonemap_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvTonemapDragoclear(struct  TonemapDrago_t* wrapper);
bool                      pCvTonemapDragoempty(struct  TonemapDrago_t* wrapper);
float                     pCvTonemapDragogetBias(struct  TonemapDrago_t* wrapper);
string_t*                 pCvTonemapDragogetDefaultName(struct  TonemapDrago_t* wrapper);
float                     pCvTonemapDragogetGamma(struct  TonemapDrago_t* wrapper);
float                     pCvTonemapDragogetSaturation(struct  TonemapDrago_t* wrapper);
void                      pCvTonemapDragoprocess(struct  TonemapDrago_t* wrapper, Mat_t* src, Mat_t* dst);
void                      pCvTonemapDragoprocessV2(struct  TonemapDrago_t* wrapper, UMat_t* src, UMat_t* dst);
void                      pCvTonemapDragoread(struct  TonemapDrago_t* wrapper, FileNode_t* fn);
void                      pCvTonemapDragosave(struct  TonemapDrago_t* wrapper, string_t* filename);
void                      pCvTonemapDragosetBias(struct  TonemapDrago_t* wrapper, float bias);
void                      pCvTonemapDragosetGamma(struct  TonemapDrago_t* wrapper, float gamma);
void                      pCvTonemapDragosetSaturation(struct  TonemapDrago_t* wrapper, float saturation);
void                      pCvTonemapDragowrite(struct  TonemapDrago_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvTonemapMantiukclear(struct  TonemapMantiuk_t* wrapper);
bool                      pCvTonemapMantiukempty(struct  TonemapMantiuk_t* wrapper);
string_t*                 pCvTonemapMantiukgetDefaultName(struct  TonemapMantiuk_t* wrapper);
float                     pCvTonemapMantiukgetGamma(struct  TonemapMantiuk_t* wrapper);
float                     pCvTonemapMantiukgetSaturation(struct  TonemapMantiuk_t* wrapper);
float                     pCvTonemapMantiukgetScale(struct  TonemapMantiuk_t* wrapper);
void                      pCvTonemapMantiukprocess(struct  TonemapMantiuk_t* wrapper, Mat_t* src, Mat_t* dst);
void                      pCvTonemapMantiukprocessV2(struct  TonemapMantiuk_t* wrapper, UMat_t* src, UMat_t* dst);
void                      pCvTonemapMantiukread(struct  TonemapMantiuk_t* wrapper, FileNode_t* fn);
void                      pCvTonemapMantiuksave(struct  TonemapMantiuk_t* wrapper, string_t* filename);
void                      pCvTonemapMantiuksetGamma(struct  TonemapMantiuk_t* wrapper, float gamma);
void                      pCvTonemapMantiuksetSaturation(struct  TonemapMantiuk_t* wrapper, float saturation);
void                      pCvTonemapMantiuksetScale(struct  TonemapMantiuk_t* wrapper, float scale);
void                      pCvTonemapMantiukwrite(struct  TonemapMantiuk_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvTonemapReinhardclear(struct  TonemapReinhard_t* wrapper);
bool                      pCvTonemapReinhardempty(struct  TonemapReinhard_t* wrapper);
float                     pCvTonemapReinhardgetColorAdaptation(struct  TonemapReinhard_t* wrapper);
string_t*                 pCvTonemapReinhardgetDefaultName(struct  TonemapReinhard_t* wrapper);
float                     pCvTonemapReinhardgetGamma(struct  TonemapReinhard_t* wrapper);
float                     pCvTonemapReinhardgetIntensity(struct  TonemapReinhard_t* wrapper);
float                     pCvTonemapReinhardgetLightAdaptation(struct  TonemapReinhard_t* wrapper);
void                      pCvTonemapReinhardprocess(struct  TonemapReinhard_t* wrapper, Mat_t* src, Mat_t* dst);
void                      pCvTonemapReinhardprocessV2(struct  TonemapReinhard_t* wrapper, UMat_t* src, UMat_t* dst);
void                      pCvTonemapReinhardread(struct  TonemapReinhard_t* wrapper, FileNode_t* fn);
void                      pCvTonemapReinhardsave(struct  TonemapReinhard_t* wrapper, string_t* filename);
void                      pCvTonemapReinhardsetColorAdaptation(struct  TonemapReinhard_t* wrapper, float color_adapt);
void                      pCvTonemapReinhardsetGamma(struct  TonemapReinhard_t* wrapper, float gamma);
void                      pCvTonemapReinhardsetIntensity(struct  TonemapReinhard_t* wrapper, float intensity);
void                      pCvTonemapReinhardsetLightAdaptation(struct  TonemapReinhard_t* wrapper, float light_adapt);
void                      pCvTonemapReinhardwrite(struct  TonemapReinhard_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvTrackerinit(struct  Tracker_t* wrapper, Mat_t* image, Rect_t* boundingBox);
void                      pCvTrackerinitV2(struct  Tracker_t* wrapper, UMat_t* image, Rect_t* boundingBox);
bool                      pCvTrackerupdate(struct  Tracker_t* wrapper, Mat_t* image, Rect_t* boundingBox);
bool                      pCvTrackerupdateV2(struct  Tracker_t* wrapper, UMat_t* image, Rect_t* boundingBox);
Ptr_TrackerDaSiamRPN*     pCvTrackerDaSiamRPN_create(
                                   TrackerDaSiamRPN_Params_t* parameters /* default: TrackerDaSiamRPN::Params() */);
float                     pCvTrackerDaSiamRPNgetTrackingScore(struct  TrackerDaSiamRPN_t* wrapper);
void                      pCvTrackerDaSiamRPNinit(struct  TrackerDaSiamRPN_t* wrapper, Mat_t* image, 
                                   Rect_t* boundingBox);
void                      pCvTrackerDaSiamRPNinitV2(struct  TrackerDaSiamRPN_t* wrapper, UMat_t* image, 
                                   Rect_t* boundingBox);
bool                      pCvTrackerDaSiamRPNupdate(struct  TrackerDaSiamRPN_t* wrapper, Mat_t* image, 
                                   Rect_t* boundingBox);
bool                      pCvTrackerDaSiamRPNupdateV2(struct  TrackerDaSiamRPN_t* wrapper, UMat_t* image, 
                                   Rect_t* boundingBox);
int                       pCvTrackerDaSiamRPN_ParamsGet_backend(TrackerDaSiamRPN_Params_t* p);
void                      pCvTrackerDaSiamRPN_ParamsSet_backend(TrackerDaSiamRPN_Params_t* p, int propval);
string_t*                       pCvTrackerDaSiamRPN_ParamsGet_kernel_cls1(TrackerDaSiamRPN_Params_t* p);
void                      pCvTrackerDaSiamRPN_ParamsSet_kernel_cls1(TrackerDaSiamRPN_Params_t* p, string_t* propval);
string_t*                       pCvTrackerDaSiamRPN_ParamsGet_kernel_r1(TrackerDaSiamRPN_Params_t* p);
void                      pCvTrackerDaSiamRPN_ParamsSet_kernel_r1(TrackerDaSiamRPN_Params_t* p, string_t* propval);
string_t*                       pCvTrackerDaSiamRPN_ParamsGet_model(TrackerDaSiamRPN_Params_t* p);
void                      pCvTrackerDaSiamRPN_ParamsSet_model(TrackerDaSiamRPN_Params_t* p, string_t* propval);
int                       pCvTrackerDaSiamRPN_ParamsGet_target(TrackerDaSiamRPN_Params_t* p);
void                      pCvTrackerDaSiamRPN_ParamsSet_target(TrackerDaSiamRPN_Params_t* p, int propval);
Ptr_TrackerGOTURN*        pCvTrackerGOTURN_create(
                                   TrackerGOTURN_Params_t* parameters /* default: TrackerGOTURN::Params() */);
void                      pCvTrackerGOTURNinit(struct  TrackerGOTURN_t* wrapper, Mat_t* image, Rect_t* boundingBox);
void                      pCvTrackerGOTURNinitV2(struct  TrackerGOTURN_t* wrapper, UMat_t* image, Rect_t* boundingBox);
bool                      pCvTrackerGOTURNupdate(struct  TrackerGOTURN_t* wrapper, Mat_t* image, Rect_t* boundingBox);
bool                      pCvTrackerGOTURNupdateV2(struct  TrackerGOTURN_t* wrapper, UMat_t* image, Rect_t* boundingBox);
string_t*                       pCvTrackerGOTURN_ParamsGet_modelBin(TrackerGOTURN_Params_t* p);
void                      pCvTrackerGOTURN_ParamsSet_modelBin(TrackerGOTURN_Params_t* p, string_t* propval);
string_t*                       pCvTrackerGOTURN_ParamsGet_modelTxt(TrackerGOTURN_Params_t* p);
void                      pCvTrackerGOTURN_ParamsSet_modelTxt(TrackerGOTURN_Params_t* p, string_t* propval);
Ptr_TrackerMIL*           pCvTrackerMIL_create(TrackerMIL_Params_t* parameters /* default: TrackerMIL::Params() */);
void                      pCvTrackerMILinit(struct  TrackerMIL_t* wrapper, Mat_t* image, Rect_t* boundingBox);
void                      pCvTrackerMILinitV2(struct  TrackerMIL_t* wrapper, UMat_t* image, Rect_t* boundingBox);
bool                      pCvTrackerMILupdate(struct  TrackerMIL_t* wrapper, Mat_t* image, Rect_t* boundingBox);
bool                      pCvTrackerMILupdateV2(struct  TrackerMIL_t* wrapper, UMat_t* image, Rect_t* boundingBox);
int                       pCvTrackerMIL_ParamsGet_featureSetNumFeatures(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_featureSetNumFeatures(TrackerMIL_Params_t* p, int propval);
float                       pCvTrackerMIL_ParamsGet_samplerInitInRadius(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_samplerInitInRadius(TrackerMIL_Params_t* p, float propval);
int                       pCvTrackerMIL_ParamsGet_samplerInitMaxNegNum(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_samplerInitMaxNegNum(TrackerMIL_Params_t* p, int propval);
float                       pCvTrackerMIL_ParamsGet_samplerSearchWinSize(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_samplerSearchWinSize(TrackerMIL_Params_t* p, float propval);
float                       pCvTrackerMIL_ParamsGet_samplerTrackInRadius(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_samplerTrackInRadius(TrackerMIL_Params_t* p, float propval);
int                       pCvTrackerMIL_ParamsGet_samplerTrackMaxNegNum(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_samplerTrackMaxNegNum(TrackerMIL_Params_t* p, int propval);
int                       pCvTrackerMIL_ParamsGet_samplerTrackMaxPosNum(TrackerMIL_Params_t* p);
void                      pCvTrackerMIL_ParamsSet_samplerTrackMaxPosNum(TrackerMIL_Params_t* p, int propval);
void*                     pCvUMathandle(struct  UMat_t* wrapper, AccessFlag accessFlags);
bool                      pCvUMatisContinuous(struct  UMat_t* wrapper);
bool                      pCvUMatisSubmatrix(struct  UMat_t* wrapper);
size_t                       pCvUMatGet_offset(UMat_t* p);
void                      pCvUMatSet_offset(UMat_t* p, size_t propval);
double                       pCvUsacParamsGet_confidence(UsacParams_t* p);
void                      pCvUsacParamsSet_confidence(UsacParams_t* p, double propval);
bool                       pCvUsacParamsGet_isParallel(UsacParams_t* p);
void                      pCvUsacParamsSet_isParallel(UsacParams_t* p, bool propval);
int                       pCvUsacParamsGet_loIterations(UsacParams_t* p);
void                      pCvUsacParamsSet_loIterations(UsacParams_t* p, int propval);
LocalOptimMethod                       pCvUsacParamsGet_loMethod(UsacParams_t* p);
void                      pCvUsacParamsSet_loMethod(UsacParams_t* p, LocalOptimMethod propval);
int                       pCvUsacParamsGet_loSampleSize(UsacParams_t* p);
void                      pCvUsacParamsSet_loSampleSize(UsacParams_t* p, int propval);
int                       pCvUsacParamsGet_maxIterations(UsacParams_t* p);
void                      pCvUsacParamsSet_maxIterations(UsacParams_t* p, int propval);
NeighborSearchMethod                       pCvUsacParamsGet_neighborsSearch(UsacParams_t* p);
void                      pCvUsacParamsSet_neighborsSearch(UsacParams_t* p, NeighborSearchMethod propval);
int                       pCvUsacParamsGet_randomGeneratorState(UsacParams_t* p);
void                      pCvUsacParamsSet_randomGeneratorState(UsacParams_t* p, int propval);
SamplingMethod                       pCvUsacParamsGet_sampler(UsacParams_t* p);
void                      pCvUsacParamsSet_sampler(UsacParams_t* p, SamplingMethod propval);
ScoreMethod                       pCvUsacParamsGet_score(UsacParams_t* p);
void                      pCvUsacParamsSet_score(UsacParams_t* p, ScoreMethod propval);
double                       pCvUsacParamsGet_threshold(UsacParams_t* p);
void                      pCvUsacParamsSet_threshold(UsacParams_t* p, double propval);
void                      pCvVariationalRefinementcalc(struct  VariationalRefinement_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow);
void                      pCvVariationalRefinementcalcV2(struct  VariationalRefinement_t* wrapper, UMat_t* I0, 
                                   UMat_t* I1, UMat_t* flow);
void                      pCvVariationalRefinementcalcUV(struct  VariationalRefinement_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow_u, Mat_t* flow_v);
void                      pCvVariationalRefinementcalcUVV2(struct  VariationalRefinement_t* wrapper, UMat_t* I0, 
                                   UMat_t* I1, UMat_t* flow_u, UMat_t* flow_v);
void                      pCvVariationalRefinementclear(struct  VariationalRefinement_t* wrapper);
void                      pCvVariationalRefinementcollectGarbage(struct  VariationalRefinement_t* wrapper);
Ptr_VariationalRefinement* pCvVariationalRefinement_create();
bool                      pCvVariationalRefinementempty(struct  VariationalRefinement_t* wrapper);
float                     pCvVariationalRefinementgetAlpha(struct  VariationalRefinement_t* wrapper);
string_t*                 pCvVariationalRefinementgetDefaultName(struct  VariationalRefinement_t* wrapper);
float                     pCvVariationalRefinementgetDelta(struct  VariationalRefinement_t* wrapper);
int                       pCvVariationalRefinementgetFixedPointIterations(struct  VariationalRefinement_t* wrapper);
float                     pCvVariationalRefinementgetGamma(struct  VariationalRefinement_t* wrapper);
float                     pCvVariationalRefinementgetOmega(struct  VariationalRefinement_t* wrapper);
int                       pCvVariationalRefinementgetSorIterations(struct  VariationalRefinement_t* wrapper);
void                      pCvVariationalRefinementread(struct  VariationalRefinement_t* wrapper, FileNode_t* fn);
void                      pCvVariationalRefinementsave(struct  VariationalRefinement_t* wrapper, string_t* filename);
void                      pCvVariationalRefinementsetAlpha(struct  VariationalRefinement_t* wrapper, float _val);
void                      pCvVariationalRefinementsetDelta(struct  VariationalRefinement_t* wrapper, float _val);
void                      pCvVariationalRefinementsetFixedPointIterations(struct  VariationalRefinement_t* wrapper, 
                                   int _val);
void                      pCvVariationalRefinementsetGamma(struct  VariationalRefinement_t* wrapper, float _val);
void                      pCvVariationalRefinementsetOmega(struct  VariationalRefinement_t* wrapper, float _val);
void                      pCvVariationalRefinementsetSorIterations(struct  VariationalRefinement_t* wrapper, int _val);
void                      pCvVariationalRefinementwrite(struct  VariationalRefinement_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
double                    pCvVideoCaptureget(struct  VideoCapture_t* wrapper, int propId);
string_t*                 pCvVideoCapturegetBackendName(struct  VideoCapture_t* wrapper);
bool                      pCvVideoCapturegetExceptionMode(struct  VideoCapture_t* wrapper);
bool                      pCvVideoCapturegrab(struct  VideoCapture_t* wrapper);
bool                      pCvVideoCaptureisOpened(struct  VideoCapture_t* wrapper);
bool                      pCvVideoCaptureopen(struct  VideoCapture_t* wrapper, string_t* filename, 
                                   int apiPreference /* default: CAP_ANY */);
bool                      pCvVideoCaptureopenV2(struct  VideoCapture_t* wrapper, string_t* filename, int apiPreference, 
                                   vector_int* params);
bool                      pCvVideoCaptureopenV3(struct  VideoCapture_t* wrapper, int index, 
                                   int apiPreference /* default: CAP_ANY */);
bool                      pCvVideoCaptureopenV4(struct  VideoCapture_t* wrapper, int index, int apiPreference, 
                                   vector_int* params);
bool                      pCvVideoCaptureread(struct  VideoCapture_t* wrapper, Mat_t* image);
bool                      pCvVideoCapturereadV2(struct  VideoCapture_t* wrapper, UMat_t* image);
void                      pCvVideoCapturerelease(struct  VideoCapture_t* wrapper);
bool                      pCvVideoCaptureretrieve(struct  VideoCapture_t* wrapper, Mat_t* image, 
                                   int flag /* default: 0 */);
bool                      pCvVideoCaptureretrieveV2(struct  VideoCapture_t* wrapper, UMat_t* image, 
                                   int flag /* default: 0 */);
bool                      pCvVideoCaptureset(struct  VideoCapture_t* wrapper, int propId, double value);
void                      pCvVideoCapturesetExceptionMode(struct  VideoCapture_t* wrapper, bool enable);
int                       pCvVideoWriterfourcc(char c1, char c2, char c3, char c4);
double                    pCvVideoWriterget(struct  VideoWriter_t* wrapper, int propId);
string_t*                 pCvVideoWritergetBackendName(struct  VideoWriter_t* wrapper);
bool                      pCvVideoWriterisOpened(struct  VideoWriter_t* wrapper);
bool                      pCvVideoWriteropen(struct  VideoWriter_t* wrapper, string_t* filename, int fourcc, double fps, 
                                   Size_t* frameSize, bool isColor /* default: true */);
bool                      pCvVideoWriteropenV2(struct  VideoWriter_t* wrapper, string_t* filename, int apiPreference, 
                                   int fourcc, double fps, Size_t* frameSize, bool isColor /* default: true */);
bool                      pCvVideoWriteropenV3(struct  VideoWriter_t* wrapper, string_t* filename, int fourcc, 
                                   double fps, Size_t* frameSize, vector_int* params);
bool                      pCvVideoWriteropenV4(struct  VideoWriter_t* wrapper, string_t* filename, int apiPreference, 
                                   int fourcc, double fps, Size_t* frameSize, vector_int* params);
void                      pCvVideoWriterrelease(struct  VideoWriter_t* wrapper);
bool                      pCvVideoWriterset(struct  VideoWriter_t* wrapper, int propId, double value);
void                      pCvVideoWriterwrite(struct  VideoWriter_t* wrapper, Mat_t* image);
void                      pCvVideoWriterwriteV2(struct  VideoWriter_t* wrapper, UMat_t* image);
bool                      pCvdetail_AffineBasedEstimatorapply(struct  detail_AffineBasedEstimator_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
void                      pCvdetail_AffineBestOf2NearestMatcherapply(struct  detail_AffineBestOf2NearestMatcher_t* wrapper, 
                                   detail_ImageFeatures_t* features1, detail_ImageFeatures_t* features2, 
                                   detail_MatchesInfo_t* matches_info);
void                      pCvdetail_AffineBestOf2NearestMatcherapply2(struct  detail_AffineBestOf2NearestMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   UMat_t* mask /* default: cv::UMat() */);
void                      pCvdetail_AffineBestOf2NearestMatchercollectGarbage(struct  detail_AffineBestOf2NearestMatcher_t* wrapper);
Ptr_BestOf2NearestMatcher* pCvdetail_AffineBestOf2NearestMatcher_create(bool try_use_gpu /* default: false */, 
                                   float match_conf /* default: 0.3f */, int num_matches_thresh1 /* default: 6 */, 
                                   int num_matches_thresh2 /* default: 6 */);
bool                      pCvdetail_AffineBestOf2NearestMatcherisThreadSafe(struct  detail_AffineBestOf2NearestMatcher_t* wrapper);
void                      pCvdetail_BestOf2NearestMatcherapply(struct  detail_BestOf2NearestMatcher_t* wrapper, 
                                   detail_ImageFeatures_t* features1, detail_ImageFeatures_t* features2, 
                                   detail_MatchesInfo_t* matches_info);
void                      pCvdetail_BestOf2NearestMatcherapply2(struct  detail_BestOf2NearestMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   UMat_t* mask /* default: cv::UMat() */);
void                      pCvdetail_BestOf2NearestMatchercollectGarbage(struct  detail_BestOf2NearestMatcher_t* wrapper);
Ptr_BestOf2NearestMatcher* pCvdetail_BestOf2NearestMatcher_create(bool try_use_gpu /* default: false */, 
                                   float match_conf /* default: 0.3f */, int num_matches_thresh1 /* default: 6 */, 
                                   int num_matches_thresh2 /* default: 6 */);
bool                      pCvdetail_BestOf2NearestMatcherisThreadSafe(struct  detail_BestOf2NearestMatcher_t* wrapper);
void                      pCvdetail_BestOf2NearestRangeMatcherapply2(struct  detail_BestOf2NearestRangeMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   UMat_t* mask /* default: cv::UMat() */);
void                      pCvdetail_BestOf2NearestRangeMatchercollectGarbage(struct  detail_BestOf2NearestRangeMatcher_t* wrapper);
Ptr_BestOf2NearestMatcher* pCvdetail_BestOf2NearestRangeMatcher_create(bool try_use_gpu /* default: false */, 
                                   float match_conf /* default: 0.3f */, int num_matches_thresh1 /* default: 6 */, 
                                   int num_matches_thresh2 /* default: 6 */);
bool                      pCvdetail_BestOf2NearestRangeMatcherisThreadSafe(struct  detail_BestOf2NearestRangeMatcher_t* wrapper);
void                      pCvdetail_Blenderblend(struct  detail_Blender_t* wrapper, Mat_t* dst, Mat_t* dst_mask);
void                      pCvdetail_BlenderblendV2(struct  detail_Blender_t* wrapper, UMat_t* dst, UMat_t* dst_mask);
Ptr_Blender*              pCvdetail_BlendercreateDefault(int _type, bool try_gpu /* default: false */);
void                      pCvdetail_Blenderfeed(struct  detail_Blender_t* wrapper, Mat_t* img, Mat_t* mask, Point_t* tl);
void                      pCvdetail_BlenderfeedV2(struct  detail_Blender_t* wrapper, UMat_t* img, UMat_t* mask, 
                                   Point_t* tl);
void                      pCvdetail_Blenderprepare(struct  detail_Blender_t* wrapper, vector_Point* corners, 
                                   vector_Size* sizes);
void                      pCvdetail_BlenderprepareV2(struct  detail_Blender_t* wrapper, Rect_t* dst_roi);
void                      pCvdetail_BlocksChannelsCompensatorapply(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int index, Point_t* corner, Mat_t* image, Mat_t* mask);
void                      pCvdetail_BlocksChannelsCompensatorapplyV2(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int index, Point_t* corner, UMat_t* image, UMat_t* mask);
Ptr_ExposureCompensator*  pCvdetail_BlocksChannelsCompensatorcreateDefault(int _type);
Size_t*                   pCvdetail_BlocksChannelsCompensatorgetBlockSize(struct  detail_BlocksChannelsCompensator_t* wrapper);
void                      pCvdetail_BlocksChannelsCompensatorgetMatGains(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv);
int                       pCvdetail_BlocksChannelsCompensatorgetNrFeeds(struct  detail_BlocksChannelsCompensator_t* wrapper);
int                       pCvdetail_BlocksChannelsCompensatorgetNrGainsFilteringIterations(struct  detail_BlocksChannelsCompensator_t* wrapper);
double                    pCvdetail_BlocksChannelsCompensatorgetSimilarityThreshold(struct  detail_BlocksChannelsCompensator_t* wrapper);
bool                      pCvdetail_BlocksChannelsCompensatorgetUpdateGain(struct  detail_BlocksChannelsCompensator_t* wrapper);
void                      pCvdetail_BlocksChannelsCompensatorsetBlockSize(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int width, int height);
void                      pCvdetail_BlocksChannelsCompensatorsetBlockSizeV2(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   Size_t* size);
void                      pCvdetail_BlocksChannelsCompensatorsetMatGains(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv);
void                      pCvdetail_BlocksChannelsCompensatorsetNrFeeds(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int nr_feeds);
void                      pCvdetail_BlocksChannelsCompensatorsetNrGainsFilteringIterations(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int nr_iterations);
void                      pCvdetail_BlocksChannelsCompensatorsetSimilarityThreshold(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   double similarity_threshold);
void                      pCvdetail_BlocksChannelsCompensatorsetUpdateGain(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   bool b);
void                      pCvdetail_BlocksCompensatorapply(struct  detail_BlocksCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask);
void                      pCvdetail_BlocksCompensatorapplyV2(struct  detail_BlocksCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask);
Ptr_ExposureCompensator*  pCvdetail_BlocksCompensatorcreateDefault(int _type);
Size_t*                   pCvdetail_BlocksCompensatorgetBlockSize(struct  detail_BlocksCompensator_t* wrapper);
void                      pCvdetail_BlocksCompensatorgetMatGains(struct  detail_BlocksCompensator_t* wrapper, 
                                   vector_Mat* umv);
int                       pCvdetail_BlocksCompensatorgetNrFeeds(struct  detail_BlocksCompensator_t* wrapper);
int                       pCvdetail_BlocksCompensatorgetNrGainsFilteringIterations(struct  detail_BlocksCompensator_t* wrapper);
double                    pCvdetail_BlocksCompensatorgetSimilarityThreshold(struct  detail_BlocksCompensator_t* wrapper);
bool                      pCvdetail_BlocksCompensatorgetUpdateGain(struct  detail_BlocksCompensator_t* wrapper);
void                      pCvdetail_BlocksCompensatorsetBlockSize(struct  detail_BlocksCompensator_t* wrapper, 
                                   int width, int height);
void                      pCvdetail_BlocksCompensatorsetBlockSizeV2(struct  detail_BlocksCompensator_t* wrapper, 
                                   Size_t* size);
void                      pCvdetail_BlocksCompensatorsetMatGains(struct  detail_BlocksCompensator_t* wrapper, 
                                   vector_Mat* umv);
void                      pCvdetail_BlocksCompensatorsetNrFeeds(struct  detail_BlocksCompensator_t* wrapper, 
                                   int nr_feeds);
void                      pCvdetail_BlocksCompensatorsetNrGainsFilteringIterations(struct  detail_BlocksCompensator_t* wrapper, 
                                   int nr_iterations);
void                      pCvdetail_BlocksCompensatorsetSimilarityThreshold(struct  detail_BlocksCompensator_t* wrapper, 
                                   double similarity_threshold);
void                      pCvdetail_BlocksCompensatorsetUpdateGain(struct  detail_BlocksCompensator_t* wrapper, bool b);
void                      pCvdetail_BlocksGainCompensatorapply(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int index, Point_t* corner, Mat_t* image, Mat_t* mask);
void                      pCvdetail_BlocksGainCompensatorapplyV2(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int index, Point_t* corner, UMat_t* image, UMat_t* mask);
Ptr_ExposureCompensator*  pCvdetail_BlocksGainCompensatorcreateDefault(int _type);
Size_t*                   pCvdetail_BlocksGainCompensatorgetBlockSize(struct  detail_BlocksGainCompensator_t* wrapper);
void                      pCvdetail_BlocksGainCompensatorgetMatGains(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   vector_Mat* umv);
int                       pCvdetail_BlocksGainCompensatorgetNrFeeds(struct  detail_BlocksGainCompensator_t* wrapper);
int                       pCvdetail_BlocksGainCompensatorgetNrGainsFilteringIterations(struct  detail_BlocksGainCompensator_t* wrapper);
double                    pCvdetail_BlocksGainCompensatorgetSimilarityThreshold(struct  detail_BlocksGainCompensator_t* wrapper);
bool                      pCvdetail_BlocksGainCompensatorgetUpdateGain(struct  detail_BlocksGainCompensator_t* wrapper);
void                      pCvdetail_BlocksGainCompensatorsetBlockSize(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int width, int height);
void                      pCvdetail_BlocksGainCompensatorsetBlockSizeV2(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   Size_t* size);
void                      pCvdetail_BlocksGainCompensatorsetMatGains(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   vector_Mat* umv);
void                      pCvdetail_BlocksGainCompensatorsetNrFeeds(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int nr_feeds);
void                      pCvdetail_BlocksGainCompensatorsetNrGainsFilteringIterations(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int nr_iterations);
void                      pCvdetail_BlocksGainCompensatorsetSimilarityThreshold(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   double similarity_threshold);
void                      pCvdetail_BlocksGainCompensatorsetUpdateGain(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   bool b);
bool                      pCvdetail_BundleAdjusterAffineapply(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
double                    pCvdetail_BundleAdjusterAffineconfThresh(struct  detail_BundleAdjusterAffine_t* wrapper);
Mat_t*                    pCvdetail_BundleAdjusterAffinerefinementMask(struct  detail_BundleAdjusterAffine_t* wrapper);
void                      pCvdetail_BundleAdjusterAffinesetConfThresh(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   double conf_thresh);
void                      pCvdetail_BundleAdjusterAffinesetRefinementMask(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   Mat_t* mask);
void                      pCvdetail_BundleAdjusterAffinesetTermCriteria(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   TermCriteria_t* term_criteria);
TermCriteria_t*           pCvdetail_BundleAdjusterAffinetermCriteria(struct  detail_BundleAdjusterAffine_t* wrapper);
bool                      pCvdetail_BundleAdjusterAffinePartialapply(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
double                    pCvdetail_BundleAdjusterAffinePartialconfThresh(struct  detail_BundleAdjusterAffinePartial_t* wrapper);
Mat_t*                    pCvdetail_BundleAdjusterAffinePartialrefinementMask(struct  detail_BundleAdjusterAffinePartial_t* wrapper);
void                      pCvdetail_BundleAdjusterAffinePartialsetConfThresh(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   double conf_thresh);
void                      pCvdetail_BundleAdjusterAffinePartialsetRefinementMask(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   Mat_t* mask);
void                      pCvdetail_BundleAdjusterAffinePartialsetTermCriteria(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   TermCriteria_t* term_criteria);
TermCriteria_t*           pCvdetail_BundleAdjusterAffinePartialtermCriteria(struct  detail_BundleAdjusterAffinePartial_t* wrapper);
bool                      pCvdetail_BundleAdjusterBaseapply(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
double                    pCvdetail_BundleAdjusterBaseconfThresh(struct  detail_BundleAdjusterBase_t* wrapper);
Mat_t*                    pCvdetail_BundleAdjusterBaserefinementMask(struct  detail_BundleAdjusterBase_t* wrapper);
void                      pCvdetail_BundleAdjusterBasesetConfThresh(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   double conf_thresh);
void                      pCvdetail_BundleAdjusterBasesetRefinementMask(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   Mat_t* mask);
void                      pCvdetail_BundleAdjusterBasesetTermCriteria(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   TermCriteria_t* term_criteria);
TermCriteria_t*           pCvdetail_BundleAdjusterBasetermCriteria(struct  detail_BundleAdjusterBase_t* wrapper);
bool                      pCvdetail_BundleAdjusterRayapply(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
double                    pCvdetail_BundleAdjusterRayconfThresh(struct  detail_BundleAdjusterRay_t* wrapper);
Mat_t*                    pCvdetail_BundleAdjusterRayrefinementMask(struct  detail_BundleAdjusterRay_t* wrapper);
void                      pCvdetail_BundleAdjusterRaysetConfThresh(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   double conf_thresh);
void                      pCvdetail_BundleAdjusterRaysetRefinementMask(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   Mat_t* mask);
void                      pCvdetail_BundleAdjusterRaysetTermCriteria(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   TermCriteria_t* term_criteria);
TermCriteria_t*           pCvdetail_BundleAdjusterRaytermCriteria(struct  detail_BundleAdjusterRay_t* wrapper);
bool                      pCvdetail_BundleAdjusterReprojapply(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
double                    pCvdetail_BundleAdjusterReprojconfThresh(struct  detail_BundleAdjusterReproj_t* wrapper);
Mat_t*                    pCvdetail_BundleAdjusterReprojrefinementMask(struct  detail_BundleAdjusterReproj_t* wrapper);
void                      pCvdetail_BundleAdjusterReprojsetConfThresh(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   double conf_thresh);
void                      pCvdetail_BundleAdjusterReprojsetRefinementMask(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   Mat_t* mask);
void                      pCvdetail_BundleAdjusterReprojsetTermCriteria(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   TermCriteria_t* term_criteria);
TermCriteria_t*           pCvdetail_BundleAdjusterReprojtermCriteria(struct  detail_BundleAdjusterReproj_t* wrapper);
Mat_t*                    pCvdetail_CameraParamsK(struct  detail_CameraParams_t* wrapper);
Mat_t*                       pCvdetail_CameraParamsGet_R(detail_CameraParams_t* p);
void                      pCvdetail_CameraParamsSet_R(detail_CameraParams_t* p, Mat_t* propval);
double                       pCvdetail_CameraParamsGet_aspect(detail_CameraParams_t* p);
void                      pCvdetail_CameraParamsSet_aspect(detail_CameraParams_t* p, double propval);
double                       pCvdetail_CameraParamsGet_focal(detail_CameraParams_t* p);
void                      pCvdetail_CameraParamsSet_focal(detail_CameraParams_t* p, double propval);
double                       pCvdetail_CameraParamsGet_ppx(detail_CameraParams_t* p);
void                      pCvdetail_CameraParamsSet_ppx(detail_CameraParams_t* p, double propval);
double                       pCvdetail_CameraParamsGet_ppy(detail_CameraParams_t* p);
void                      pCvdetail_CameraParamsSet_ppy(detail_CameraParams_t* p, double propval);
Mat_t*                       pCvdetail_CameraParamsGet_t(detail_CameraParams_t* p);
void                      pCvdetail_CameraParamsSet_t(detail_CameraParams_t* p, Mat_t* propval);
void                      pCvdetail_ChannelsCompensatorapply(struct  detail_ChannelsCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask);
void                      pCvdetail_ChannelsCompensatorapplyV2(struct  detail_ChannelsCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask);
Ptr_ExposureCompensator*  pCvdetail_ChannelsCompensatorcreateDefault(int _type);
void                      pCvdetail_ChannelsCompensatorgetMatGains(struct  detail_ChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv);
int                       pCvdetail_ChannelsCompensatorgetNrFeeds(struct  detail_ChannelsCompensator_t* wrapper);
double                    pCvdetail_ChannelsCompensatorgetSimilarityThreshold(struct  detail_ChannelsCompensator_t* wrapper);
bool                      pCvdetail_ChannelsCompensatorgetUpdateGain(struct  detail_ChannelsCompensator_t* wrapper);
void                      pCvdetail_ChannelsCompensatorsetMatGains(struct  detail_ChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv);
void                      pCvdetail_ChannelsCompensatorsetNrFeeds(struct  detail_ChannelsCompensator_t* wrapper, 
                                   int nr_feeds);
void                      pCvdetail_ChannelsCompensatorsetSimilarityThreshold(struct  detail_ChannelsCompensator_t* wrapper, 
                                   double similarity_threshold);
void                      pCvdetail_ChannelsCompensatorsetUpdateGain(struct  detail_ChannelsCompensator_t* wrapper, 
                                   bool b);
Ptr_SeamFinder*           pCvdetail_DpSeamFindercreateDefault(int _type);
void                      pCvdetail_DpSeamFinderfind(struct  detail_DpSeamFinder_t* wrapper, vector_UMat* src, 
                                   vector_Point* corners, vector_UMat* masks);
void                      pCvdetail_DpSeamFindersetCostFunction(struct  detail_DpSeamFinder_t* wrapper, string_t* _val);
bool                      pCvdetail_Estimatorapply(struct  detail_Estimator_t* wrapper, vector_ImageFeatures* features, 
                                   vector_MatchesInfo* pairwise_matches, vector_CameraParams* cameras);
void                      pCvdetail_ExposureCompensatorapply(struct  detail_ExposureCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask);
void                      pCvdetail_ExposureCompensatorapplyV2(struct  detail_ExposureCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask);
Ptr_ExposureCompensator*  pCvdetail_ExposureCompensatorcreateDefault(int _type);
void                      pCvdetail_ExposureCompensatorfeed(struct  detail_ExposureCompensator_t* wrapper, 
                                   vector_Point* corners, vector_UMat* images, vector_UMat* masks);
void                      pCvdetail_ExposureCompensatorgetMatGains(struct  detail_ExposureCompensator_t* wrapper, 
                                   vector_Mat* arg1);
bool                      pCvdetail_ExposureCompensatorgetUpdateGain(struct  detail_ExposureCompensator_t* wrapper);
void                      pCvdetail_ExposureCompensatorsetMatGains(struct  detail_ExposureCompensator_t* wrapper, 
                                   vector_Mat* arg1);
void                      pCvdetail_ExposureCompensatorsetUpdateGain(struct  detail_ExposureCompensator_t* wrapper, 
                                   bool b);
void                      pCvdetail_FeatherBlenderblend(struct  detail_FeatherBlender_t* wrapper, Mat_t* dst, 
                                   Mat_t* dst_mask);
void                      pCvdetail_FeatherBlenderblendV2(struct  detail_FeatherBlender_t* wrapper, UMat_t* dst, 
                                   UMat_t* dst_mask);
Ptr_Blender*              pCvdetail_FeatherBlendercreateDefault(int _type, bool try_gpu /* default: false */);
Rect_t*                   pCvdetail_FeatherBlendercreateWeightMaps(struct  detail_FeatherBlender_t* wrapper, 
                                   vector_UMat* masks, vector_Point* corners, vector_UMat* weight_maps);
void                      pCvdetail_FeatherBlenderfeed(struct  detail_FeatherBlender_t* wrapper, Mat_t* img, 
                                   Mat_t* mask, Point_t* tl);
void                      pCvdetail_FeatherBlenderfeedV2(struct  detail_FeatherBlender_t* wrapper, UMat_t* img, 
                                   UMat_t* mask, Point_t* tl);
void                      pCvdetail_FeatherBlenderprepare(struct  detail_FeatherBlender_t* wrapper, Rect_t* dst_roi);
void                      pCvdetail_FeatherBlendersetSharpness(struct  detail_FeatherBlender_t* wrapper, float _val);
float                     pCvdetail_FeatherBlendersharpness(struct  detail_FeatherBlender_t* wrapper);
void                      pCvdetail_FeaturesMatcherapply(struct  detail_FeaturesMatcher_t* wrapper, 
                                   detail_ImageFeatures_t* features1, detail_ImageFeatures_t* features2, 
                                   detail_MatchesInfo_t* matches_info);
void                      pCvdetail_FeaturesMatcherapply2(struct  detail_FeaturesMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   UMat_t* mask /* default: cv::UMat() */);
void                      pCvdetail_FeaturesMatchercollectGarbage(struct  detail_FeaturesMatcher_t* wrapper);
bool                      pCvdetail_FeaturesMatcherisThreadSafe(struct  detail_FeaturesMatcher_t* wrapper);
void                      pCvdetail_GainCompensatorapply(struct  detail_GainCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask);
void                      pCvdetail_GainCompensatorapplyV2(struct  detail_GainCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask);
Ptr_ExposureCompensator*  pCvdetail_GainCompensatorcreateDefault(int _type);
void                      pCvdetail_GainCompensatorgetMatGains(struct  detail_GainCompensator_t* wrapper, 
                                   vector_Mat* umv);
int                       pCvdetail_GainCompensatorgetNrFeeds(struct  detail_GainCompensator_t* wrapper);
double                    pCvdetail_GainCompensatorgetSimilarityThreshold(struct  detail_GainCompensator_t* wrapper);
bool                      pCvdetail_GainCompensatorgetUpdateGain(struct  detail_GainCompensator_t* wrapper);
void                      pCvdetail_GainCompensatorsetMatGains(struct  detail_GainCompensator_t* wrapper, 
                                   vector_Mat* umv);
void                      pCvdetail_GainCompensatorsetNrFeeds(struct  detail_GainCompensator_t* wrapper, int nr_feeds);
void                      pCvdetail_GainCompensatorsetSimilarityThreshold(struct  detail_GainCompensator_t* wrapper, 
                                   double similarity_threshold);
void                      pCvdetail_GainCompensatorsetUpdateGain(struct  detail_GainCompensator_t* wrapper, bool b);
void                      pCvdetail_GraphCutSeamFinderfind(struct  detail_GraphCutSeamFinder_t* wrapper, 
                                   vector_UMat* src, vector_Point* corners, vector_UMat* masks);
bool                      pCvdetail_HomographyBasedEstimatorapply(struct  detail_HomographyBasedEstimator_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
vector_KeyPoint*          pCvdetail_ImageFeaturesgetKeypoints(struct  detail_ImageFeatures_t* wrapper);
UMat_t*                       pCvdetail_ImageFeaturesGet_descriptors(detail_ImageFeatures_t* p);
void                      pCvdetail_ImageFeaturesSet_descriptors(detail_ImageFeatures_t* p, UMat_t* propval);
int                       pCvdetail_ImageFeaturesGet_img_idx(detail_ImageFeatures_t* p);
void                      pCvdetail_ImageFeaturesSet_img_idx(detail_ImageFeatures_t* p, int propval);
Size_t*                       pCvdetail_ImageFeaturesGet_img_size(detail_ImageFeatures_t* p);
void                      pCvdetail_ImageFeaturesSet_img_size(detail_ImageFeatures_t* p, Size_t* propval);
vector_KeyPoint*                       pCvdetail_ImageFeaturesGet_keypoints(detail_ImageFeatures_t* p);
void                      pCvdetail_ImageFeaturesSet_keypoints(detail_ImageFeatures_t* p, vector_KeyPoint* propval);
vector_uchar*             pCvdetail_MatchesInfogetInliers(struct  detail_MatchesInfo_t* wrapper);
vector_DMatch*            pCvdetail_MatchesInfogetMatches(struct  detail_MatchesInfo_t* wrapper);
Mat_t*                       pCvdetail_MatchesInfoGet_H(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_H(detail_MatchesInfo_t* p, Mat_t* propval);
double                       pCvdetail_MatchesInfoGet_confidence(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_confidence(detail_MatchesInfo_t* p, double propval);
int                       pCvdetail_MatchesInfoGet_dst_img_idx(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_dst_img_idx(detail_MatchesInfo_t* p, int propval);
vector_uchar*                       pCvdetail_MatchesInfoGet_inliers_mask(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_inliers_mask(detail_MatchesInfo_t* p, vector_uchar* propval);
vector_DMatch*                       pCvdetail_MatchesInfoGet_matches(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_matches(detail_MatchesInfo_t* p, vector_DMatch* propval);
int                       pCvdetail_MatchesInfoGet_num_inliers(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_num_inliers(detail_MatchesInfo_t* p, int propval);
int                       pCvdetail_MatchesInfoGet_src_img_idx(detail_MatchesInfo_t* p);
void                      pCvdetail_MatchesInfoSet_src_img_idx(detail_MatchesInfo_t* p, int propval);
void                      pCvdetail_MultiBandBlenderblend(struct  detail_MultiBandBlender_t* wrapper, Mat_t* dst, 
                                   Mat_t* dst_mask);
void                      pCvdetail_MultiBandBlenderblendV2(struct  detail_MultiBandBlender_t* wrapper, UMat_t* dst, 
                                   UMat_t* dst_mask);
Ptr_Blender*              pCvdetail_MultiBandBlendercreateDefault(int _type, bool try_gpu /* default: false */);
void                      pCvdetail_MultiBandBlenderfeed(struct  detail_MultiBandBlender_t* wrapper, Mat_t* img, 
                                   Mat_t* mask, Point_t* tl);
void                      pCvdetail_MultiBandBlenderfeedV2(struct  detail_MultiBandBlender_t* wrapper, UMat_t* img, 
                                   UMat_t* mask, Point_t* tl);
int                       pCvdetail_MultiBandBlendernumBands(struct  detail_MultiBandBlender_t* wrapper);
void                      pCvdetail_MultiBandBlenderprepare(struct  detail_MultiBandBlender_t* wrapper, Rect_t* dst_roi);
void                      pCvdetail_MultiBandBlendersetNumBands(struct  detail_MultiBandBlender_t* wrapper, int _val);
bool                      pCvdetail_NoBundleAdjusterapply(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras);
double                    pCvdetail_NoBundleAdjusterconfThresh(struct  detail_NoBundleAdjuster_t* wrapper);
Mat_t*                    pCvdetail_NoBundleAdjusterrefinementMask(struct  detail_NoBundleAdjuster_t* wrapper);
void                      pCvdetail_NoBundleAdjustersetConfThresh(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   double conf_thresh);
void                      pCvdetail_NoBundleAdjustersetRefinementMask(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   Mat_t* mask);
void                      pCvdetail_NoBundleAdjustersetTermCriteria(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   TermCriteria_t* term_criteria);
TermCriteria_t*           pCvdetail_NoBundleAdjustertermCriteria(struct  detail_NoBundleAdjuster_t* wrapper);
void                      pCvdetail_NoExposureCompensatorapply(struct  detail_NoExposureCompensator_t* wrapper, 
                                   int arg1, Point_t* arg2, Mat_t* arg3, Mat_t* arg4);
void                      pCvdetail_NoExposureCompensatorapplyV2(struct  detail_NoExposureCompensator_t* wrapper, 
                                   int arg1, Point_t* arg2, UMat_t* arg3, UMat_t* arg4);
Ptr_ExposureCompensator*  pCvdetail_NoExposureCompensatorcreateDefault(int _type);
void                      pCvdetail_NoExposureCompensatorgetMatGains(struct  detail_NoExposureCompensator_t* wrapper, 
                                   vector_Mat* umv);
bool                      pCvdetail_NoExposureCompensatorgetUpdateGain(struct  detail_NoExposureCompensator_t* wrapper);
void                      pCvdetail_NoExposureCompensatorsetMatGains(struct  detail_NoExposureCompensator_t* wrapper, 
                                   vector_Mat* umv);
void                      pCvdetail_NoExposureCompensatorsetUpdateGain(struct  detail_NoExposureCompensator_t* wrapper, 
                                   bool b);
Ptr_SeamFinder*           pCvdetail_NoSeamFindercreateDefault(int _type);
void                      pCvdetail_NoSeamFinderfind(struct  detail_NoSeamFinder_t* wrapper, vector_UMat* arg1, 
                                   vector_Point* arg2, vector_UMat* arg3);
Ptr_SeamFinder*           pCvdetail_PairwiseSeamFindercreateDefault(int _type);
void                      pCvdetail_PairwiseSeamFinderfind(struct  detail_PairwiseSeamFinder_t* wrapper, 
                                   vector_UMat* src, vector_Point* corners, vector_UMat* masks);
Ptr_SeamFinder*           pCvdetail_SeamFindercreateDefault(int _type);
void                      pCvdetail_SeamFinderfind(struct  detail_SeamFinder_t* wrapper, vector_UMat* src, 
                                   vector_Point* corners, vector_UMat* masks);
void                      pCvdetail_SphericalProjectormapBackward(struct  detail_SphericalProjector_t* wrapper, float u, 
                                   float v, float x, float y);
void                      pCvdetail_SphericalProjectormapForward(struct  detail_SphericalProjector_t* wrapper, float x, 
                                   float y, float u, float v);
Ptr_Timelapser*           pCvdetail_TimelapsercreateDefault(int _type);
UMat_t*                   pCvdetail_TimelapsergetDst(struct  detail_Timelapser_t* wrapper);
void                      pCvdetail_Timelapserinitialize(struct  detail_Timelapser_t* wrapper, vector_Point* corners, 
                                   vector_Size* sizes);
void                      pCvdetail_Timelapserprocess(struct  detail_Timelapser_t* wrapper, Mat_t* img, Mat_t* mask, 
                                   Point_t* tl);
void                      pCvdetail_TimelapserprocessV2(struct  detail_Timelapser_t* wrapper, UMat_t* img, UMat_t* mask, 
                                   Point_t* tl);
Ptr_Timelapser*           pCvdetail_TimelapserCropcreateDefault(int _type);
UMat_t*                   pCvdetail_TimelapserCropgetDst(struct  detail_TimelapserCrop_t* wrapper);
void                      pCvdetail_TimelapserCropinitialize(struct  detail_TimelapserCrop_t* wrapper, 
                                   vector_Point* corners, vector_Size* sizes);
void                      pCvdetail_TimelapserCropprocess(struct  detail_TimelapserCrop_t* wrapper, Mat_t* img, 
                                   Mat_t* mask, Point_t* tl);
void                      pCvdetail_TimelapserCropprocessV2(struct  detail_TimelapserCrop_t* wrapper, UMat_t* img, 
                                   UMat_t* mask, Point_t* tl);
Ptr_SeamFinder*           pCvdetail_VoronoiSeamFindercreateDefault(int _type);
void                      pCvdetail_VoronoiSeamFinderfind(struct  detail_VoronoiSeamFinder_t* wrapper, vector_UMat* src, 
                                   vector_Point* corners, vector_UMat* masks);
void                      pCvdnn_ClassificationModelclassify(struct  dnn_ClassificationModel_t* wrapper, Mat_t* frame, 
                                   int classId, float conf);
void                      pCvdnn_ClassificationModelclassifyV2(struct  dnn_ClassificationModel_t* wrapper, 
                                   UMat_t* frame, int classId, float conf);
bool                      pCvdnn_ClassificationModelgetEnableSoftmaxPostProcessing(struct  dnn_ClassificationModel_t* wrapper);
void                      pCvdnn_ClassificationModelpredict(struct  dnn_ClassificationModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs);
void                      pCvdnn_ClassificationModelpredictV2(struct  dnn_ClassificationModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs);
dnn_ClassificationModel_t* pCvdnn_ClassificationModelsetEnableSoftmaxPostProcessing(struct  dnn_ClassificationModel_t* wrapper, 
                                   bool enable);
dnn_Model_t*              pCvdnn_ClassificationModelsetInputCrop(struct  dnn_ClassificationModel_t* wrapper, bool crop);
dnn_Model_t*              pCvdnn_ClassificationModelsetInputMean(struct  dnn_ClassificationModel_t* wrapper, 
                                   Scalar_t* mean);
void                      pCvdnn_ClassificationModelsetInputParams(struct  dnn_ClassificationModel_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_ClassificationModelsetInputScale(struct  dnn_ClassificationModel_t* wrapper, 
                                   double scale);
dnn_Model_t*              pCvdnn_ClassificationModelsetInputSize(struct  dnn_ClassificationModel_t* wrapper, 
                                   Size_t* size);
dnn_Model_t*              pCvdnn_ClassificationModelsetInputSizeV2(struct  dnn_ClassificationModel_t* wrapper, 
                                   int width, int height);
dnn_Model_t*              pCvdnn_ClassificationModelsetInputSwapRB(struct  dnn_ClassificationModel_t* wrapper, 
                                   bool swapRB);
dnn_Model_t*              pCvdnn_ClassificationModelsetPreferableBackend(struct  dnn_ClassificationModel_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_ClassificationModelsetPreferableTarget(struct  dnn_ClassificationModel_t* wrapper, 
                                   dnn_Target targetId);
void                      pCvdnn_DetectionModeldetect(struct  dnn_DetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_int* classIds, vector_float* confidences, vector_Rect* boxes, 
                                   float confThreshold /* default: 0.5f */, float nmsThreshold /* default: 0.0f */);
void                      pCvdnn_DetectionModeldetectV2(struct  dnn_DetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_int* classIds, vector_float* confidences, vector_Rect* boxes, 
                                   float confThreshold /* default: 0.5f */, float nmsThreshold /* default: 0.0f */);
bool                      pCvdnn_DetectionModelgetNmsAcrossClasses(struct  dnn_DetectionModel_t* wrapper);
void                      pCvdnn_DetectionModelpredict(struct  dnn_DetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs);
void                      pCvdnn_DetectionModelpredictV2(struct  dnn_DetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs);
dnn_Model_t*              pCvdnn_DetectionModelsetInputCrop(struct  dnn_DetectionModel_t* wrapper, bool crop);
dnn_Model_t*              pCvdnn_DetectionModelsetInputMean(struct  dnn_DetectionModel_t* wrapper, Scalar_t* mean);
void                      pCvdnn_DetectionModelsetInputParams(struct  dnn_DetectionModel_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_DetectionModelsetInputScale(struct  dnn_DetectionModel_t* wrapper, double scale);
dnn_Model_t*              pCvdnn_DetectionModelsetInputSize(struct  dnn_DetectionModel_t* wrapper, Size_t* size);
dnn_Model_t*              pCvdnn_DetectionModelsetInputSizeV2(struct  dnn_DetectionModel_t* wrapper, int width, 
                                   int height);
dnn_Model_t*              pCvdnn_DetectionModelsetInputSwapRB(struct  dnn_DetectionModel_t* wrapper, bool swapRB);
dnn_DetectionModel_t*     pCvdnn_DetectionModelsetNmsAcrossClasses(struct  dnn_DetectionModel_t* wrapper, bool value);
dnn_Model_t*              pCvdnn_DetectionModelsetPreferableBackend(struct  dnn_DetectionModel_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_DetectionModelsetPreferableTarget(struct  dnn_DetectionModel_t* wrapper, 
                                   dnn_Target targetId);
int                       pCvdnn_DictValuegetIntValue(struct  dnn_DictValue_t* wrapper, int idx /* default: -1 */);
double                    pCvdnn_DictValuegetRealValue(struct  dnn_DictValue_t* wrapper, int idx /* default: -1 */);
string_t*                 pCvdnn_DictValuegetStringValue(struct  dnn_DictValue_t* wrapper, int idx /* default: -1 */);
bool                      pCvdnn_DictValueisInt(struct  dnn_DictValue_t* wrapper);
bool                      pCvdnn_DictValueisReal(struct  dnn_DictValue_t* wrapper);
bool                      pCvdnn_DictValueisString(struct  dnn_DictValue_t* wrapper);
vector_Point2f*           pCvdnn_KeypointsModelestimate(struct  dnn_KeypointsModel_t* wrapper, Mat_t* frame, 
                                   float thresh /* default: 0.5 */);
vector_Point2f*           pCvdnn_KeypointsModelestimateV2(struct  dnn_KeypointsModel_t* wrapper, UMat_t* frame, 
                                   float thresh /* default: 0.5 */);
void                      pCvdnn_KeypointsModelpredict(struct  dnn_KeypointsModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs);
void                      pCvdnn_KeypointsModelpredictV2(struct  dnn_KeypointsModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs);
dnn_Model_t*              pCvdnn_KeypointsModelsetInputCrop(struct  dnn_KeypointsModel_t* wrapper, bool crop);
dnn_Model_t*              pCvdnn_KeypointsModelsetInputMean(struct  dnn_KeypointsModel_t* wrapper, Scalar_t* mean);
void                      pCvdnn_KeypointsModelsetInputParams(struct  dnn_KeypointsModel_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_KeypointsModelsetInputScale(struct  dnn_KeypointsModel_t* wrapper, double scale);
dnn_Model_t*              pCvdnn_KeypointsModelsetInputSize(struct  dnn_KeypointsModel_t* wrapper, Size_t* size);
dnn_Model_t*              pCvdnn_KeypointsModelsetInputSizeV2(struct  dnn_KeypointsModel_t* wrapper, int width, 
                                   int height);
dnn_Model_t*              pCvdnn_KeypointsModelsetInputSwapRB(struct  dnn_KeypointsModel_t* wrapper, bool swapRB);
dnn_Model_t*              pCvdnn_KeypointsModelsetPreferableBackend(struct  dnn_KeypointsModel_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_KeypointsModelsetPreferableTarget(struct  dnn_KeypointsModel_t* wrapper, 
                                   dnn_Target targetId);
void                      pCvdnn_Layerclear(struct  dnn_Layer_t* wrapper);
bool                      pCvdnn_Layerempty(struct  dnn_Layer_t* wrapper);
string_t*                 pCvdnn_LayergetDefaultName(struct  dnn_Layer_t* wrapper);
int                       pCvdnn_LayeroutputNameToIndex(struct  dnn_Layer_t* wrapper, string_t* outputName);
void                      pCvdnn_Layerread(struct  dnn_Layer_t* wrapper, FileNode_t* fn);
void                      pCvdnn_Layersave(struct  dnn_Layer_t* wrapper, string_t* filename);
void                      pCvdnn_Layerwrite(struct  dnn_Layer_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
vector_Mat*                       pCvdnn_LayerGet_blobs(dnn_Layer_t* p);
void                      pCvdnn_LayerSet_blobs(dnn_Layer_t* p, vector_Mat* propval);
string_t*                       pCvdnn_LayerGet_name(dnn_Layer_t* p);
int                       pCvdnn_LayerGet_preferableTarget(dnn_Layer_t* p);
string_t*                       pCvdnn_LayerGet_type(dnn_Layer_t* p);
void                      pCvdnn_Modelpredict(struct  dnn_Model_t* wrapper, Mat_t* frame, vector_Mat* outs);
void                      pCvdnn_ModelpredictV2(struct  dnn_Model_t* wrapper, UMat_t* frame, vector_UMat* outs);
dnn_Model_t*              pCvdnn_ModelsetInputCrop(struct  dnn_Model_t* wrapper, bool crop);
dnn_Model_t*              pCvdnn_ModelsetInputMean(struct  dnn_Model_t* wrapper, Scalar_t* mean);
void                      pCvdnn_ModelsetInputParams(struct  dnn_Model_t* wrapper, double scale /* default: 1.0 */, 
                                   Size_t* size /* default: Size() */, Scalar_t* mean /* default: Scalar() */, 
                                   bool swapRB /* default: false */, bool crop /* default: false */);
dnn_Model_t*              pCvdnn_ModelsetInputScale(struct  dnn_Model_t* wrapper, double scale);
dnn_Model_t*              pCvdnn_ModelsetInputSize(struct  dnn_Model_t* wrapper, Size_t* size);
dnn_Model_t*              pCvdnn_ModelsetInputSizeV2(struct  dnn_Model_t* wrapper, int width, int height);
dnn_Model_t*              pCvdnn_ModelsetInputSwapRB(struct  dnn_Model_t* wrapper, bool swapRB);
dnn_Model_t*              pCvdnn_ModelsetPreferableBackend(struct  dnn_Model_t* wrapper, dnn_Backend backendId);
dnn_Model_t*              pCvdnn_ModelsetPreferableTarget(struct  dnn_Model_t* wrapper, dnn_Target targetId);
void                      pCvdnn_Netconnect(struct  dnn_Net_t* wrapper, string_t* outPin, string_t* inpPin);
string_t*                 pCvdnn_Netdump(struct  dnn_Net_t* wrapper);
void                      pCvdnn_NetdumpToFile(struct  dnn_Net_t* wrapper, string_t* path);
bool                      pCvdnn_Netempty(struct  dnn_Net_t* wrapper);
void                      pCvdnn_NetenableFusion(struct  dnn_Net_t* wrapper, bool fusion);
Mat_t*                    pCvdnn_Netforward(struct  dnn_Net_t* wrapper, string_t* outputName /* default: String() */);
void                      pCvdnn_NetforwardV2(struct  dnn_Net_t* wrapper, vector_Mat* outputBlobs, 
                                   string_t* outputName /* default: String() */);
void                      pCvdnn_NetforwardV3(struct  dnn_Net_t* wrapper, vector_UMat* outputBlobs, 
                                   string_t* outputName /* default: String() */);
void                      pCvdnn_NetforwardV4(struct  dnn_Net_t* wrapper, vector_Mat* outputBlobs, 
                                   vector_String* outBlobNames);
void                      pCvdnn_NetforwardV5(struct  dnn_Net_t* wrapper, vector_UMat* outputBlobs, 
                                   vector_String* outBlobNames);
void                      pCvdnn_NetforwardAndRetrieve(struct  dnn_Net_t* wrapper, vector_vector_Mat* outputBlobs, 
                                   vector_String* outBlobNames);
AsyncArray_t*             pCvdnn_NetforwardAsync(struct  dnn_Net_t* wrapper, 
                                   string_t* outputName /* default: String() */);
int64                     pCvdnn_NetgetFLOPS(struct  dnn_Net_t* wrapper, vector_MatShape* netInputShapes);
int64                     pCvdnn_NetgetFLOPSV2(struct  dnn_Net_t* wrapper, MatShape* netInputShape);
int64                     pCvdnn_NetgetFLOPSV3(struct  dnn_Net_t* wrapper, int layerId, vector_MatShape* netInputShapes);
int64                     pCvdnn_NetgetFLOPSV4(struct  dnn_Net_t* wrapper, int layerId, MatShape* netInputShape);
void                      pCvdnn_NetgetInputDetails(struct  dnn_Net_t* wrapper, vector_float* scales, 
                                   vector_int* zeropoints);
Ptr_Layer*                pCvdnn_NetgetLayer(struct  dnn_Net_t* wrapper, int layerId);
Ptr_Layer*                pCvdnn_NetgetLayerV2(struct  dnn_Net_t* wrapper, string_t* layerName);
Ptr_Layer*                pCvdnn_NetgetLayerV3(struct  dnn_Net_t* wrapper, LayerId_t* layerId);
int                       pCvdnn_NetgetLayerId(struct  dnn_Net_t* wrapper, string_t* layer);
vector_String*            pCvdnn_NetgetLayerNames(struct  dnn_Net_t* wrapper);
void                      pCvdnn_NetgetLayerTypes(struct  dnn_Net_t* wrapper, vector_String* layersTypes);
int                       pCvdnn_NetgetLayersCount(struct  dnn_Net_t* wrapper, string_t* layerType);
void                      pCvdnn_NetgetLayersShapes(struct  dnn_Net_t* wrapper, vector_MatShape* netInputShapes, 
                                   vector_int* layersIds, vector_vector_MatShape* inLayersShapes, 
                                   vector_vector_MatShape* outLayersShapes);
void                      pCvdnn_NetgetLayersShapesV2(struct  dnn_Net_t* wrapper, MatShape* netInputShape, 
                                   vector_int* layersIds, vector_vector_MatShape* inLayersShapes, 
                                   vector_vector_MatShape* outLayersShapes);
void                      pCvdnn_NetgetMemoryConsumption(struct  dnn_Net_t* wrapper, MatShape* netInputShape, 
                                   size_t weights, size_t blobs);
void                      pCvdnn_NetgetMemoryConsumptionV2(struct  dnn_Net_t* wrapper, int layerId, 
                                   vector_MatShape* netInputShapes, size_t weights, size_t blobs);
void                      pCvdnn_NetgetMemoryConsumptionV3(struct  dnn_Net_t* wrapper, int layerId, 
                                   MatShape* netInputShape, size_t weights, size_t blobs);
void                      pCvdnn_NetgetOutputDetails(struct  dnn_Net_t* wrapper, vector_float* scales, 
                                   vector_int* zeropoints);
Mat_t*                    pCvdnn_NetgetParam(struct  dnn_Net_t* wrapper, int layer, int numParam /* default: 0 */);
Mat_t*                    pCvdnn_NetgetParamV2(struct  dnn_Net_t* wrapper, string_t* layerName, 
                                   int numParam /* default: 0 */);
int64                     pCvdnn_NetgetPerfProfile(struct  dnn_Net_t* wrapper, vector_double* timings);
vector_int*               pCvdnn_NetgetUnconnectedOutLayers(struct  dnn_Net_t* wrapper);
vector_String*            pCvdnn_NetgetUnconnectedOutLayersNames(struct  dnn_Net_t* wrapper);
dnn_Net_t*                pCvdnn_Netquantize(struct  dnn_Net_t* wrapper, vector_Mat* calibData, int inputsDtype, 
                                   int outputsDtype);
dnn_Net_t*                pCvdnn_NetquantizeV2(struct  dnn_Net_t* wrapper, vector_UMat* calibData, int inputsDtype, 
                                   int outputsDtype);
dnn_Net_t*                pCvdnn_NetreadFromModelOptimizer(string_t* xml, string_t* bin);
dnn_Net_t*                pCvdnn_NetreadFromModelOptimizerV2(vector_uchar* bufferModelConfig, 
                                   vector_uchar* bufferWeights);
void                      pCvdnn_NetsetHalideScheduler(struct  dnn_Net_t* wrapper, string_t* scheduler);
void                      pCvdnn_NetsetInput(struct  dnn_Net_t* wrapper, Mat_t* blob, string_t* name /* default: "" */, 
                                   double scalefactor /* default: 1.0 */, Scalar_t* mean /* default: Scalar() */);
void                      pCvdnn_NetsetInputV2(struct  dnn_Net_t* wrapper, UMat_t* blob, 
                                   string_t* name /* default: "" */, double scalefactor /* default: 1.0 */, 
                                   Scalar_t* mean /* default: Scalar() */);
void                      pCvdnn_NetsetInputShape(struct  dnn_Net_t* wrapper, string_t* inputName, MatShape* shape);
void                      pCvdnn_NetsetInputsNames(struct  dnn_Net_t* wrapper, vector_String* inputBlobNames);
void                      pCvdnn_NetsetParam(struct  dnn_Net_t* wrapper, int layer, int numParam, Mat_t* blob);
void                      pCvdnn_NetsetParamV2(struct  dnn_Net_t* wrapper, string_t* layerName, int numParam, 
                                   Mat_t* blob);
void                      pCvdnn_NetsetPreferableBackend(struct  dnn_Net_t* wrapper, int backendId);
void                      pCvdnn_NetsetPreferableTarget(struct  dnn_Net_t* wrapper, int targetId);
void                      pCvdnn_SegmentationModelpredict(struct  dnn_SegmentationModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs);
void                      pCvdnn_SegmentationModelpredictV2(struct  dnn_SegmentationModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs);
void                      pCvdnn_SegmentationModelsegment(struct  dnn_SegmentationModel_t* wrapper, Mat_t* frame, 
                                   Mat_t* mask);
void                      pCvdnn_SegmentationModelsegmentV2(struct  dnn_SegmentationModel_t* wrapper, UMat_t* frame, 
                                   UMat_t* mask);
dnn_Model_t*              pCvdnn_SegmentationModelsetInputCrop(struct  dnn_SegmentationModel_t* wrapper, bool crop);
dnn_Model_t*              pCvdnn_SegmentationModelsetInputMean(struct  dnn_SegmentationModel_t* wrapper, Scalar_t* mean);
void                      pCvdnn_SegmentationModelsetInputParams(struct  dnn_SegmentationModel_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_SegmentationModelsetInputScale(struct  dnn_SegmentationModel_t* wrapper, double scale);
dnn_Model_t*              pCvdnn_SegmentationModelsetInputSize(struct  dnn_SegmentationModel_t* wrapper, Size_t* size);
dnn_Model_t*              pCvdnn_SegmentationModelsetInputSizeV2(struct  dnn_SegmentationModel_t* wrapper, int width, 
                                   int height);
dnn_Model_t*              pCvdnn_SegmentationModelsetInputSwapRB(struct  dnn_SegmentationModel_t* wrapper, bool swapRB);
dnn_Model_t*              pCvdnn_SegmentationModelsetPreferableBackend(struct  dnn_SegmentationModel_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_SegmentationModelsetPreferableTarget(struct  dnn_SegmentationModel_t* wrapper, 
                                   dnn_Target targetId);
void                      pCvdnn_TextDetectionModeldetect(struct  dnn_TextDetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_vector_Point* detections, vector_float* confidences);
void                      pCvdnn_TextDetectionModeldetectV2(struct  dnn_TextDetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_vector_Point* detections, vector_float* confidences);
void                      pCvdnn_TextDetectionModeldetectV3(struct  dnn_TextDetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_vector_Point* detections);
void                      pCvdnn_TextDetectionModeldetectV4(struct  dnn_TextDetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_vector_Point* detections);
void                      pCvdnn_TextDetectionModeldetectTextRectangles(struct  dnn_TextDetectionModel_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModeldetectTextRectanglesV2(struct  dnn_TextDetectionModel_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModeldetectTextRectanglesV3(struct  dnn_TextDetectionModel_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections);
void                      pCvdnn_TextDetectionModeldetectTextRectanglesV4(struct  dnn_TextDetectionModel_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections);
void                      pCvdnn_TextDetectionModelpredict(struct  dnn_TextDetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs);
void                      pCvdnn_TextDetectionModelpredictV2(struct  dnn_TextDetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs);
dnn_Model_t*              pCvdnn_TextDetectionModelsetInputCrop(struct  dnn_TextDetectionModel_t* wrapper, bool crop);
dnn_Model_t*              pCvdnn_TextDetectionModelsetInputMean(struct  dnn_TextDetectionModel_t* wrapper, 
                                   Scalar_t* mean);
void                      pCvdnn_TextDetectionModelsetInputParams(struct  dnn_TextDetectionModel_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_TextDetectionModelsetInputScale(struct  dnn_TextDetectionModel_t* wrapper, 
                                   double scale);
dnn_Model_t*              pCvdnn_TextDetectionModelsetInputSize(struct  dnn_TextDetectionModel_t* wrapper, Size_t* size);
dnn_Model_t*              pCvdnn_TextDetectionModelsetInputSizeV2(struct  dnn_TextDetectionModel_t* wrapper, int width, 
                                   int height);
dnn_Model_t*              pCvdnn_TextDetectionModelsetInputSwapRB(struct  dnn_TextDetectionModel_t* wrapper, 
                                   bool swapRB);
dnn_Model_t*              pCvdnn_TextDetectionModelsetPreferableBackend(struct  dnn_TextDetectionModel_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_TextDetectionModelsetPreferableTarget(struct  dnn_TextDetectionModel_t* wrapper, 
                                   dnn_Target targetId);
void                      pCvdnn_TextDetectionModel_DBdetect(struct  dnn_TextDetectionModel_DB_t* wrapper, Mat_t* frame, 
                                   vector_vector_Point* detections, vector_float* confidences);
void                      pCvdnn_TextDetectionModel_DBdetectV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_DBdetectV3(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_vector_Point* detections);
void                      pCvdnn_TextDetectionModel_DBdetectV4(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections);
void                      pCvdnn_TextDetectionModel_DBdetectTextRectangles(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_DBdetectTextRectanglesV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_DBdetectTextRectanglesV3(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections);
void                      pCvdnn_TextDetectionModel_DBdetectTextRectanglesV4(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections);
float                     pCvdnn_TextDetectionModel_DBgetBinaryThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper);
int                       pCvdnn_TextDetectionModel_DBgetMaxCandidates(struct  dnn_TextDetectionModel_DB_t* wrapper);
float                     pCvdnn_TextDetectionModel_DBgetPolygonThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper);
double                    pCvdnn_TextDetectionModel_DBgetUnclipRatio(struct  dnn_TextDetectionModel_DB_t* wrapper);
void                      pCvdnn_TextDetectionModel_DBpredict(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_Mat* outs);
void                      pCvdnn_TextDetectionModel_DBpredictV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_UMat* outs);
dnn_TextDetectionModel_DB_t* pCvdnn_TextDetectionModel_DBsetBinaryThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   float binaryThreshold);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetInputCrop(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   bool crop);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetInputMean(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Scalar_t* mean);
void                      pCvdnn_TextDetectionModel_DBsetInputParams(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetInputScale(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   double scale);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetInputSize(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Size_t* size);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetInputSizeV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   int width, int height);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetInputSwapRB(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   bool swapRB);
dnn_TextDetectionModel_DB_t* pCvdnn_TextDetectionModel_DBsetMaxCandidates(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   int maxCandidates);
dnn_TextDetectionModel_DB_t* pCvdnn_TextDetectionModel_DBsetPolygonThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   float polygonThreshold);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetPreferableBackend(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_TextDetectionModel_DBsetPreferableTarget(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   dnn_Target targetId);
dnn_TextDetectionModel_DB_t* pCvdnn_TextDetectionModel_DBsetUnclipRatio(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   double unclipRatio);
void                      pCvdnn_TextDetectionModel_EASTdetect(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_vector_Point* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_EASTdetectV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_EASTdetectV3(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_vector_Point* detections);
void                      pCvdnn_TextDetectionModel_EASTdetectV4(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections);
void                      pCvdnn_TextDetectionModel_EASTdetectTextRectangles(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_EASTdetectTextRectanglesV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences);
void                      pCvdnn_TextDetectionModel_EASTdetectTextRectanglesV3(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections);
void                      pCvdnn_TextDetectionModel_EASTdetectTextRectanglesV4(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections);
float                     pCvdnn_TextDetectionModel_EASTgetConfidenceThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper);
float                     pCvdnn_TextDetectionModel_EASTgetNMSThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper);
void                      pCvdnn_TextDetectionModel_EASTpredict(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_Mat* outs);
void                      pCvdnn_TextDetectionModel_EASTpredictV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_UMat* outs);
dnn_TextDetectionModel_EAST_t* pCvdnn_TextDetectionModel_EASTsetConfidenceThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   float confThreshold);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetInputCrop(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   bool crop);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetInputMean(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Scalar_t* mean);
void                      pCvdnn_TextDetectionModel_EASTsetInputParams(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetInputScale(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   double scale);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetInputSize(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Size_t* size);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetInputSizeV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   int width, int height);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetInputSwapRB(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   bool swapRB);
dnn_TextDetectionModel_EAST_t* pCvdnn_TextDetectionModel_EASTsetNMSThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   float nmsThreshold);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetPreferableBackend(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_TextDetectionModel_EASTsetPreferableTarget(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   dnn_Target targetId);
string_t*                 pCvdnn_TextRecognitionModelgetDecodeType(struct  dnn_TextRecognitionModel_t* wrapper);
vector_string*            pCvdnn_TextRecognitionModelgetVocabulary(struct  dnn_TextRecognitionModel_t* wrapper);
void                      pCvdnn_TextRecognitionModelpredict(struct  dnn_TextRecognitionModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs);
void                      pCvdnn_TextRecognitionModelpredictV2(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   UMat_t* frame, vector_UMat* outs);
string_t*                 pCvdnn_TextRecognitionModelrecognize(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Mat_t* frame);
string_t*                 pCvdnn_TextRecognitionModelrecognizeV2(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   UMat_t* frame);
void                      pCvdnn_TextRecognitionModelrecognizeV3(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Mat_t* frame, vector_Mat* roiRects, vector_string* results);
void                      pCvdnn_TextRecognitionModelrecognizeV4(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   UMat_t* frame, vector_UMat* roiRects, vector_string* results);
dnn_TextRecognitionModel_t* pCvdnn_TextRecognitionModelsetDecodeOptsCTCPrefixBeamSearch(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   int beamSize, 
                                   int vocPruneSize /* default: 0 */);
dnn_TextRecognitionModel_t* pCvdnn_TextRecognitionModelsetDecodeType(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   string_t* decodeType);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetInputCrop(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   bool crop);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetInputMean(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Scalar_t* mean);
void                      pCvdnn_TextRecognitionModelsetInputParams(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   double scale /* default: 1.0 */, Size_t* size /* default: Size() */, 
                                   Scalar_t* mean /* default: Scalar() */, bool swapRB /* default: false */, 
                                   bool crop /* default: false */);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetInputScale(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   double scale);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetInputSize(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Size_t* size);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetInputSizeV2(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   int width, int height);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetInputSwapRB(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   bool swapRB);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetPreferableBackend(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   dnn_Backend backendId);
dnn_Model_t*              pCvdnn_TextRecognitionModelsetPreferableTarget(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   dnn_Target targetId);
dnn_TextRecognitionModel_t* pCvdnn_TextRecognitionModelsetVocabulary(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   vector_string* vocabulary);
void                      pCvflann_Indexbuild(struct  flann_Index_t* wrapper, Mat_t* features, IndexParams_t* params, 
                                   cvflann_flann_distance_t distType /* default: cvflann::FLANN_DIST_L2 */);
void                      pCvflann_IndexbuildV2(struct  flann_Index_t* wrapper, UMat_t* features, IndexParams_t* params, 
                                   cvflann_flann_distance_t distType /* default: cvflann::FLANN_DIST_L2 */);
cvflann_flann_algorithm_t pCvflann_IndexgetAlgorithm(struct  flann_Index_t* wrapper);
cvflann_flann_distance_t  pCvflann_IndexgetDistance(struct  flann_Index_t* wrapper);
void                      pCvflann_IndexknnSearch(struct  flann_Index_t* wrapper, Mat_t* query, Mat_t* indices, 
                                   Mat_t* dists, int knn, 
                                   SearchParams_t* params /* default: flann::SearchParams() */);
void                      pCvflann_IndexknnSearchV2(struct  flann_Index_t* wrapper, UMat_t* query, UMat_t* indices, 
                                   UMat_t* dists, int knn, 
                                   SearchParams_t* params /* default: flann::SearchParams() */);
bool                      pCvflann_Indexload(struct  flann_Index_t* wrapper, Mat_t* features, string_t* filename);
bool                      pCvflann_IndexloadV2(struct  flann_Index_t* wrapper, UMat_t* features, string_t* filename);
int                       pCvflann_IndexradiusSearch(struct  flann_Index_t* wrapper, Mat_t* query, Mat_t* indices, 
                                   Mat_t* dists, double radius, int maxResults, 
                                   SearchParams_t* params /* default: flann::SearchParams() */);
int                       pCvflann_IndexradiusSearchV2(struct  flann_Index_t* wrapper, UMat_t* query, UMat_t* indices, 
                                   UMat_t* dists, double radius, int maxResults, 
                                   SearchParams_t* params /* default: flann::SearchParams() */);
void                      pCvflann_Indexrelease(struct  flann_Index_t* wrapper);
void                      pCvflann_Indexsave(struct  flann_Index_t* wrapper, string_t* filename);
float                     pCvml_ANN_MLPcalcError(struct  ml_ANN_MLP_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp);
float                     pCvml_ANN_MLPcalcErrorV2(struct  ml_ANN_MLP_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_ANN_MLPclear(struct  ml_ANN_MLP_t* wrapper);
Ptr_ANN_MLP*              pCvml_ANN_MLP_create();
bool                      pCvml_ANN_MLPempty(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetAnnealCoolingRatio(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetAnnealFinalT(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetAnnealInitialT(struct  ml_ANN_MLP_t* wrapper);
int                       pCvml_ANN_MLPgetAnnealItePerStep(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetBackpropMomentumScale(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetBackpropWeightScale(struct  ml_ANN_MLP_t* wrapper);
string_t*                 pCvml_ANN_MLPgetDefaultName(struct  ml_ANN_MLP_t* wrapper);
Mat_t*                    pCvml_ANN_MLPgetLayerSizes(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetRpropDW0(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetRpropDWMax(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetRpropDWMin(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetRpropDWMinus(struct  ml_ANN_MLP_t* wrapper);
double                    pCvml_ANN_MLPgetRpropDWPlus(struct  ml_ANN_MLP_t* wrapper);
TermCriteria_t*           pCvml_ANN_MLPgetTermCriteria(struct  ml_ANN_MLP_t* wrapper);
int                       pCvml_ANN_MLPgetTrainMethod(struct  ml_ANN_MLP_t* wrapper);
int                       pCvml_ANN_MLPgetVarCount(struct  ml_ANN_MLP_t* wrapper);
Mat_t*                    pCvml_ANN_MLPgetWeights(struct  ml_ANN_MLP_t* wrapper, int layerIdx);
bool                      pCvml_ANN_MLPisClassifier(struct  ml_ANN_MLP_t* wrapper);
bool                      pCvml_ANN_MLPisTrained(struct  ml_ANN_MLP_t* wrapper);
Ptr_ANN_MLP*              pCvml_ANN_MLPload(string_t* filepath);
float                     pCvml_ANN_MLPpredict(struct  ml_ANN_MLP_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_ANN_MLPpredictV2(struct  ml_ANN_MLP_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_ANN_MLPread(struct  ml_ANN_MLP_t* wrapper, FileNode_t* fn);
void                      pCvml_ANN_MLPsave(struct  ml_ANN_MLP_t* wrapper, string_t* filename);
void                      pCvml_ANN_MLPsetActivationFunction(struct  ml_ANN_MLP_t* wrapper, int _type, 
                                   double param1 /* default: 0 */, double param2 /* default: 0 */);
void                      pCvml_ANN_MLPsetAnnealCoolingRatio(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetAnnealFinalT(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetAnnealInitialT(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetAnnealItePerStep(struct  ml_ANN_MLP_t* wrapper, int _val);
void                      pCvml_ANN_MLPsetBackpropMomentumScale(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetBackpropWeightScale(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetLayerSizes(struct  ml_ANN_MLP_t* wrapper, Mat_t* _layer_sizes);
void                      pCvml_ANN_MLPsetLayerSizesV2(struct  ml_ANN_MLP_t* wrapper, UMat_t* _layer_sizes);
void                      pCvml_ANN_MLPsetRpropDW0(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetRpropDWMax(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetRpropDWMin(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetRpropDWMinus(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetRpropDWPlus(struct  ml_ANN_MLP_t* wrapper, double _val);
void                      pCvml_ANN_MLPsetTermCriteria(struct  ml_ANN_MLP_t* wrapper, TermCriteria_t* _val);
void                      pCvml_ANN_MLPsetTrainMethod(struct  ml_ANN_MLP_t* wrapper, int method, 
                                   double param1 /* default: 0 */, double param2 /* default: 0 */);
bool                      pCvml_ANN_MLPtrain(struct  ml_ANN_MLP_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_ANN_MLPtrainV2(struct  ml_ANN_MLP_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses);
bool                      pCvml_ANN_MLPtrainV3(struct  ml_ANN_MLP_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_ANN_MLPwrite(struct  ml_ANN_MLP_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_BoostcalcError(struct  ml_Boost_t* wrapper, Ptr_TrainData* data, bool test, Mat_t* resp);
float                     pCvml_BoostcalcErrorV2(struct  ml_Boost_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_Boostclear(struct  ml_Boost_t* wrapper);
Ptr_Boost*                pCvml_Boost_create();
bool                      pCvml_Boostempty(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetBoostType(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetCVFolds(struct  ml_Boost_t* wrapper);
string_t*                 pCvml_BoostgetDefaultName(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetMaxCategories(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetMaxDepth(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetMinSampleCount(struct  ml_Boost_t* wrapper);
Mat_t*                    pCvml_BoostgetPriors(struct  ml_Boost_t* wrapper);
float                     pCvml_BoostgetRegressionAccuracy(struct  ml_Boost_t* wrapper);
bool                      pCvml_BoostgetTruncatePrunedTree(struct  ml_Boost_t* wrapper);
bool                      pCvml_BoostgetUse1SERule(struct  ml_Boost_t* wrapper);
bool                      pCvml_BoostgetUseSurrogates(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetVarCount(struct  ml_Boost_t* wrapper);
int                       pCvml_BoostgetWeakCount(struct  ml_Boost_t* wrapper);
double                    pCvml_BoostgetWeightTrimRate(struct  ml_Boost_t* wrapper);
bool                      pCvml_BoostisClassifier(struct  ml_Boost_t* wrapper);
bool                      pCvml_BoostisTrained(struct  ml_Boost_t* wrapper);
Ptr_Boost*                pCvml_Boostload(string_t* filepath, string_t* nodeName /* default: String() */);
float                     pCvml_Boostpredict(struct  ml_Boost_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_BoostpredictV2(struct  ml_Boost_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_Boostread(struct  ml_Boost_t* wrapper, FileNode_t* fn);
void                      pCvml_Boostsave(struct  ml_Boost_t* wrapper, string_t* filename);
void                      pCvml_BoostsetBoostType(struct  ml_Boost_t* wrapper, int _val);
void                      pCvml_BoostsetCVFolds(struct  ml_Boost_t* wrapper, int _val);
void                      pCvml_BoostsetMaxCategories(struct  ml_Boost_t* wrapper, int _val);
void                      pCvml_BoostsetMaxDepth(struct  ml_Boost_t* wrapper, int _val);
void                      pCvml_BoostsetMinSampleCount(struct  ml_Boost_t* wrapper, int _val);
void                      pCvml_BoostsetPriors(struct  ml_Boost_t* wrapper, Mat_t* _val);
void                      pCvml_BoostsetRegressionAccuracy(struct  ml_Boost_t* wrapper, float _val);
void                      pCvml_BoostsetTruncatePrunedTree(struct  ml_Boost_t* wrapper, bool _val);
void                      pCvml_BoostsetUse1SERule(struct  ml_Boost_t* wrapper, bool _val);
void                      pCvml_BoostsetUseSurrogates(struct  ml_Boost_t* wrapper, bool _val);
void                      pCvml_BoostsetWeakCount(struct  ml_Boost_t* wrapper, int _val);
void                      pCvml_BoostsetWeightTrimRate(struct  ml_Boost_t* wrapper, double _val);
bool                      pCvml_Boosttrain(struct  ml_Boost_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_BoosttrainV2(struct  ml_Boost_t* wrapper, Mat_t* samples, int layout, Mat_t* responses);
bool                      pCvml_BoosttrainV3(struct  ml_Boost_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_Boostwrite(struct  ml_Boost_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_DTreescalcError(struct  ml_DTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp);
float                     pCvml_DTreescalcErrorV2(struct  ml_DTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_DTreesclear(struct  ml_DTrees_t* wrapper);
Ptr_DTrees*               pCvml_DTrees_create();
bool                      pCvml_DTreesempty(struct  ml_DTrees_t* wrapper);
int                       pCvml_DTreesgetCVFolds(struct  ml_DTrees_t* wrapper);
string_t*                 pCvml_DTreesgetDefaultName(struct  ml_DTrees_t* wrapper);
int                       pCvml_DTreesgetMaxCategories(struct  ml_DTrees_t* wrapper);
int                       pCvml_DTreesgetMaxDepth(struct  ml_DTrees_t* wrapper);
int                       pCvml_DTreesgetMinSampleCount(struct  ml_DTrees_t* wrapper);
Mat_t*                    pCvml_DTreesgetPriors(struct  ml_DTrees_t* wrapper);
float                     pCvml_DTreesgetRegressionAccuracy(struct  ml_DTrees_t* wrapper);
bool                      pCvml_DTreesgetTruncatePrunedTree(struct  ml_DTrees_t* wrapper);
bool                      pCvml_DTreesgetUse1SERule(struct  ml_DTrees_t* wrapper);
bool                      pCvml_DTreesgetUseSurrogates(struct  ml_DTrees_t* wrapper);
int                       pCvml_DTreesgetVarCount(struct  ml_DTrees_t* wrapper);
bool                      pCvml_DTreesisClassifier(struct  ml_DTrees_t* wrapper);
bool                      pCvml_DTreesisTrained(struct  ml_DTrees_t* wrapper);
Ptr_DTrees*               pCvml_DTreesload(string_t* filepath, string_t* nodeName /* default: String() */);
float                     pCvml_DTreespredict(struct  ml_DTrees_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_DTreespredictV2(struct  ml_DTrees_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_DTreesread(struct  ml_DTrees_t* wrapper, FileNode_t* fn);
void                      pCvml_DTreessave(struct  ml_DTrees_t* wrapper, string_t* filename);
void                      pCvml_DTreessetCVFolds(struct  ml_DTrees_t* wrapper, int _val);
void                      pCvml_DTreessetMaxCategories(struct  ml_DTrees_t* wrapper, int _val);
void                      pCvml_DTreessetMaxDepth(struct  ml_DTrees_t* wrapper, int _val);
void                      pCvml_DTreessetMinSampleCount(struct  ml_DTrees_t* wrapper, int _val);
void                      pCvml_DTreessetPriors(struct  ml_DTrees_t* wrapper, Mat_t* _val);
void                      pCvml_DTreessetRegressionAccuracy(struct  ml_DTrees_t* wrapper, float _val);
void                      pCvml_DTreessetTruncatePrunedTree(struct  ml_DTrees_t* wrapper, bool _val);
void                      pCvml_DTreessetUse1SERule(struct  ml_DTrees_t* wrapper, bool _val);
void                      pCvml_DTreessetUseSurrogates(struct  ml_DTrees_t* wrapper, bool _val);
bool                      pCvml_DTreestrain(struct  ml_DTrees_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_DTreestrainV2(struct  ml_DTrees_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses);
bool                      pCvml_DTreestrainV3(struct  ml_DTrees_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_DTreeswrite(struct  ml_DTrees_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_EMcalcError(struct  ml_EM_t* wrapper, Ptr_TrainData* data, bool test, Mat_t* resp);
float                     pCvml_EMcalcErrorV2(struct  ml_EM_t* wrapper, Ptr_TrainData* data, bool test, UMat_t* resp);
void                      pCvml_EMclear(struct  ml_EM_t* wrapper);
Ptr_EM*                   pCvml_EM_create();
bool                      pCvml_EMempty(struct  ml_EM_t* wrapper);
int                       pCvml_EMgetClustersNumber(struct  ml_EM_t* wrapper);
int                       pCvml_EMgetCovarianceMatrixType(struct  ml_EM_t* wrapper);
void                      pCvml_EMgetCovs(struct  ml_EM_t* wrapper, vector_Mat* covs);
string_t*                 pCvml_EMgetDefaultName(struct  ml_EM_t* wrapper);
Mat_t*                    pCvml_EMgetMeans(struct  ml_EM_t* wrapper);
TermCriteria_t*           pCvml_EMgetTermCriteria(struct  ml_EM_t* wrapper);
int                       pCvml_EMgetVarCount(struct  ml_EM_t* wrapper);
Mat_t*                    pCvml_EMgetWeights(struct  ml_EM_t* wrapper);
bool                      pCvml_EMisClassifier(struct  ml_EM_t* wrapper);
bool                      pCvml_EMisTrained(struct  ml_EM_t* wrapper);
Ptr_EM*                   pCvml_EMload(string_t* filepath, string_t* nodeName /* default: String() */);
float                     pCvml_EMpredict(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* results /* default: Mat() */, 
                                   int flags /* default: 0 */);
float                     pCvml_EMpredictV2(struct  ml_EM_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
Vec2d_t*                  pCvml_EMpredict2(struct  ml_EM_t* wrapper, Mat_t* sample, Mat_t* probs);
Vec2d_t*                  pCvml_EMpredict2V2(struct  ml_EM_t* wrapper, UMat_t* sample, UMat_t* probs);
void                      pCvml_EMread(struct  ml_EM_t* wrapper, FileNode_t* fn);
void                      pCvml_EMsave(struct  ml_EM_t* wrapper, string_t* filename);
void                      pCvml_EMsetClustersNumber(struct  ml_EM_t* wrapper, int _val);
void                      pCvml_EMsetCovarianceMatrixType(struct  ml_EM_t* wrapper, int _val);
void                      pCvml_EMsetTermCriteria(struct  ml_EM_t* wrapper, TermCriteria_t* _val);
bool                      pCvml_EMtrain(struct  ml_EM_t* wrapper, Ptr_TrainData* trainData, int flags /* default: 0 */);
bool                      pCvml_EMtrainV2(struct  ml_EM_t* wrapper, Mat_t* samples, int layout, Mat_t* responses);
bool                      pCvml_EMtrainV3(struct  ml_EM_t* wrapper, UMat_t* samples, int layout, UMat_t* responses);
bool                      pCvml_EMtrainE(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* means0, 
                                   Mat_t* covs0 /* default: Mat() */, Mat_t* weights0 /* default: Mat() */, 
                                   Mat_t* logLikelihoods /* default: Mat() */, Mat_t* labels /* default: Mat() */, Mat_t* probs /* default: Mat() */);
bool                      pCvml_EMtrainEV2(struct  ml_EM_t* wrapper, UMat_t* samples, UMat_t* means0, 
                                   UMat_t* covs0 /* default: UMat() */, UMat_t* weights0 /* default: UMat() */, 
                                   UMat_t* logLikelihoods /* default: UMat() */, UMat_t* labels /* default: UMat() */, UMat_t* probs /* default: UMat() */);
bool                      pCvml_EMtrainEM(struct  ml_EM_t* wrapper, Mat_t* samples, 
                                   Mat_t* logLikelihoods /* default: Mat() */, Mat_t* labels /* default: Mat() */, Mat_t* probs /* default: Mat() */);
bool                      pCvml_EMtrainEMV2(struct  ml_EM_t* wrapper, UMat_t* samples, 
                                   UMat_t* logLikelihoods /* default: UMat() */, UMat_t* labels /* default: UMat() */, UMat_t* probs /* default: UMat() */);
bool                      pCvml_EMtrainM(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* probs0, 
                                   Mat_t* logLikelihoods /* default: Mat() */, Mat_t* labels /* default: Mat() */, Mat_t* probs /* default: Mat() */);
bool                      pCvml_EMtrainMV2(struct  ml_EM_t* wrapper, UMat_t* samples, UMat_t* probs0, 
                                   UMat_t* logLikelihoods /* default: UMat() */, UMat_t* labels /* default: UMat() */, UMat_t* probs /* default: UMat() */);
void                      pCvml_EMwrite(struct  ml_EM_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
void                      pCvml_KDTreebuild(struct  ml_KDTree_t* wrapper, Mat_t* points, 
                                   bool copyAndReorderPoints /* default: false */);
void                      pCvml_KDTreebuildV2(struct  ml_KDTree_t* wrapper, UMat_t* points, 
                                   bool copyAndReorderPoints /* default: false */);
void                      pCvml_KDTreebuildV3(struct  ml_KDTree_t* wrapper, Mat_t* points, Mat_t* labels, 
                                   bool copyAndReorderPoints /* default: false */);
void                      pCvml_KDTreebuildV4(struct  ml_KDTree_t* wrapper, UMat_t* points, UMat_t* labels, 
                                   bool copyAndReorderPoints /* default: false */);
int                       pCvml_KDTreedims(struct  ml_KDTree_t* wrapper);
int                       pCvml_KDTreefindNearest(struct  ml_KDTree_t* wrapper, Mat_t* vec, int K, int Emax, 
                                   Mat_t* neighborsIdx, Mat_t* neighbors /* default: Mat() */, 
                                   Mat_t* dist /* default: Mat() */, Mat_t* labels /* default: Mat() */);
int                       pCvml_KDTreefindNearestV2(struct  ml_KDTree_t* wrapper, UMat_t* vec, int K, int Emax, 
                                   UMat_t* neighborsIdx, UMat_t* neighbors /* default: UMat() */, 
                                   UMat_t* dist /* default: UMat() */, UMat_t* labels /* default: UMat() */);
void                      pCvml_KDTreefindOrthoRange(struct  ml_KDTree_t* wrapper, Mat_t* minBounds, Mat_t* maxBounds, 
                                   Mat_t* neighborsIdx, Mat_t* neighbors /* default: Mat() */, 
                                   Mat_t* labels /* default: Mat() */);
void                      pCvml_KDTreefindOrthoRangeV2(struct  ml_KDTree_t* wrapper, UMat_t* minBounds, 
                                   UMat_t* maxBounds, UMat_t* neighborsIdx, UMat_t* neighbors /* default: UMat() */, 
                                   UMat_t* labels /* default: UMat() */);
void                      pCvml_KDTreegetPoints(struct  ml_KDTree_t* wrapper, Mat_t* idx, Mat_t* pts, 
                                   Mat_t* labels /* default: Mat() */);
void                      pCvml_KDTreegetPointsV2(struct  ml_KDTree_t* wrapper, UMat_t* idx, UMat_t* pts, 
                                   UMat_t* labels /* default: UMat() */);
vector_int*                       pCvml_KDTreeGet_labels(ml_KDTree_t* p);
int                       pCvml_KDTreeGet_maxDepth(ml_KDTree_t* p);
int                       pCvml_KDTreeGet_normType(ml_KDTree_t* p);
void                      pCvml_KDTreeSet_normType(ml_KDTree_t* p, int propval);
Mat_t*                       pCvml_KDTreeGet_points(ml_KDTree_t* p);
float                     pCvml_KNearestcalcError(struct  ml_KNearest_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp);
float                     pCvml_KNearestcalcErrorV2(struct  ml_KNearest_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_KNearestclear(struct  ml_KNearest_t* wrapper);
Ptr_KNearest*             pCvml_KNearest_create();
bool                      pCvml_KNearestempty(struct  ml_KNearest_t* wrapper);
float                     pCvml_KNearestfindNearest(struct  ml_KNearest_t* wrapper, Mat_t* samples, int k, 
                                   Mat_t* results, Mat_t* neighborResponses /* default: Mat() */, 
                                   Mat_t* dist /* default: Mat() */);
float                     pCvml_KNearestfindNearestV2(struct  ml_KNearest_t* wrapper, UMat_t* samples, int k, 
                                   UMat_t* results, UMat_t* neighborResponses /* default: UMat() */, 
                                   UMat_t* dist /* default: UMat() */);
int                       pCvml_KNearestgetAlgorithmType(struct  ml_KNearest_t* wrapper);
int                       pCvml_KNearestgetDefaultK(struct  ml_KNearest_t* wrapper);
string_t*                 pCvml_KNearestgetDefaultName(struct  ml_KNearest_t* wrapper);
int                       pCvml_KNearestgetEmax(struct  ml_KNearest_t* wrapper);
bool                      pCvml_KNearestgetIsClassifier(struct  ml_KNearest_t* wrapper);
int                       pCvml_KNearestgetVarCount(struct  ml_KNearest_t* wrapper);
bool                      pCvml_KNearestisClassifier(struct  ml_KNearest_t* wrapper);
bool                      pCvml_KNearestisTrained(struct  ml_KNearest_t* wrapper);
Ptr_KNearest*             pCvml_KNearestload(string_t* filepath);
float                     pCvml_KNearestpredict(struct  ml_KNearest_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_KNearestpredictV2(struct  ml_KNearest_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_KNearestread(struct  ml_KNearest_t* wrapper, FileNode_t* fn);
void                      pCvml_KNearestsave(struct  ml_KNearest_t* wrapper, string_t* filename);
void                      pCvml_KNearestsetAlgorithmType(struct  ml_KNearest_t* wrapper, int _val);
void                      pCvml_KNearestsetDefaultK(struct  ml_KNearest_t* wrapper, int _val);
void                      pCvml_KNearestsetEmax(struct  ml_KNearest_t* wrapper, int _val);
void                      pCvml_KNearestsetIsClassifier(struct  ml_KNearest_t* wrapper, bool _val);
bool                      pCvml_KNearesttrain(struct  ml_KNearest_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_KNearesttrainV2(struct  ml_KNearest_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses);
bool                      pCvml_KNearesttrainV3(struct  ml_KNearest_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_KNearestwrite(struct  ml_KNearest_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_LogisticRegressioncalcError(struct  ml_LogisticRegression_t* wrapper, 
                                   Ptr_TrainData* data, bool test, Mat_t* resp);
float                     pCvml_LogisticRegressioncalcErrorV2(struct  ml_LogisticRegression_t* wrapper, 
                                   Ptr_TrainData* data, bool test, UMat_t* resp);
void                      pCvml_LogisticRegressionclear(struct  ml_LogisticRegression_t* wrapper);
Ptr_LogisticRegression*   pCvml_LogisticRegression_create();
bool                      pCvml_LogisticRegressionempty(struct  ml_LogisticRegression_t* wrapper);
string_t*                 pCvml_LogisticRegressiongetDefaultName(struct  ml_LogisticRegression_t* wrapper);
int                       pCvml_LogisticRegressiongetIterations(struct  ml_LogisticRegression_t* wrapper);
double                    pCvml_LogisticRegressiongetLearningRate(struct  ml_LogisticRegression_t* wrapper);
int                       pCvml_LogisticRegressiongetMiniBatchSize(struct  ml_LogisticRegression_t* wrapper);
int                       pCvml_LogisticRegressiongetRegularization(struct  ml_LogisticRegression_t* wrapper);
TermCriteria_t*           pCvml_LogisticRegressiongetTermCriteria(struct  ml_LogisticRegression_t* wrapper);
int                       pCvml_LogisticRegressiongetTrainMethod(struct  ml_LogisticRegression_t* wrapper);
int                       pCvml_LogisticRegressiongetVarCount(struct  ml_LogisticRegression_t* wrapper);
Mat_t*                    pCvml_LogisticRegressionget_learnt_thetas(struct  ml_LogisticRegression_t* wrapper);
bool                      pCvml_LogisticRegressionisClassifier(struct  ml_LogisticRegression_t* wrapper);
bool                      pCvml_LogisticRegressionisTrained(struct  ml_LogisticRegression_t* wrapper);
Ptr_LogisticRegression*   pCvml_LogisticRegressionload(string_t* filepath, string_t* nodeName /* default: String() */);
float                     pCvml_LogisticRegressionpredict(struct  ml_LogisticRegression_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_LogisticRegressionpredictV2(struct  ml_LogisticRegression_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_LogisticRegressionread(struct  ml_LogisticRegression_t* wrapper, FileNode_t* fn);
void                      pCvml_LogisticRegressionsave(struct  ml_LogisticRegression_t* wrapper, string_t* filename);
void                      pCvml_LogisticRegressionsetIterations(struct  ml_LogisticRegression_t* wrapper, int _val);
void                      pCvml_LogisticRegressionsetLearningRate(struct  ml_LogisticRegression_t* wrapper, double _val);
void                      pCvml_LogisticRegressionsetMiniBatchSize(struct  ml_LogisticRegression_t* wrapper, int _val);
void                      pCvml_LogisticRegressionsetRegularization(struct  ml_LogisticRegression_t* wrapper, int _val);
void                      pCvml_LogisticRegressionsetTermCriteria(struct  ml_LogisticRegression_t* wrapper, 
                                   TermCriteria_t* _val);
void                      pCvml_LogisticRegressionsetTrainMethod(struct  ml_LogisticRegression_t* wrapper, int _val);
bool                      pCvml_LogisticRegressiontrain(struct  ml_LogisticRegression_t* wrapper, 
                                   Ptr_TrainData* trainData, int flags /* default: 0 */);
bool                      pCvml_LogisticRegressiontrainV2(struct  ml_LogisticRegression_t* wrapper, Mat_t* samples, 
                                   int layout, Mat_t* responses);
bool                      pCvml_LogisticRegressiontrainV3(struct  ml_LogisticRegression_t* wrapper, UMat_t* samples, 
                                   int layout, UMat_t* responses);
void                      pCvml_LogisticRegressionwrite(struct  ml_LogisticRegression_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_NormalBayesClassifiercalcError(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_TrainData* data, bool test, Mat_t* resp);
float                     pCvml_NormalBayesClassifiercalcErrorV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_TrainData* data, bool test, UMat_t* resp);
void                      pCvml_NormalBayesClassifierclear(struct  ml_NormalBayesClassifier_t* wrapper);
Ptr_NormalBayesClassifier* pCvml_NormalBayesClassifier_create();
bool                      pCvml_NormalBayesClassifierempty(struct  ml_NormalBayesClassifier_t* wrapper);
string_t*                 pCvml_NormalBayesClassifiergetDefaultName(struct  ml_NormalBayesClassifier_t* wrapper);
int                       pCvml_NormalBayesClassifiergetVarCount(struct  ml_NormalBayesClassifier_t* wrapper);
bool                      pCvml_NormalBayesClassifierisClassifier(struct  ml_NormalBayesClassifier_t* wrapper);
bool                      pCvml_NormalBayesClassifierisTrained(struct  ml_NormalBayesClassifier_t* wrapper);
Ptr_NormalBayesClassifier* pCvml_NormalBayesClassifierload(string_t* filepath, 
                                   string_t* nodeName /* default: String() */);
float                     pCvml_NormalBayesClassifierpredict(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Mat_t* samples, Mat_t* results /* default: Mat() */, 
                                   int flags /* default: 0 */);
float                     pCvml_NormalBayesClassifierpredictV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   UMat_t* samples, UMat_t* results /* default: UMat() */, 
                                   int flags /* default: 0 */);
float                     pCvml_NormalBayesClassifierpredictProb(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Mat_t* inputs, Mat_t* outputs, Mat_t* outputProbs, 
                                   int flags /* default: 0 */);
float                     pCvml_NormalBayesClassifierpredictProbV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   UMat_t* inputs, UMat_t* outputs, UMat_t* outputProbs, 
                                   int flags /* default: 0 */);
void                      pCvml_NormalBayesClassifierread(struct  ml_NormalBayesClassifier_t* wrapper, FileNode_t* fn);
void                      pCvml_NormalBayesClassifiersave(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   string_t* filename);
bool                      pCvml_NormalBayesClassifiertrain(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_TrainData* trainData, int flags /* default: 0 */);
bool                      pCvml_NormalBayesClassifiertrainV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Mat_t* samples, int layout, Mat_t* responses);
bool                      pCvml_NormalBayesClassifiertrainV3(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   UMat_t* samples, int layout, UMat_t* responses);
void                      pCvml_NormalBayesClassifierwrite(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name /* default: String() */);
Ptr_ParamGrid*            pCvml_ParamGrid_create(double minVal /* default: 0. */, double maxVal /* default: 0. */, 
                                   double logstep /* default: 1. */);
double                       pCvml_ParamGridGet_logStep(ml_ParamGrid_t* p);
void                      pCvml_ParamGridSet_logStep(ml_ParamGrid_t* p, double propval);
double                       pCvml_ParamGridGet_maxVal(ml_ParamGrid_t* p);
void                      pCvml_ParamGridSet_maxVal(ml_ParamGrid_t* p, double propval);
double                       pCvml_ParamGridGet_minVal(ml_ParamGrid_t* p);
void                      pCvml_ParamGridSet_minVal(ml_ParamGrid_t* p, double propval);
float                     pCvml_RTreescalcError(struct  ml_RTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp);
float                     pCvml_RTreescalcErrorV2(struct  ml_RTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_RTreesclear(struct  ml_RTrees_t* wrapper);
Ptr_RTrees*               pCvml_RTrees_create();
bool                      pCvml_RTreesempty(struct  ml_RTrees_t* wrapper);
int                       pCvml_RTreesgetActiveVarCount(struct  ml_RTrees_t* wrapper);
int                       pCvml_RTreesgetCVFolds(struct  ml_RTrees_t* wrapper);
bool                      pCvml_RTreesgetCalculateVarImportance(struct  ml_RTrees_t* wrapper);
string_t*                 pCvml_RTreesgetDefaultName(struct  ml_RTrees_t* wrapper);
int                       pCvml_RTreesgetMaxCategories(struct  ml_RTrees_t* wrapper);
int                       pCvml_RTreesgetMaxDepth(struct  ml_RTrees_t* wrapper);
int                       pCvml_RTreesgetMinSampleCount(struct  ml_RTrees_t* wrapper);
double                    pCvml_RTreesgetOOBError(struct  ml_RTrees_t* wrapper);
Mat_t*                    pCvml_RTreesgetPriors(struct  ml_RTrees_t* wrapper);
float                     pCvml_RTreesgetRegressionAccuracy(struct  ml_RTrees_t* wrapper);
TermCriteria_t*           pCvml_RTreesgetTermCriteria(struct  ml_RTrees_t* wrapper);
bool                      pCvml_RTreesgetTruncatePrunedTree(struct  ml_RTrees_t* wrapper);
bool                      pCvml_RTreesgetUse1SERule(struct  ml_RTrees_t* wrapper);
bool                      pCvml_RTreesgetUseSurrogates(struct  ml_RTrees_t* wrapper);
int                       pCvml_RTreesgetVarCount(struct  ml_RTrees_t* wrapper);
Mat_t*                    pCvml_RTreesgetVarImportance(struct  ml_RTrees_t* wrapper);
void                      pCvml_RTreesgetVotes(struct  ml_RTrees_t* wrapper, Mat_t* samples, Mat_t* results, int flags);
void                      pCvml_RTreesgetVotesV2(struct  ml_RTrees_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags);
bool                      pCvml_RTreesisClassifier(struct  ml_RTrees_t* wrapper);
bool                      pCvml_RTreesisTrained(struct  ml_RTrees_t* wrapper);
Ptr_RTrees*               pCvml_RTreesload(string_t* filepath, string_t* nodeName /* default: String() */);
float                     pCvml_RTreespredict(struct  ml_RTrees_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_RTreespredictV2(struct  ml_RTrees_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_RTreesread(struct  ml_RTrees_t* wrapper, FileNode_t* fn);
void                      pCvml_RTreessave(struct  ml_RTrees_t* wrapper, string_t* filename);
void                      pCvml_RTreessetActiveVarCount(struct  ml_RTrees_t* wrapper, int _val);
void                      pCvml_RTreessetCVFolds(struct  ml_RTrees_t* wrapper, int _val);
void                      pCvml_RTreessetCalculateVarImportance(struct  ml_RTrees_t* wrapper, bool _val);
void                      pCvml_RTreessetMaxCategories(struct  ml_RTrees_t* wrapper, int _val);
void                      pCvml_RTreessetMaxDepth(struct  ml_RTrees_t* wrapper, int _val);
void                      pCvml_RTreessetMinSampleCount(struct  ml_RTrees_t* wrapper, int _val);
void                      pCvml_RTreessetPriors(struct  ml_RTrees_t* wrapper, Mat_t* _val);
void                      pCvml_RTreessetRegressionAccuracy(struct  ml_RTrees_t* wrapper, float _val);
void                      pCvml_RTreessetTermCriteria(struct  ml_RTrees_t* wrapper, TermCriteria_t* _val);
void                      pCvml_RTreessetTruncatePrunedTree(struct  ml_RTrees_t* wrapper, bool _val);
void                      pCvml_RTreessetUse1SERule(struct  ml_RTrees_t* wrapper, bool _val);
void                      pCvml_RTreessetUseSurrogates(struct  ml_RTrees_t* wrapper, bool _val);
bool                      pCvml_RTreestrain(struct  ml_RTrees_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_RTreestrainV2(struct  ml_RTrees_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses);
bool                      pCvml_RTreestrainV3(struct  ml_RTrees_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_RTreeswrite(struct  ml_RTrees_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_SVMcalcError(struct  ml_SVM_t* wrapper, Ptr_TrainData* data, bool test, Mat_t* resp);
float                     pCvml_SVMcalcErrorV2(struct  ml_SVM_t* wrapper, Ptr_TrainData* data, bool test, UMat_t* resp);
void                      pCvml_SVMclear(struct  ml_SVM_t* wrapper);
Ptr_SVM*                  pCvml_SVM_create();
bool                      pCvml_SVMempty(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetC(struct  ml_SVM_t* wrapper);
Mat_t*                    pCvml_SVMgetClassWeights(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetCoef0(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetDecisionFunction(struct  ml_SVM_t* wrapper, int i, Mat_t* alpha, Mat_t* svidx);
double                    pCvml_SVMgetDecisionFunctionV2(struct  ml_SVM_t* wrapper, int i, UMat_t* alpha, UMat_t* svidx);
Ptr_ParamGrid*            pCvml_SVMgetDefaultGridPtr(int param_id);
string_t*                 pCvml_SVMgetDefaultName(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetDegree(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetGamma(struct  ml_SVM_t* wrapper);
int                       pCvml_SVMgetKernelType(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetNu(struct  ml_SVM_t* wrapper);
double                    pCvml_SVMgetP(struct  ml_SVM_t* wrapper);
Mat_t*                    pCvml_SVMgetSupportVectors(struct  ml_SVM_t* wrapper);
TermCriteria_t*           pCvml_SVMgetTermCriteria(struct  ml_SVM_t* wrapper);
int                       pCvml_SVMgetType(struct  ml_SVM_t* wrapper);
Mat_t*                    pCvml_SVMgetUncompressedSupportVectors(struct  ml_SVM_t* wrapper);
int                       pCvml_SVMgetVarCount(struct  ml_SVM_t* wrapper);
bool                      pCvml_SVMisClassifier(struct  ml_SVM_t* wrapper);
bool                      pCvml_SVMisTrained(struct  ml_SVM_t* wrapper);
Ptr_SVM*                  pCvml_SVMload(string_t* filepath);
float                     pCvml_SVMpredict(struct  ml_SVM_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_SVMpredictV2(struct  ml_SVM_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_SVMread(struct  ml_SVM_t* wrapper, FileNode_t* fn);
void                      pCvml_SVMsave(struct  ml_SVM_t* wrapper, string_t* filename);
void                      pCvml_SVMsetC(struct  ml_SVM_t* wrapper, double _val);
void                      pCvml_SVMsetClassWeights(struct  ml_SVM_t* wrapper, Mat_t* _val);
void                      pCvml_SVMsetCoef0(struct  ml_SVM_t* wrapper, double _val);
void                      pCvml_SVMsetDegree(struct  ml_SVM_t* wrapper, double _val);
void                      pCvml_SVMsetGamma(struct  ml_SVM_t* wrapper, double _val);
void                      pCvml_SVMsetKernel(struct  ml_SVM_t* wrapper, int kernelType);
void                      pCvml_SVMsetNu(struct  ml_SVM_t* wrapper, double _val);
void                      pCvml_SVMsetP(struct  ml_SVM_t* wrapper, double _val);
void                      pCvml_SVMsetTermCriteria(struct  ml_SVM_t* wrapper, TermCriteria_t* _val);
void                      pCvml_SVMsetType(struct  ml_SVM_t* wrapper, int _val);
bool                      pCvml_SVMtrain(struct  ml_SVM_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_SVMtrainV2(struct  ml_SVM_t* wrapper, Mat_t* samples, int layout, Mat_t* responses);
bool                      pCvml_SVMtrainV3(struct  ml_SVM_t* wrapper, UMat_t* samples, int layout, UMat_t* responses);
bool                      pCvml_SVMtrainAuto(struct  ml_SVM_t* wrapper, Mat_t* samples, int layout, Mat_t* responses, 
                                   int kFold /* default: 10 */, 
                                   Ptr_ParamGrid* Cgrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::C) */, 
                                   Ptr_ParamGrid* gammaGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::GAMMA) */, 
                                   Ptr_ParamGrid* pGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::P) */, 
                                   Ptr_ParamGrid* nuGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::NU) */, 
                                   Ptr_ParamGrid* coeffGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::COEF) */, 
                                   Ptr_ParamGrid* degreeGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::DEGREE) */, bool balanced /* default: false */);
bool                      pCvml_SVMtrainAutoV2(struct  ml_SVM_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses, int kFold /* default: 10 */, 
                                   Ptr_ParamGrid* Cgrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::C) */, 
                                   Ptr_ParamGrid* gammaGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::GAMMA) */, 
                                   Ptr_ParamGrid* pGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::P) */, 
                                   Ptr_ParamGrid* nuGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::NU) */, 
                                   Ptr_ParamGrid* coeffGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::COEF) */, 
                                   Ptr_ParamGrid* degreeGrid /* default: ml::SVM::getDefaultGridPtr(ml::SVM::DEGREE) */, bool balanced /* default: false */);
void                      pCvml_SVMwrite(struct  ml_SVM_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_SVMSGDcalcError(struct  ml_SVMSGD_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp);
float                     pCvml_SVMSGDcalcErrorV2(struct  ml_SVMSGD_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_SVMSGDclear(struct  ml_SVMSGD_t* wrapper);
Ptr_SVMSGD*               pCvml_SVMSGD_create();
bool                      pCvml_SVMSGDempty(struct  ml_SVMSGD_t* wrapper);
string_t*                 pCvml_SVMSGDgetDefaultName(struct  ml_SVMSGD_t* wrapper);
float                     pCvml_SVMSGDgetInitialStepSize(struct  ml_SVMSGD_t* wrapper);
float                     pCvml_SVMSGDgetMarginRegularization(struct  ml_SVMSGD_t* wrapper);
int                       pCvml_SVMSGDgetMarginType(struct  ml_SVMSGD_t* wrapper);
float                     pCvml_SVMSGDgetShift(struct  ml_SVMSGD_t* wrapper);
float                     pCvml_SVMSGDgetStepDecreasingPower(struct  ml_SVMSGD_t* wrapper);
int                       pCvml_SVMSGDgetSvmsgdType(struct  ml_SVMSGD_t* wrapper);
TermCriteria_t*           pCvml_SVMSGDgetTermCriteria(struct  ml_SVMSGD_t* wrapper);
int                       pCvml_SVMSGDgetVarCount(struct  ml_SVMSGD_t* wrapper);
Mat_t*                    pCvml_SVMSGDgetWeights(struct  ml_SVMSGD_t* wrapper);
bool                      pCvml_SVMSGDisClassifier(struct  ml_SVMSGD_t* wrapper);
bool                      pCvml_SVMSGDisTrained(struct  ml_SVMSGD_t* wrapper);
Ptr_SVMSGD*               pCvml_SVMSGDload(string_t* filepath, string_t* nodeName /* default: String() */);
float                     pCvml_SVMSGDpredict(struct  ml_SVMSGD_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_SVMSGDpredictV2(struct  ml_SVMSGD_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_SVMSGDread(struct  ml_SVMSGD_t* wrapper, FileNode_t* fn);
void                      pCvml_SVMSGDsave(struct  ml_SVMSGD_t* wrapper, string_t* filename);
void                      pCvml_SVMSGDsetInitialStepSize(struct  ml_SVMSGD_t* wrapper, float InitialStepSize);
void                      pCvml_SVMSGDsetMarginRegularization(struct  ml_SVMSGD_t* wrapper, float marginRegularization);
void                      pCvml_SVMSGDsetMarginType(struct  ml_SVMSGD_t* wrapper, int marginType);
void                      pCvml_SVMSGDsetOptimalParameters(struct  ml_SVMSGD_t* wrapper, 
                                   int svmsgdType /* default: SVMSGD::ASGD */, int marginType /* default: SVMSGD::SOFT_MARGIN */);
void                      pCvml_SVMSGDsetStepDecreasingPower(struct  ml_SVMSGD_t* wrapper, float stepDecreasingPower);
void                      pCvml_SVMSGDsetSvmsgdType(struct  ml_SVMSGD_t* wrapper, int svmsgdType);
void                      pCvml_SVMSGDsetTermCriteria(struct  ml_SVMSGD_t* wrapper, TermCriteria_t* _val);
bool                      pCvml_SVMSGDtrain(struct  ml_SVMSGD_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_SVMSGDtrainV2(struct  ml_SVMSGD_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses);
bool                      pCvml_SVMSGDtrainV3(struct  ml_SVMSGD_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_SVMSGDwrite(struct  ml_SVMSGD_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
float                     pCvml_StatModelcalcError(struct  ml_StatModel_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp);
float                     pCvml_StatModelcalcErrorV2(struct  ml_StatModel_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp);
void                      pCvml_StatModelclear(struct  ml_StatModel_t* wrapper);
bool                      pCvml_StatModelempty(struct  ml_StatModel_t* wrapper);
string_t*                 pCvml_StatModelgetDefaultName(struct  ml_StatModel_t* wrapper);
int                       pCvml_StatModelgetVarCount(struct  ml_StatModel_t* wrapper);
bool                      pCvml_StatModelisClassifier(struct  ml_StatModel_t* wrapper);
bool                      pCvml_StatModelisTrained(struct  ml_StatModel_t* wrapper);
float                     pCvml_StatModelpredict(struct  ml_StatModel_t* wrapper, Mat_t* samples, 
                                   Mat_t* results /* default: Mat() */, int flags /* default: 0 */);
float                     pCvml_StatModelpredictV2(struct  ml_StatModel_t* wrapper, UMat_t* samples, 
                                   UMat_t* results /* default: UMat() */, int flags /* default: 0 */);
void                      pCvml_StatModelread(struct  ml_StatModel_t* wrapper, FileNode_t* fn);
void                      pCvml_StatModelsave(struct  ml_StatModel_t* wrapper, string_t* filename);
bool                      pCvml_StatModeltrain(struct  ml_StatModel_t* wrapper, Ptr_TrainData* trainData, 
                                   int flags /* default: 0 */);
bool                      pCvml_StatModeltrainV2(struct  ml_StatModel_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses);
bool                      pCvml_StatModeltrainV3(struct  ml_StatModel_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses);
void                      pCvml_StatModelwrite(struct  ml_StatModel_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name /* default: String() */);
Ptr_TrainData*            pCvml_TrainData_create(Mat_t* samples, int layout, Mat_t* responses, 
                                   Mat_t* varIdx /* default: Mat() */, Mat_t* sampleIdx /* default: Mat() */, 
                                   Mat_t* sampleWeights /* default: Mat() */, Mat_t* varType /* default: Mat() */);
Ptr_TrainData*            pCvml_TrainData_createV2(UMat_t* samples, int layout, UMat_t* responses, 
                                   UMat_t* varIdx /* default: UMat() */, UMat_t* sampleIdx /* default: UMat() */, 
                                   UMat_t* sampleWeights /* default: UMat() */, UMat_t* varType /* default: UMat() */);
int                       pCvml_TrainDatagetCatCount(struct  ml_TrainData_t* wrapper, int vi);
Mat_t*                    pCvml_TrainDatagetCatMap(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetCatOfs(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetClassLabels(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetDefaultSubstValues(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetLayout(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetMissing(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetNAllVars(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetNSamples(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetNTestSamples(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetNTrainSamples(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetNVars(struct  ml_TrainData_t* wrapper);
void                      pCvml_TrainDatagetNames(struct  ml_TrainData_t* wrapper, vector_String* names);
Mat_t*                    pCvml_TrainDatagetNormCatResponses(struct  ml_TrainData_t* wrapper);
int                       pCvml_TrainDatagetResponseType(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetResponses(struct  ml_TrainData_t* wrapper);
void                      pCvml_TrainDatagetSample(struct  ml_TrainData_t* wrapper, Mat_t* varIdx, int sidx, float* buf);
void                      pCvml_TrainDatagetSampleV2(struct  ml_TrainData_t* wrapper, UMat_t* varIdx, int sidx, 
                                   float* buf);
Mat_t*                    pCvml_TrainDatagetSampleWeights(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetSamples(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetSubMatrix(Mat_t* matrix, Mat_t* idx, int layout);
Mat_t*                    pCvml_TrainDatagetSubVector(Mat_t* vec, Mat_t* idx);
Mat_t*                    pCvml_TrainDatagetTestNormCatResponses(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTestResponses(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTestSampleIdx(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTestSampleWeights(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTestSamples(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTrainNormCatResponses(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTrainResponses(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTrainSampleIdx(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTrainSampleWeights(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetTrainSamples(struct  ml_TrainData_t* wrapper, 
                                   int layout /* default: ROW_SAMPLE */, bool compressSamples /* default: true */, 
                                   bool compressVars /* default: true */);
void                      pCvml_TrainDatagetValues(struct  ml_TrainData_t* wrapper, int vi, Mat_t* sidx, float* values);
void                      pCvml_TrainDatagetValuesV2(struct  ml_TrainData_t* wrapper, int vi, UMat_t* sidx, 
                                   float* values);
Mat_t*                    pCvml_TrainDatagetVarIdx(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetVarSymbolFlags(struct  ml_TrainData_t* wrapper);
Mat_t*                    pCvml_TrainDatagetVarType(struct  ml_TrainData_t* wrapper);
void                      pCvml_TrainDatasetTrainTestSplit(struct  ml_TrainData_t* wrapper, int count, 
                                   bool shuffle /* default: true */);
void                      pCvml_TrainDatasetTrainTestSplitRatio(struct  ml_TrainData_t* wrapper, double ratio, 
                                   bool shuffle /* default: true */);
void                      pCvml_TrainDatashuffleTrainTest(struct  ml_TrainData_t* wrapper);
string_t*                 pCvocl_DeviceOpenCLVersion(struct  ocl_Device_t* wrapper);
string_t*                 pCvocl_DeviceOpenCL_C_Version(struct  ocl_Device_t* wrapper);
int                       pCvocl_DeviceaddressBits(struct  ocl_Device_t* wrapper);
bool                      pCvocl_Deviceavailable(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DevicecompilerAvailable(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicedeviceVersionMajor(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicedeviceVersionMinor(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicedoubleFPConfig(struct  ocl_Device_t* wrapper);
string_t*                 pCvocl_DevicedriverVersion(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceendianLittle(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceerrorCorrectionSupport(struct  ocl_Device_t* wrapper);
int                       pCvocl_DeviceexecutionCapabilities(struct  ocl_Device_t* wrapper);
string_t*                 pCvocl_Deviceextensions(struct  ocl_Device_t* wrapper);
ocl_Device_t*             pCvocl_DevicegetDefault();
int                       pCvocl_DeviceglobalMemCacheLineSize(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DeviceglobalMemCacheSize(struct  ocl_Device_t* wrapper);
int                       pCvocl_DeviceglobalMemCacheType(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DeviceglobalMemSize(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicehalfFPConfig(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DevicehostUnifiedMemory(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_Deviceimage2DMaxHeight(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_Deviceimage2DMaxWidth(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_Deviceimage3DMaxDepth(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_Deviceimage3DMaxHeight(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_Deviceimage3DMaxWidth(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceimageFromBufferSupport(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DeviceimageMaxArraySize(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DeviceimageMaxBufferSize(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceimageSupport(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceintelSubgroupsSupport(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceisAMD(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceisExtensionSupported(struct  ocl_Device_t* wrapper, string_t* extensionName);
bool                      pCvocl_DeviceisIntel(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DeviceisNVidia(struct  ocl_Device_t* wrapper);
bool                      pCvocl_DevicelinkerAvailable(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DevicelocalMemSize(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicelocalMemType(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxClockFrequency(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxComputeUnits(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxConstantArgs(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DevicemaxConstantBufferSize(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DevicemaxMemAllocSize(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DevicemaxParameterSize(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxReadImageArgs(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxSamplers(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DevicemaxWorkGroupSize(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxWorkItemDims(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicemaxWriteImageArgs(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicememBaseAddrAlign(struct  ocl_Device_t* wrapper);
string_t*                 pCvocl_Devicename(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthChar(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthDouble(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthFloat(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthHalf(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthInt(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthLong(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicenativeVectorWidthShort(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthChar(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthDouble(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthFloat(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthHalf(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthInt(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthLong(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicepreferredVectorWidthShort(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DeviceprintfBufferSize(struct  ocl_Device_t* wrapper);
size_t                    pCvocl_DeviceprofilingTimerResolution(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicesingleFPConfig(struct  ocl_Device_t* wrapper);
int                       pCvocl_Devicetype(struct  ocl_Device_t* wrapper);
int                       pCvocl_DevicevendorID(struct  ocl_Device_t* wrapper);
string_t*                 pCvocl_DevicevendorName(struct  ocl_Device_t* wrapper);
string_t*                 pCvocl_Deviceversion(struct  ocl_Device_t* wrapper);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBapplyImage(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Mat_t* image);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBapplyImageV2(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   UMat_t* image);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBapplyImageFeatures(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Mat_t* non_edge, Mat_t* gradient_direction, 
                                   Mat_t* gradient_magnitude, Mat_t* image /* default: Mat() */);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBapplyImageFeaturesV2(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   UMat_t* non_edge, UMat_t* gradient_direction, 
                                   UMat_t* gradient_magnitude, 
                                   UMat_t* image /* default: UMat() */);
void                      pCvsegmentation_IntelligentScissorsMBbuildMap(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Point_t* sourcePt);
void                      pCvsegmentation_IntelligentScissorsMBgetContour(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Point_t* targetPt, Mat_t* contour, 
                                   bool backward /* default: false */);
void                      pCvsegmentation_IntelligentScissorsMBgetContourV2(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Point_t* targetPt, UMat_t* contour, 
                                   bool backward /* default: false */);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBsetEdgeFeatureCannyParameters(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   double threshold1, double threshold2, 
                                   int apertureSize /* default: 3 */, 
                                   bool L2gradient /* default: false */);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBsetEdgeFeatureZeroCrossingParameters(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   float gradient_magnitude_min_value /* default: 0.0f */);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBsetGradientMagnitudeMaxLimit(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   float gradient_magnitude_threshold_max /* default: 0.0f */);
segmentation_IntelligentScissorsMB_t* pCvsegmentation_IntelligentScissorsMBsetWeights(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   float weight_non_edge, float weight_gradient_direction, 
                                   float weight_gradient_magnitude);
Ptr_OriginalClassName*    pCvutils_nested_OriginalClassName_create(
                                   utils_nested_OriginalClassName_Params_t* params /* default: utils::nested::OriginalClassName::Params() */);
float                     pCvutils_nested_OriginalClassNamegetFloatParam(struct  utils_nested_OriginalClassName_t* wrapper);
int                       pCvutils_nested_OriginalClassNamegetIntParam(struct  utils_nested_OriginalClassName_t* wrapper);
string_t*                 pCvutils_nested_OriginalClassNameoriginalName();
float                       pCvutils_nested_OriginalClassName_ParamsGet_float_value(utils_nested_OriginalClassName_Params_t* p);
void                      pCvutils_nested_OriginalClassName_ParamsSet_float_value(utils_nested_OriginalClassName_Params_t* p, float propval);
int                       pCvutils_nested_OriginalClassName_ParamsGet_int_value(utils_nested_OriginalClassName_Params_t* p);
void                      pCvutils_nested_OriginalClassName_ParamsSet_int_value(utils_nested_OriginalClassName_Params_t* p, int propval);
RotatedRect_t*            pCvCamShift(Mat_t* probImage, Rect_t* window, TermCriteria_t* criteria);
RotatedRect_t*            pCvCamShiftV2(UMat_t* probImage, Rect_t* window, TermCriteria_t* criteria);
void                      pCvCanny(Mat_t* image, Mat_t* edges, double threshold1, double threshold2, 
                                   int apertureSize /* default: 3 */, bool L2gradient /* default: false */);
void                      pCvCannyV2(UMat_t* image, UMat_t* edges, double threshold1, double threshold2, 
                                   int apertureSize /* default: 3 */, bool L2gradient /* default: false */);
void                      pCvCannyV3(Mat_t* dx, Mat_t* dy, Mat_t* edges, double threshold1, double threshold2, 
                                   bool L2gradient /* default: false */);
void                      pCvCannyV4(UMat_t* dx, UMat_t* dy, UMat_t* edges, double threshold1, double threshold2, 
                                   bool L2gradient /* default: false */);
float                     pCvEMD(Mat_t* signature1, Mat_t* signature2, int distType, Mat_t* cost /* default: Mat() */, 
                                   Ptr_float* lowerBound /* default: Ptr<float>() */, Mat_t* flow /* default: Mat() */);
float                     pCvEMDV2(UMat_t* signature1, UMat_t* signature2, int distType, 
                                   UMat_t* cost /* default: UMat() */, Ptr_float* lowerBound /* default: Ptr<float>() */, 
                                   UMat_t* flow /* default: UMat() */);
void                      pCvGaussianBlur(Mat_t* src, Mat_t* dst, Size_t* ksize, double sigmaX, 
                                   double sigmaY /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvGaussianBlurV2(UMat_t* src, UMat_t* dst, Size_t* ksize, double sigmaX, 
                                   double sigmaY /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvHoughCircles(Mat_t* image, Mat_t* circles, int method, double dp, double minDist, 
                                   double param1 /* default: 100 */, double param2 /* default: 100 */, int minRadius /* default: 0 */, 
                                   int maxRadius /* default: 0 */);
void                      pCvHoughCirclesV2(UMat_t* image, UMat_t* circles, int method, double dp, double minDist, 
                                   double param1 /* default: 100 */, double param2 /* default: 100 */, int minRadius /* default: 0 */, 
                                   int maxRadius /* default: 0 */);
void                      pCvHoughLines(Mat_t* image, Mat_t* lines, double rho, double theta, int threshold, 
                                   double srn /* default: 0 */, double stn /* default: 0 */, double min_theta /* default: 0 */, 
                                   double max_theta /* default: CV_PI */);
void                      pCvHoughLinesV2(UMat_t* image, UMat_t* lines, double rho, double theta, int threshold, 
                                   double srn /* default: 0 */, double stn /* default: 0 */, double min_theta /* default: 0 */, 
                                   double max_theta /* default: CV_PI */);
void                      pCvHoughLinesP(Mat_t* image, Mat_t* lines, double rho, double theta, int threshold, 
                                   double minLineLength /* default: 0 */, double maxLineGap /* default: 0 */);
void                      pCvHoughLinesPV2(UMat_t* image, UMat_t* lines, double rho, double theta, int threshold, 
                                   double minLineLength /* default: 0 */, double maxLineGap /* default: 0 */);
void                      pCvHoughLinesPointSet(Mat_t* point, Mat_t* lines, int lines_max, int threshold, 
                                   double min_rho, double max_rho, double rho_step, double min_theta, double max_theta, 
                                   double theta_step);
void                      pCvHoughLinesPointSetV2(UMat_t* point, UMat_t* lines, int lines_max, int threshold, 
                                   double min_rho, double max_rho, double rho_step, double min_theta, double max_theta, 
                                   double theta_step);
void                      pCvHoughLinesWithAccumulator(Mat_t* image, Mat_t* lines, double rho, double theta, 
                                   int threshold, double srn /* default: 0 */, double stn /* default: 0 */, 
                                   double min_theta /* default: 0 */, double max_theta /* default: CV_PI */);
void                      pCvHoughLinesWithAccumulatorV2(UMat_t* image, UMat_t* lines, double rho, double theta, 
                                   int threshold, double srn /* default: 0 */, double stn /* default: 0 */, 
                                   double min_theta /* default: 0 */, double max_theta /* default: CV_PI */);
void                      pCvHuMoments(Moments_t* m, Mat_t* hu);
void                      pCvHuMomentsV2(Moments_t* m, UMat_t* hu);
void                      pCvLUT(Mat_t* src, Mat_t* lut, Mat_t* dst);
void                      pCvLUTV2(UMat_t* src, UMat_t* lut, UMat_t* dst);
void                      pCvLaplacian(Mat_t* src, Mat_t* dst, int ddepth, int ksize /* default: 1 */, 
                                   double scale /* default: 1 */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvLaplacianV2(UMat_t* src, UMat_t* dst, int ddepth, int ksize /* default: 1 */, 
                                   double scale /* default: 1 */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
double                    pCvMahalanobis(Mat_t* v1, Mat_t* v2, Mat_t* icovar);
double                    pCvMahalanobisV2(UMat_t* v1, UMat_t* v2, UMat_t* icovar);
void                      pCvPCABackProject(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* _result);
void                      pCvPCABackProjectV2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* _result);
void                      pCvPCACompute(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, 
                                   int maxComponents /* default: 0 */);
void                      pCvPCAComputeV2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, 
                                   int maxComponents /* default: 0 */);
void                      pCvPCAComputeV3(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, double retainedVariance);
void                      pCvPCAComputeV4(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, double retainedVariance);
void                      pCvPCACompute2(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* eigenvalues, 
                                   int maxComponents /* default: 0 */);
void                      pCvPCACompute2V2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* eigenvalues, 
                                   int maxComponents /* default: 0 */);
void                      pCvPCACompute2V3(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* eigenvalues, 
                                   double retainedVariance);
void                      pCvPCACompute2V4(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* eigenvalues, 
                                   double retainedVariance);
void                      pCvPCAProject(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* _result);
void                      pCvPCAProjectV2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* _result);
double                    pCvPSNR(Mat_t* src1, Mat_t* src2, double R /* default: 255. */);
double                    pCvPSNRV2(UMat_t* src1, UMat_t* src2, double R /* default: 255. */);
Vec3d_t*                  pCvRQDecomp3x3(Mat_t* src, Mat_t* mtxR, Mat_t* mtxQ, Mat_t* Qx /* default: Mat() */, 
                                   Mat_t* Qy /* default: Mat() */, Mat_t* Qz /* default: Mat() */);
Vec3d_t*                  pCvRQDecomp3x3V2(UMat_t* src, UMat_t* mtxR, UMat_t* mtxQ, UMat_t* Qx /* default: UMat() */, 
                                   UMat_t* Qy /* default: UMat() */, UMat_t* Qz /* default: UMat() */);
void                      pCvRodrigues(Mat_t* src, Mat_t* dst, Mat_t* jacobian /* default: Mat() */);
void                      pCvRodriguesV2(UMat_t* src, UMat_t* dst, UMat_t* jacobian /* default: UMat() */);
void                      pCvSVBackSubst(Mat_t* w, Mat_t* u, Mat_t* vt, Mat_t* rhs, Mat_t* dst);
void                      pCvSVBackSubstV2(UMat_t* w, UMat_t* u, UMat_t* vt, UMat_t* rhs, UMat_t* dst);
void                      pCvSVDecomp(Mat_t* src, Mat_t* w, Mat_t* u, Mat_t* vt, int flags /* default: 0 */);
void                      pCvSVDecompV2(UMat_t* src, UMat_t* w, UMat_t* u, UMat_t* vt, int flags /* default: 0 */);
void                      pCvScharr(Mat_t* src, Mat_t* dst, int ddepth, int dx, int dy, double scale /* default: 1 */, 
                                   double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvScharrV2(UMat_t* src, UMat_t* dst, int ddepth, int dx, int dy, 
                                   double scale /* default: 1 */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvSobel(Mat_t* src, Mat_t* dst, int ddepth, int dx, int dy, int ksize /* default: 3 */, 
                                   double scale /* default: 1 */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvSobelV2(UMat_t* src, UMat_t* dst, int ddepth, int dx, int dy, int ksize /* default: 3 */, 
                                   double scale /* default: 1 */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvabsdiff(Mat_t* src1, Mat_t* src2, Mat_t* dst);
void                      pCvabsdiffV2(UMat_t* src1, UMat_t* src2, UMat_t* dst);
void                      pCvaccumulate(Mat_t* src, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvaccumulateV2(UMat_t* src, UMat_t* dst, UMat_t* mask /* default: UMat() */);
void                      pCvaccumulateProduct(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvaccumulateProductV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvaccumulateSquare(Mat_t* src, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvaccumulateSquareV2(UMat_t* src, UMat_t* dst, UMat_t* mask /* default: UMat() */);
void                      pCvaccumulateWeighted(Mat_t* src, Mat_t* dst, double alpha, Mat_t* mask /* default: Mat() */);
void                      pCvaccumulateWeightedV2(UMat_t* src, UMat_t* dst, double alpha, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvadaptiveThreshold(Mat_t* src, Mat_t* dst, double maxValue, int adaptiveMethod, 
                                   int thresholdType, int blockSize, double C);
void                      pCvadaptiveThresholdV2(UMat_t* src, UMat_t* dst, double maxValue, int adaptiveMethod, 
                                   int thresholdType, int blockSize, double C);
void                      pCvadd(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask /* default: Mat() */, 
                                   int dtype /* default: -1 */);
void                      pCvaddV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask /* default: UMat() */, 
                                   int dtype /* default: -1 */);
void                      pCvaddText(Mat_t* img, string_t* text, Point_t* org, string_t* nameFont, 
                                   int pointSize /* default: -1 */, Scalar_t* color /* default: Scalar::all(0) */, 
                                   int weight /* default: QT_FONT_NORMAL */, int style /* default: QT_STYLE_NORMAL */, int spacing /* default: 0 */);
void                      pCvaddWeighted(Mat_t* src1, double alpha, Mat_t* src2, double beta, double gamma, Mat_t* dst, 
                                   int dtype /* default: -1 */);
void                      pCvaddWeightedV2(UMat_t* src1, double alpha, UMat_t* src2, double beta, double gamma, 
                                   UMat_t* dst, int dtype /* default: -1 */);
void                      pCvapplyColorMap(Mat_t* src, Mat_t* dst, int colormap);
void                      pCvapplyColorMapV2(UMat_t* src, UMat_t* dst, int colormap);
void                      pCvapplyColorMapV3(Mat_t* src, Mat_t* dst, Mat_t* userColor);
void                      pCvapplyColorMapV4(UMat_t* src, UMat_t* dst, UMat_t* userColor);
void                      pCvapproxPolyDP(Mat_t* curve, Mat_t* approxCurve, double epsilon, bool closed);
void                      pCvapproxPolyDPV2(UMat_t* curve, UMat_t* approxCurve, double epsilon, bool closed);
double                    pCvarcLength(Mat_t* curve, bool closed);
double                    pCvarcLengthV2(UMat_t* curve, bool closed);
void                      pCvarrowedLine(Mat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, 
                                   int thickness /* default: 1 */, int line_type /* default: 8 */, int shift /* default: 0 */, 
                                   double tipLength /* default: 0.1 */);
void                      pCvarrowedLineV2(UMat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, 
                                   int thickness /* default: 1 */, int line_type /* default: 8 */, int shift /* default: 0 */, 
                                   double tipLength /* default: 0.1 */);
void                      pCvbatchDistance(Mat_t* src1, Mat_t* src2, Mat_t* dist, int dtype, Mat_t* nidx, 
                                   int normType /* default: NORM_L2 */, int K /* default: 0 */, Mat_t* mask /* default: Mat() */, 
                                   int update /* default: 0 */, bool crosscheck /* default: false */);
void                      pCvbatchDistanceV2(UMat_t* src1, UMat_t* src2, UMat_t* dist, int dtype, UMat_t* nidx, 
                                   int normType /* default: NORM_L2 */, int K /* default: 0 */, UMat_t* mask /* default: UMat() */, 
                                   int update /* default: 0 */, bool crosscheck /* default: false */);
void                      pCvbilateralFilter(Mat_t* src, Mat_t* dst, int d, double sigmaColor, double sigmaSpace, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvbilateralFilterV2(UMat_t* src, UMat_t* dst, int d, double sigmaColor, double sigmaSpace, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvbitwise_and(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvbitwise_andV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask /* default: UMat() */);
void                      pCvbitwise_not(Mat_t* src, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvbitwise_notV2(UMat_t* src, UMat_t* dst, UMat_t* mask /* default: UMat() */);
void                      pCvbitwise_or(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvbitwise_orV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask /* default: UMat() */);
void                      pCvbitwise_xor(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask /* default: Mat() */);
void                      pCvbitwise_xorV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask /* default: UMat() */);
void                      pCvblendLinear(Mat_t* src1, Mat_t* src2, Mat_t* weights1, Mat_t* weights2, Mat_t* dst);
void                      pCvblendLinearV2(UMat_t* src1, UMat_t* src2, UMat_t* weights1, UMat_t* weights2, UMat_t* dst);
void                      pCvblur(Mat_t* src, Mat_t* dst, Size_t* ksize, Point_t* anchor /* default: Point(-1,-1) */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvblurV2(UMat_t* src, UMat_t* dst, Size_t* ksize, 
                                   Point_t* anchor /* default: Point(-1,-1) */, int borderType /* default: BORDER_DEFAULT */);
int                       pCvborderInterpolate(int p, int len, int borderType);
Rect_t*                   pCvboundingRect(Mat_t* _array);
Rect_t*                   pCvboundingRectV2(UMat_t* _array);
void                      pCvboxFilter(Mat_t* src, Mat_t* dst, int ddepth, Size_t* ksize, 
                                   Point_t* anchor /* default: Point(-1,-1) */, bool normalize /* default: true */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvboxFilterV2(UMat_t* src, UMat_t* dst, int ddepth, Size_t* ksize, 
                                   Point_t* anchor /* default: Point(-1,-1) */, bool normalize /* default: true */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvboxPoints(RotatedRect_t* box, Mat_t* points);
void                      pCvboxPointsV2(RotatedRect_t* box, UMat_t* points);
int                       pCvbuildOpticalFlowPyramid(Mat_t* img, vector_Mat* pyramid, Size_t* winSize, int maxLevel, 
                                   bool withDerivatives /* default: true */, int pyrBorder /* default: BORDER_REFLECT_101 */, 
                                   int derivBorder /* default: BORDER_CONSTANT */, bool tryReuseInputImage /* default: true */);
int                       pCvbuildOpticalFlowPyramidV2(UMat_t* img, vector_UMat* pyramid, Size_t* winSize, int maxLevel, 
                                   bool withDerivatives /* default: true */, int pyrBorder /* default: BORDER_REFLECT_101 */, 
                                   int derivBorder /* default: BORDER_CONSTANT */, bool tryReuseInputImage /* default: true */);
void                      pCvcalcBackProject(vector_Mat* images, vector_int* channels, Mat_t* hist, Mat_t* dst, 
                                   vector_float* ranges, double scale);
void                      pCvcalcBackProjectV2(vector_UMat* images, vector_int* channels, UMat_t* hist, UMat_t* dst, 
                                   vector_float* ranges, double scale);
void                      pCvcalcCovarMatrix(Mat_t* samples, Mat_t* covar, Mat_t* mean, int flags, 
                                   int ctype /* default: CV_64F */);
void                      pCvcalcCovarMatrixV2(UMat_t* samples, UMat_t* covar, UMat_t* mean, int flags, 
                                   int ctype /* default: CV_64F */);
void                      pCvcalcHist(vector_Mat* images, vector_int* channels, Mat_t* mask, Mat_t* hist, 
                                   vector_int* histSize, vector_float* ranges, bool accumulate /* default: false */);
void                      pCvcalcHistV2(vector_UMat* images, vector_int* channels, UMat_t* mask, UMat_t* hist, 
                                   vector_int* histSize, vector_float* ranges, bool accumulate /* default: false */);
void                      pCvcalcOpticalFlowFarneback(Mat_t* prev, Mat_t* next, Mat_t* flow, double pyr_scale, 
                                   int levels, int winsize, int iterations, int poly_n, double poly_sigma, 
                                   int flags);
void                      pCvcalcOpticalFlowFarnebackV2(UMat_t* prev, UMat_t* next, UMat_t* flow, double pyr_scale, 
                                   int levels, int winsize, int iterations, int poly_n, double poly_sigma, 
                                   int flags);
void                      pCvcalcOpticalFlowPyrLK(Mat_t* prevImg, Mat_t* nextImg, Mat_t* prevPts, Mat_t* nextPts, 
                                   Mat_t* status, Mat_t* err, Size_t* winSize /* default: Size(21,21) */, 
                                   int maxLevel /* default: 3 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01) */, int flags /* default: 0 */, 
                                   double minEigThreshold /* default: 1e-4 */);
void                      pCvcalcOpticalFlowPyrLKV2(UMat_t* prevImg, UMat_t* nextImg, UMat_t* prevPts, UMat_t* nextPts, 
                                   UMat_t* status, UMat_t* err, Size_t* winSize /* default: Size(21,21) */, 
                                   int maxLevel /* default: 3 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01) */, int flags /* default: 0 */, 
                                   double minEigThreshold /* default: 1e-4 */);
double                    pCvcalibrateCamera(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* imageSize, 
                                   Mat_t* cameraMatrix, Mat_t* distCoeffs, vector_Mat* rvecs, vector_Mat* tvecs, 
                                   int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraV2(vector_UMat* objectPoints, vector_UMat* imagePoints, Size_t* imageSize, 
                                   UMat_t* cameraMatrix, UMat_t* distCoeffs, vector_UMat* rvecs, vector_UMat* tvecs, 
                                   int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraExtended(vector_Mat* objectPoints, vector_Mat* imagePoints, 
                                   Size_t* imageSize, Mat_t* cameraMatrix, Mat_t* distCoeffs, vector_Mat* rvecs, 
                                   vector_Mat* tvecs, Mat_t* stdDeviationsIntrinsics, Mat_t* stdDeviationsExtrinsics, 
                                   Mat_t* perViewErrors, int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraExtendedV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* imageSize, UMat_t* cameraMatrix, UMat_t* distCoeffs, vector_UMat* rvecs, 
                                   vector_UMat* tvecs, UMat_t* stdDeviationsIntrinsics, 
                                   UMat_t* stdDeviationsExtrinsics, UMat_t* perViewErrors, int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraRO(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* imageSize, 
                                   int iFixedPoint, Mat_t* cameraMatrix, Mat_t* distCoeffs, vector_Mat* rvecs, 
                                   vector_Mat* tvecs, Mat_t* newObjPoints, int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraROV2(vector_UMat* objectPoints, vector_UMat* imagePoints, Size_t* imageSize, 
                                   int iFixedPoint, UMat_t* cameraMatrix, UMat_t* distCoeffs, vector_UMat* rvecs, 
                                   vector_UMat* tvecs, UMat_t* newObjPoints, int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraROExtended(vector_Mat* objectPoints, vector_Mat* imagePoints, 
                                   Size_t* imageSize, int iFixedPoint, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   vector_Mat* rvecs, vector_Mat* tvecs, Mat_t* newObjPoints, 
                                   Mat_t* stdDeviationsIntrinsics, Mat_t* stdDeviationsExtrinsics, Mat_t* stdDeviationsObjPoints, 
                                   Mat_t* perViewErrors, int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
double                    pCvcalibrateCameraROExtendedV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* imageSize, int iFixedPoint, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   vector_UMat* rvecs, vector_UMat* tvecs, UMat_t* newObjPoints, 
                                   UMat_t* stdDeviationsIntrinsics, UMat_t* stdDeviationsExtrinsics, 
                                   UMat_t* stdDeviationsObjPoints, UMat_t* perViewErrors, int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) */);
void                      pCvcalibrateHandEye(vector_Mat* R_gripper2base, vector_Mat* t_gripper2base, 
                                   vector_Mat* R_target2cam, vector_Mat* t_target2cam, Mat_t* R_cam2gripper, Mat_t* t_cam2gripper, 
                                   HandEyeCalibrationMethod method /* default: CALIB_HAND_EYE_TSAI */);
void                      pCvcalibrateHandEyeV2(vector_UMat* R_gripper2base, vector_UMat* t_gripper2base, 
                                   vector_UMat* R_target2cam, vector_UMat* t_target2cam, UMat_t* R_cam2gripper, 
                                   UMat_t* t_cam2gripper, HandEyeCalibrationMethod method /* default: CALIB_HAND_EYE_TSAI */);
void                      pCvcalibrateRobotWorldHandEye(vector_Mat* R_world2cam, vector_Mat* t_world2cam, 
                                   vector_Mat* R_base2gripper, vector_Mat* t_base2gripper, Mat_t* R_base2world, 
                                   Mat_t* t_base2world, Mat_t* R_gripper2cam, Mat_t* t_gripper2cam, 
                                   RobotWorldHandEyeCalibrationMethod method /* default: CALIB_ROBOT_WORLD_HAND_EYE_SHAH */);
void                      pCvcalibrateRobotWorldHandEyeV2(vector_UMat* R_world2cam, vector_UMat* t_world2cam, 
                                   vector_UMat* R_base2gripper, vector_UMat* t_base2gripper, UMat_t* R_base2world, 
                                   UMat_t* t_base2world, UMat_t* R_gripper2cam, UMat_t* t_gripper2cam, 
                                   RobotWorldHandEyeCalibrationMethod method /* default: CALIB_ROBOT_WORLD_HAND_EYE_SHAH */);
void                      pCvcalibrationMatrixValues(Mat_t* cameraMatrix, Size_t* imageSize, double apertureWidth, 
                                   double apertureHeight, double fovx, double fovy, double focalLength, 
                                   Point2d_t* principalPoint, double aspectRatio);
void                      pCvcalibrationMatrixValuesV2(UMat_t* cameraMatrix, Size_t* imageSize, double apertureWidth, 
                                   double apertureHeight, double fovx, double fovy, double focalLength, 
                                   Point2d_t* principalPoint, double aspectRatio);
void                      pCvcartToPolar(Mat_t* x, Mat_t* y, Mat_t* magnitude, Mat_t* angle, 
                                   bool angleInDegrees /* default: false */);
void                      pCvcartToPolarV2(UMat_t* x, UMat_t* y, UMat_t* magnitude, UMat_t* angle, 
                                   bool angleInDegrees /* default: false */);
bool                      pCvcheckChessboard(Mat_t* img, Size_t* size);
bool                      pCvcheckChessboardV2(UMat_t* img, Size_t* size);
bool                      pCvcheckHardwareSupport(int feature);
bool                      pCvcheckRange(Mat_t* a, bool quiet /* default: true */, Point_t* _pos /* default: 0 */, 
                                   double minVal /* default: -DBL_MAX */, double maxVal /* default: DBL_MAX */);
bool                      pCvcheckRangeV2(UMat_t* a, bool quiet /* default: true */, Point_t* _pos /* default: 0 */, 
                                   double minVal /* default: -DBL_MAX */, double maxVal /* default: DBL_MAX */);
void                      pCvcircle(Mat_t* img, Point_t* center, int radius, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvcircleV2(UMat_t* img, Point_t* center, int radius, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
bool                      pCvclipLine(Rect_t* imgRect, Point_t* pt1, Point_t* pt2);
void                      pCvcolorChange(Mat_t* src, Mat_t* mask, Mat_t* dst, float red_mul /* default: 1.0f */, 
                                   float green_mul /* default: 1.0f */, float blue_mul /* default: 1.0f */);
void                      pCvcolorChangeV2(UMat_t* src, UMat_t* mask, UMat_t* dst, float red_mul /* default: 1.0f */, 
                                   float green_mul /* default: 1.0f */, float blue_mul /* default: 1.0f */);
void                      pCvcompare(Mat_t* src1, Mat_t* src2, Mat_t* dst, int cmpop);
void                      pCvcompareV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, int cmpop);
double                    pCvcompareHist(Mat_t* H1, Mat_t* H2, int method);
double                    pCvcompareHistV2(UMat_t* H1, UMat_t* H2, int method);
void                      pCvcompleteSymm(Mat_t* m, bool lowerToUpper /* default: false */);
void                      pCvcompleteSymmV2(UMat_t* m, bool lowerToUpper /* default: false */);
void                      pCvcomposeRT(Mat_t* rvec1, Mat_t* tvec1, Mat_t* rvec2, Mat_t* tvec2, Mat_t* rvec3, 
                                   Mat_t* tvec3, Mat_t* dr3dr1 /* default: Mat() */, Mat_t* dr3dt1 /* default: Mat() */, 
                                   Mat_t* dr3dr2 /* default: Mat() */, Mat_t* dr3dt2 /* default: Mat() */, Mat_t* dt3dr1 /* default: Mat() */, 
                                   Mat_t* dt3dt1 /* default: Mat() */, Mat_t* dt3dr2 /* default: Mat() */, Mat_t* dt3dt2 /* default: Mat() */);
void                      pCvcomposeRTV2(UMat_t* rvec1, UMat_t* tvec1, UMat_t* rvec2, UMat_t* tvec2, UMat_t* rvec3, 
                                   UMat_t* tvec3, UMat_t* dr3dr1 /* default: UMat() */, UMat_t* dr3dt1 /* default: UMat() */, 
                                   UMat_t* dr3dr2 /* default: UMat() */, UMat_t* dr3dt2 /* default: UMat() */, UMat_t* dt3dr1 /* default: UMat() */, 
                                   UMat_t* dt3dt1 /* default: UMat() */, UMat_t* dt3dr2 /* default: UMat() */, UMat_t* dt3dt2 /* default: UMat() */);
void                      pCvcomputeCorrespondEpilines(Mat_t* points, int whichImage, Mat_t* F, Mat_t* lines);
void                      pCvcomputeCorrespondEpilinesV2(UMat_t* points, int whichImage, UMat_t* F, UMat_t* lines);
double                    pCvcomputeECC(Mat_t* templateImage, Mat_t* inputImage, Mat_t* inputMask /* default: Mat() */);
double                    pCvcomputeECCV2(UMat_t* templateImage, UMat_t* inputImage, 
                                   UMat_t* inputMask /* default: UMat() */);
int                       pCvconnectedComponents(Mat_t* image, Mat_t* labels, int connectivity /* default: 8 */, 
                                   int ltype /* default: CV_32S */);
int                       pCvconnectedComponentsV2(UMat_t* image, UMat_t* labels, int connectivity /* default: 8 */, 
                                   int ltype /* default: CV_32S */);
int                       pCvconnectedComponentsWithAlgorithm(Mat_t* image, Mat_t* labels, int connectivity, int ltype, 
                                   int ccltype);
int                       pCvconnectedComponentsWithAlgorithmV2(UMat_t* image, UMat_t* labels, int connectivity, 
                                   int ltype, int ccltype);
int                       pCvconnectedComponentsWithStats(Mat_t* image, Mat_t* labels, Mat_t* stats, Mat_t* centroids, 
                                   int connectivity /* default: 8 */, int ltype /* default: CV_32S */);
int                       pCvconnectedComponentsWithStatsV2(UMat_t* image, UMat_t* labels, UMat_t* stats, 
                                   UMat_t* centroids, int connectivity /* default: 8 */, 
                                   int ltype /* default: CV_32S */);
int                       pCvconnectedComponentsWithStatsWithAlgorithm(Mat_t* image, Mat_t* labels, Mat_t* stats, 
                                   Mat_t* centroids, int connectivity, int ltype, int ccltype);
int                       pCvconnectedComponentsWithStatsWithAlgorithmV2(UMat_t* image, UMat_t* labels, UMat_t* stats, 
                                   UMat_t* centroids, int connectivity, int ltype, int ccltype);
double                    pCvcontourArea(Mat_t* contour, bool oriented /* default: false */);
double                    pCvcontourAreaV2(UMat_t* contour, bool oriented /* default: false */);
void                      pCvconvertFp16(Mat_t* src, Mat_t* dst);
void                      pCvconvertFp16V2(UMat_t* src, UMat_t* dst);
void                      pCvconvertMaps(Mat_t* map1, Mat_t* map2, Mat_t* dstmap1, Mat_t* dstmap2, int dstmap1type, 
                                   bool nninterpolation /* default: false */);
void                      pCvconvertMapsV2(UMat_t* map1, UMat_t* map2, UMat_t* dstmap1, UMat_t* dstmap2, 
                                   int dstmap1type, bool nninterpolation /* default: false */);
void                      pCvconvertPointsFromHomogeneous(Mat_t* src, Mat_t* dst);
void                      pCvconvertPointsFromHomogeneousV2(UMat_t* src, UMat_t* dst);
void                      pCvconvertPointsToHomogeneous(Mat_t* src, Mat_t* dst);
void                      pCvconvertPointsToHomogeneousV2(UMat_t* src, UMat_t* dst);
void                      pCvconvertScaleAbs(Mat_t* src, Mat_t* dst, double alpha /* default: 1 */, 
                                   double beta /* default: 0 */);
void                      pCvconvertScaleAbsV2(UMat_t* src, UMat_t* dst, double alpha /* default: 1 */, 
                                   double beta /* default: 0 */);
void                      pCvconvexHull(Mat_t* points, Mat_t* hull, bool clockwise /* default: false */, 
                                   bool returnPoints /* default: true */);
void                      pCvconvexHullV2(UMat_t* points, UMat_t* hull, bool clockwise /* default: false */, 
                                   bool returnPoints /* default: true */);
void                      pCvconvexityDefects(Mat_t* contour, Mat_t* convexhull, Mat_t* convexityDefects);
void                      pCvconvexityDefectsV2(UMat_t* contour, UMat_t* convexhull, UMat_t* convexityDefects);
void                      pCvcopyMakeBorder(Mat_t* src, Mat_t* dst, int top, int bottom, int left, int right, 
                                   int borderType, Scalar_t* value /* default: Scalar() */);
void                      pCvcopyMakeBorderV2(UMat_t* src, UMat_t* dst, int top, int bottom, int left, int right, 
                                   int borderType, Scalar_t* value /* default: Scalar() */);
void                      pCvcopyTo(Mat_t* src, Mat_t* dst, Mat_t* mask);
void                      pCvcopyToV2(UMat_t* src, UMat_t* dst, UMat_t* mask);
void                      pCvcornerEigenValsAndVecs(Mat_t* src, Mat_t* dst, int blockSize, int ksize, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvcornerEigenValsAndVecsV2(UMat_t* src, UMat_t* dst, int blockSize, int ksize, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvcornerHarris(Mat_t* src, Mat_t* dst, int blockSize, int ksize, double k, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvcornerHarrisV2(UMat_t* src, UMat_t* dst, int blockSize, int ksize, double k, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvcornerMinEigenVal(Mat_t* src, Mat_t* dst, int blockSize, int ksize /* default: 3 */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvcornerMinEigenValV2(UMat_t* src, UMat_t* dst, int blockSize, int ksize /* default: 3 */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvcornerSubPix(Mat_t* image, Mat_t* corners, Size_t* winSize, Size_t* zeroZone, 
                                   TermCriteria_t* criteria);
void                      pCvcornerSubPixV2(UMat_t* image, UMat_t* corners, Size_t* winSize, Size_t* zeroZone, 
                                   TermCriteria_t* criteria);
void                      pCvcorrectMatches(Mat_t* F, Mat_t* points1, Mat_t* points2, Mat_t* newPoints1, 
                                   Mat_t* newPoints2);
void                      pCvcorrectMatchesV2(UMat_t* F, UMat_t* points1, UMat_t* points2, UMat_t* newPoints1, 
                                   UMat_t* newPoints2);
int                       pCvcountNonZero(Mat_t* src);
int                       pCvcountNonZeroV2(UMat_t* src);
Ptr_AlignMTB*             pCvcreateAlignMTB(int max_bits /* default: 6 */, int exclude_range /* default: 4 */, 
                                   bool cut /* default: true */);
Ptr_BackgroundSubtractorKNN* pCvcreateBackgroundSubtractorKNN(int history /* default: 500 */, 
                                   double dist2Threshold /* default: 400.0 */, bool detectShadows /* default: true */);
Ptr_BackgroundSubtractorMOG2* pCvcreateBackgroundSubtractorMOG2(int history /* default: 500 */, 
                                   double varThreshold /* default: 16 */, bool detectShadows /* default: true */);
Ptr_CLAHE*                pCvcreateCLAHE(double clipLimit /* default: 40.0 */, 
                                   Size_t* tileGridSize /* default: Size(8, 8) */);
Ptr_CalibrateDebevec*     pCvcreateCalibrateDebevec(int samples /* default: 70 */, float lambda /* default: 10.0f */, 
                                   bool _random /* default: false */);
Ptr_CalibrateRobertson*   pCvcreateCalibrateRobertson(int max_iter /* default: 30 */, 
                                   float threshold /* default: 0.01f */);
Ptr_GeneralizedHoughBallard* pCvcreateGeneralizedHoughBallard();
Ptr_GeneralizedHoughGuil* pCvcreateGeneralizedHoughGuil();
void                      pCvcreateHanningWindow(Mat_t* dst, Size_t* winSize, int _type);
void                      pCvcreateHanningWindowV2(UMat_t* dst, Size_t* winSize, int _type);
Ptr_LineSegmentDetector*  pCvcreateLineSegmentDetector(int refine /* default: LSD_REFINE_STD */, 
                                   double scale /* default: 0.8 */, double sigma_scale /* default: 0.6 */, 
                                   double quant /* default: 2.0 */, double ang_th /* default: 22.5 */, 
                                   double log_eps /* default: 0 */, double density_th /* default: 0.7 */, 
                                   int n_bins /* default: 1024 */);
Ptr_MergeDebevec*         pCvcreateMergeDebevec();
Ptr_MergeMertens*         pCvcreateMergeMertens(float contrast_weight /* default: 1.0f */, 
                                   float saturation_weight /* default: 1.0f */, float exposure_weight /* default: 0.0f */);
Ptr_MergeRobertson*       pCvcreateMergeRobertson();
Ptr_Tonemap*              pCvcreateTonemap(float gamma /* default: 1.0f */);
Ptr_TonemapDrago*         pCvcreateTonemapDrago(float gamma /* default: 1.0f */, float saturation /* default: 1.0f */, 
                                   float bias /* default: 0.85f */);
Ptr_TonemapMantiuk*       pCvcreateTonemapMantiuk(float gamma /* default: 1.0f */, float scale /* default: 0.7f */, 
                                   float saturation /* default: 1.0f */);
Ptr_TonemapReinhard*      pCvcreateTonemapReinhard(float gamma /* default: 1.0f */, float intensity /* default: 0.0f */, 
                                   float light_adapt /* default: 1.0f */, float color_adapt /* default: 0.0f */);
float                     pCvcubeRoot(float _val);
void                      pCvcvtColor(Mat_t* src, Mat_t* dst, int code, int dstCn /* default: 0 */);
void                      pCvcvtColorV2(UMat_t* src, UMat_t* dst, int code, int dstCn /* default: 0 */);
void                      pCvcvtColorTwoPlane(Mat_t* src1, Mat_t* src2, Mat_t* dst, int code);
void                      pCvcvtColorTwoPlaneV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, int code);
void                      pCvdct(Mat_t* src, Mat_t* dst, int flags /* default: 0 */);
void                      pCvdctV2(UMat_t* src, UMat_t* dst, int flags /* default: 0 */);
void                      pCvdecolor(Mat_t* src, Mat_t* grayscale, Mat_t* color_boost);
void                      pCvdecolorV2(UMat_t* src, UMat_t* grayscale, UMat_t* color_boost);
void                      pCvdecomposeEssentialMat(Mat_t* E, Mat_t* R1, Mat_t* R2, Mat_t* t);
void                      pCvdecomposeEssentialMatV2(UMat_t* E, UMat_t* R1, UMat_t* R2, UMat_t* t);
int                       pCvdecomposeHomographyMat(Mat_t* H, Mat_t* K, vector_Mat* rotations, vector_Mat* translations, 
                                   vector_Mat* normals);
int                       pCvdecomposeHomographyMatV2(UMat_t* H, UMat_t* K, vector_UMat* rotations, 
                                   vector_UMat* translations, vector_UMat* normals);
void                      pCvdecomposeProjectionMatrix(Mat_t* projMatrix, Mat_t* cameraMatrix, Mat_t* rotMatrix, 
                                   Mat_t* transVect, Mat_t* rotMatrixX /* default: Mat() */, 
                                   Mat_t* rotMatrixY /* default: Mat() */, Mat_t* rotMatrixZ /* default: Mat() */, 
                                   Mat_t* eulerAngles /* default: Mat() */);
void                      pCvdecomposeProjectionMatrixV2(UMat_t* projMatrix, UMat_t* cameraMatrix, UMat_t* rotMatrix, 
                                   UMat_t* transVect, UMat_t* rotMatrixX /* default: UMat() */, 
                                   UMat_t* rotMatrixY /* default: UMat() */, UMat_t* rotMatrixZ /* default: UMat() */, 
                                   UMat_t* eulerAngles /* default: UMat() */);
void                      pCvdemosaicing(Mat_t* src, Mat_t* dst, int code, int dstCn /* default: 0 */);
void                      pCvdemosaicingV2(UMat_t* src, UMat_t* dst, int code, int dstCn /* default: 0 */);
void                      pCvdenoise_TVL1(vector_Mat* observations, Mat_t* _result, double lambda /* default: 1.0 */, 
                                   int niters /* default: 30 */);
void                      pCvdestroyAllWindows();
void                      pCvdestroyWindow(string_t* winname);
void                      pCvdetailEnhance(Mat_t* src, Mat_t* dst, float sigma_s /* default: 10 */, 
                                   float sigma_r /* default: 0.15f */);
void                      pCvdetailEnhanceV2(UMat_t* src, UMat_t* dst, float sigma_s /* default: 10 */, 
                                   float sigma_r /* default: 0.15f */);
void                      pCvdetail_computeImageFeatures(Ptr_Feature2D* featuresFinder, vector_Mat* images, 
                                   vector_ImageFeatures* features, vector_Mat* masks /* default: vector_Mat() */);
void                      pCvdetail_computeImageFeaturesV2(Ptr_Feature2D* featuresFinder, vector_UMat* images, 
                                   vector_ImageFeatures* features, vector_UMat* masks /* default: vector_UMat() */);
void                      pCvdetail_computeImageFeatures2(Ptr_Feature2D* featuresFinder, Mat_t* image, 
                                   detail_ImageFeatures_t* features, Mat_t* mask /* default: Mat() */);
void                      pCvdetail_computeImageFeatures2V2(Ptr_Feature2D* featuresFinder, UMat_t* image, 
                                   detail_ImageFeatures_t* features, UMat_t* mask /* default: UMat() */);
void                      pCvdetail_createLaplacePyr(Mat_t* img, int num_levels, vector_UMat* pyr);
void                      pCvdetail_createLaplacePyrV2(UMat_t* img, int num_levels, vector_UMat* pyr);
void                      pCvdetail_createLaplacePyrGpu(Mat_t* img, int num_levels, vector_UMat* pyr);
void                      pCvdetail_createLaplacePyrGpuV2(UMat_t* img, int num_levels, vector_UMat* pyr);
void                      pCvdetail_createWeightMap(Mat_t* mask, float sharpness, Mat_t* weight);
void                      pCvdetail_createWeightMapV2(UMat_t* mask, float sharpness, UMat_t* weight);
vector_int*               pCvdetail_leaveBiggestComponent(vector_ImageFeatures* features, 
                                   vector_MatchesInfo* pairwise_matches, float conf_threshold);
string_t*                 pCvdetail_matchesGraphAsString(vector_String* pathes, vector_MatchesInfo* pairwise_matches, 
                                   float conf_threshold);
void                      pCvdetail_normalizeUsingWeightMap(Mat_t* weight, Mat_t* src);
void                      pCvdetail_normalizeUsingWeightMapV2(UMat_t* weight, UMat_t* src);
void                      pCvdetail_restoreImageFromLaplacePyr(vector_UMat* pyr);
void                      pCvdetail_restoreImageFromLaplacePyrGpu(vector_UMat* pyr);
void                      pCvdetail_waveCorrect(vector_Mat* rmats, detail_WaveCorrectKind kind);
double                    pCvdeterminant(Mat_t* mtx);
double                    pCvdeterminantV2(UMat_t* mtx);
void                      pCvdft(Mat_t* src, Mat_t* dst, int flags /* default: 0 */, int nonzeroRows /* default: 0 */);
void                      pCvdftV2(UMat_t* src, UMat_t* dst, int flags /* default: 0 */, 
                                   int nonzeroRows /* default: 0 */);
void                      pCvdilate(Mat_t* src, Mat_t* dst, Mat_t* kernel, Point_t* anchor /* default: Point(-1,-1) */, 
                                   int iterations /* default: 1 */, int borderType /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: morphologyDefaultBorderValue() */);
void                      pCvdilateV2(UMat_t* src, UMat_t* dst, UMat_t* kernel, 
                                   Point_t* anchor /* default: Point(-1,-1) */, int iterations /* default: 1 */, int borderType /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: morphologyDefaultBorderValue() */);
void                      pCvdisplayOverlay(string_t* winname, string_t* text, int delayms /* default: 0 */);
void                      pCvdisplayStatusBar(string_t* winname, string_t* text, int delayms /* default: 0 */);
void                      pCvdistanceTransform(Mat_t* src, Mat_t* dst, int distanceType, int maskSize, 
                                   int dstType /* default: CV_32F */);
void                      pCvdistanceTransformV2(UMat_t* src, UMat_t* dst, int distanceType, int maskSize, 
                                   int dstType /* default: CV_32F */);
void                      pCvdistanceTransformWithLabels(Mat_t* src, Mat_t* dst, Mat_t* labels, int distanceType, 
                                   int maskSize, int labelType /* default: DIST_LABEL_CCOMP */);
void                      pCvdistanceTransformWithLabelsV2(UMat_t* src, UMat_t* dst, UMat_t* labels, int distanceType, 
                                   int maskSize, int labelType /* default: DIST_LABEL_CCOMP */);
void                      pCvdivSpectrums(Mat_t* a, Mat_t* b, Mat_t* c, int flags, bool conjB /* default: false */);
void                      pCvdivSpectrumsV2(UMat_t* a, UMat_t* b, UMat_t* c, int flags, bool conjB /* default: false */);
void                      pCvdivide(Mat_t* src1, Mat_t* src2, Mat_t* dst, double scale /* default: 1 */, 
                                   int dtype /* default: -1 */);
void                      pCvdivideV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, double scale /* default: 1 */, 
                                   int dtype /* default: -1 */);
void                      pCvdivideV3(double scale, Mat_t* src2, Mat_t* dst, int dtype /* default: -1 */);
void                      pCvdivideV4(double scale, UMat_t* src2, UMat_t* dst, int dtype /* default: -1 */);
void                      pCvdnn_NMSBoxes(vector_Rect2d* bboxes, vector_float* scores, float score_threshold, 
                                   float nms_threshold, vector_int* indices, float eta /* default: 1.f */, 
                                   int top_k /* default: 0 */);
void                      pCvdnn_NMSBoxesRotated(vector_RotatedRect* bboxes, vector_float* scores, 
                                   float score_threshold, float nms_threshold, vector_int* indices, 
                                   float eta /* default: 1.f */, int top_k /* default: 0 */);
Mat_t*                    pCvdnn_blobFromImage(Mat_t* image, double scalefactor /* default: 1.0 */, 
                                   Size_t* size /* default: Size() */, Scalar_t* mean /* default: Scalar() */, 
                                   bool swapRB /* default: false */, bool crop /* default: false */, int ddepth /* default: CV_32F */);
Mat_t*                    pCvdnn_blobFromImageV2(UMat_t* image, double scalefactor /* default: 1.0 */, 
                                   Size_t* size /* default: Size() */, Scalar_t* mean /* default: Scalar() */, 
                                   bool swapRB /* default: false */, bool crop /* default: false */, int ddepth /* default: CV_32F */);
Mat_t*                    pCvdnn_blobFromImages(vector_Mat* images, double scalefactor /* default: 1.0 */, 
                                   Size_t* size /* default: Size() */, Scalar_t* mean /* default: Scalar() */, 
                                   bool swapRB /* default: false */, bool crop /* default: false */, int ddepth /* default: CV_32F */);
Mat_t*                    pCvdnn_blobFromImagesV2(vector_UMat* images, double scalefactor /* default: 1.0 */, 
                                   Size_t* size /* default: Size() */, Scalar_t* mean /* default: Scalar() */, 
                                   bool swapRB /* default: false */, bool crop /* default: false */, int ddepth /* default: CV_32F */);
vector_Target*            pCvdnn_getAvailableTargets(dnn_Backend be);
void                      pCvdnn_imagesFromBlob(Mat_t* blob_, vector_Mat* images_);
void                      pCvdnn_imagesFromBlobV2(Mat_t* blob_, vector_UMat* images_);
dnn_Net_t*                pCvdnn_readNet(string_t* model, string_t* config /* default: "" */, 
                                   string_t* framework /* default: "" */);
dnn_Net_t*                pCvdnn_readNetV2(string_t* framework, vector_uchar* bufferModel, 
                                   vector_uchar* bufferConfig /* default: std::vector<uchar>() */);
dnn_Net_t*                pCvdnn_readNetFromCaffe(string_t* prototxt, string_t* caffeModel /* default: String() */);
dnn_Net_t*                pCvdnn_readNetFromCaffeV2(vector_uchar* bufferProto, 
                                   vector_uchar* bufferModel /* default: std::vector<uchar>() */);
dnn_Net_t*                pCvdnn_readNetFromDarknet(string_t* cfgFile, string_t* darknetModel /* default: String() */);
dnn_Net_t*                pCvdnn_readNetFromDarknetV2(vector_uchar* bufferCfg, 
                                   vector_uchar* bufferModel /* default: std::vector<uchar>() */);
dnn_Net_t*                pCvdnn_readNetFromModelOptimizer(string_t* xml, string_t* bin);
dnn_Net_t*                pCvdnn_readNetFromModelOptimizerV2(vector_uchar* bufferModelConfig, 
                                   vector_uchar* bufferWeights);
dnn_Net_t*                pCvdnn_readNetFromONNX(string_t* onnxFile);
dnn_Net_t*                pCvdnn_readNetFromONNXV2(vector_uchar* buffer);
dnn_Net_t*                pCvdnn_readNetFromTensorflow(string_t* model, string_t* config /* default: String() */);
dnn_Net_t*                pCvdnn_readNetFromTensorflowV2(vector_uchar* bufferModel, 
                                   vector_uchar* bufferConfig /* default: std::vector<uchar>() */);
dnn_Net_t*                pCvdnn_readNetFromTorch(string_t* model, bool isBinary /* default: true */, 
                                   bool evaluate /* default: true */);
Mat_t*                    pCvdnn_readTensorFromONNX(string_t* path);
Mat_t*                    pCvdnn_readTorchBlob(string_t* filename, bool isBinary /* default: true */);
void                      pCvdnn_shrinkCaffeModel(string_t* src, string_t* dst, 
                                   vector_String* layersTypes /* default: std::vector<String>() */);
void                      pCvdnn_softNMSBoxes(vector_Rect* bboxes, vector_float* scores, vector_float* updated_scores, 
                                   float score_threshold, float nms_threshold, vector_int* indices, size_t top_k /* default: 0 */, 
                                   float sigma /* default: 0.5 */, dnn_SoftNMSMethod method /* default: SoftNMSMethod::SOFTNMS_GAUSSIAN */);
void                      pCvdnn_writeTextGraph(string_t* model, string_t* output);
void                      pCvdrawChessboardCorners(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   bool patternWasFound);
void                      pCvdrawChessboardCornersV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   bool patternWasFound);
void                      pCvdrawContours(Mat_t* image, vector_Mat* contours, int contourIdx, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, Mat_t* hierarchy /* default: Mat() */, 
                                   int maxLevel /* default: INT_MAX */, Point_t* offset /* default: Point() */);
void                      pCvdrawContoursV2(UMat_t* image, vector_UMat* contours, int contourIdx, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, 
                                   UMat_t* hierarchy /* default: UMat() */, int maxLevel /* default: INT_MAX */, 
                                   Point_t* offset /* default: Point() */);
void                      pCvdrawFrameAxes(Mat_t* image, Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* rvec, 
                                   Mat_t* tvec, float length, int thickness /* default: 3 */);
void                      pCvdrawFrameAxesV2(UMat_t* image, UMat_t* cameraMatrix, UMat_t* distCoeffs, UMat_t* rvec, 
                                   UMat_t* tvec, float length, int thickness /* default: 3 */);
void                      pCvdrawKeypoints(Mat_t* image, vector_KeyPoint* keypoints, Mat_t* outImage, 
                                   Scalar_t* color /* default: Scalar::all(-1) */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawKeypointsV2(UMat_t* image, vector_KeyPoint* keypoints, UMat_t* outImage, 
                                   Scalar_t* color /* default: Scalar::all(-1) */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawMarker(Mat_t* img, Point_t* position, Scalar_t* color, 
                                   int markerType /* default: MARKER_CROSS */, int markerSize /* default: 20 */, int thickness /* default: 1 */, 
                                   int line_type /* default: 8 */);
void                      pCvdrawMarkerV2(UMat_t* img, Point_t* position, Scalar_t* color, 
                                   int markerType /* default: MARKER_CROSS */, int markerSize /* default: 20 */, int thickness /* default: 1 */, 
                                   int line_type /* default: 8 */);
void                      pCvdrawMatches(Mat_t* img1, vector_KeyPoint* keypoints1, Mat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, Mat_t* outImg, 
                                   Scalar_t* matchColor /* default: Scalar::all(-1) */, Scalar_t* singlePointColor /* default: Scalar::all(-1) */, 
                                   vector_char* matchesMask /* default: std::vector<char>() */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawMatchesV2(UMat_t* img1, vector_KeyPoint* keypoints1, UMat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, UMat_t* outImg, 
                                   Scalar_t* matchColor /* default: Scalar::all(-1) */, Scalar_t* singlePointColor /* default: Scalar::all(-1) */, 
                                   vector_char* matchesMask /* default: std::vector<char>() */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawMatchesV3(Mat_t* img1, vector_KeyPoint* keypoints1, Mat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, Mat_t* outImg, int matchesThickness, 
                                   Scalar_t* matchColor /* default: Scalar::all(-1) */, Scalar_t* singlePointColor /* default: Scalar::all(-1) */, 
                                   vector_char* matchesMask /* default: std::vector<char>() */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawMatchesV4(UMat_t* img1, vector_KeyPoint* keypoints1, UMat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, UMat_t* outImg, int matchesThickness, 
                                   Scalar_t* matchColor /* default: Scalar::all(-1) */, Scalar_t* singlePointColor /* default: Scalar::all(-1) */, 
                                   vector_char* matchesMask /* default: std::vector<char>() */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawMatchesKnn(Mat_t* img1, vector_KeyPoint* keypoints1, Mat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_vector_DMatch* matches1to2, Mat_t* outImg, 
                                   Scalar_t* matchColor /* default: Scalar::all(-1) */, Scalar_t* singlePointColor /* default: Scalar::all(-1) */, 
                                   vector_vector_char* matchesMask /* default: std::vector<std::vector<char> >() */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvdrawMatchesKnnV2(UMat_t* img1, vector_KeyPoint* keypoints1, UMat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_vector_DMatch* matches1to2, UMat_t* outImg, 
                                   Scalar_t* matchColor /* default: Scalar::all(-1) */, Scalar_t* singlePointColor /* default: Scalar::all(-1) */, 
                                   vector_vector_char* matchesMask /* default: std::vector<std::vector<char> >() */, DrawMatchesFlags flags /* default: DrawMatchesFlags::DEFAULT */);
void                      pCvedgePreservingFilter(Mat_t* src, Mat_t* dst, int flags /* default: 1 */, 
                                   float sigma_s /* default: 60 */, float sigma_r /* default: 0.4f */);
void                      pCvedgePreservingFilterV2(UMat_t* src, UMat_t* dst, int flags /* default: 1 */, 
                                   float sigma_s /* default: 60 */, float sigma_r /* default: 0.4f */);
bool                      pCveigen(Mat_t* src, Mat_t* eigenvalues, Mat_t* eigenvectors /* default: Mat() */);
bool                      pCveigenV2(UMat_t* src, UMat_t* eigenvalues, UMat_t* eigenvectors /* default: UMat() */);
void                      pCveigenNonSymmetric(Mat_t* src, Mat_t* eigenvalues, Mat_t* eigenvectors);
void                      pCveigenNonSymmetricV2(UMat_t* src, UMat_t* eigenvalues, UMat_t* eigenvectors);
void                      pCvellipse(Mat_t* img, Point_t* center, Size_t* axes, double angle, double startAngle, 
                                   double endAngle, Scalar_t* color, int thickness /* default: 1 */, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvellipseV2(UMat_t* img, Point_t* center, Size_t* axes, double angle, double startAngle, 
                                   double endAngle, Scalar_t* color, int thickness /* default: 1 */, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvellipseV3(Mat_t* img, RotatedRect_t* box, Scalar_t* color, int thickness /* default: 1 */, 
                                   int lineType /* default: LINE_8 */);
void                      pCvellipseV4(UMat_t* img, RotatedRect_t* box, Scalar_t* color, int thickness /* default: 1 */, 
                                   int lineType /* default: LINE_8 */);
void                      pCvellipse2Poly(Point_t* center, Size_t* axes, int angle, int arcStart, int arcEnd, int delta, 
                                   vector_Point* pts);
void                      pCvequalizeHist(Mat_t* src, Mat_t* dst);
void                      pCvequalizeHistV2(UMat_t* src, UMat_t* dst);
void                      pCverode(Mat_t* src, Mat_t* dst, Mat_t* kernel, Point_t* anchor /* default: Point(-1,-1) */, 
                                   int iterations /* default: 1 */, int borderType /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: morphologyDefaultBorderValue() */);
void                      pCverodeV2(UMat_t* src, UMat_t* dst, UMat_t* kernel, 
                                   Point_t* anchor /* default: Point(-1,-1) */, int iterations /* default: 1 */, int borderType /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: morphologyDefaultBorderValue() */);
Mat_t*                    pCvestimateAffine2D(Mat_t* from, Mat_t* _to, Mat_t* inliers /* default: Mat() */, 
                                   int method /* default: RANSAC */, double ransacReprojThreshold /* default: 3 */, 
                                   size_t maxIters /* default: 2000 */, double confidence /* default: 0.99 */, 
                                   size_t refineIters /* default: 10 */);
Mat_t*                    pCvestimateAffine2DV2(UMat_t* from, UMat_t* _to, UMat_t* inliers /* default: UMat() */, 
                                   int method /* default: RANSAC */, double ransacReprojThreshold /* default: 3 */, 
                                   size_t maxIters /* default: 2000 */, double confidence /* default: 0.99 */, 
                                   size_t refineIters /* default: 10 */);
Mat_t*                    pCvestimateAffine2DV3(Mat_t* pts1, Mat_t* pts2, Mat_t* inliers, UsacParams_t* params);
Mat_t*                    pCvestimateAffine2DV4(UMat_t* pts1, UMat_t* pts2, UMat_t* inliers, UsacParams_t* params);
int                       pCvestimateAffine3D(Mat_t* src, Mat_t* dst, Mat_t* _out, Mat_t* inliers, 
                                   double ransacThreshold /* default: 3 */, double confidence /* default: 0.99 */);
int                       pCvestimateAffine3DV2(UMat_t* src, UMat_t* dst, UMat_t* _out, UMat_t* inliers, 
                                   double ransacThreshold /* default: 3 */, double confidence /* default: 0.99 */);
Mat_t*                    pCvestimateAffine3DV3(Mat_t* src, Mat_t* dst, double* scale /* default: nullptr */, 
                                   bool force_rotation /* default: true */);
Mat_t*                    pCvestimateAffine3DV4(UMat_t* src, UMat_t* dst, double* scale /* default: nullptr */, 
                                   bool force_rotation /* default: true */);
Mat_t*                    pCvestimateAffinePartial2D(Mat_t* from, Mat_t* _to, Mat_t* inliers /* default: Mat() */, 
                                   int method /* default: RANSAC */, double ransacReprojThreshold /* default: 3 */, 
                                   size_t maxIters /* default: 2000 */, double confidence /* default: 0.99 */, 
                                   size_t refineIters /* default: 10 */);
Mat_t*                    pCvestimateAffinePartial2DV2(UMat_t* from, UMat_t* _to, UMat_t* inliers /* default: UMat() */, 
                                   int method /* default: RANSAC */, double ransacReprojThreshold /* default: 3 */, 
                                   size_t maxIters /* default: 2000 */, double confidence /* default: 0.99 */, 
                                   size_t refineIters /* default: 10 */);
Scalar_t*                 pCvestimateChessboardSharpness(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   float rise_distance /* default: 0.8F */, bool vertical /* default: false */, 
                                   Mat_t* sharpness /* default: Mat() */);
Scalar_t*                 pCvestimateChessboardSharpnessV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   float rise_distance /* default: 0.8F */, bool vertical /* default: false */, 
                                   UMat_t* sharpness /* default: UMat() */);
int                       pCvestimateTranslation3D(Mat_t* src, Mat_t* dst, Mat_t* _out, Mat_t* inliers, 
                                   double ransacThreshold /* default: 3 */, double confidence /* default: 0.99 */);
int                       pCvestimateTranslation3DV2(UMat_t* src, UMat_t* dst, UMat_t* _out, UMat_t* inliers, 
                                   double ransacThreshold /* default: 3 */, double confidence /* default: 0.99 */);
void                      pCvexp(Mat_t* src, Mat_t* dst);
void                      pCvexpV2(UMat_t* src, UMat_t* dst);
void                      pCvextractChannel(Mat_t* src, Mat_t* dst, int coi);
void                      pCvextractChannelV2(UMat_t* src, UMat_t* dst, int coi);
float                     pCvfastAtan2(float y, float x);
void                      pCvfastNlMeansDenoising(Mat_t* src, Mat_t* dst, float h /* default: 3 */, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingV2(UMat_t* src, UMat_t* dst, float h /* default: 3 */, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingV3(Mat_t* src, Mat_t* dst, vector_float* h, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */, 
                                   int normType /* default: NORM_L2 */);
void                      pCvfastNlMeansDenoisingV4(UMat_t* src, UMat_t* dst, vector_float* h, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */, 
                                   int normType /* default: NORM_L2 */);
void                      pCvfastNlMeansDenoisingColored(Mat_t* src, Mat_t* dst, float h /* default: 3 */, 
                                   float hColor /* default: 3 */, int templateWindowSize /* default: 7 */, 
                                   int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingColoredV2(UMat_t* src, UMat_t* dst, float h /* default: 3 */, 
                                   float hColor /* default: 3 */, int templateWindowSize /* default: 7 */, 
                                   int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingColoredMulti(vector_Mat* srcImgs, Mat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, float h /* default: 3 */, float hColor /* default: 3 */, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingColoredMultiV2(vector_UMat* srcImgs, UMat_t* dst, 
                                   int imgToDenoiseIndex, int temporalWindowSize, float h /* default: 3 */, 
                                   float hColor /* default: 3 */, int templateWindowSize /* default: 7 */, 
                                   int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingMulti(vector_Mat* srcImgs, Mat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, float h /* default: 3 */, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingMultiV2(vector_UMat* srcImgs, UMat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, float h /* default: 3 */, 
                                   int templateWindowSize /* default: 7 */, int searchWindowSize /* default: 21 */);
void                      pCvfastNlMeansDenoisingMultiV3(vector_Mat* srcImgs, Mat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, vector_float* h, int templateWindowSize /* default: 7 */, 
                                   int searchWindowSize /* default: 21 */, int normType /* default: NORM_L2 */);
void                      pCvfastNlMeansDenoisingMultiV4(vector_UMat* srcImgs, UMat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, vector_float* h, int templateWindowSize /* default: 7 */, 
                                   int searchWindowSize /* default: 21 */, int normType /* default: NORM_L2 */);
void                      pCvfillConvexPoly(Mat_t* img, Mat_t* points, Scalar_t* color, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvfillConvexPolyV2(UMat_t* img, UMat_t* points, Scalar_t* color, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvfillPoly(Mat_t* img, vector_Mat* pts, Scalar_t* color, int lineType /* default: LINE_8 */, 
                                   int shift /* default: 0 */, Point_t* offset /* default: Point() */);
void                      pCvfillPolyV2(UMat_t* img, vector_UMat* pts, Scalar_t* color, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */, Point_t* offset /* default: Point() */);
void                      pCvfilter2D(Mat_t* src, Mat_t* dst, int ddepth, Mat_t* kernel, 
                                   Point_t* anchor /* default: Point(-1,-1) */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvfilter2DV2(UMat_t* src, UMat_t* dst, int ddepth, UMat_t* kernel, 
                                   Point_t* anchor /* default: Point(-1,-1) */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvfilterHomographyDecompByVisibleRefpoints(vector_Mat* rotations, vector_Mat* normals, 
                                   Mat_t* beforePoints, Mat_t* afterPoints, Mat_t* possibleSolutions, 
                                   Mat_t* pointsMask /* default: Mat() */);
void                      pCvfilterHomographyDecompByVisibleRefpointsV2(vector_UMat* rotations, vector_UMat* normals, 
                                   UMat_t* beforePoints, UMat_t* afterPoints, 
                                   UMat_t* possibleSolutions, UMat_t* pointsMask /* default: UMat() */);
void                      pCvfilterSpeckles(Mat_t* img, double newVal, int maxSpeckleSize, double maxDiff, 
                                   Mat_t* buf /* default: Mat() */);
void                      pCvfilterSpecklesV2(UMat_t* img, double newVal, int maxSpeckleSize, double maxDiff, 
                                   UMat_t* buf /* default: UMat() */);
bool                      pCvfind4QuadCornerSubpix(Mat_t* img, Mat_t* corners, Size_t* region_size);
bool                      pCvfind4QuadCornerSubpixV2(UMat_t* img, UMat_t* corners, Size_t* region_size);
bool                      pCvfindChessboardCorners(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   int flags /* default: CALIB_CB_ADAPTIVE_THRESH + CALIB_CB_NORMALIZE_IMAGE */);
bool                      pCvfindChessboardCornersV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   int flags /* default: CALIB_CB_ADAPTIVE_THRESH + CALIB_CB_NORMALIZE_IMAGE */);
bool                      pCvfindChessboardCornersSB(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   int flags /* default: 0 */);
bool                      pCvfindChessboardCornersSBV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   int flags /* default: 0 */);
bool                      pCvfindChessboardCornersSBWithMeta(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   int flags, Mat_t* meta);
bool                      pCvfindChessboardCornersSBWithMetaV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   int flags, UMat_t* meta);
bool                      pCvfindCirclesGrid(Mat_t* image, Size_t* patternSize, Mat_t* centers, int flags, 
                                   Ptr_FeatureDetector* blobDetector, CirclesGridFinderParameters_t* parameters);
bool                      pCvfindCirclesGridV2(UMat_t* image, Size_t* patternSize, UMat_t* centers, int flags, 
                                   Ptr_FeatureDetector* blobDetector, CirclesGridFinderParameters_t* parameters);
bool                      pCvfindCirclesGridV3(Mat_t* image, Size_t* patternSize, Mat_t* centers, 
                                   int flags /* default: CALIB_CB_SYMMETRIC_GRID */, 
                                   Ptr_FeatureDetector* blobDetector /* default: SimpleBlobDetector::create() */);
bool                      pCvfindCirclesGridV4(UMat_t* image, Size_t* patternSize, UMat_t* centers, 
                                   int flags /* default: CALIB_CB_SYMMETRIC_GRID */, 
                                   Ptr_FeatureDetector* blobDetector /* default: SimpleBlobDetector::create() */);
void                      pCvfindContours(Mat_t* image, vector_Mat* contours, Mat_t* hierarchy, int mode, int method, 
                                   Point_t* offset /* default: Point() */);
void                      pCvfindContoursV2(UMat_t* image, vector_UMat* contours, UMat_t* hierarchy, int mode, 
                                   int method, Point_t* offset /* default: Point() */);
Mat_t*                    pCvfindEssentialMat(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix, 
                                   int method /* default: RANSAC */, double prob /* default: 0.999 */, double threshold /* default: 1.0 */, 
                                   int maxIters /* default: 1000 */, Mat_t* mask /* default: Mat() */);
Mat_t*                    pCvfindEssentialMatV2(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix, 
                                   int method /* default: RANSAC */, double prob /* default: 0.999 */, double threshold /* default: 1.0 */, 
                                   int maxIters /* default: 1000 */, UMat_t* mask /* default: UMat() */);
Mat_t*                    pCvfindEssentialMatV3(Mat_t* points1, Mat_t* points2, double focal /* default: 1.0 */, 
                                   Point2d_t* pp /* default: Point2d(0, 0) */, int method /* default: RANSAC */, double prob /* default: 0.999 */, 
                                   double threshold /* default: 1.0 */, int maxIters /* default: 1000 */, Mat_t* mask /* default: Mat() */);
Mat_t*                    pCvfindEssentialMatV4(UMat_t* points1, UMat_t* points2, double focal /* default: 1.0 */, 
                                   Point2d_t* pp /* default: Point2d(0, 0) */, int method /* default: RANSAC */, double prob /* default: 0.999 */, 
                                   double threshold /* default: 1.0 */, int maxIters /* default: 1000 */, UMat_t* mask /* default: UMat() */);
Mat_t*                    pCvfindEssentialMatV5(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix1, 
                                   Mat_t* distCoeffs1, Mat_t* cameraMatrix2, Mat_t* distCoeffs2, 
                                   int method /* default: RANSAC */, double prob /* default: 0.999 */, double threshold /* default: 1.0 */, 
                                   Mat_t* mask /* default: Mat() */);
Mat_t*                    pCvfindEssentialMatV6(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix1, 
                                   UMat_t* distCoeffs1, UMat_t* cameraMatrix2, UMat_t* distCoeffs2, 
                                   int method /* default: RANSAC */, double prob /* default: 0.999 */, double threshold /* default: 1.0 */, 
                                   UMat_t* mask /* default: UMat() */);
Mat_t*                    pCvfindEssentialMatV7(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix1, 
                                   Mat_t* cameraMatrix2, Mat_t* dist_coeff1, Mat_t* dist_coeff2, Mat_t* mask, 
                                   UsacParams_t* params);
Mat_t*                    pCvfindEssentialMatV8(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix1, 
                                   UMat_t* cameraMatrix2, UMat_t* dist_coeff1, UMat_t* dist_coeff2, UMat_t* mask, 
                                   UsacParams_t* params);
Mat_t*                    pCvfindFundamentalMat(Mat_t* points1, Mat_t* points2, int method, 
                                   double ransacReprojThreshold, double confidence, int maxIters, Mat_t* mask /* default: Mat() */);
Mat_t*                    pCvfindFundamentalMatV2(UMat_t* points1, UMat_t* points2, int method, 
                                   double ransacReprojThreshold, double confidence, int maxIters, UMat_t* mask /* default: UMat() */);
Mat_t*                    pCvfindFundamentalMatV3(Mat_t* points1, Mat_t* points2, int method /* default: FM_RANSAC */, 
                                   double ransacReprojThreshold /* default: 3. */, double confidence /* default: 0.99 */, 
                                   Mat_t* mask /* default: Mat() */);
Mat_t*                    pCvfindFundamentalMatV4(UMat_t* points1, UMat_t* points2, int method /* default: FM_RANSAC */, 
                                   double ransacReprojThreshold /* default: 3. */, double confidence /* default: 0.99 */, 
                                   UMat_t* mask /* default: UMat() */);
Mat_t*                    pCvfindFundamentalMatV5(Mat_t* points1, Mat_t* points2, Mat_t* mask, UsacParams_t* params);
Mat_t*                    pCvfindFundamentalMatV6(UMat_t* points1, UMat_t* points2, UMat_t* mask, UsacParams_t* params);
Mat_t*                    pCvfindHomography(Mat_t* srcPoints, Mat_t* dstPoints, int method /* default: 0 */, 
                                   double ransacReprojThreshold /* default: 3 */, Mat_t* mask /* default: Mat() */, int maxIters /* default: 2000 */, 
                                   double confidence /* default: 0.995 */);
Mat_t*                    pCvfindHomographyV2(UMat_t* srcPoints, UMat_t* dstPoints, int method /* default: 0 */, 
                                   double ransacReprojThreshold /* default: 3 */, UMat_t* mask /* default: UMat() */, int maxIters /* default: 2000 */, 
                                   double confidence /* default: 0.995 */);
Mat_t*                    pCvfindHomographyV3(Mat_t* srcPoints, Mat_t* dstPoints, Mat_t* mask, UsacParams_t* params);
Mat_t*                    pCvfindHomographyV4(UMat_t* srcPoints, UMat_t* dstPoints, UMat_t* mask, UsacParams_t* params);
void                      pCvfindNonZero(Mat_t* src, Mat_t* idx);
void                      pCvfindNonZeroV2(UMat_t* src, UMat_t* idx);
double                    pCvfindTransformECC(Mat_t* templateImage, Mat_t* inputImage, Mat_t* warpMatrix, 
                                   int motionType, TermCriteria_t* criteria, Mat_t* inputMask, int gaussFiltSize);
double                    pCvfindTransformECCV2(UMat_t* templateImage, UMat_t* inputImage, UMat_t* warpMatrix, 
                                   int motionType, TermCriteria_t* criteria, UMat_t* inputMask, int gaussFiltSize);
double                    pCvfindTransformECCV3(Mat_t* templateImage, Mat_t* inputImage, Mat_t* warpMatrix, 
                                   int motionType /* default: MOTION_AFFINE */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001) */, Mat_t* inputMask /* default: Mat() */);
double                    pCvfindTransformECCV4(UMat_t* templateImage, UMat_t* inputImage, UMat_t* warpMatrix, 
                                   int motionType /* default: MOTION_AFFINE */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001) */, UMat_t* inputMask /* default: UMat() */);
double                    pCvfisheye_calibrate(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* image_size, 
                                   Mat_t* K, Mat_t* D, vector_Mat* rvecs, vector_Mat* tvecs, 
                                   int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON) */);
double                    pCvfisheye_calibrateV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* image_size, UMat_t* K, UMat_t* D, vector_UMat* rvecs, vector_UMat* tvecs, 
                                   int flags /* default: 0 */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON) */);
void                      pCvfisheye_distortPoints(Mat_t* undistorted, Mat_t* distorted, Mat_t* K, Mat_t* D, 
                                   double alpha /* default: 0 */);
void                      pCvfisheye_distortPointsV2(UMat_t* undistorted, UMat_t* distorted, UMat_t* K, UMat_t* D, 
                                   double alpha /* default: 0 */);
void                      pCvfisheye_estimateNewCameraMatrixForUndistortRectify(Mat_t* K, Mat_t* D, Size_t* image_size, 
                                   Mat_t* R, Mat_t* P, 
                                   double balance /* default: 0.0 */, 
                                   Size_t* new_size /* default: Size() */, double fov_scale /* default: 1.0 */);
void                      pCvfisheye_estimateNewCameraMatrixForUndistortRectifyV2(UMat_t* K, UMat_t* D, 
                                   Size_t* image_size, UMat_t* R, UMat_t* P, 
                                   double balance /* default: 0.0 */, 
                                   Size_t* new_size /* default: Size() */, double fov_scale /* default: 1.0 */);
void                      pCvfisheye_initUndistortRectifyMap(Mat_t* K, Mat_t* D, Mat_t* R, Mat_t* P, Size_t* size, 
                                   int m1type, Mat_t* map1, Mat_t* map2);
void                      pCvfisheye_initUndistortRectifyMapV2(UMat_t* K, UMat_t* D, UMat_t* R, UMat_t* P, Size_t* size, 
                                   int m1type, UMat_t* map1, UMat_t* map2);
void                      pCvfisheye_projectPoints(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* rvec, Mat_t* tvec, 
                                   Mat_t* K, Mat_t* D, double alpha /* default: 0 */, 
                                   Mat_t* jacobian /* default: Mat() */);
void                      pCvfisheye_projectPointsV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* rvec, 
                                   UMat_t* tvec, UMat_t* K, UMat_t* D, double alpha /* default: 0 */, 
                                   UMat_t* jacobian /* default: UMat() */);
double                    pCvfisheye_stereoCalibrate(vector_Mat* objectPoints, vector_Mat* imagePoints1, 
                                   vector_Mat* imagePoints2, Mat_t* K1, Mat_t* D1, Mat_t* K2, Mat_t* D2, Size_t* imageSize, 
                                   Mat_t* R, Mat_t* T, int flags /* default: fisheye::CALIB_FIX_INTRINSIC */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON) */);
double                    pCvfisheye_stereoCalibrateV2(vector_UMat* objectPoints, vector_UMat* imagePoints1, 
                                   vector_UMat* imagePoints2, UMat_t* K1, UMat_t* D1, UMat_t* K2, UMat_t* D2, 
                                   Size_t* imageSize, UMat_t* R, UMat_t* T, 
                                   int flags /* default: fisheye::CALIB_FIX_INTRINSIC */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON) */);
void                      pCvfisheye_stereoRectify(Mat_t* K1, Mat_t* D1, Mat_t* K2, Mat_t* D2, Size_t* imageSize, 
                                   Mat_t* R, Mat_t* tvec, Mat_t* R1, Mat_t* R2, Mat_t* P1, Mat_t* P2, Mat_t* Q, 
                                   int flags, Size_t* newImageSize /* default: Size() */, 
                                   double balance /* default: 0.0 */, double fov_scale /* default: 1.0 */);
void                      pCvfisheye_stereoRectifyV2(UMat_t* K1, UMat_t* D1, UMat_t* K2, UMat_t* D2, Size_t* imageSize, 
                                   UMat_t* R, UMat_t* tvec, UMat_t* R1, UMat_t* R2, UMat_t* P1, UMat_t* P2, 
                                   UMat_t* Q, int flags, Size_t* newImageSize /* default: Size() */, 
                                   double balance /* default: 0.0 */, double fov_scale /* default: 1.0 */);
void                      pCvfisheye_undistortImage(Mat_t* distorted, Mat_t* undistorted, Mat_t* K, Mat_t* D, 
                                   Mat_t* Knew /* default: cv::Mat() */, Size_t* new_size /* default: Size() */);
void                      pCvfisheye_undistortImageV2(UMat_t* distorted, UMat_t* undistorted, UMat_t* K, UMat_t* D, 
                                   UMat_t* Knew /* default: cv::UMat() */, Size_t* new_size /* default: Size() */);
void                      pCvfisheye_undistortPoints(Mat_t* distorted, Mat_t* undistorted, Mat_t* K, Mat_t* D, 
                                   Mat_t* R /* default: Mat() */, Mat_t* P /* default: Mat() */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 10, 1e-8) */);
void                      pCvfisheye_undistortPointsV2(UMat_t* distorted, UMat_t* undistorted, UMat_t* K, UMat_t* D, 
                                   UMat_t* R /* default: UMat() */, UMat_t* P /* default: UMat() */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 10, 1e-8) */);
RotatedRect_t*            pCvfitEllipse(Mat_t* points);
RotatedRect_t*            pCvfitEllipseV2(UMat_t* points);
RotatedRect_t*            pCvfitEllipseAMS(Mat_t* points);
RotatedRect_t*            pCvfitEllipseAMSV2(UMat_t* points);
RotatedRect_t*            pCvfitEllipseDirect(Mat_t* points);
RotatedRect_t*            pCvfitEllipseDirectV2(UMat_t* points);
void                      pCvfitLine(Mat_t* points, Mat_t* line, int distType, double param, double reps, double aeps);
void                      pCvfitLineV2(UMat_t* points, UMat_t* line, int distType, double param, double reps, 
                                   double aeps);
void                      pCvflip(Mat_t* src, Mat_t* dst, int flipCode);
void                      pCvflipV2(UMat_t* src, UMat_t* dst, int flipCode);
int                       pCvfloodFill(Mat_t* image, Mat_t* mask, Point_t* seedPoint, Scalar_t* newVal, 
                                   Rect_t* rect /* default: 0 */, Scalar_t* loDiff /* default: Scalar() */, 
                                   Scalar_t* upDiff /* default: Scalar() */, int flags /* default: 4 */);
int                       pCvfloodFillV2(UMat_t* image, UMat_t* mask, Point_t* seedPoint, Scalar_t* newVal, 
                                   Rect_t* rect /* default: 0 */, Scalar_t* loDiff /* default: Scalar() */, 
                                   Scalar_t* upDiff /* default: Scalar() */, int flags /* default: 4 */);
void                      pCvgemm(Mat_t* src1, Mat_t* src2, double alpha, Mat_t* src3, double beta, Mat_t* dst, 
                                   int flags /* default: 0 */);
void                      pCvgemmV2(UMat_t* src1, UMat_t* src2, double alpha, UMat_t* src3, double beta, UMat_t* dst, 
                                   int flags /* default: 0 */);
Mat_t*                    pCvgetAffineTransform(Mat_t* src, Mat_t* dst);
Mat_t*                    pCvgetAffineTransformV2(UMat_t* src, UMat_t* dst);
string_t*                 pCvgetBuildInformation();
string_t*                 pCvgetCPUFeaturesLine();
int64                     pCvgetCPUTickCount();
Mat_t*                    pCvgetDefaultNewCameraMatrix(Mat_t* cameraMatrix, Size_t* imgsize /* default: Size() */, 
                                   bool centerPrincipalPoint /* default: false */);
Mat_t*                    pCvgetDefaultNewCameraMatrixV2(UMat_t* cameraMatrix, Size_t* imgsize /* default: Size() */, 
                                   bool centerPrincipalPoint /* default: false */);
void                      pCvgetDerivKernels(Mat_t* kx, Mat_t* ky, int dx, int dy, int ksize, 
                                   bool normalize /* default: false */, int ktype /* default: CV_32F */);
void                      pCvgetDerivKernelsV2(UMat_t* kx, UMat_t* ky, int dx, int dy, int ksize, 
                                   bool normalize /* default: false */, int ktype /* default: CV_32F */);
double                    pCvgetFontScaleFromHeight(int fontFace, int pixelHeight, int thickness /* default: 1 */);
Mat_t*                    pCvgetGaborKernel(Size_t* ksize, double sigma, double theta, double lambd, double gamma, 
                                   double psi /* default: CV_PI*0.5 */, int ktype /* default: CV_64F */);
Mat_t*                    pCvgetGaussianKernel(int ksize, double sigma, int ktype /* default: CV_64F */);
string_t*                 pCvgetHardwareFeatureName(int feature);
int                       pCvgetLogLevel();
int                       pCvgetNumThreads();
int                       pCvgetNumberOfCPUs();
int                       pCvgetOptimalDFTSize(int vecsize);
Mat_t*                    pCvgetOptimalNewCameraMatrix(Mat_t* cameraMatrix, Mat_t* distCoeffs, Size_t* imageSize, 
                                   double alpha, Size_t* newImgSize /* default: Size() */, 
                                   Rect_t* validPixROI /* default: 0 */, bool centerPrincipalPoint /* default: false */);
Mat_t*                    pCvgetOptimalNewCameraMatrixV2(UMat_t* cameraMatrix, UMat_t* distCoeffs, Size_t* imageSize, 
                                   double alpha, Size_t* newImgSize /* default: Size() */, 
                                   Rect_t* validPixROI /* default: 0 */, bool centerPrincipalPoint /* default: false */);
Mat_t*                    pCvgetPerspectiveTransform(Mat_t* src, Mat_t* dst, int solveMethod /* default: DECOMP_LU */);
Mat_t*                    pCvgetPerspectiveTransformV2(UMat_t* src, UMat_t* dst, 
                                   int solveMethod /* default: DECOMP_LU */);
void                      pCvgetRectSubPix(Mat_t* image, Size_t* patchSize, Point2f_t* center, Mat_t* patch, 
                                   int patchType /* default: -1 */);
void                      pCvgetRectSubPixV2(UMat_t* image, Size_t* patchSize, Point2f_t* center, UMat_t* patch, 
                                   int patchType /* default: -1 */);
Mat_t*                    pCvgetRotationMatrix2D(Point2f_t* center, double angle, double scale);
Mat_t*                    pCvgetStructuringElement(int shape, Size_t* ksize, 
                                   Point_t* anchor /* default: Point(-1,-1) */);
Size_t*                   pCvgetTextSize(string_t* text, int fontFace, double fontScale, int thickness, int* baseLine);
int                       pCvgetThreadNum();
int64                     pCvgetTickCount();
double                    pCvgetTickFrequency();
int                       pCvgetTrackbarPos(string_t* trackbarname, string_t* winname);
Rect_t*                   pCvgetValidDisparityROI(Rect_t* roi1, Rect_t* roi2, int minDisparity, int numberOfDisparities, 
                                   int blockSize);
int                       pCvgetVersionMajor();
int                       pCvgetVersionMinor();
int                       pCvgetVersionRevision();
string_t*                 pCvgetVersionString();
Rect_t*                   pCvgetWindowImageRect(string_t* winname);
double                    pCvgetWindowProperty(string_t* winname, int prop_id);
void                      pCvgoodFeaturesToTrack(Mat_t* image, Mat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, Mat_t* mask /* default: Mat() */, int blockSize /* default: 3 */, 
                                   bool useHarrisDetector /* default: false */, double k /* default: 0.04 */);
void                      pCvgoodFeaturesToTrackV2(UMat_t* image, UMat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, UMat_t* mask /* default: UMat() */, int blockSize /* default: 3 */, 
                                   bool useHarrisDetector /* default: false */, double k /* default: 0.04 */);
void                      pCvgoodFeaturesToTrackV3(Mat_t* image, Mat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, Mat_t* mask, int blockSize, int gradientSize, 
                                   bool useHarrisDetector /* default: false */, double k /* default: 0.04 */);
void                      pCvgoodFeaturesToTrackV4(UMat_t* image, UMat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, UMat_t* mask, int blockSize, int gradientSize, 
                                   bool useHarrisDetector /* default: false */, double k /* default: 0.04 */);
void                      pCvgoodFeaturesToTrackWithQuality(Mat_t* image, Mat_t* corners, int maxCorners, 
                                   double qualityLevel, double minDistance, Mat_t* mask, Mat_t* cornersQuality, 
                                   int blockSize /* default: 3 */, int gradientSize /* default: 3 */, 
                                   bool useHarrisDetector /* default: false */, double k /* default: 0.04 */);
void                      pCvgoodFeaturesToTrackWithQualityV2(UMat_t* image, UMat_t* corners, int maxCorners, 
                                   double qualityLevel, double minDistance, UMat_t* mask, 
                                   UMat_t* cornersQuality, int blockSize /* default: 3 */, 
                                   int gradientSize /* default: 3 */, bool useHarrisDetector /* default: false */, 
                                   double k /* default: 0.04 */);
void                      pCvgrabCut(Mat_t* img, Mat_t* mask, Rect_t* rect, Mat_t* bgdModel, Mat_t* fgdModel, 
                                   int iterCount, int mode /* default: GC_EVAL */);
void                      pCvgrabCutV2(UMat_t* img, UMat_t* mask, Rect_t* rect, UMat_t* bgdModel, UMat_t* fgdModel, 
                                   int iterCount, int mode /* default: GC_EVAL */);
void                      pCvgroupRectangles(vector_Rect* rectList, vector_int* weights, int groupThreshold, 
                                   double eps /* default: 0.2 */);
bool                      pCvhaveImageReader(string_t* filename);
bool                      pCvhaveImageWriter(string_t* filename);
void                      pCvhconcat(vector_Mat* src, Mat_t* dst);
void                      pCvhconcatV2(vector_UMat* src, UMat_t* dst);
void                      pCvidct(Mat_t* src, Mat_t* dst, int flags /* default: 0 */);
void                      pCvidctV2(UMat_t* src, UMat_t* dst, int flags /* default: 0 */);
void                      pCvidft(Mat_t* src, Mat_t* dst, int flags /* default: 0 */, int nonzeroRows /* default: 0 */);
void                      pCvidftV2(UMat_t* src, UMat_t* dst, int flags /* default: 0 */, 
                                   int nonzeroRows /* default: 0 */);
void                      pCvilluminationChange(Mat_t* src, Mat_t* mask, Mat_t* dst, float alpha /* default: 0.2f */, 
                                   float beta /* default: 0.4f */);
void                      pCvilluminationChangeV2(UMat_t* src, UMat_t* mask, UMat_t* dst, 
                                   float alpha /* default: 0.2f */, float beta /* default: 0.4f */);
size_t                    pCvimcount(string_t* filename, int flags /* default: IMREAD_ANYCOLOR */);
Mat_t*                    pCvimdecode(Mat_t* buf, int flags);
Mat_t*                    pCvimdecodeV2(UMat_t* buf, int flags);
bool                      pCvimencode(string_t* ext, Mat_t* img, vector_uchar* buf, 
                                   vector_int* params /* default: std::vector<int>() */);
bool                      pCvimencodeV2(string_t* ext, UMat_t* img, vector_uchar* buf, 
                                   vector_int* params /* default: std::vector<int>() */);
Mat_t*                    pCvimread(string_t* filename, int flags /* default: IMREAD_COLOR */);
bool                      pCvimreadmulti(string_t* filename, vector_Mat* mats, int flags /* default: IMREAD_ANYCOLOR */);
bool                      pCvimreadmultiV2(string_t* filename, vector_Mat* mats, int start, int count, 
                                   int flags /* default: IMREAD_ANYCOLOR */);
void                      pCvimshow(string_t* winname, Mat_t* mat);
void                      pCvimshowV2(string_t* winname, UMat_t* mat);
bool                      pCvimwrite(string_t* filename, Mat_t* img, 
                                   vector_int* params /* default: std::vector<int>() */);
bool                      pCvimwriteV2(string_t* filename, UMat_t* img, 
                                   vector_int* params /* default: std::vector<int>() */);
bool                      pCvimwritemulti(string_t* filename, vector_Mat* img, 
                                   vector_int* params /* default: std::vector<int>() */);
bool                      pCvimwritemultiV2(string_t* filename, vector_UMat* img, 
                                   vector_int* params /* default: std::vector<int>() */);
void                      pCvinRange(Mat_t* src, Mat_t* lowerb, Mat_t* upperb, Mat_t* dst);
void                      pCvinRangeV2(UMat_t* src, UMat_t* lowerb, UMat_t* upperb, UMat_t* dst);
Mat_t*                    pCvinitCameraMatrix2D(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* imageSize, 
                                   double aspectRatio /* default: 1.0 */);
Mat_t*                    pCvinitCameraMatrix2DV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* imageSize, double aspectRatio /* default: 1.0 */);
void                      pCvinitInverseRectificationMap(Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* R, 
                                   Mat_t* newCameraMatrix, Size_t* size, int m1type, Mat_t* map1, Mat_t* map2);
void                      pCvinitInverseRectificationMapV2(UMat_t* cameraMatrix, UMat_t* distCoeffs, UMat_t* R, 
                                   UMat_t* newCameraMatrix, Size_t* size, int m1type, UMat_t* map1, UMat_t* map2);
void                      pCvinitUndistortRectifyMap(Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* R, 
                                   Mat_t* newCameraMatrix, Size_t* size, int m1type, Mat_t* map1, Mat_t* map2);
void                      pCvinitUndistortRectifyMapV2(UMat_t* cameraMatrix, UMat_t* distCoeffs, UMat_t* R, 
                                   UMat_t* newCameraMatrix, Size_t* size, int m1type, UMat_t* map1, UMat_t* map2);
void                      pCvinpaint(Mat_t* src, Mat_t* inpaintMask, Mat_t* dst, double inpaintRadius, int flags);
void                      pCvinpaintV2(UMat_t* src, UMat_t* inpaintMask, UMat_t* dst, double inpaintRadius, int flags);
void                      pCvinsertChannel(Mat_t* src, Mat_t* dst, int coi);
void                      pCvinsertChannelV2(UMat_t* src, UMat_t* dst, int coi);
void                      pCvintegral(Mat_t* src, Mat_t* sum, int sdepth /* default: -1 */);
void                      pCvintegralV2(UMat_t* src, UMat_t* sum, int sdepth /* default: -1 */);
void                      pCvintegral2(Mat_t* src, Mat_t* sum, Mat_t* sqsum, int sdepth /* default: -1 */, 
                                   int sqdepth /* default: -1 */);
void                      pCvintegral2V2(UMat_t* src, UMat_t* sum, UMat_t* sqsum, int sdepth /* default: -1 */, 
                                   int sqdepth /* default: -1 */);
void                      pCvintegral3(Mat_t* src, Mat_t* sum, Mat_t* sqsum, Mat_t* tilted, 
                                   int sdepth /* default: -1 */, int sqdepth /* default: -1 */);
void                      pCvintegral3V2(UMat_t* src, UMat_t* sum, UMat_t* sqsum, UMat_t* tilted, 
                                   int sdepth /* default: -1 */, int sqdepth /* default: -1 */);
float                     pCvintersectConvexConvex(Mat_t* p1, Mat_t* p2, Mat_t* p12, 
                                   bool handleNested /* default: true */);
float                     pCvintersectConvexConvexV2(UMat_t* p1, UMat_t* p2, UMat_t* p12, 
                                   bool handleNested /* default: true */);
double                    pCvinvert(Mat_t* src, Mat_t* dst, int flags /* default: DECOMP_LU */);
double                    pCvinvertV2(UMat_t* src, UMat_t* dst, int flags /* default: DECOMP_LU */);
void                      pCvinvertAffineTransform(Mat_t* M, Mat_t* iM);
void                      pCvinvertAffineTransformV2(UMat_t* M, UMat_t* iM);
string_t*                 pCvipp_getIppVersion();
void                      pCvipp_setUseIPP(bool flag);
void                      pCvipp_setUseIPP_NotExact(bool flag);
bool                      pCvipp_useIPP();
bool                      pCvipp_useIPP_NotExact();
bool                      pCvisContourConvex(Mat_t* contour);
bool                      pCvisContourConvexV2(UMat_t* contour);
double                    pCvkmeans(Mat_t* data, int K, Mat_t* bestLabels, TermCriteria_t* criteria, int attempts, 
                                   int flags, Mat_t* centers /* default: Mat() */);
double                    pCvkmeansV2(UMat_t* data, int K, UMat_t* bestLabels, TermCriteria_t* criteria, int attempts, 
                                   int flags, UMat_t* centers /* default: UMat() */);
void                      pCvline(Mat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvlineV2(UMat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvlinearPolar(Mat_t* src, Mat_t* dst, Point2f_t* center, double maxRadius, int flags);
void                      pCvlinearPolarV2(UMat_t* src, UMat_t* dst, Point2f_t* center, double maxRadius, int flags);
void                      pCvlog(Mat_t* src, Mat_t* dst);
void                      pCvlogV2(UMat_t* src, UMat_t* dst);
void                      pCvlogPolar(Mat_t* src, Mat_t* dst, Point2f_t* center, double M, int flags);
void                      pCvlogPolarV2(UMat_t* src, UMat_t* dst, Point2f_t* center, double M, int flags);
void                      pCvmagnitude(Mat_t* x, Mat_t* y, Mat_t* magnitude);
void                      pCvmagnitudeV2(UMat_t* x, UMat_t* y, UMat_t* magnitude);
void                      pCvmatMulDeriv(Mat_t* A, Mat_t* B, Mat_t* dABdA, Mat_t* dABdB);
void                      pCvmatMulDerivV2(UMat_t* A, UMat_t* B, UMat_t* dABdA, UMat_t* dABdB);
double                    pCvmatchShapes(Mat_t* contour1, Mat_t* contour2, int method, double parameter);
double                    pCvmatchShapesV2(UMat_t* contour1, UMat_t* contour2, int method, double parameter);
void                      pCvmatchTemplate(Mat_t* image, Mat_t* templ, Mat_t* _result, int method, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvmatchTemplateV2(UMat_t* image, UMat_t* templ, UMat_t* _result, int method, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvmax(Mat_t* src1, Mat_t* src2, Mat_t* dst);
void                      pCvmaxV2(UMat_t* src1, UMat_t* src2, UMat_t* dst);
Scalar_t*                 pCvmean(Mat_t* src, Mat_t* mask /* default: Mat() */);
Scalar_t*                 pCvmeanV2(UMat_t* src, UMat_t* mask /* default: UMat() */);
int                       pCvmeanShift(Mat_t* probImage, Rect_t* window, TermCriteria_t* criteria);
int                       pCvmeanShiftV2(UMat_t* probImage, Rect_t* window, TermCriteria_t* criteria);
void                      pCvmeanStdDev(Mat_t* src, Mat_t* mean, Mat_t* stddev, Mat_t* mask /* default: Mat() */);
void                      pCvmeanStdDevV2(UMat_t* src, UMat_t* mean, UMat_t* stddev, UMat_t* mask /* default: UMat() */);
void                      pCvmedianBlur(Mat_t* src, Mat_t* dst, int ksize);
void                      pCvmedianBlurV2(UMat_t* src, UMat_t* dst, int ksize);
void                      pCvmerge(vector_Mat* mv, Mat_t* dst);
void                      pCvmergeV2(vector_UMat* mv, UMat_t* dst);
void                      pCvmin(Mat_t* src1, Mat_t* src2, Mat_t* dst);
void                      pCvminV2(UMat_t* src1, UMat_t* src2, UMat_t* dst);
RotatedRect_t*            pCvminAreaRect(Mat_t* points);
RotatedRect_t*            pCvminAreaRectV2(UMat_t* points);
void                      pCvminEnclosingCircle(Mat_t* points, Point2f_t* center, float radius);
void                      pCvminEnclosingCircleV2(UMat_t* points, Point2f_t* center, float radius);
double                    pCvminEnclosingTriangle(Mat_t* points, Mat_t* triangle);
double                    pCvminEnclosingTriangleV2(UMat_t* points, UMat_t* triangle);
void                      pCvminMaxLoc(Mat_t* src, double* minVal, double* maxVal /* default: 0 */, 
                                   Point_t* minLoc /* default: 0 */, Point_t* maxLoc /* default: 0 */, Mat_t* mask /* default: Mat() */);
void                      pCvminMaxLocV2(UMat_t* src, double* minVal, double* maxVal /* default: 0 */, 
                                   Point_t* minLoc /* default: 0 */, Point_t* maxLoc /* default: 0 */, UMat_t* mask /* default: UMat() */);
void                      pCvmixChannels(vector_Mat* src, vector_Mat* dst, vector_int* fromTo);
void                      pCvmixChannelsV2(vector_UMat* src, vector_UMat* dst, vector_int* fromTo);
Moments_t*                pCvmoments(Mat_t* _array, bool binaryImage /* default: false */);
Moments_t*                pCvmomentsV2(UMat_t* _array, bool binaryImage /* default: false */);
void                      pCvmorphologyEx(Mat_t* src, Mat_t* dst, int op, Mat_t* kernel, 
                                   Point_t* anchor /* default: Point(-1,-1) */, int iterations /* default: 1 */, 
                                   int borderType /* default: BORDER_CONSTANT */, Scalar_t* borderValue /* default: morphologyDefaultBorderValue() */);
void                      pCvmorphologyExV2(UMat_t* src, UMat_t* dst, int op, UMat_t* kernel, 
                                   Point_t* anchor /* default: Point(-1,-1) */, int iterations /* default: 1 */, 
                                   int borderType /* default: BORDER_CONSTANT */, Scalar_t* borderValue /* default: morphologyDefaultBorderValue() */);
void                      pCvmoveWindow(string_t* winname, int x, int y);
void                      pCvmulSpectrums(Mat_t* a, Mat_t* b, Mat_t* c, int flags, bool conjB /* default: false */);
void                      pCvmulSpectrumsV2(UMat_t* a, UMat_t* b, UMat_t* c, int flags, bool conjB /* default: false */);
void                      pCvmulTransposed(Mat_t* src, Mat_t* dst, bool aTa, Mat_t* delta /* default: Mat() */, 
                                   double scale /* default: 1 */, int dtype /* default: -1 */);
void                      pCvmulTransposedV2(UMat_t* src, UMat_t* dst, bool aTa, UMat_t* delta /* default: UMat() */, 
                                   double scale /* default: 1 */, int dtype /* default: -1 */);
void                      pCvmultiply(Mat_t* src1, Mat_t* src2, Mat_t* dst, double scale /* default: 1 */, 
                                   int dtype /* default: -1 */);
void                      pCvmultiplyV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, double scale /* default: 1 */, 
                                   int dtype /* default: -1 */);
void                      pCvnamedWindow(string_t* winname, int flags /* default: WINDOW_AUTOSIZE */);
double                    pCvnorm(Mat_t* src1, int normType /* default: NORM_L2 */, Mat_t* mask /* default: Mat() */);
double                    pCvnormV2(UMat_t* src1, int normType /* default: NORM_L2 */, 
                                   UMat_t* mask /* default: UMat() */);
double                    pCvnormV3(Mat_t* src1, Mat_t* src2, int normType /* default: NORM_L2 */, 
                                   Mat_t* mask /* default: Mat() */);
double                    pCvnormV4(UMat_t* src1, UMat_t* src2, int normType /* default: NORM_L2 */, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvnormalize(Mat_t* src, Mat_t* dst, double alpha /* default: 1 */, 
                                   double beta /* default: 0 */, int norm_type /* default: NORM_L2 */, int dtype /* default: -1 */, 
                                   Mat_t* mask /* default: Mat() */);
void                      pCvnormalizeV2(UMat_t* src, UMat_t* dst, double alpha /* default: 1 */, 
                                   double beta /* default: 0 */, int norm_type /* default: NORM_L2 */, int dtype /* default: -1 */, 
                                   UMat_t* mask /* default: UMat() */);
void                      pCvocl_finish();
bool                      pCvocl_haveAmdBlas();
bool                      pCvocl_haveAmdFft();
bool                      pCvocl_haveOpenCL();
void                      pCvocl_setUseOpenCL(bool flag);
bool                      pCvocl_useOpenCL();
void                      pCvpatchNaNs(Mat_t* a, double _val /* default: 0 */);
void                      pCvpatchNaNsV2(UMat_t* a, double _val /* default: 0 */);
void                      pCvpencilSketch(Mat_t* src, Mat_t* dst1, Mat_t* dst2, float sigma_s /* default: 60 */, 
                                   float sigma_r /* default: 0.07f */, float shade_factor /* default: 0.02f */);
void                      pCvpencilSketchV2(UMat_t* src, UMat_t* dst1, UMat_t* dst2, float sigma_s /* default: 60 */, 
                                   float sigma_r /* default: 0.07f */, float shade_factor /* default: 0.02f */);
void                      pCvperspectiveTransform(Mat_t* src, Mat_t* dst, Mat_t* m);
void                      pCvperspectiveTransformV2(UMat_t* src, UMat_t* dst, UMat_t* m);
void                      pCvphase(Mat_t* x, Mat_t* y, Mat_t* angle, bool angleInDegrees /* default: false */);
void                      pCvphaseV2(UMat_t* x, UMat_t* y, UMat_t* angle, bool angleInDegrees /* default: false */);
Point2d_t*                pCvphaseCorrelate(Mat_t* src1, Mat_t* src2, Mat_t* window /* default: Mat() */, 
                                   double* response /* default: 0 */);
Point2d_t*                pCvphaseCorrelateV2(UMat_t* src1, UMat_t* src2, UMat_t* window /* default: UMat() */, 
                                   double* response /* default: 0 */);
double                    pCvpointPolygonTest(Mat_t* contour, Point2f_t* pt, bool measureDist);
double                    pCvpointPolygonTestV2(UMat_t* contour, Point2f_t* pt, bool measureDist);
void                      pCvpolarToCart(Mat_t* magnitude, Mat_t* angle, Mat_t* x, Mat_t* y, 
                                   bool angleInDegrees /* default: false */);
void                      pCvpolarToCartV2(UMat_t* magnitude, UMat_t* angle, UMat_t* x, UMat_t* y, 
                                   bool angleInDegrees /* default: false */);
int                       pCvpollKey();
void                      pCvpolylines(Mat_t* img, vector_Mat* pts, bool isClosed, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvpolylinesV2(UMat_t* img, vector_UMat* pts, bool isClosed, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvpow(Mat_t* src, double power, Mat_t* dst);
void                      pCvpowV2(UMat_t* src, double power, UMat_t* dst);
void                      pCvpreCornerDetect(Mat_t* src, Mat_t* dst, int ksize, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvpreCornerDetectV2(UMat_t* src, UMat_t* dst, int ksize, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvprojectPoints(Mat_t* objectPoints, Mat_t* rvec, Mat_t* tvec, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* imagePoints, Mat_t* jacobian /* default: Mat() */, 
                                   double aspectRatio /* default: 0 */);
void                      pCvprojectPointsV2(UMat_t* objectPoints, UMat_t* rvec, UMat_t* tvec, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* imagePoints, UMat_t* jacobian /* default: UMat() */, 
                                   double aspectRatio /* default: 0 */);
void                      pCvputText(Mat_t* img, string_t* text, Point_t* org, int fontFace, double fontScale, 
                                   Scalar_t* color, int thickness /* default: 1 */, int lineType /* default: LINE_8 */, 
                                   bool bottomLeftOrigin /* default: false */);
void                      pCvputTextV2(UMat_t* img, string_t* text, Point_t* org, int fontFace, double fontScale, 
                                   Scalar_t* color, int thickness /* default: 1 */, int lineType /* default: LINE_8 */, 
                                   bool bottomLeftOrigin /* default: false */);
void                      pCvpyrDown(Mat_t* src, Mat_t* dst, Size_t* dstsize /* default: Size() */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvpyrDownV2(UMat_t* src, UMat_t* dst, Size_t* dstsize /* default: Size() */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvpyrMeanShiftFiltering(Mat_t* src, Mat_t* dst, double sp, double sr, 
                                   int maxLevel /* default: 1 */, 
                                   TermCriteria_t* termcrit /* default: TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5,1) */);
void                      pCvpyrMeanShiftFilteringV2(UMat_t* src, UMat_t* dst, double sp, double sr, 
                                   int maxLevel /* default: 1 */, 
                                   TermCriteria_t* termcrit /* default: TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5,1) */);
void                      pCvpyrUp(Mat_t* src, Mat_t* dst, Size_t* dstsize /* default: Size() */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvpyrUpV2(UMat_t* src, UMat_t* dst, Size_t* dstsize /* default: Size() */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvrandShuffle(Mat_t* dst, double iterFactor /* default: 1. */, RNG_t* rng /* default: 0 */);
void                      pCvrandShuffleV2(UMat_t* dst, double iterFactor /* default: 1. */, 
                                   RNG_t* rng /* default: 0 */);
void                      pCvrandn(Mat_t* dst, Mat_t* mean, Mat_t* stddev);
void                      pCvrandnV2(UMat_t* dst, UMat_t* mean, UMat_t* stddev);
void                      pCvrandu(Mat_t* dst, Mat_t* _low, Mat_t* _high);
void                      pCvranduV2(UMat_t* dst, UMat_t* _low, UMat_t* _high);
Mat_t*                    pCvreadOpticalFlow(string_t* path);
int                       pCvrecoverPose(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix1, Mat_t* distCoeffs1, 
                                   Mat_t* cameraMatrix2, Mat_t* distCoeffs2, Mat_t* E, Mat_t* R, Mat_t* t, 
                                   int method /* default: cv::RANSAC */, double prob /* default: 0.999 */, double threshold /* default: 1.0 */, 
                                   Mat_t* mask /* default: Mat() */);
int                       pCvrecoverPoseV2(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix1, UMat_t* distCoeffs1, 
                                   UMat_t* cameraMatrix2, UMat_t* distCoeffs2, UMat_t* E, UMat_t* R, UMat_t* t, 
                                   int method /* default: cv::RANSAC */, double prob /* default: 0.999 */, double threshold /* default: 1.0 */, 
                                   UMat_t* mask /* default: UMat() */);
int                       pCvrecoverPoseV3(Mat_t* E, Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix, Mat_t* R, 
                                   Mat_t* t, Mat_t* mask /* default: Mat() */);
int                       pCvrecoverPoseV4(UMat_t* E, UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix, UMat_t* R, 
                                   UMat_t* t, UMat_t* mask /* default: UMat() */);
int                       pCvrecoverPoseV5(Mat_t* E, Mat_t* points1, Mat_t* points2, Mat_t* R, Mat_t* t, 
                                   double focal /* default: 1.0 */, Point2d_t* pp /* default: Point2d(0, 0) */, 
                                   Mat_t* mask /* default: Mat() */);
int                       pCvrecoverPoseV6(UMat_t* E, UMat_t* points1, UMat_t* points2, UMat_t* R, UMat_t* t, 
                                   double focal /* default: 1.0 */, Point2d_t* pp /* default: Point2d(0, 0) */, 
                                   UMat_t* mask /* default: UMat() */);
int                       pCvrecoverPoseV7(Mat_t* E, Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix, Mat_t* R, 
                                   Mat_t* t, double distanceThresh, Mat_t* mask /* default: Mat() */, 
                                   Mat_t* triangulatedPoints /* default: Mat() */);
int                       pCvrecoverPoseV8(UMat_t* E, UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix, UMat_t* R, 
                                   UMat_t* t, double distanceThresh, UMat_t* mask /* default: UMat() */, 
                                   UMat_t* triangulatedPoints /* default: UMat() */);
void                      pCvrectangle(Mat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvrectangleV2(UMat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, 
                                   int thickness /* default: 1 */, int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvrectangleV3(Mat_t* img, Rect_t* rec, Scalar_t* color, int thickness /* default: 1 */, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */);
void                      pCvrectangleV4(UMat_t* img, Rect_t* rec, Scalar_t* color, int thickness /* default: 1 */, 
                                   int lineType /* default: LINE_8 */, int shift /* default: 0 */);
float                     pCvrectify3Collinear(Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Mat_t* cameraMatrix3, Mat_t* distCoeffs3, vector_Mat* imgpt1, 
                                   vector_Mat* imgpt3, Size_t* imageSize, Mat_t* R12, Mat_t* T12, Mat_t* R13, Mat_t* T13, 
                                   Mat_t* R1, Mat_t* R2, Mat_t* R3, Mat_t* P1, Mat_t* P2, Mat_t* P3, Mat_t* Q, 
                                   double alpha, Size_t* newImgSize, Rect_t* roi1, Rect_t* roi2, int flags);
float                     pCvrectify3CollinearV2(UMat_t* cameraMatrix1, UMat_t* distCoeffs1, UMat_t* cameraMatrix2, 
                                   UMat_t* distCoeffs2, UMat_t* cameraMatrix3, UMat_t* distCoeffs3, vector_UMat* imgpt1, 
                                   vector_UMat* imgpt3, Size_t* imageSize, UMat_t* R12, UMat_t* T12, UMat_t* R13, 
                                   UMat_t* T13, UMat_t* R1, UMat_t* R2, UMat_t* R3, UMat_t* P1, UMat_t* P2, 
                                   UMat_t* P3, UMat_t* Q, double alpha, Size_t* newImgSize, Rect_t* roi1, 
                                   Rect_t* roi2, int flags);
void                      pCvreduce(Mat_t* src, Mat_t* dst, int dim, int rtype, int dtype /* default: -1 */);
void                      pCvreduceV2(UMat_t* src, UMat_t* dst, int dim, int rtype, int dtype /* default: -1 */);
void                      pCvreduceArgMax(Mat_t* src, Mat_t* dst, int axis, bool lastIndex /* default: false */);
void                      pCvreduceArgMaxV2(UMat_t* src, UMat_t* dst, int axis, bool lastIndex /* default: false */);
void                      pCvreduceArgMin(Mat_t* src, Mat_t* dst, int axis, bool lastIndex /* default: false */);
void                      pCvreduceArgMinV2(UMat_t* src, UMat_t* dst, int axis, bool lastIndex /* default: false */);
void                      pCvremap(Mat_t* src, Mat_t* dst, Mat_t* map1, Mat_t* map2, int interpolation, 
                                   int borderMode /* default: BORDER_CONSTANT */, Scalar_t* borderValue /* default: Scalar() */);
void                      pCvremapV2(UMat_t* src, UMat_t* dst, UMat_t* map1, UMat_t* map2, int interpolation, 
                                   int borderMode /* default: BORDER_CONSTANT */, Scalar_t* borderValue /* default: Scalar() */);
void                      pCvrepeat(Mat_t* src, int ny, int nx, Mat_t* dst);
void                      pCvrepeatV2(UMat_t* src, int ny, int nx, UMat_t* dst);
void                      pCvreprojectImageTo3D(Mat_t* disparity, Mat_t* _3dImage, Mat_t* Q, 
                                   bool handleMissingValues /* default: false */, int ddepth /* default: -1 */);
void                      pCvreprojectImageTo3DV2(UMat_t* disparity, UMat_t* _3dImage, UMat_t* Q, 
                                   bool handleMissingValues /* default: false */, int ddepth /* default: -1 */);
void                      pCvresize(Mat_t* src, Mat_t* dst, Size_t* dsize, double fx /* default: 0 */, 
                                   double fy /* default: 0 */, int interpolation /* default: INTER_LINEAR */);
void                      pCvresizeV2(UMat_t* src, UMat_t* dst, Size_t* dsize, double fx /* default: 0 */, 
                                   double fy /* default: 0 */, int interpolation /* default: INTER_LINEAR */);
void                      pCvresizeWindow(string_t* winname, int width, int height);
void                      pCvresizeWindowV2(string_t* winname, Size_t* size);
void                      pCvrotate(Mat_t* src, Mat_t* dst, int rotateCode);
void                      pCvrotateV2(UMat_t* src, UMat_t* dst, int rotateCode);
int                       pCvrotatedRectangleIntersection(RotatedRect_t* rect1, RotatedRect_t* rect2, 
                                   Mat_t* intersectingRegion);
int                       pCvrotatedRectangleIntersectionV2(RotatedRect_t* rect1, RotatedRect_t* rect2, 
                                   UMat_t* intersectingRegion);
void                      pCvsamples_addSamplesDataSearchPath(string_t* path);
void                      pCvsamples_addSamplesDataSearchSubDirectory(string_t* subdir);
string_t*                 pCvsamples_findFile(string_t* relative_path, bool required /* default: true */, 
                                   bool silentMode /* default: false */);
string_t*                 pCvsamples_findFileOrKeep(string_t* relative_path, bool silentMode /* default: false */);
double                    pCvsampsonDistance(Mat_t* pt1, Mat_t* pt2, Mat_t* F);
double                    pCvsampsonDistanceV2(UMat_t* pt1, UMat_t* pt2, UMat_t* F);
void                      pCvscaleAdd(Mat_t* src1, double alpha, Mat_t* src2, Mat_t* dst);
void                      pCvscaleAddV2(UMat_t* src1, double alpha, UMat_t* src2, UMat_t* dst);
void                      pCvseamlessClone(Mat_t* src, Mat_t* dst, Mat_t* mask, Point_t* p, Mat_t* blend, int flags);
void                      pCvseamlessCloneV2(UMat_t* src, UMat_t* dst, UMat_t* mask, Point_t* p, UMat_t* blend, 
                                   int flags);
Rect_t*                   pCvselectROI(string_t* windowName, Mat_t* img, bool showCrosshair /* default: true */, 
                                   bool fromCenter /* default: false */);
Rect_t*                   pCvselectROIV2(string_t* windowName, UMat_t* img, bool showCrosshair /* default: true */, 
                                   bool fromCenter /* default: false */);
Rect_t*                   pCvselectROIV3(Mat_t* img, bool showCrosshair /* default: true */, 
                                   bool fromCenter /* default: false */);
Rect_t*                   pCvselectROIV4(UMat_t* img, bool showCrosshair /* default: true */, 
                                   bool fromCenter /* default: false */);
void                      pCvselectROIs(string_t* windowName, Mat_t* img, vector_Rect* boundingBoxes, 
                                   bool showCrosshair /* default: true */, bool fromCenter /* default: false */);
void                      pCvselectROIsV2(string_t* windowName, UMat_t* img, vector_Rect* boundingBoxes, 
                                   bool showCrosshair /* default: true */, bool fromCenter /* default: false */);
void                      pCvsepFilter2D(Mat_t* src, Mat_t* dst, int ddepth, Mat_t* kernelX, Mat_t* kernelY, 
                                   Point_t* anchor /* default: Point(-1,-1) */, double delta /* default: 0 */, int borderType /* default: BORDER_DEFAULT */);
void                      pCvsepFilter2DV2(UMat_t* src, UMat_t* dst, int ddepth, UMat_t* kernelX, UMat_t* kernelY, 
                                   Point_t* anchor /* default: Point(-1,-1) */, double delta /* default: 0 */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvsetIdentity(Mat_t* mtx, Scalar_t* s /* default: Scalar(1) */);
void                      pCvsetIdentityV2(UMat_t* mtx, Scalar_t* s /* default: Scalar(1) */);
int                       pCvsetLogLevel(int level);
void                      pCvsetNumThreads(int nthreads);
void                      pCvsetRNGSeed(int seed);
void                      pCvsetTrackbarMax(string_t* trackbarname, string_t* winname, int maxval);
void                      pCvsetTrackbarMin(string_t* trackbarname, string_t* winname, int minval);
void                      pCvsetTrackbarPos(string_t* trackbarname, string_t* winname, int _pos);
void                      pCvsetUseOptimized(bool onoff);
void                      pCvsetWindowProperty(string_t* winname, int prop_id, double prop_value);
void                      pCvsetWindowTitle(string_t* winname, string_t* title);
bool                      pCvsolve(Mat_t* src1, Mat_t* src2, Mat_t* dst, int flags /* default: DECOMP_LU */);
bool                      pCvsolveV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, int flags /* default: DECOMP_LU */);
int                       pCvsolveCubic(Mat_t* coeffs, Mat_t* roots);
int                       pCvsolveCubicV2(UMat_t* coeffs, UMat_t* roots);
int                       pCvsolveP3P(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   vector_Mat* rvecs, vector_Mat* tvecs, int flags);
int                       pCvsolveP3PV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, vector_UMat* rvecs, vector_UMat* tvecs, int flags);
bool                      pCvsolvePnP(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* rvec, Mat_t* tvec, bool useExtrinsicGuess /* default: false */, 
                                   int flags /* default: SOLVEPNP_ITERATIVE */);
bool                      pCvsolvePnPV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, bool useExtrinsicGuess /* default: false */, 
                                   int flags /* default: SOLVEPNP_ITERATIVE */);
int                       pCvsolvePnPGeneric(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, vector_Mat* rvecs, vector_Mat* tvecs, 
                                   bool useExtrinsicGuess /* default: false */, SolvePnPMethod flags /* default: SOLVEPNP_ITERATIVE */, 
                                   Mat_t* rvec /* default: Mat() */, Mat_t* tvec /* default: Mat() */, 
                                   Mat_t* reprojectionError /* default: Mat() */);
int                       pCvsolvePnPGenericV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, vector_UMat* rvecs, vector_UMat* tvecs, 
                                   bool useExtrinsicGuess /* default: false */, SolvePnPMethod flags /* default: SOLVEPNP_ITERATIVE */, 
                                   UMat_t* rvec /* default: UMat() */, UMat_t* tvec /* default: UMat() */, 
                                   UMat_t* reprojectionError /* default: UMat() */);
bool                      pCvsolvePnPRansac(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, bool useExtrinsicGuess /* default: false */, 
                                   int iterationsCount /* default: 100 */, float reprojectionError /* default: 8.0 */, 
                                   double confidence /* default: 0.99 */, Mat_t* inliers /* default: Mat() */, 
                                   int flags /* default: SOLVEPNP_ITERATIVE */);
bool                      pCvsolvePnPRansacV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, bool useExtrinsicGuess /* default: false */, 
                                   int iterationsCount /* default: 100 */, float reprojectionError /* default: 8.0 */, 
                                   double confidence /* default: 0.99 */, UMat_t* inliers /* default: UMat() */, 
                                   int flags /* default: SOLVEPNP_ITERATIVE */);
bool                      pCvsolvePnPRansacV3(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, Mat_t* inliers, 
                                   UsacParams_t* params /* default: UsacParams() */);
bool                      pCvsolvePnPRansacV4(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, UMat_t* inliers, 
                                   UsacParams_t* params /* default: UsacParams() */);
void                      pCvsolvePnPRefineLM(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON) */);
void                      pCvsolvePnPRefineLMV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON) */);
void                      pCvsolvePnPRefineVVS(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON) */, double VVSlambda /* default: 1 */);
void                      pCvsolvePnPRefineVVSV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON) */, double VVSlambda /* default: 1 */);
double                    pCvsolvePoly(Mat_t* coeffs, Mat_t* roots, int maxIters /* default: 300 */);
double                    pCvsolvePolyV2(UMat_t* coeffs, UMat_t* roots, int maxIters /* default: 300 */);
void                      pCvsort(Mat_t* src, Mat_t* dst, int flags);
void                      pCvsortV2(UMat_t* src, UMat_t* dst, int flags);
void                      pCvsortIdx(Mat_t* src, Mat_t* dst, int flags);
void                      pCvsortIdxV2(UMat_t* src, UMat_t* dst, int flags);
void                      pCvspatialGradient(Mat_t* src, Mat_t* dx, Mat_t* dy, int ksize /* default: 3 */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvspatialGradientV2(UMat_t* src, UMat_t* dx, UMat_t* dy, int ksize /* default: 3 */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvsplit(Mat_t* m, vector_Mat* mv);
void                      pCvsplitV2(UMat_t* m, vector_UMat* mv);
void                      pCvsqrBoxFilter(Mat_t* src, Mat_t* dst, int ddepth, Size_t* ksize, 
                                   Point_t* anchor /* default: Point(-1, -1) */, bool normalize /* default: true */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvsqrBoxFilterV2(UMat_t* src, UMat_t* dst, int ddepth, Size_t* ksize, 
                                   Point_t* anchor /* default: Point(-1, -1) */, bool normalize /* default: true */, 
                                   int borderType /* default: BORDER_DEFAULT */);
void                      pCvsqrt(Mat_t* src, Mat_t* dst);
void                      pCvsqrtV2(UMat_t* src, UMat_t* dst);
int                       pCvstartWindowThread();
double                    pCvstereoCalibrate(vector_Mat* objectPoints, vector_Mat* imagePoints1, 
                                   vector_Mat* imagePoints2, Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Size_t* imageSize, Mat_t* R, Mat_t* T, Mat_t* E, Mat_t* F, 
                                   int flags /* default: CALIB_FIX_INTRINSIC */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6) */);
double                    pCvstereoCalibrateV2(vector_UMat* objectPoints, vector_UMat* imagePoints1, 
                                   vector_UMat* imagePoints2, UMat_t* cameraMatrix1, UMat_t* distCoeffs1, UMat_t* cameraMatrix2, 
                                   UMat_t* distCoeffs2, Size_t* imageSize, UMat_t* R, UMat_t* T, UMat_t* E, UMat_t* F, 
                                   int flags /* default: CALIB_FIX_INTRINSIC */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6) */);
double                    pCvstereoCalibrateExtended(vector_Mat* objectPoints, vector_Mat* imagePoints1, 
                                   vector_Mat* imagePoints2, Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Size_t* imageSize, Mat_t* R, Mat_t* T, Mat_t* E, Mat_t* F, 
                                   Mat_t* perViewErrors, int flags /* default: CALIB_FIX_INTRINSIC */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6) */);
double                    pCvstereoCalibrateExtendedV2(vector_UMat* objectPoints, vector_UMat* imagePoints1, 
                                   vector_UMat* imagePoints2, UMat_t* cameraMatrix1, UMat_t* distCoeffs1, 
                                   UMat_t* cameraMatrix2, UMat_t* distCoeffs2, Size_t* imageSize, UMat_t* R, UMat_t* T, 
                                   UMat_t* E, UMat_t* F, UMat_t* perViewErrors, 
                                   int flags /* default: CALIB_FIX_INTRINSIC */, 
                                   TermCriteria_t* criteria /* default: TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6) */);
void                      pCvstereoRectify(Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Size_t* imageSize, Mat_t* R, Mat_t* T, Mat_t* R1, Mat_t* R2, Mat_t* P1, 
                                   Mat_t* P2, Mat_t* Q, int flags /* default: CALIB_ZERO_DISPARITY */, 
                                   double alpha /* default: -1 */, Size_t* newImageSize /* default: Size() */, 
                                   Rect_t* validPixROI1 /* default: 0 */, Rect_t* validPixROI2 /* default: 0 */);
void                      pCvstereoRectifyV2(UMat_t* cameraMatrix1, UMat_t* distCoeffs1, UMat_t* cameraMatrix2, 
                                   UMat_t* distCoeffs2, Size_t* imageSize, UMat_t* R, UMat_t* T, UMat_t* R1, UMat_t* R2, 
                                   UMat_t* P1, UMat_t* P2, UMat_t* Q, int flags /* default: CALIB_ZERO_DISPARITY */, 
                                   double alpha /* default: -1 */, Size_t* newImageSize /* default: Size() */, 
                                   Rect_t* validPixROI1 /* default: 0 */, Rect_t* validPixROI2 /* default: 0 */);
bool                      pCvstereoRectifyUncalibrated(Mat_t* points1, Mat_t* points2, Mat_t* F, Size_t* imgSize, 
                                   Mat_t* H1, Mat_t* H2, double threshold /* default: 5 */);
bool                      pCvstereoRectifyUncalibratedV2(UMat_t* points1, UMat_t* points2, UMat_t* F, Size_t* imgSize, 
                                   UMat_t* H1, UMat_t* H2, double threshold /* default: 5 */);
void                      pCvstylization(Mat_t* src, Mat_t* dst, float sigma_s /* default: 60 */, 
                                   float sigma_r /* default: 0.45f */);
void                      pCvstylizationV2(UMat_t* src, UMat_t* dst, float sigma_s /* default: 60 */, 
                                   float sigma_r /* default: 0.45f */);
void                      pCvsubtract(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask /* default: Mat() */, 
                                   int dtype /* default: -1 */);
void                      pCvsubtractV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask /* default: UMat() */, 
                                   int dtype /* default: -1 */);
Scalar_t*                 pCvsumElems(Mat_t* src);
Scalar_t*                 pCvsumElemsV2(UMat_t* src);
void                      pCvtextureFlattening(Mat_t* src, Mat_t* mask, Mat_t* dst, 
                                   float low_threshold /* default: 30 */, float high_threshold /* default: 45 */, 
                                   int kernel_size /* default: 3 */);
void                      pCvtextureFlatteningV2(UMat_t* src, UMat_t* mask, UMat_t* dst, 
                                   float low_threshold /* default: 30 */, float high_threshold /* default: 45 */, 
                                   int kernel_size /* default: 3 */);
double                    pCvthreshold(Mat_t* src, Mat_t* dst, double thresh, double maxval, int _type);
double                    pCvthresholdV2(UMat_t* src, UMat_t* dst, double thresh, double maxval, int _type);
Scalar_t*                 pCvtrace(Mat_t* mtx);
Scalar_t*                 pCvtraceV2(UMat_t* mtx);
void                      pCvtransform(Mat_t* src, Mat_t* dst, Mat_t* m);
void                      pCvtransformV2(UMat_t* src, UMat_t* dst, UMat_t* m);
void                      pCvtranspose(Mat_t* src, Mat_t* dst);
void                      pCvtransposeV2(UMat_t* src, UMat_t* dst);
void                      pCvtransposeND(Mat_t* src, vector_int* order, Mat_t* dst);
void                      pCvtransposeNDV2(UMat_t* src, vector_int* order, UMat_t* dst);
void                      pCvtriangulatePoints(Mat_t* projMatr1, Mat_t* projMatr2, Mat_t* projPoints1, 
                                   Mat_t* projPoints2, Mat_t* points4D);
void                      pCvtriangulatePointsV2(UMat_t* projMatr1, UMat_t* projMatr2, UMat_t* projPoints1, 
                                   UMat_t* projPoints2, UMat_t* points4D);
void                      pCvundistort(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* newCameraMatrix /* default: Mat() */);
void                      pCvundistortV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   UMat_t* newCameraMatrix /* default: UMat() */);
void                      pCvundistortImagePoints(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   TermCriteria_t* arg1 /* default: TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 5, 0.01) */);
void                      pCvundistortImagePointsV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   TermCriteria_t* arg1 /* default: TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 5, 0.01) */);
void                      pCvundistortPoints(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* R /* default: Mat() */, Mat_t* P /* default: Mat() */);
void                      pCvundistortPointsV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   UMat_t* R /* default: UMat() */, UMat_t* P /* default: UMat() */);
void                      pCvundistortPointsIter(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* R, Mat_t* P, TermCriteria_t* criteria);
void                      pCvundistortPointsIterV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   UMat_t* R, UMat_t* P, TermCriteria_t* criteria);
bool                      pCvuseOptimized();
string_t*                 pCvutils_dumpBool(bool argument);
string_t*                 pCvutils_dumpCString(c_string argument);
string_t*                 pCvutils_dumpDouble(double argument);
string_t*                 pCvutils_dumpFloat(float argument);
string_t*                 pCvutils_dumpInputArray(Mat_t* argument);
string_t*                 pCvutils_dumpInputArrayV2(UMat_t* argument);
string_t*                 pCvutils_dumpInputArrayOfArrays(vector_Mat* argument);
string_t*                 pCvutils_dumpInputArrayOfArraysV2(vector_UMat* argument);
string_t*                 pCvutils_dumpInputOutputArray(Mat_t* argument);
string_t*                 pCvutils_dumpInputOutputArrayV2(UMat_t* argument);
string_t*                 pCvutils_dumpInputOutputArrayOfArrays(vector_Mat* argument);
string_t*                 pCvutils_dumpInputOutputArrayOfArraysV2(vector_UMat* argument);
string_t*                 pCvutils_dumpInt(int argument);
string_t*                 pCvutils_dumpRange(Range_t* argument);
string_t*                 pCvutils_dumpRect(Rect_t* argument);
string_t*                 pCvutils_dumpRotatedRect(RotatedRect_t* argument);
string_t*                 pCvutils_dumpSizeT(size_t argument);
string_t*                 pCvutils_dumpString(string_t* argument);
string_t*                 pCvutils_dumpTermCriteria(TermCriteria_t* argument);
string_t*                 pCvutils_dumpVectorOfDouble(vector_double* vec);
string_t*                 pCvutils_dumpVectorOfInt(vector_int* vec);
string_t*                 pCvutils_dumpVectorOfRect(vector_Rect* vec);
string_t*                 pCvutils_fs_getCacheDirectoryForDownloads();
void                      pCvutils_generateVectorOfInt(size_t len, vector_int* vec);
void                      pCvutils_generateVectorOfMat(size_t len, int rows, int cols, int dtype, vector_Mat* vec);
void                      pCvutils_generateVectorOfRect(size_t len, vector_Rect* vec);
bool                      pCvutils_nested_testEchoBooleanFunction(bool flag);
AsyncArray_t*             pCvutils_testAsyncArray(Mat_t* argument);
AsyncArray_t*             pCvutils_testAsyncArrayV2(UMat_t* argument);
AsyncArray_t*             pCvutils_testAsyncException();
string_t*                 pCvutils_testOverloadResolution(int value, Point_t* point /* default: Point(42, 24) */);
string_t*                 pCvutils_testOverloadResolutionV2(Rect_t* rect);
int                       pCvutils_testOverwriteNativeMethod(int argument);
void                      pCvutils_testRaiseGeneralException();
string_t*                 pCvutils_testReservedKeywordConversion(int positional_argument, int lambda /* default: 2 */, 
                                   int from /* default: 3 */);
RotatedRect_t*            pCvutils_testRotatedRect(float x, float y, float w, float h, float angle);
vector_RotatedRect*       pCvutils_testRotatedRectVector(float x, float y, float w, float h, float angle);
void                      pCvvalidateDisparity(Mat_t* disparity, Mat_t* cost, int minDisparity, int numberOfDisparities, 
                                   int disp12MaxDisp /* default: 1 */);
void                      pCvvalidateDisparityV2(UMat_t* disparity, UMat_t* cost, int minDisparity, 
                                   int numberOfDisparities, int disp12MaxDisp /* default: 1 */);
void                      pCvvconcat(vector_Mat* src, Mat_t* dst);
void                      pCvvconcatV2(vector_UMat* src, UMat_t* dst);
int                       pCvwaitKey(int delay /* default: 0 */);
int                       pCvwaitKeyEx(int delay /* default: 0 */);
void                      pCvwarpAffine(Mat_t* src, Mat_t* dst, Mat_t* M, Size_t* dsize, 
                                   int flags /* default: INTER_LINEAR */, int borderMode /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: Scalar() */);
void                      pCvwarpAffineV2(UMat_t* src, UMat_t* dst, UMat_t* M, Size_t* dsize, 
                                   int flags /* default: INTER_LINEAR */, int borderMode /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: Scalar() */);
void                      pCvwarpPerspective(Mat_t* src, Mat_t* dst, Mat_t* M, Size_t* dsize, 
                                   int flags /* default: INTER_LINEAR */, int borderMode /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: Scalar() */);
void                      pCvwarpPerspectiveV2(UMat_t* src, UMat_t* dst, UMat_t* M, Size_t* dsize, 
                                   int flags /* default: INTER_LINEAR */, int borderMode /* default: BORDER_CONSTANT */, 
                                   Scalar_t* borderValue /* default: Scalar() */);
void                      pCvwarpPolar(Mat_t* src, Mat_t* dst, Size_t* dsize, Point2f_t* center, double maxRadius, 
                                   int flags);
void                      pCvwarpPolarV2(UMat_t* src, UMat_t* dst, Size_t* dsize, Point2f_t* center, double maxRadius, 
                                   int flags);
void                      pCvwatershed(Mat_t* image, Mat_t* markers);
void                      pCvwatershedV2(UMat_t* image, UMat_t* markers);
bool                      pCvwriteOpticalFlow(string_t* path, Mat_t* flow);
bool                      pCvwriteOpticalFlowV2(string_t* path, UMat_t* flow);
#ifdef __cplusplus
 }
#endif

#define  CV_8U   0
#define  CV_8S   1
#define  CV_16U   2
#define  CV_16S   3
#define  CV_32S   4
#define  CV_32F   5
#define  CV_64F   6
#define  CV_16F   7
#define  CV_8UC1   0
#define  CV_8UC2   8
#define  CV_8UC3   16
#define  CV_32FC1   5
#define  CV_32FC2   13
#define  CV_32FC3   21
#define  CV_32SC1   4
#define  CV_32SC2   12
#define  CV_32SC3   20
#define  CV_USRTYPE1   7
#define  FILLED   -1
#define  LINE_AA   16
#define  LINE_8   8
#define  LINE_4   4
#define  REDUCE_SUM   0
#define  REDUCE_AVG   1
#define  REDUCE_MAX   2
#define  REDUCE_MIN   3
#define  KIND_SHIFT   16
#define  CV_AA   16
#define  CV_MOP_ERODE   0
#define  CV_MOP_DILATE   1
#define  CV_MOP_OPEN   2
#define  CV_MOP_CLOSE   3
#define  CV_MOP_GRADIENT   49
#define  CV_MOP_TOPHAT   5
#define  CV_MOP_BLACKHAT   6
#define  CV_MAT_CONT_FLAG   16384
#define  CV_SUBMAT_FLAG   32768
#define  CV_MAX_DIM   32
#define  CV_INTER_NN   0
#define  CV_INTER_LINEAR   1
#define  CV_INTER_CUBIC   2
#define  CV_INTER_AREA   3
#define  CV_INTER_LANCZOS4   4
#define  CV_WARP_INVERSE_MAP   16
#define  CV_THRESH_BINARY   0
#define  CV_THRESH_BINARY_INV   1
#define  CV_THRESH_TRUNC   2
#define  CV_THRESH_TOZERO   3
#define  CV_THRESH_TOZERO_INV   4
#define  CV_THRESH_MASK   7
#define  CV_THRESH_OTSU   8
#define  CV_RETR_EXTERNAL   0
#define  CV_RETR_LIST   1
#define  CV_RETR_CCOMP   2
#define  CV_RETR_TREE   3
#define  CV_RETR_FLOODFILL   4
#define  CV_CHAIN_APPROX_NONE   1
#define  CV_CHAIN_APPROX_SIMPLE   2
#define  CV_CHAIN_APPROX_TC89_L1   3
#define  CV_CHAIN_APPROX_TC89_KCOS   4
#define  CV_WND_PROP_FULLSCREEN   0
#define  CV_WND_PROP_AUTOSIZE   1
#define  CV_WND_PROP_ASPECTRATIO   2
#define  CV_WND_PROP_OPENGL   3
#define  CV_WINDOW_NORMAL   0
#define  CV_WINDOW_AUTOSIZE   1
#define  CV_WINDOW_OPENGL   4096
#define  CV_INPAINT_NS   0
#define  CV_INPAINT_TELEA   1
#define  IPL_BORDER_CONSTANT   0
#define  IPL_BORDER_REPLICATE   1
#define  IPL_BORDER_REFLECT   2
#define  IPL_BORDER_WRAP   3
#define  IPL_BORDER_REFLECT_101   4
#define  IPL_BORDER_TRANSPARENT   5
#define  CV_LMEDS   4
#define  CV_RANSAC   8
#define  CV_FM_LMEDS   CV_LMEDS
#define  CV_FM_RANSAC   CV_RANSAC
#define  CV_FM_7POINT   1
#define  CV_FM_8POINT   2
#define  CV_CALIB_USE_INTRINSIC_GUESS   1
#define  CV_CALIB_FIX_ASPECT_RATIO   2
#define  CV_CALIB_FIX_PRINCIPAL_POINT   4
#define  CV_CALIB_ZERO_TANGENT_DIST   8
#define  CV_CALIB_FIX_FOCAL_LENGTH   16
#define  CV_CALIB_FIX_K1   32
#define  CV_CALIB_FIX_K2   64
#define  CV_CALIB_FIX_K3   128
#define  CV_CALIB_FIX_K4   2048
#define  CV_CALIB_FIX_K5   4096
#define  CV_CALIB_FIX_K6   8192
#define  CV_CALIB_RATIONAL_MODEL   16384
#define  CV_CALIB_FIX_INTRINSIC   256
#define  CV_CALIB_SAME_FOCAL_LENGTH   512
#define  CV_CALIB_ZERO_DISPARITY   1024
#define  CV_LKFLOW_INITIAL_GUESSES   4
#define  CV_LKFLOW_GET_MIN_EIGENVALS   8
#define  CV_HAAR_DO_CANNY_PRUNING   1
#define  CV_HAAR_SCALE_IMAGE   2
#define  CV_HAAR_FIND_BIGGEST_OBJECT   4
#define  CV_HAAR_DO_ROUGH_SEARCH   8
#define  LMEDS   4
#define  RANSAC   8
#define  RHO   16
#define  USAC_DEFAULT   32
#define  USAC_PARALLEL   33
#define  USAC_FM_8PTS   34
#define  USAC_FAST   35
#define  USAC_ACCURATE   36
#define  USAC_PROSAC   37
#define  USAC_MAGSAC   38

enum  SolvePnPMethod  { SOLVEPNP_ITERATIVE =  0, SOLVEPNP_EPNP =  1, SOLVEPNP_P3P =  2,
         SOLVEPNP_DLS =  3, SOLVEPNP_UPNP =  4, SOLVEPNP_AP3P =  5,
         SOLVEPNP_IPPE =  6, SOLVEPNP_IPPE_SQUARE =  7, SOLVEPNP_SQPNP =  8,
         SOLVEPNP_MAX_COUNT =  8+1  };
#define  CALIB_CB_ADAPTIVE_THRESH   1
#define  CALIB_CB_NORMALIZE_IMAGE   2
#define  CALIB_CB_FILTER_QUADS   4
#define  CALIB_CB_FAST_CHECK   8
#define  CALIB_CB_EXHAUSTIVE   16
#define  CALIB_CB_ACCURACY   32
#define  CALIB_CB_LARGER   64
#define  CALIB_CB_MARKER   128
#define  CALIB_CB_SYMMETRIC_GRID   1
#define  CALIB_CB_ASYMMETRIC_GRID   2
#define  CALIB_CB_CLUSTERING   4
#define  CALIB_NINTRINSIC   18
#define  CALIB_USE_INTRINSIC_GUESS   0x00001
#define  CALIB_FIX_ASPECT_RATIO   0x00002
#define  CALIB_FIX_PRINCIPAL_POINT   0x00004
#define  CALIB_ZERO_TANGENT_DIST   0x00008
#define  CALIB_FIX_FOCAL_LENGTH   0x00010
#define  CALIB_FIX_K1   0x00020
#define  CALIB_FIX_K2   0x00040
#define  CALIB_FIX_K3   0x00080
#define  CALIB_FIX_K4   0x00800
#define  CALIB_FIX_K5   0x01000
#define  CALIB_FIX_K6   0x02000
#define  CALIB_RATIONAL_MODEL   0x04000
#define  CALIB_THIN_PRISM_MODEL   0x08000
#define  CALIB_FIX_S1_S2_S3_S4   0x10000
#define  CALIB_TILTED_MODEL   0x40000
#define  CALIB_FIX_TAUX_TAUY   0x80000
#define  CALIB_USE_QR   0x100000
#define  CALIB_FIX_TANGENT_DIST   0x200000
#define  CALIB_FIX_INTRINSIC   0x00100
#define  CALIB_SAME_FOCAL_LENGTH   0x00200
#define  CALIB_ZERO_DISPARITY   0x00400
#define  CALIB_USE_LU   (1 << 17)
#define  CALIB_USE_EXTRINSIC_GUESS   (1 << 22)
#define  FM_7POINT   1
#define  FM_8POINT   2
#define  FM_LMEDS   4
#define  FM_RANSAC   8

enum  HandEyeCalibrationMethod  { CALIB_HAND_EYE_TSAI =  0, CALIB_HAND_EYE_PARK =  1,
         CALIB_HAND_EYE_HORAUD =  2, CALIB_HAND_EYE_ANDREFF =  3, CALIB_HAND_EYE_DANIILIDIS =  4  };
enum  RobotWorldHandEyeCalibrationMethod  {
         CALIB_ROBOT_WORLD_HAND_EYE_SHAH =  0, CALIB_ROBOT_WORLD_HAND_EYE_LI =  1  };
enum  SamplingMethod  { SAMPLING_UNIFORM =  0,
         SAMPLING_PROGRESSIVE_NAPSAC =  1, SAMPLING_NAPSAC =  2, SAMPLING_PROSAC =  3  };
enum  LocalOptimMethod  {
         LOCAL_OPTIM_NULL =  0, LOCAL_OPTIM_INNER_LO =  1, LOCAL_OPTIM_INNER_AND_ITER_LO =  2,
         LOCAL_OPTIM_GC =  3, LOCAL_OPTIM_SIGMA =  4  };
enum  ScoreMethod  { SCORE_METHOD_RANSAC =  0,
         SCORE_METHOD_MSAC =  1, SCORE_METHOD_MAGSAC =  2, SCORE_METHOD_LMEDS =  3  };
enum  NeighborSearchMethod  {
         NEIGH_FLANN_KNN =  0, NEIGH_GRID =  1, NEIGH_FLANN_RADIUS =  2  };
enum  CirclesGridFinderParameters_GridType  {
         SYMMETRIC_GRID =  0, ASYMMETRIC_GRID =  1  };
#define  StereoMatcher_DISP_SHIFT   4
#define  StereoMatcher_DISP_SCALE   (1 << DISP_SHIFT)
#define  StereoBM_PREFILTER_NORMALIZED_RESPONSE   0
#define  StereoBM_PREFILTER_XSOBEL   1
#define  StereoSGBM_MODE_SGBM   0
#define  StereoSGBM_MODE_HH   1
#define  StereoSGBM_MODE_SGBM_3WAY   2
#define  StereoSGBM_MODE_HH4   3

enum  UndistortTypes  { PROJ_SPHERICAL_ORTHO =  0,
         PROJ_SPHERICAL_EQRECT =  1  };
#define  fisheye_CALIB_USE_INTRINSIC_GUESS   1 << 0
#define  fisheye_CALIB_RECOMPUTE_EXTRINSIC   1 << 1
#define  fisheye_CALIB_CHECK_COND   1 << 2
#define  fisheye_CALIB_FIX_SKEW   1 << 3
#define  fisheye_CALIB_FIX_K1   1 << 4
#define  fisheye_CALIB_FIX_K2   1 << 5
#define  fisheye_CALIB_FIX_K3   1 << 6
#define  fisheye_CALIB_FIX_K4   1 << 7
#define  fisheye_CALIB_FIX_INTRINSIC   1 << 8
#define  fisheye_CALIB_FIX_PRINCIPAL_POINT   1 << 9
#define  fisheye_CALIB_ZERO_DISPARITY   1 << 10
#define  fisheye_CALIB_FIX_FOCAL_LENGTH   1 << 11

enum  SortFlags  { SORT_EVERY_ROW =  0, SORT_EVERY_COLUMN =  1,
         SORT_ASCENDING =  0, SORT_DESCENDING =  16  };
enum  CovarFlags  { COVAR_SCRAMBLED =  0,
         COVAR_NORMAL =  1, COVAR_USE_AVG =  2, COVAR_SCALE =  4,
         COVAR_ROWS =  8, COVAR_COLS =  16  };
enum  KmeansFlags  { KMEANS_RANDOM_CENTERS =  0,
         KMEANS_PP_CENTERS =  2, KMEANS_USE_INITIAL_LABELS =  1  };
enum  RotateFlags  { ROTATE_90_CLOCKWISE =  0,
         ROTATE_180 =  1, ROTATE_90_COUNTERCLOCKWISE =  2  };
enum  PCA_Flags  { DATA_AS_ROW =  0,
         DATA_AS_COL =  1, USE_AVG =  2  };
enum  SVD_Flags  { MODIFY_A =  1,
         NO_UV =  2, FULL_UV =  4  };
#define  RNG_UNIFORM   0
#define  RNG_NORMAL   1

enum  Formatter_FormatType  { FMT_DEFAULT =  0,
         FMT_MATLAB =  1, FMT_CSV =  2, FMT_PYTHON =  3,
         FMT_NUMPY =  4, FMT_C =  5  };
enum  Param  { _INT =  0,
         _BOOLEAN =  1, _REAL =  2, _STRING =  3,
         _MAT =  4, _MAT_VECTOR =  5, _ALGORITHM =  6,
         _FLOAT =  7, _UNSIGNED_INT =  8, _UINT64 =  9,
         _UCHAR =  11, _SCALAR =  12  };
enum  Error_Code  { StsOk =  0,
         StsBackTrace =  -1, StsError =  -2, StsInternal =  -3,
         StsNoMem =  -4, StsBadArg =  -5, StsBadFunc =  -6,
         StsNoConv =  -7, StsAutoTrace =  -8, HeaderIsNull =  -9,
         BadImageSize =  -10, BadOffset =  -11, BadDataPtr =  -12,
         BadStep =  -13, BadModelOrChSeq =  -14, BadNumChannels =  -15,
         BadNumChannel1U =  -16, BadDepth =  -17, BadAlphaChannel =  -18,
         BadOrder =  -19, BadOrigin =  -20, BadAlign =  -21,
         BadCallBack =  -22, BadTileSize =  -23, BadCOI =  -24,
         BadROISize =  -25, MaskIsTiled =  -26, StsNullPtr =  -27,
         StsVecLengthErr =  -28, StsFilterStructContentErr =  -29, StsKernelStructContentErr =  -30,
         StsFilterOffsetErr =  -31, StsBadSize =  -201, StsDivByZero =  -202,
         StsInplaceNotSupported =  -203, StsObjectNotFound =  -204, StsUnmatchedFormats =  -205,
         StsBadFlag =  -206, StsBadPoint =  -207, StsBadMask =  -208,
         StsUnmatchedSizes =  -209, StsUnsupportedFormat =  -210, StsOutOfRange =  -211,
         StsParseError =  -212, StsNotImplemented =  -213, StsBadMemBlock =  -214,
         StsAssert =  -215, GpuNotSupported =  -216, GpuApiCallError =  -217,
         OpenGlNotSupported =  -218, OpenGlApiCallError =  -219, OpenCLApiCallError =  -220,
         OpenCLDoubleNotSupported =  -221, OpenCLInitError =  -222, OpenCLNoAMDBlasFft =  -223  };
enum  DecompTypes  {
         DECOMP_LU =  0, DECOMP_SVD =  1, DECOMP_EIG =  2,
         DECOMP_CHOLESKY =  3, DECOMP_QR =  4, DECOMP_NORMAL =  16  };
enum  NormTypes  {
         NORM_INF =  1, NORM_L1 =  2, NORM_L2 =  4,
         NORM_L2SQR =  5, NORM_HAMMING =  6, NORM_HAMMING2 =  7,
         NORM_TYPE_MASK =  7, NORM_RELATIVE =  8, NORM_MINMAX =  32  };
enum  CmpTypes  {
         CMP_EQ =  0, CMP_GT =  1, CMP_GE =  2,
         CMP_LT =  3, CMP_LE =  4, CMP_NE =  5  };
enum  GemmFlags  {
         GEMM_1_T =  1, GEMM_2_T =  2, GEMM_3_T =  4  };
enum  DftFlags  {
         DFT_INVERSE =  1, DFT_SCALE =  2, DFT_ROWS =  4,
         DFT_COMPLEX_OUTPUT =  16, DFT_REAL_OUTPUT =  32, DFT_COMPLEX_INPUT =  64,
         DCT_INVERSE =  DFT_INVERSE, DCT_ROWS =  DFT_ROWS  };
enum  BorderTypes  { BORDER_CONSTANT =  0,
         BORDER_REPLICATE =  1, BORDER_REFLECT =  2, BORDER_WRAP =  3,
         BORDER_REFLECT_101 =  4, BORDER_TRANSPARENT =  5, BORDER_REFLECT101 =  BORDER_REFLECT_101,
         BORDER_DEFAULT =  BORDER_REFLECT_101, BORDER_ISOLATED =  16  };
enum  AccessFlag  { ACCESS_READ =  1<<24,
         ACCESS_WRITE =  1<<25, ACCESS_RW =  3<<24, ACCESS_MASK =  ACCESS_RW,
         ACCESS_FAST =  1<<26  };
#define  InputArray_KIND_SHIFT   16
#define  InputArray_FIXED_TYPE   0x8000 << KIND_SHIFT
#define  InputArray_FIXED_SIZE   0x4000 << KIND_SHIFT
#define  InputArray_KIND_MASK   31 << KIND_SHIFT
#define  InputArray_NONE   0 << KIND_SHIFT
#define  InputArray_MAT   1 << KIND_SHIFT
#define  InputArray_MATX   2 << KIND_SHIFT
#define  InputArray_STD_VECTOR   3 << KIND_SHIFT
#define  InputArray_STD_VECTOR_VECTOR   4 << KIND_SHIFT
#define  InputArray_STD_VECTOR_MAT   5 << KIND_SHIFT
#define  InputArray_EXPR   6 << KIND_SHIFT
#define  InputArray_OPENGL_BUFFER   7 << KIND_SHIFT
#define  InputArray_CUDA_HOST_MEM   8 << KIND_SHIFT
#define  InputArray_CUDA_GPU_MAT   9 << KIND_SHIFT
#define  InputArray_UMAT   10 << KIND_SHIFT
#define  InputArray_STD_VECTOR_UMAT   11 << KIND_SHIFT
#define  InputArray_STD_BOOL_VECTOR   12 << KIND_SHIFT
#define  InputArray_STD_VECTOR_CUDA_GPU_MAT   13 << KIND_SHIFT
#define  InputArray_STD_ARRAY   14 << KIND_SHIFT
#define  InputArray_STD_ARRAY_MAT   15 << KIND_SHIFT
#define  OutputArray_DEPTH_MASK_8U   1 << CV_8U
#define  OutputArray_DEPTH_MASK_8S   1 << CV_8S
#define  OutputArray_DEPTH_MASK_16U   1 << CV_16U
#define  OutputArray_DEPTH_MASK_16S   1 << CV_16S
#define  OutputArray_DEPTH_MASK_32S   1 << CV_32S
#define  OutputArray_DEPTH_MASK_32F   1 << CV_32F
#define  OutputArray_DEPTH_MASK_64F   1 << CV_64F
#define  OutputArray_DEPTH_MASK_16F   1 << CV_16F
#define  OutputArray_DEPTH_MASK_ALL   (DEPTH_MASK_64F<<1)-1
#define  OutputArray_DEPTH_MASK_ALL_BUT_8S   DEPTH_MASK_ALL & ~DEPTH_MASK_8S
#define  OutputArray_DEPTH_MASK_ALL_16F   (DEPTH_MASK_16F<<1)-1
#define  OutputArray_DEPTH_MASK_FLT   DEPTH_MASK_32F + DEPTH_MASK_64F

enum  UMatUsageFlags  { USAGE_DEFAULT =  0, USAGE_ALLOCATE_HOST_MEMORY =  1 << 0,
         USAGE_ALLOCATE_DEVICE_MEMORY =  1 << 1, USAGE_ALLOCATE_SHARED_MEMORY =  1 << 2, __UMAT_USAGE_FLAGS_32BIT =  0x7fffffff  };
enum  UMatData_MemoryFlag  {
         COPY_ON_MAP =  1, HOST_COPY_OBSOLETE =  2, DEVICE_COPY_OBSOLETE =  4,
         TEMP_UMAT =  8, TEMP_COPIED_UMAT =  24, USER_ALLOCATED =  32,
         DEVICE_MEM_MAPPED =  64, ASYNC_CLEANUP =  128  };
#define  Mat_MAGIC_VAL   0x42FF0000
#define  Mat_AUTO_STEP   0
#define  Mat_CONTINUOUS_FLAG   CV_MAT_CONT_FLAG
#define  Mat_SUBMATRIX_FLAG   CV_SUBMAT_FLAG
#define  Mat_MAGIC_MASK   0xFFFF0000
#define  Mat_TYPE_MASK   0x00000FFF
#define  Mat_DEPTH_MASK   7
#define  UMat_MAGIC_VAL   0x42FF0000
#define  UMat_AUTO_STEP   0
#define  UMat_CONTINUOUS_FLAG   CV_MAT_CONT_FLAG
#define  UMat_SUBMATRIX_FLAG   CV_SUBMAT_FLAG
#define  UMat_MAGIC_MASK   0xFFFF0000
#define  UMat_TYPE_MASK   0x00000FFF
#define  UMat_DEPTH_MASK   7
#define  SparseMat_MAGIC_VAL   0x42FD0000
#define  SparseMat_MAX_DIM   32
#define  SparseMat_HASH_SCALE   0x5bd1e995
#define  SparseMat_HASH_BIT   0x80000000
#define  ocl_Device_TYPE_DEFAULT   (1 << 0)
#define  ocl_Device_TYPE_CPU   (1 << 1)
#define  ocl_Device_TYPE_GPU   (1 << 2)
#define  ocl_Device_TYPE_ACCELERATOR   (1 << 3)
#define  ocl_Device_TYPE_DGPU   TYPE_GPU + (1 << 16)
#define  ocl_Device_TYPE_IGPU   TYPE_GPU + (1 << 17)
#define  ocl_Device_TYPE_ALL   0xFFFFFFFF
#define  ocl_Device_FP_DENORM   (1 << 0)
#define  ocl_Device_FP_INF_NAN   (1 << 1)
#define  ocl_Device_FP_ROUND_TO_NEAREST   (1 << 2)
#define  ocl_Device_FP_ROUND_TO_ZERO   (1 << 3)
#define  ocl_Device_FP_ROUND_TO_INF   (1 << 4)
#define  ocl_Device_FP_FMA   (1 << 5)
#define  ocl_Device_FP_SOFT_FLOAT   (1 << 6)
#define  ocl_Device_FP_CORRECTLY_ROUNDED_DIVIDE_SQRT   (1 << 7)
#define  ocl_Device_EXEC_KERNEL   (1 << 0)
#define  ocl_Device_EXEC_NATIVE_KERNEL   (1 << 1)
#define  ocl_Device_NO_CACHE   0
#define  ocl_Device_READ_ONLY_CACHE   1
#define  ocl_Device_READ_WRITE_CACHE   2
#define  ocl_Device_NO_LOCAL_MEM   0
#define  ocl_Device_LOCAL_IS_LOCAL   1
#define  ocl_Device_LOCAL_IS_GLOBAL   2
#define  ocl_Device_UNKNOWN_VENDOR   0
#define  ocl_Device_VENDOR_AMD   1
#define  ocl_Device_VENDOR_INTEL   2
#define  ocl_Device_VENDOR_NVIDIA   3
#define  ocl_KernelArg_LOCAL   1
#define  ocl_KernelArg_READ_ONLY   2
#define  ocl_KernelArg_WRITE_ONLY   4
#define  ocl_KernelArg_READ_WRITE   6
#define  ocl_KernelArg_CONSTANT   8
#define  ocl_KernelArg_PTR_ONLY   16
#define  ocl_KernelArg_NO_SIZE   256

enum  ocl_OclVectorStrategy  { OCL_VECTOR_OWN =  0,
         OCL_VECTOR_MAX =  1, OCL_VECTOR_DEFAULT =  OCL_VECTOR_OWN  };
enum  FileStorage_Mode  { READ =  0,
         WRITE =  1, APPEND =  2, MEMORY =  4,
         FORMAT_MASK =  (7<<3), FORMAT_AUTO =  0, FORMAT_XML =  (1<<3),
         FORMAT_YAML =  (2<<3), FORMAT_JSON =  (3<<3), BASE64 =  64,
         WRITE_BASE64 =  BASE64 | WRITE  };
enum  FileStorage_State  { UNDEFINED =  0, VALUE_EXPECTED =  1,
         NAME_EXPECTED =  2, INSIDE_MAP =  4  };
#define  FileNode_NONE   0
#define  FileNode_INT   1
#define  FileNode_REAL   2
#define  FileNode_FLOAT   _REAL
#define  FileNode_STR   3
#define  FileNode_STRING   FileNode_STR
#define  FileNode_SEQ   4
#define  FileNode_MAP   5
#define  FileNode_TYPE_MASK   7
#define  FileNode_FLOW   8
#define  FileNode_UNIFORM   8
#define  FileNode_EMPTY   16
#define  FileNode_NAMED   32

enum  TermCriteria_Type  { COUNT =  1,
         MAX_ITER =  COUNT, EPS =  2  };
enum  dnn_Backend  { DNN_BACKEND_DEFAULT =  0,
         DNN_BACKEND_HALIDE =  0+1, DNN_BACKEND_INFERENCE_ENGINE =  0+2, DNN_BACKEND_OPENCV =  0+3,
         DNN_BACKEND_VKCOM =  0+4, DNN_BACKEND_CUDA =  0+5, DNN_BACKEND_WEBNN =  0+6,
         DNN_BACKEND_TIMVX =  0+7  };
enum  dnn_Target  { DNN_TARGET_CPU =  0, DNN_TARGET_OPENCL =  0+1,
         DNN_TARGET_OPENCL_FP16 =  0+2, DNN_TARGET_MYRIAD =  0+3, DNN_TARGET_VULKAN =  0+4,
         DNN_TARGET_FPGA =  0+5, DNN_TARGET_CUDA =  0+6, DNN_TARGET_CUDA_FP16 =  0+7,
         DNN_TARGET_HDDL =  0+8, DNN_TARGET_NPU =  0+9  };
enum  dnn_SoftNMSMethod  { _SOFTNMS_LINEAR =  1,
         _SOFTNMS_GAUSSIAN =  2  };
enum  ORB_ScoreType  { HARRIS_SCORE =  0, FAST_SCORE =  1  };
enum  FastFeatureDetector_DetectorType  {
         TYPE_5_8 =  0, TYPE_7_12 =  1, TYPE_9_16 =  2  };
#define  FastFeatureDetector_THRESHOLD   10000
#define  FastFeatureDetector_NONMAX_SUPPRESSION   10001
#define  FastFeatureDetector_FAST_N   10002

enum  AgastFeatureDetector_DetectorType  {
         AGAST_5_8 =  0, AGAST_7_12d =  1, AGAST_7_12s =  2,
         OAST_9_16 =  3  };
#define  AgastFeatureDetector_THRESHOLD   10000
#define  AgastFeatureDetector_NONMAX_SUPPRESSION   10001

enum  KAZE_DiffusivityType  { DIFF_PM_G1 =  0, DIFF_PM_G2 =  1,
         DIFF_WEICKERT =  2, DIFF_CHARBONNIER =  3  };
enum  AKAZE_DescriptorType  { DESCRIPTOR_KAZE_UPRIGHT =  2,
         DESCRIPTOR_KAZE =  3, DESCRIPTOR_MLDB_UPRIGHT =  4, DESCRIPTOR_MLDB =  5  };
enum  DescriptorMatcher_MatcherType  {
         FLANNBASED =  1, BRUTEFORCE =  2, BRUTEFORCE_L1 =  3,
         BRUTEFORCE_HAMMING =  4, BRUTEFORCE_HAMMINGLUT =  5, BRUTEFORCE_SL2 =  6  };
enum  DrawMatchesFlags  {
         _DEFAULT =  0, _DRAW_OVER_OUTIMG =  1, _NOT_DRAW_SINGLE_POINTS =  2,
         _DRAW_RICH_KEYPOINTS =  4  };
enum  cvflann_flann_algorithm_t  { FLANN_INDEX_LINEAR =  0, FLANN_INDEX_KDTREE =  1,
         FLANN_INDEX_KMEANS =  2, FLANN_INDEX_COMPOSITE =  3, FLANN_INDEX_KDTREE_SINGLE =  4,
         FLANN_INDEX_HIERARCHICAL =  5, FLANN_INDEX_LSH =  6, FLANN_INDEX_SAVED =  254,
         FLANN_INDEX_AUTOTUNED =  255, LINEAR =  0, KDTREE =  1,
         KMEANS =  2, COMPOSITE =  3, KDTREE_SINGLE =  4,
         SAVED =  254, AUTOTUNED =  255  };
enum  cvflann_flann_centers_init_t  { FLANN_CENTERS_RANDOM =  0,
         FLANN_CENTERS_GONZALES =  1, FLANN_CENTERS_KMEANSPP =  2, FLANN_CENTERS_GROUPWISE =  3,
         CENTERS_RANDOM =  0, CENTERS_GONZALES =  1, CENTERS_KMEANSPP =  2  };
enum  cvflann_flann_log_level_t  {
         FLANN_LOG_NONE =  0, FLANN_LOG_FATAL =  1, FLANN_LOG_ERROR =  2,
         FLANN_LOG_WARN =  3, FLANN_LOG_INFO =  4  };
enum  cvflann_flann_distance_t  { FLANN_DIST_EUCLIDEAN =  1,
         FLANN_DIST_L2 =  1, FLANN_DIST_MANHATTAN =  2, FLANN_DIST_L1 =  2,
         FLANN_DIST_MINKOWSKI =  3, FLANN_DIST_MAX =  4, FLANN_DIST_HIST_INTERSECT =  5,
         FLANN_DIST_HELLINGER =  6, FLANN_DIST_CHI_SQUARE =  7, FLANN_DIST_CS =  7,
         FLANN_DIST_KULLBACK_LEIBLER =  8, FLANN_DIST_KL =  8, FLANN_DIST_HAMMING =  9,
         FLANN_DIST_DNAMMING =  10, EUCLIDEAN =  1, MANHATTAN =  2,
         MINKOWSKI =  3, MAX_DIST =  4, HIST_INTERSECT =  5,
         HELLINGER =  6, CS =  7, KL =  8,
         KULLBACK_LEIBLER =  8  };
enum  cvflann_flann_datatype_t  { FLANN_INT8 =  0, FLANN_INT16 =  1,
         FLANN_INT32 =  2, FLANN_INT64 =  3, FLANN_UINT8 =  4,
         FLANN_UINT16 =  5, FLANN_UINT32 =  6, FLANN_UINT64 =  7,
         FLANN_FLOAT32 =  8, FLANN_FLOAT64 =  9  };
#define  cvflann_FLANN_CHECKS_UNLIMITED   -1
#define  cvflann_FLANN_CHECKS_AUTOTUNED   -2
#define  FLANN_INDEX_TYPE_8U   CV_8U
#define  FLANN_INDEX_TYPE_8S   CV_8S
#define  FLANN_INDEX_TYPE_16U   CV_16U
#define  FLANN_INDEX_TYPE_16S   CV_16S
#define  FLANN_INDEX_TYPE_32S   CV_32S
#define  FLANN_INDEX_TYPE_32F   CV_32F
#define  FLANN_INDEX_TYPE_64F   CV_64F
#define  FLANN_INDEX_TYPE_STRING   CV_64F+1
#define  FLANN_INDEX_TYPE_BOOL   CV_64F+2
#define  FLANN_INDEX_TYPE_ALGORITHM   CV_64F+3
#define  LAST_VALUE_FLANN_INDEX_TYPE   FLANN_INDEX_TYPE_ALGORITHM

enum  WindowFlags  { WINDOW_NORMAL =  0x00000000,
         WINDOW_AUTOSIZE =  0x00000001, WINDOW_OPENGL =  0x00001000, WINDOW_FULLSCREEN =  1,
         WINDOW_FREERATIO =  0x00000100, WINDOW_KEEPRATIO =  0x00000000, WINDOW_GUI_EXPANDED =  0x00000000,
         WINDOW_GUI_NORMAL =  0x00000010  };
enum  WindowPropertyFlags  { WND_PROP_FULLSCREEN =  0, WND_PROP_AUTOSIZE =  1,
         WND_PROP_ASPECT_RATIO =  2, WND_PROP_OPENGL =  3, WND_PROP_VISIBLE =  4,
         WND_PROP_TOPMOST =  5, WND_PROP_VSYNC =  6  };
enum  MouseEventTypes  { EVENT_MOUSEMOVE =  0,
         EVENT_LBUTTONDOWN =  1, EVENT_RBUTTONDOWN =  2, EVENT_MBUTTONDOWN =  3,
         EVENT_LBUTTONUP =  4, EVENT_RBUTTONUP =  5, EVENT_MBUTTONUP =  6,
         EVENT_LBUTTONDBLCLK =  7, EVENT_RBUTTONDBLCLK =  8, EVENT_MBUTTONDBLCLK =  9,
         EVENT_MOUSEWHEEL =  10, EVENT_MOUSEHWHEEL =  11  };
enum  MouseEventFlags  { EVENT_FLAG_LBUTTON =  1,
         EVENT_FLAG_RBUTTON =  2, EVENT_FLAG_MBUTTON =  4, EVENT_FLAG_CTRLKEY =  8,
         EVENT_FLAG_SHIFTKEY =  16, EVENT_FLAG_ALTKEY =  32  };
enum  QtFontWeights  { QT_FONT_LIGHT =  25,
         QT_FONT_NORMAL =  50, QT_FONT_DEMIBOLD =  63, QT_FONT_BOLD =  75,
         QT_FONT_BLACK =  87  };
enum  QtFontStyles  { QT_STYLE_NORMAL =  0, QT_STYLE_ITALIC =  1,
         QT_STYLE_OBLIQUE =  2  };
enum  QtButtonTypes  { QT_PUSH_BUTTON =  0, QT_CHECKBOX =  1,
         QT_RADIOBOX =  2, QT_NEW_BUTTONBAR =  1024  };
enum  ImreadModes  { IMREAD_UNCHANGED =  -1,
         IMREAD_GRAYSCALE =  0, IMREAD_COLOR =  1, IMREAD_ANYDEPTH =  2,
         IMREAD_ANYCOLOR =  4, IMREAD_LOAD_GDAL =  8, IMREAD_REDUCED_GRAYSCALE_2 =  16,
         IMREAD_REDUCED_COLOR_2 =  17, IMREAD_REDUCED_GRAYSCALE_4 =  32, IMREAD_REDUCED_COLOR_4 =  33,
         IMREAD_REDUCED_GRAYSCALE_8 =  64, IMREAD_REDUCED_COLOR_8 =  65, IMREAD_IGNORE_ORIENTATION =  128  };
enum  ImwriteFlags  {
         IMWRITE_JPEG_QUALITY =  1, IMWRITE_JPEG_PROGRESSIVE =  2, IMWRITE_JPEG_OPTIMIZE =  3,
         IMWRITE_JPEG_RST_INTERVAL =  4, IMWRITE_JPEG_LUMA_QUALITY =  5, IMWRITE_JPEG_CHROMA_QUALITY =  6,
         IMWRITE_PNG_COMPRESSION =  16, IMWRITE_PNG_STRATEGY =  17, IMWRITE_PNG_BILEVEL =  18,
         IMWRITE_PXM_BINARY =  32, IMWRITE_EXR_TYPE =  (3 << 4) + 0, IMWRITE_EXR_COMPRESSION =  (3 << 4) + 1,
         IMWRITE_WEBP_QUALITY =  64, IMWRITE_PAM_TUPLETYPE =  128, IMWRITE_TIFF_RESUNIT =  256,
         IMWRITE_TIFF_XDPI =  257, IMWRITE_TIFF_YDPI =  258, IMWRITE_TIFF_COMPRESSION =  259,
         IMWRITE_JPEG2000_COMPRESSION_X1000 =  272  };
enum  ImwriteEXRTypeFlags  { IMWRITE_EXR_TYPE_HALF =  1, IMWRITE_EXR_TYPE_FLOAT =  2  };
enum  ImwriteEXRCompressionFlags  {
         IMWRITE_EXR_COMPRESSION_NO =  0, IMWRITE_EXR_COMPRESSION_RLE =  1, IMWRITE_EXR_COMPRESSION_ZIPS =  2,
         IMWRITE_EXR_COMPRESSION_ZIP =  3, IMWRITE_EXR_COMPRESSION_PIZ =  4, IMWRITE_EXR_COMPRESSION_PXR24 =  5,
         IMWRITE_EXR_COMPRESSION_B44 =  6, IMWRITE_EXR_COMPRESSION_B44A =  7, IMWRITE_EXR_COMPRESSION_DWAA =  8,
         IMWRITE_EXR_COMPRESSION_DWAB =  9  };
enum  ImwritePNGFlags  { IMWRITE_PNG_STRATEGY_DEFAULT =  0, IMWRITE_PNG_STRATEGY_FILTERED =  1,
         IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY =  2, IMWRITE_PNG_STRATEGY_RLE =  3, IMWRITE_PNG_STRATEGY_FIXED =  4  };
enum  ImwritePAMFlags  {
         IMWRITE_PAM_FORMAT_NULL =  0, IMWRITE_PAM_FORMAT_BLACKANDWHITE =  1, IMWRITE_PAM_FORMAT_GRAYSCALE =  2,
         IMWRITE_PAM_FORMAT_GRAYSCALE_ALPHA =  3, IMWRITE_PAM_FORMAT_RGB =  4, IMWRITE_PAM_FORMAT_RGB_ALPHA =  5  };
enum  SpecialFilter  {
         FILTER_SCHARR =  -1  };
enum  MorphTypes  { MORPH_ERODE =  0, MORPH_DILATE =  1,
         MORPH_OPEN =  2, MORPH_CLOSE =  3, MORPH_GRADIENT =  4,
         MORPH_TOPHAT =  5, MORPH_BLACKHAT =  6, MORPH_HITMISS =  7  };
enum  MorphShapes  {
         MORPH_RECT =  0, MORPH_CROSS =  1, MORPH_ELLIPSE =  2  };
enum  InterpolationFlags  {
         INTER_NEAREST =  0, INTER_LINEAR =  1, INTER_CUBIC =  2,
         INTER_AREA =  3, INTER_LANCZOS4 =  4, INTER_LINEAR_EXACT =  5,
         INTER_NEAREST_EXACT =  6, INTER_MAX =  7, WARP_FILL_OUTLIERS =  8,
         WARP_INVERSE_MAP =  16  };
enum  WarpPolarMode  { WARP_POLAR_LINEAR =  0, WARP_POLAR_LOG =  256  };
enum  InterpolationMasks  {
         INTER_BITS =  5, INTER_BITS2 =  INTER_BITS * 2, INTER_TAB_SIZE =  1 << INTER_BITS,
         INTER_TAB_SIZE2 =  INTER_TAB_SIZE * INTER_TAB_SIZE  };
enum  DistanceTypes  { DIST_USER =  -1, DIST_L1 =  1,
         DIST_L2 =  2, DIST_C =  3, DIST_L12 =  4,
         DIST_FAIR =  5, DIST_WELSCH =  6, DIST_HUBER =  7  };
enum  DistanceTransformMasks  {
         DIST_MASK_3 =  3, DIST_MASK_5 =  5, DIST_MASK_PRECISE =  0  };
enum  ThresholdTypes  {
         THRESH_BINARY =  0, THRESH_BINARY_INV =  1, THRESH_TRUNC =  2,
         THRESH_TOZERO =  3, THRESH_TOZERO_INV =  4, THRESH_MASK =  7,
         THRESH_OTSU =  8, THRESH_TRIANGLE =  16  };
enum  AdaptiveThresholdTypes  { ADAPTIVE_THRESH_MEAN_C =  0,
         ADAPTIVE_THRESH_GAUSSIAN_C =  1  };
enum  GrabCutClasses  { GC_BGD =  0, GC_FGD =  1,
         GC_PR_BGD =  2, GC_PR_FGD =  3  };
enum  GrabCutModes  { GC_INIT_WITH_RECT =  0,
         GC_INIT_WITH_MASK =  1, GC_EVAL =  2, GC_EVAL_FREEZE_MODEL =  3  };
enum  DistanceTransformLabelTypes  {
         DIST_LABEL_CCOMP =  0, DIST_LABEL_PIXEL =  1  };
enum  FloodFillFlags  { FLOODFILL_FIXED_RANGE =  1 << 16,
         FLOODFILL_MASK_ONLY =  1 << 17  };
enum  ConnectedComponentsTypes  { CC_STAT_LEFT =  0, CC_STAT_TOP =  1,
         CC_STAT_WIDTH =  2, CC_STAT_HEIGHT =  3, CC_STAT_AREA =  4,
         CC_STAT_MAX =  5  };
enum  ConnectedComponentsAlgorithmsTypes  { CCL_DEFAULT =  -1, CCL_WU =  0,
         CCL_GRANA =  1, CCL_BOLELLI =  2, CCL_SAUF =  3,
         CCL_BBDT =  4, CCL_SPAGHETTI =  5  };
enum  RetrievalModes  { RETR_EXTERNAL =  0,
         RETR_LIST =  1, RETR_CCOMP =  2, RETR_TREE =  3,
         RETR_FLOODFILL =  4  };
enum  ContourApproximationModes  { CHAIN_APPROX_NONE =  1, CHAIN_APPROX_SIMPLE =  2,
         CHAIN_APPROX_TC89_L1 =  3, CHAIN_APPROX_TC89_KCOS =  4  };
enum  ShapeMatchModes  { CONTOURS_MATCH_I1 =  1,
         CONTOURS_MATCH_I2 =  2, CONTOURS_MATCH_I3 =  3  };
enum  HoughModes  { HOUGH_STANDARD =  0,
         HOUGH_PROBABILISTIC =  1, HOUGH_MULTI_SCALE =  2, HOUGH_GRADIENT =  3,
         HOUGH_GRADIENT_ALT =  4  };
enum  LineSegmentDetectorModes  { LSD_REFINE_NONE =  0, LSD_REFINE_STD =  1,
         LSD_REFINE_ADV =  2  };
enum  HistCompMethods  { HISTCMP_CORREL =  0, HISTCMP_CHISQR =  1,
         HISTCMP_INTERSECT =  2, HISTCMP_BHATTACHARYYA =  3, HISTCMP_HELLINGER =  HISTCMP_BHATTACHARYYA,
         HISTCMP_CHISQR_ALT =  4, HISTCMP_KL_DIV =  5  };
enum  ColorConversionCodes  { COLOR_BGR2BGRA =  0,
         COLOR_RGB2RGBA =  COLOR_BGR2BGRA, COLOR_BGRA2BGR =  1, COLOR_RGBA2RGB =  COLOR_BGRA2BGR,
         COLOR_BGR2RGBA =  2, COLOR_RGB2BGRA =  COLOR_BGR2RGBA, COLOR_RGBA2BGR =  3,
         COLOR_BGRA2RGB =  COLOR_RGBA2BGR, COLOR_BGR2RGB =  4, COLOR_RGB2BGR =  COLOR_BGR2RGB,
         COLOR_BGRA2RGBA =  5, COLOR_RGBA2BGRA =  COLOR_BGRA2RGBA, COLOR_BGR2GRAY =  6,
         COLOR_RGB2GRAY =  7, COLOR_GRAY2BGR =  8, COLOR_GRAY2RGB =  COLOR_GRAY2BGR,
         COLOR_GRAY2BGRA =  9, COLOR_GRAY2RGBA =  COLOR_GRAY2BGRA, COLOR_BGRA2GRAY =  10,
         COLOR_RGBA2GRAY =  11, COLOR_BGR2BGR565 =  12, COLOR_RGB2BGR565 =  13,
         COLOR_BGR5652BGR =  14, COLOR_BGR5652RGB =  15, COLOR_BGRA2BGR565 =  16,
         COLOR_RGBA2BGR565 =  17, COLOR_BGR5652BGRA =  18, COLOR_BGR5652RGBA =  19,
         COLOR_GRAY2BGR565 =  20, COLOR_BGR5652GRAY =  21, COLOR_BGR2BGR555 =  22,
         COLOR_RGB2BGR555 =  23, COLOR_BGR5552BGR =  24, COLOR_BGR5552RGB =  25,
         COLOR_BGRA2BGR555 =  26, COLOR_RGBA2BGR555 =  27, COLOR_BGR5552BGRA =  28,
         COLOR_BGR5552RGBA =  29, COLOR_GRAY2BGR555 =  30, COLOR_BGR5552GRAY =  31,
         COLOR_BGR2XYZ =  32, COLOR_RGB2XYZ =  33, COLOR_XYZ2BGR =  34,
         COLOR_XYZ2RGB =  35, COLOR_BGR2YCrCb =  36, COLOR_RGB2YCrCb =  37,
         COLOR_YCrCb2BGR =  38, COLOR_YCrCb2RGB =  39, COLOR_BGR2HSV =  40,
         COLOR_RGB2HSV =  41, COLOR_BGR2Lab =  44, COLOR_RGB2Lab =  45,
         COLOR_BGR2Luv =  50, COLOR_RGB2Luv =  51, COLOR_BGR2HLS =  52,
         COLOR_RGB2HLS =  53, COLOR_HSV2BGR =  54, COLOR_HSV2RGB =  55,
         COLOR_Lab2BGR =  56, COLOR_Lab2RGB =  57, COLOR_Luv2BGR =  58,
         COLOR_Luv2RGB =  59, COLOR_HLS2BGR =  60, COLOR_HLS2RGB =  61,
         COLOR_BGR2HSV_FULL =  66, COLOR_RGB2HSV_FULL =  67, COLOR_BGR2HLS_FULL =  68,
         COLOR_RGB2HLS_FULL =  69, COLOR_HSV2BGR_FULL =  70, COLOR_HSV2RGB_FULL =  71,
         COLOR_HLS2BGR_FULL =  72, COLOR_HLS2RGB_FULL =  73, COLOR_LBGR2Lab =  74,
         COLOR_LRGB2Lab =  75, COLOR_LBGR2Luv =  76, COLOR_LRGB2Luv =  77,
         COLOR_Lab2LBGR =  78, COLOR_Lab2LRGB =  79, COLOR_Luv2LBGR =  80,
         COLOR_Luv2LRGB =  81, COLOR_BGR2YUV =  82, COLOR_RGB2YUV =  83,
         COLOR_YUV2BGR =  84, COLOR_YUV2RGB =  85, COLOR_YUV2RGB_NV12 =  90,
         COLOR_YUV2BGR_NV12 =  91, COLOR_YUV2RGB_NV21 =  92, COLOR_YUV2BGR_NV21 =  93,
         COLOR_YUV420sp2RGB =  COLOR_YUV2RGB_NV21, COLOR_YUV420sp2BGR =  COLOR_YUV2BGR_NV21, COLOR_YUV2RGBA_NV12 =  94,
         COLOR_YUV2BGRA_NV12 =  95, COLOR_YUV2RGBA_NV21 =  96, COLOR_YUV2BGRA_NV21 =  97,
         COLOR_YUV420sp2RGBA =  COLOR_YUV2RGBA_NV21, COLOR_YUV420sp2BGRA =  COLOR_YUV2BGRA_NV21, COLOR_YUV2RGB_YV12 =  98,
         COLOR_YUV2BGR_YV12 =  99, COLOR_YUV2RGB_IYUV =  100, COLOR_YUV2BGR_IYUV =  101,
         COLOR_YUV2RGB_I420 =  COLOR_YUV2RGB_IYUV, COLOR_YUV2BGR_I420 =  COLOR_YUV2BGR_IYUV, COLOR_YUV420p2RGB =  COLOR_YUV2RGB_YV12,
         COLOR_YUV420p2BGR =  COLOR_YUV2BGR_YV12, COLOR_YUV2RGBA_YV12 =  102, COLOR_YUV2BGRA_YV12 =  103,
         COLOR_YUV2RGBA_IYUV =  104, COLOR_YUV2BGRA_IYUV =  105, COLOR_YUV2RGBA_I420 =  COLOR_YUV2RGBA_IYUV,
         COLOR_YUV2BGRA_I420 =  COLOR_YUV2BGRA_IYUV, COLOR_YUV420p2RGBA =  COLOR_YUV2RGBA_YV12, COLOR_YUV420p2BGRA =  COLOR_YUV2BGRA_YV12,
         COLOR_YUV2GRAY_420 =  106, COLOR_YUV2GRAY_NV21 =  COLOR_YUV2GRAY_420, COLOR_YUV2GRAY_NV12 =  COLOR_YUV2GRAY_420,
         COLOR_YUV2GRAY_YV12 =  COLOR_YUV2GRAY_420, COLOR_YUV2GRAY_IYUV =  COLOR_YUV2GRAY_420, COLOR_YUV2GRAY_I420 =  COLOR_YUV2GRAY_420,
         COLOR_YUV420sp2GRAY =  COLOR_YUV2GRAY_420, COLOR_YUV420p2GRAY =  COLOR_YUV2GRAY_420, COLOR_YUV2RGB_UYVY =  107,
         COLOR_YUV2BGR_UYVY =  108, COLOR_YUV2RGB_Y422 =  COLOR_YUV2RGB_UYVY, COLOR_YUV2BGR_Y422 =  COLOR_YUV2BGR_UYVY,
         COLOR_YUV2RGB_UYNV =  COLOR_YUV2RGB_UYVY, COLOR_YUV2BGR_UYNV =  COLOR_YUV2BGR_UYVY, COLOR_YUV2RGBA_UYVY =  111,
         COLOR_YUV2BGRA_UYVY =  112, COLOR_YUV2RGBA_Y422 =  COLOR_YUV2RGBA_UYVY, COLOR_YUV2BGRA_Y422 =  COLOR_YUV2BGRA_UYVY,
         COLOR_YUV2RGBA_UYNV =  COLOR_YUV2RGBA_UYVY, COLOR_YUV2BGRA_UYNV =  COLOR_YUV2BGRA_UYVY, COLOR_YUV2RGB_YUY2 =  115,
         COLOR_YUV2BGR_YUY2 =  116, COLOR_YUV2RGB_YVYU =  117, COLOR_YUV2BGR_YVYU =  118,
         COLOR_YUV2RGB_YUYV =  COLOR_YUV2RGB_YUY2, COLOR_YUV2BGR_YUYV =  COLOR_YUV2BGR_YUY2, COLOR_YUV2RGB_YUNV =  COLOR_YUV2RGB_YUY2,
         COLOR_YUV2BGR_YUNV =  COLOR_YUV2BGR_YUY2, COLOR_YUV2RGBA_YUY2 =  119, COLOR_YUV2BGRA_YUY2 =  120,
         COLOR_YUV2RGBA_YVYU =  121, COLOR_YUV2BGRA_YVYU =  122, COLOR_YUV2RGBA_YUYV =  COLOR_YUV2RGBA_YUY2,
         COLOR_YUV2BGRA_YUYV =  COLOR_YUV2BGRA_YUY2, COLOR_YUV2RGBA_YUNV =  COLOR_YUV2RGBA_YUY2, COLOR_YUV2BGRA_YUNV =  COLOR_YUV2BGRA_YUY2,
         COLOR_YUV2GRAY_UYVY =  123, COLOR_YUV2GRAY_YUY2 =  124, COLOR_YUV2GRAY_Y422 =  COLOR_YUV2GRAY_UYVY,
         COLOR_YUV2GRAY_UYNV =  COLOR_YUV2GRAY_UYVY, COLOR_YUV2GRAY_YVYU =  COLOR_YUV2GRAY_YUY2, COLOR_YUV2GRAY_YUYV =  COLOR_YUV2GRAY_YUY2,
         COLOR_YUV2GRAY_YUNV =  COLOR_YUV2GRAY_YUY2, COLOR_RGBA2mRGBA =  125, COLOR_mRGBA2RGBA =  126,
         COLOR_RGB2YUV_I420 =  127, COLOR_BGR2YUV_I420 =  128, COLOR_RGB2YUV_IYUV =  COLOR_RGB2YUV_I420,
         COLOR_BGR2YUV_IYUV =  COLOR_BGR2YUV_I420, COLOR_RGBA2YUV_I420 =  129, COLOR_BGRA2YUV_I420 =  130,
         COLOR_RGBA2YUV_IYUV =  COLOR_RGBA2YUV_I420, COLOR_BGRA2YUV_IYUV =  COLOR_BGRA2YUV_I420, COLOR_RGB2YUV_YV12 =  131,
         COLOR_BGR2YUV_YV12 =  132, COLOR_RGBA2YUV_YV12 =  133, COLOR_BGRA2YUV_YV12 =  134,
         COLOR_BayerBG2BGR =  46, COLOR_BayerGB2BGR =  47, COLOR_BayerRG2BGR =  48,
         COLOR_BayerGR2BGR =  49, COLOR_BayerRGGB2BGR =  COLOR_BayerBG2BGR, COLOR_BayerGRBG2BGR =  COLOR_BayerGB2BGR,
         COLOR_BayerBGGR2BGR =  COLOR_BayerRG2BGR, COLOR_BayerGBRG2BGR =  COLOR_BayerGR2BGR, COLOR_BayerRGGB2RGB =  COLOR_BayerBGGR2BGR,
         COLOR_BayerGRBG2RGB =  COLOR_BayerGBRG2BGR, COLOR_BayerBGGR2RGB =  COLOR_BayerRGGB2BGR, COLOR_BayerGBRG2RGB =  COLOR_BayerGRBG2BGR,
         COLOR_BayerBG2RGB =  COLOR_BayerRG2BGR, COLOR_BayerGB2RGB =  COLOR_BayerGR2BGR, COLOR_BayerRG2RGB =  COLOR_BayerBG2BGR,
         COLOR_BayerGR2RGB =  COLOR_BayerGB2BGR, COLOR_BayerBG2GRAY =  86, COLOR_BayerGB2GRAY =  87,
         COLOR_BayerRG2GRAY =  88, COLOR_BayerGR2GRAY =  89, COLOR_BayerRGGB2GRAY =  COLOR_BayerBG2GRAY,
         COLOR_BayerGRBG2GRAY =  COLOR_BayerGB2GRAY, COLOR_BayerBGGR2GRAY =  COLOR_BayerRG2GRAY, COLOR_BayerGBRG2GRAY =  COLOR_BayerGR2GRAY,
         COLOR_BayerBG2BGR_VNG =  62, COLOR_BayerGB2BGR_VNG =  63, COLOR_BayerRG2BGR_VNG =  64,
         COLOR_BayerGR2BGR_VNG =  65, COLOR_BayerRGGB2BGR_VNG =  COLOR_BayerBG2BGR_VNG, COLOR_BayerGRBG2BGR_VNG =  COLOR_BayerGB2BGR_VNG,
         COLOR_BayerBGGR2BGR_VNG =  COLOR_BayerRG2BGR_VNG, COLOR_BayerGBRG2BGR_VNG =  COLOR_BayerGR2BGR_VNG, COLOR_BayerRGGB2RGB_VNG =  COLOR_BayerBGGR2BGR_VNG,
         COLOR_BayerGRBG2RGB_VNG =  COLOR_BayerGBRG2BGR_VNG, COLOR_BayerBGGR2RGB_VNG =  COLOR_BayerRGGB2BGR_VNG, COLOR_BayerGBRG2RGB_VNG =  COLOR_BayerGRBG2BGR_VNG,
         COLOR_BayerBG2RGB_VNG =  COLOR_BayerRG2BGR_VNG, COLOR_BayerGB2RGB_VNG =  COLOR_BayerGR2BGR_VNG, COLOR_BayerRG2RGB_VNG =  COLOR_BayerBG2BGR_VNG,
         COLOR_BayerGR2RGB_VNG =  COLOR_BayerGB2BGR_VNG, COLOR_BayerBG2BGR_EA =  135, COLOR_BayerGB2BGR_EA =  136,
         COLOR_BayerRG2BGR_EA =  137, COLOR_BayerGR2BGR_EA =  138, COLOR_BayerRGGB2BGR_EA =  COLOR_BayerBG2BGR_EA,
         COLOR_BayerGRBG2BGR_EA =  COLOR_BayerGB2BGR_EA, COLOR_BayerBGGR2BGR_EA =  COLOR_BayerRG2BGR_EA, COLOR_BayerGBRG2BGR_EA =  COLOR_BayerGR2BGR_EA,
         COLOR_BayerRGGB2RGB_EA =  COLOR_BayerBGGR2BGR_EA, COLOR_BayerGRBG2RGB_EA =  COLOR_BayerGBRG2BGR_EA, COLOR_BayerBGGR2RGB_EA =  COLOR_BayerRGGB2BGR_EA,
         COLOR_BayerGBRG2RGB_EA =  COLOR_BayerGRBG2BGR_EA, COLOR_BayerBG2RGB_EA =  COLOR_BayerRG2BGR_EA, COLOR_BayerGB2RGB_EA =  COLOR_BayerGR2BGR_EA,
         COLOR_BayerRG2RGB_EA =  COLOR_BayerBG2BGR_EA, COLOR_BayerGR2RGB_EA =  COLOR_BayerGB2BGR_EA, COLOR_BayerBG2BGRA =  139,
         COLOR_BayerGB2BGRA =  140, COLOR_BayerRG2BGRA =  141, COLOR_BayerGR2BGRA =  142,
         COLOR_BayerRGGB2BGRA =  COLOR_BayerBG2BGRA, COLOR_BayerGRBG2BGRA =  COLOR_BayerGB2BGRA, COLOR_BayerBGGR2BGRA =  COLOR_BayerRG2BGRA,
         COLOR_BayerGBRG2BGRA =  COLOR_BayerGR2BGRA, COLOR_BayerRGGB2RGBA =  COLOR_BayerBGGR2BGRA, COLOR_BayerGRBG2RGBA =  COLOR_BayerGBRG2BGRA,
         COLOR_BayerBGGR2RGBA =  COLOR_BayerRGGB2BGRA, COLOR_BayerGBRG2RGBA =  COLOR_BayerGRBG2BGRA, COLOR_BayerBG2RGBA =  COLOR_BayerRG2BGRA,
         COLOR_BayerGB2RGBA =  COLOR_BayerGR2BGRA, COLOR_BayerRG2RGBA =  COLOR_BayerBG2BGRA, COLOR_BayerGR2RGBA =  COLOR_BayerGB2BGRA,
         COLOR_COLORCVT_MAX =  143  };
enum  RectanglesIntersectTypes  { INTERSECT_NONE =  0, INTERSECT_PARTIAL =  1,
         INTERSECT_FULL =  2  };
enum  HersheyFonts  { FONT_HERSHEY_SIMPLEX =  0, FONT_HERSHEY_PLAIN =  1,
         FONT_HERSHEY_DUPLEX =  2, FONT_HERSHEY_COMPLEX =  3, FONT_HERSHEY_TRIPLEX =  4,
         FONT_HERSHEY_COMPLEX_SMALL =  5, FONT_HERSHEY_SCRIPT_SIMPLEX =  6, FONT_HERSHEY_SCRIPT_COMPLEX =  7,
         FONT_ITALIC =  16  };
enum  MarkerTypes  { MARKER_CROSS =  0, MARKER_TILTED_CROSS =  1,
         MARKER_STAR =  2, MARKER_DIAMOND =  3, MARKER_SQUARE =  4,
         MARKER_TRIANGLE_UP =  5, MARKER_TRIANGLE_DOWN =  6  };
#define  Subdiv2D_PTLOC_ERROR   -2
#define  Subdiv2D_PTLOC_OUTSIDE_RECT   -1
#define  Subdiv2D_PTLOC_INSIDE   0
#define  Subdiv2D_PTLOC_VERTEX   1
#define  Subdiv2D_PTLOC_ON_EDGE   2
#define  Subdiv2D_NEXT_AROUND_ORG   0x00
#define  Subdiv2D_NEXT_AROUND_DST   0x22
#define  Subdiv2D_PREV_AROUND_ORG   0x11
#define  Subdiv2D_PREV_AROUND_DST   0x33
#define  Subdiv2D_NEXT_AROUND_LEFT   0x13
#define  Subdiv2D_NEXT_AROUND_RIGHT   0x31
#define  Subdiv2D_PREV_AROUND_LEFT   0x20
#define  Subdiv2D_PREV_AROUND_RIGHT   0x02

enum  TemplateMatchModes  { TM_SQDIFF =  0,
         TM_SQDIFF_NORMED =  1, TM_CCORR =  2, TM_CCORR_NORMED =  3,
         TM_CCOEFF =  4, TM_CCOEFF_NORMED =  5  };
enum  ColormapTypes  { COLORMAP_AUTUMN =  0,
         COLORMAP_BONE =  1, COLORMAP_JET =  2, COLORMAP_WINTER =  3,
         COLORMAP_RAINBOW =  4, COLORMAP_OCEAN =  5, COLORMAP_SUMMER =  6,
         COLORMAP_SPRING =  7, COLORMAP_COOL =  8, COLORMAP_HSV =  9,
         COLORMAP_PINK =  10, COLORMAP_HOT =  11, COLORMAP_PARULA =  12,
         COLORMAP_MAGMA =  13, COLORMAP_INFERNO =  14, COLORMAP_PLASMA =  15,
         COLORMAP_VIRIDIS =  16, COLORMAP_CIVIDIS =  17, COLORMAP_TWILIGHT =  18,
         COLORMAP_TWILIGHT_SHIFTED =  19, COLORMAP_TURBO =  20, COLORMAP_DEEPGREEN =  21  };
enum  ml_VariableTypes  {
         VAR_NUMERICAL =  0, VAR_ORDERED =  0, VAR_CATEGORICAL =  1  };
enum  ml_ErrorTypes  {
         TEST_ERROR =  0, TRAIN_ERROR =  1  };
enum  ml_SampleTypes  { ROW_SAMPLE =  0,
         COL_SAMPLE =  1  };
enum  ml_StatModel_Flags  { StatModel_UPDATE_MODEL =  1, StatModel_RAW_OUTPUT =  1,
         StatModel_COMPRESSED_INPUT =  2, StatModel_PREPROCESSED_INPUT =  4  };
enum  ml_KNearest_Types  { KNearest_BRUTE_FORCE =  1,
         KNearest_KDTREE =  2  };
enum  ml_SVM_Types  { SVM_C_SVC =  100, SVM_NU_SVC =  101,
         SVM_ONE_CLASS =  102, SVM_EPS_SVR =  103, SVM_NU_SVR =  104  };
enum  ml_SVM_KernelTypes  {
         SVM_CUSTOM =  -1, SVM_LINEAR =  0, SVM_POLY =  1,
         SVM_RBF =  2, SVM_SIGMOID =  3, SVM_CHI2 =  4,
         SVM_INTER =  5  };
enum  ml_SVM_ParamTypes  { SVM_C =  0, SVM_GAMMA =  1,
         SVM_P =  2, SVM_NU =  3, SVM_COEF =  4,
         SVM_DEGREE =  5  };
enum  ml_EM_Types  { EM_COV_MAT_SPHERICAL =  0, EM_COV_MAT_DIAGONAL =  1,
         EM_COV_MAT_GENERIC =  2, EM_COV_MAT_DEFAULT =  EM_COV_MAT_DIAGONAL  };
#define  ml_EM_DEFAULT_NCLUSTERS   5
#define  ml_EM_DEFAULT_MAX_ITERS   100
#define  ml_EM_START_E_STEP   1
#define  ml_EM_START_M_STEP   2
#define  ml_EM_START_AUTO_STEP   0

enum  ml_DTrees_Flags  { DTrees_PREDICT_AUTO =  0,
         DTrees_PREDICT_SUM =  (1<<8), DTrees_PREDICT_MAX_VOTE =  (2<<8), DTrees_PREDICT_MASK =  (3<<8)  };
enum  ml_Boost_Types  {
         Boost_DISCRETE =  0, Boost_REAL =  1, Boost_LOGIT =  2,
         Boost_GENTLE =  3  };
enum  ml_ANN_MLP_TrainingMethods  { ANN_MLP_BACKPROP =  0, ANN_MLP_RPROP =  1,
         ANN_MLP_ANNEAL =  2  };
enum  ml_ANN_MLP_ActivationFunctions  { ANN_MLP_IDENTITY =  0, ANN_MLP_SIGMOID_SYM =  1,
         ANN_MLP_GAUSSIAN =  2, ANN_MLP_RELU =  3, ANN_MLP_LEAKYRELU =  4  };
enum  ml_ANN_MLP_TrainFlags  {
         ANN_MLP_UPDATE_WEIGHTS =  1, ANN_MLP_NO_INPUT_SCALE =  2, ANN_MLP_NO_OUTPUT_SCALE =  4  };
enum  ml_LogisticRegression_RegKinds  {
         LogisticRegression_REG_DISABLE =  -1, LogisticRegression_REG_L1 =  0, LogisticRegression_REG_L2 =  1  };
enum  ml_LogisticRegression_Methods  {
         LogisticRegression_BATCH =  0, LogisticRegression_MINI_BATCH =  1  };
enum  ml_SVMSGD_SvmsgdType  { SVMSGD_SGD =  0,
         SVMSGD_ASGD =  1  };
enum  ml_SVMSGD_MarginType  { SVMSGD_SOFT_MARGIN =  0, SVMSGD_HARD_MARGIN =  1  };
#define  CASCADE_DO_CANNY_PRUNING   1
#define  CASCADE_SCALE_IMAGE   2
#define  CASCADE_FIND_BIGGEST_OBJECT   4
#define  CASCADE_DO_ROUGH_SEARCH   8

enum  HOGDescriptor_HistogramNormType  {
         L2Hys =  0  };
#define  HOGDescriptor_DEFAULT_NLEVELS   64

enum  HOGDescriptor_DescriptorStorageFormat  { DESCR_FORMAT_COL_BY_COL =  0, DESCR_FORMAT_ROW_BY_ROW =  1  };
enum  QRCodeEncoder_EncodeMode  {
         MODE_AUTO =  -1, MODE_NUMERIC =  1, MODE_ALPHANUMERIC =  2,
         MODE_BYTE =  4, MODE_ECI =  7, MODE_KANJI =  8,
         MODE_STRUCTURED_APPEND =  3  };
enum  QRCodeEncoder_CorrectionLevel  { CORRECT_LEVEL_L =  0, CORRECT_LEVEL_M =  1,
         CORRECT_LEVEL_Q =  2, CORRECT_LEVEL_H =  3  };
enum  QRCodeEncoder_ECIEncodings  { ECI_UTF8 =  26  };
enum  FaceRecognizerSF_DisType  {
         FR_COSINE =  0, FR_NORM_L2 =  1  };
#define  INPAINT_NS   0
#define  INPAINT_TELEA   1
#define  LDR_SIZE   256
#define  NORMAL_CLONE   1
#define  MIXED_CLONE   2
#define  MONOCHROME_TRANSFER   3
#define  RECURS_FILTER   1
#define  NORMCONV_FILTER   2

enum  Stitcher_Status  { OK =  0,
         ERR_NEED_MORE_IMGS =  1, ERR_HOMOGRAPHY_EST_FAIL =  2, ERR_CAMERA_PARAMS_ADJUST_FAIL =  3  };
enum  Stitcher_Mode  {
         PANORAMA =  0, SCANS =  1  };
#define  detail_Blender_NO   0
#define  detail_Blender_FEATHER   1
#define  detail_Blender_MULTI_BAND   2
#define  detail_ExposureCompensator_NO   0
#define  detail_ExposureCompensator_GAIN   1
#define  detail_ExposureCompensator_GAIN_BLOCKS   2
#define  detail_ExposureCompensator_CHANNELS   3
#define  detail_ExposureCompensator_CHANNELS_BLOCKS   4

enum  detail_WaveCorrectKind  { WAVE_CORRECT_HORIZ =  0,
         WAVE_CORRECT_VERT =  1, WAVE_CORRECT_AUTO =  2  };
#define  detail_SeamFinder_NO   0
#define  detail_SeamFinder_VORONOI_SEAM   1
#define  detail_SeamFinder_DP_SEAM   2

enum  detail_DpSeamFinder_CostFunction  { DpSeamFinder_COLOR =  0,
         DpSeamFinder_COLOR_GRAD =  1  };
enum  detail_GraphCutSeamFinderBase_CostType  { GraphCutSeamFinderBase_COST_COLOR =  0, GraphCutSeamFinderBase_COST_COLOR_GRAD =  1  };
#define  detail_Timelapser_AS_IS   0
#define  detail_Timelapser_CROP   1
#define  OPTFLOW_USE_INITIAL_FLOW   4
#define  OPTFLOW_LK_GET_MIN_EIGENVALS   8
#define  OPTFLOW_FARNEBACK_GAUSSIAN   256
#define  MOTION_TRANSLATION   0
#define  MOTION_EUCLIDEAN   1
#define  MOTION_AFFINE   2
#define  MOTION_HOMOGRAPHY   3
#define  DISOpticalFlow_PRESET_ULTRAFAST   0
#define  DISOpticalFlow_PRESET_FAST   1
#define  DISOpticalFlow_PRESET_MEDIUM   2

enum  VideoCaptureAPIs  {
         CAP_ANY =  0, CAP_VFW =  200, CAP_V4L =  200,
         CAP_V4L2 =  CAP_V4L, CAP_FIREWIRE =  300, CAP_FIREWARE =  CAP_FIREWIRE,
         CAP_IEEE1394 =  CAP_FIREWIRE, CAP_DC1394 =  CAP_FIREWIRE, CAP_CMU1394 =  CAP_FIREWIRE,
         CAP_QT =  500, CAP_UNICAP =  600, CAP_DSHOW =  700,
         CAP_PVAPI =  800, CAP_OPENNI =  900, CAP_OPENNI_ASUS =  910,
         CAP_ANDROID =  1000, CAP_XIAPI =  1100, CAP_AVFOUNDATION =  1200,
         CAP_GIGANETIX =  1300, CAP_MSMF =  1400, CAP_WINRT =  1410,
         CAP_INTELPERC =  1500, CAP_REALSENSE =  1500, CAP_OPENNI2 =  1600,
         CAP_OPENNI2_ASUS =  1610, CAP_OPENNI2_ASTRA =  1620, CAP_GPHOTO2 =  1700,
         CAP_GSTREAMER =  1800, CAP_FFMPEG =  1900, CAP_IMAGES =  2000,
         CAP_ARAVIS =  2100, CAP_OPENCV_MJPEG =  2200, CAP_INTEL_MFX =  2300,
         CAP_XINE =  2400, CAP_UEYE =  2500  };
enum  VideoCaptureProperties  { CAP_PROP_POS_MSEC =  0,
         CAP_PROP_POS_FRAMES =  1, CAP_PROP_POS_AVI_RATIO =  2, CAP_PROP_FRAME_WIDTH =  3,
         CAP_PROP_FRAME_HEIGHT =  4, CAP_PROP_FPS =  5, CAP_PROP_FOURCC =  6,
         CAP_PROP_FRAME_COUNT =  7, CAP_PROP_FORMAT =  8, CAP_PROP_MODE =  9,
         CAP_PROP_BRIGHTNESS =  10, CAP_PROP_CONTRAST =  11, CAP_PROP_SATURATION =  12,
         CAP_PROP_HUE =  13, CAP_PROP_GAIN =  14, CAP_PROP_EXPOSURE =  15,
         CAP_PROP_CONVERT_RGB =  16, CAP_PROP_WHITE_BALANCE_BLUE_U =  17, CAP_PROP_RECTIFICATION =  18,
         CAP_PROP_MONOCHROME =  19, CAP_PROP_SHARPNESS =  20, CAP_PROP_AUTO_EXPOSURE =  21,
         CAP_PROP_GAMMA =  22, CAP_PROP_TEMPERATURE =  23, CAP_PROP_TRIGGER =  24,
         CAP_PROP_TRIGGER_DELAY =  25, CAP_PROP_WHITE_BALANCE_RED_V =  26, CAP_PROP_ZOOM =  27,
         CAP_PROP_FOCUS =  28, CAP_PROP_GUID =  29, CAP_PROP_ISO_SPEED =  30,
         CAP_PROP_BACKLIGHT =  32, CAP_PROP_PAN =  33, CAP_PROP_TILT =  34,
         CAP_PROP_ROLL =  35, CAP_PROP_IRIS =  36, CAP_PROP_SETTINGS =  37,
         CAP_PROP_BUFFERSIZE =  38, CAP_PROP_AUTOFOCUS =  39, CAP_PROP_SAR_NUM =  40,
         CAP_PROP_SAR_DEN =  41, CAP_PROP_BACKEND =  42, CAP_PROP_CHANNEL =  43,
         CAP_PROP_AUTO_WB =  44, CAP_PROP_WB_TEMPERATURE =  45, CAP_PROP_CODEC_PIXEL_FORMAT =  46,
         CAP_PROP_BITRATE =  47, CAP_PROP_ORIENTATION_META =  48, CAP_PROP_ORIENTATION_AUTO =  49,
         CAP_PROP_HW_ACCELERATION =  50, CAP_PROP_HW_DEVICE =  51, CAP_PROP_HW_ACCELERATION_USE_OPENCL =  52,
         CAP_PROP_OPEN_TIMEOUT_MSEC =  53, CAP_PROP_READ_TIMEOUT_MSEC =  54, CAP_PROP_STREAM_OPEN_TIME_USEC =  55,
         CAP_PROP_VIDEO_TOTAL_CHANNELS =  56, CAP_PROP_VIDEO_STREAM =  57, CAP_PROP_AUDIO_STREAM =  58,
         CAP_PROP_AUDIO_POS =  59, CAP_PROP_AUDIO_SHIFT_NSEC =  60, CAP_PROP_AUDIO_DATA_DEPTH =  61,
         CAP_PROP_AUDIO_SAMPLES_PER_SECOND =  62, CAP_PROP_AUDIO_BASE_INDEX =  63, CAP_PROP_AUDIO_TOTAL_CHANNELS =  64,
         CAP_PROP_AUDIO_TOTAL_STREAMS =  65, CAP_PROP_AUDIO_SYNCHRONIZE =  66, CAP_PROP_LRF_HAS_KEY_FRAME =  67,
         CAP_PROP_CODEC_EXTRADATA_INDEX =  68  };
enum  VideoWriterProperties  { VIDEOWRITER_PROP_QUALITY =  1, VIDEOWRITER_PROP_FRAMEBYTES =  2,
         VIDEOWRITER_PROP_NSTRIPES =  3, VIDEOWRITER_PROP_IS_COLOR =  4, VIDEOWRITER_PROP_DEPTH =  5,
         VIDEOWRITER_PROP_HW_ACCELERATION =  6, VIDEOWRITER_PROP_HW_DEVICE =  7, VIDEOWRITER_PROP_HW_ACCELERATION_USE_OPENCL =  8  };
enum  VideoAccelerationType  {
         VIDEO_ACCELERATION_NONE =  0, VIDEO_ACCELERATION_ANY =  1, VIDEO_ACCELERATION_D3D11 =  2,
         VIDEO_ACCELERATION_VAAPI =  3, VIDEO_ACCELERATION_MFX =  4  };
#define  CAP_PROP_DC1394_OFF   -4
#define  CAP_PROP_DC1394_MODE_MANUAL   -3
#define  CAP_PROP_DC1394_MODE_AUTO   -2
#define  CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO   -1
#define  CAP_PROP_DC1394_MAX   31
#define  CAP_OPENNI_DEPTH_GENERATOR   1 << 31
#define  CAP_OPENNI_IMAGE_GENERATOR   1 << 30
#define  CAP_OPENNI_IR_GENERATOR   1 << 29
#define  CAP_OPENNI_GENERATORS_MASK   CAP_OPENNI_DEPTH_GENERATOR + CAP_OPENNI_IMAGE_GENERATOR + CAP_OPENNI_IR_GENERATOR
#define  CAP_PROP_OPENNI_OUTPUT_MODE   100
#define  CAP_PROP_OPENNI_FRAME_MAX_DEPTH   101
#define  CAP_PROP_OPENNI_BASELINE   102
#define  CAP_PROP_OPENNI_FOCAL_LENGTH   103
#define  CAP_PROP_OPENNI_REGISTRATION   104
#define  CAP_PROP_OPENNI_REGISTRATION_ON   CAP_PROP_OPENNI_REGISTRATION
#define  CAP_PROP_OPENNI_APPROX_FRAME_SYNC   105
#define  CAP_PROP_OPENNI_MAX_BUFFER_SIZE   106
#define  CAP_PROP_OPENNI_CIRCLE_BUFFER   107
#define  CAP_PROP_OPENNI_MAX_TIME_DURATION   108
#define  CAP_PROP_OPENNI_GENERATOR_PRESENT   109
#define  CAP_PROP_OPENNI2_SYNC   110
#define  CAP_PROP_OPENNI2_MIRROR   111
#define  CAP_OPENNI_IMAGE_GENERATOR_PRESENT   CAP_OPENNI_IMAGE_GENERATOR + CAP_PROP_OPENNI_GENERATOR_PRESENT
#define  CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE   CAP_OPENNI_IMAGE_GENERATOR + CAP_PROP_OPENNI_OUTPUT_MODE
#define  CAP_OPENNI_DEPTH_GENERATOR_PRESENT   CAP_OPENNI_DEPTH_GENERATOR + CAP_PROP_OPENNI_GENERATOR_PRESENT
#define  CAP_OPENNI_DEPTH_GENERATOR_BASELINE   CAP_OPENNI_DEPTH_GENERATOR + CAP_PROP_OPENNI_BASELINE
#define  CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH   CAP_OPENNI_DEPTH_GENERATOR + CAP_PROP_OPENNI_FOCAL_LENGTH
#define  CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION   CAP_OPENNI_DEPTH_GENERATOR + CAP_PROP_OPENNI_REGISTRATION
#define  CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON   CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION
#define  CAP_OPENNI_IR_GENERATOR_PRESENT   CAP_OPENNI_IR_GENERATOR + CAP_PROP_OPENNI_GENERATOR_PRESENT
#define  CAP_OPENNI_DEPTH_MAP   0
#define  CAP_OPENNI_POINT_CLOUD_MAP   1
#define  CAP_OPENNI_DISPARITY_MAP   2
#define  CAP_OPENNI_DISPARITY_MAP_32F   3
#define  CAP_OPENNI_VALID_DEPTH_MASK   4
#define  CAP_OPENNI_BGR_IMAGE   5
#define  CAP_OPENNI_GRAY_IMAGE   6
#define  CAP_OPENNI_IR_IMAGE   7
#define  CAP_OPENNI_VGA_30HZ   0
#define  CAP_OPENNI_SXGA_15HZ   1
#define  CAP_OPENNI_SXGA_30HZ   2
#define  CAP_OPENNI_QVGA_30HZ   3
#define  CAP_OPENNI_QVGA_60HZ   4
#define  CAP_PROP_GSTREAMER_QUEUE_LENGTH   200
#define  CAP_PROP_PVAPI_MULTICASTIP   300
#define  CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE   301
#define  CAP_PROP_PVAPI_DECIMATIONHORIZONTAL   302
#define  CAP_PROP_PVAPI_DECIMATIONVERTICAL   303
#define  CAP_PROP_PVAPI_BINNINGX   304
#define  CAP_PROP_PVAPI_BINNINGY   305
#define  CAP_PROP_PVAPI_PIXELFORMAT   306
#define  CAP_PVAPI_FSTRIGMODE_FREERUN   0
#define  CAP_PVAPI_FSTRIGMODE_SYNCIN1   1
#define  CAP_PVAPI_FSTRIGMODE_SYNCIN2   2
#define  CAP_PVAPI_FSTRIGMODE_FIXEDRATE   3
#define  CAP_PVAPI_FSTRIGMODE_SOFTWARE   4
#define  CAP_PVAPI_DECIMATION_OFF   1
#define  CAP_PVAPI_DECIMATION_2OUTOF4   2
#define  CAP_PVAPI_DECIMATION_2OUTOF8   4
#define  CAP_PVAPI_DECIMATION_2OUTOF16   8
#define  CAP_PVAPI_PIXELFORMAT_MONO8   1
#define  CAP_PVAPI_PIXELFORMAT_MONO16   2
#define  CAP_PVAPI_PIXELFORMAT_BAYER8   3
#define  CAP_PVAPI_PIXELFORMAT_BAYER16   4
#define  CAP_PVAPI_PIXELFORMAT_RGB24   5
#define  CAP_PVAPI_PIXELFORMAT_BGR24   6
#define  CAP_PVAPI_PIXELFORMAT_RGBA32   7
#define  CAP_PVAPI_PIXELFORMAT_BGRA32   8
#define  CAP_PROP_XI_DOWNSAMPLING   400
#define  CAP_PROP_XI_DATA_FORMAT   401
#define  CAP_PROP_XI_OFFSET_X   402
#define  CAP_PROP_XI_OFFSET_Y   403
#define  CAP_PROP_XI_TRG_SOURCE   404
#define  CAP_PROP_XI_TRG_SOFTWARE   405
#define  CAP_PROP_XI_GPI_SELECTOR   406
#define  CAP_PROP_XI_GPI_MODE   407
#define  CAP_PROP_XI_GPI_LEVEL   408
#define  CAP_PROP_XI_GPO_SELECTOR   409
#define  CAP_PROP_XI_GPO_MODE   410
#define  CAP_PROP_XI_LED_SELECTOR   411
#define  CAP_PROP_XI_LED_MODE   412
#define  CAP_PROP_XI_MANUAL_WB   413
#define  CAP_PROP_XI_AUTO_WB   414
#define  CAP_PROP_XI_AEAG   415
#define  CAP_PROP_XI_EXP_PRIORITY   416
#define  CAP_PROP_XI_AE_MAX_LIMIT   417
#define  CAP_PROP_XI_AG_MAX_LIMIT   418
#define  CAP_PROP_XI_AEAG_LEVEL   419
#define  CAP_PROP_XI_TIMEOUT   420
#define  CAP_PROP_XI_EXPOSURE   421
#define  CAP_PROP_XI_EXPOSURE_BURST_COUNT   422
#define  CAP_PROP_XI_GAIN_SELECTOR   423
#define  CAP_PROP_XI_GAIN   424
#define  CAP_PROP_XI_DOWNSAMPLING_TYPE   426
#define  CAP_PROP_XI_BINNING_SELECTOR   427
#define  CAP_PROP_XI_BINNING_VERTICAL   428
#define  CAP_PROP_XI_BINNING_HORIZONTAL   429
#define  CAP_PROP_XI_BINNING_PATTERN   430
#define  CAP_PROP_XI_DECIMATION_SELECTOR   431
#define  CAP_PROP_XI_DECIMATION_VERTICAL   432
#define  CAP_PROP_XI_DECIMATION_HORIZONTAL   433
#define  CAP_PROP_XI_DECIMATION_PATTERN   434
#define  CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR   587
#define  CAP_PROP_XI_TEST_PATTERN   588
#define  CAP_PROP_XI_IMAGE_DATA_FORMAT   435
#define  CAP_PROP_XI_SHUTTER_TYPE   436
#define  CAP_PROP_XI_SENSOR_TAPS   437
#define  CAP_PROP_XI_AEAG_ROI_OFFSET_X   439
#define  CAP_PROP_XI_AEAG_ROI_OFFSET_Y   440
#define  CAP_PROP_XI_AEAG_ROI_WIDTH   441
#define  CAP_PROP_XI_AEAG_ROI_HEIGHT   442
#define  CAP_PROP_XI_BPC   445
#define  CAP_PROP_XI_WB_KR   448
#define  CAP_PROP_XI_WB_KG   449
#define  CAP_PROP_XI_WB_KB   450
#define  CAP_PROP_XI_WIDTH   451
#define  CAP_PROP_XI_HEIGHT   452
#define  CAP_PROP_XI_REGION_SELECTOR   589
#define  CAP_PROP_XI_REGION_MODE   595
#define  CAP_PROP_XI_LIMIT_BANDWIDTH   459
#define  CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH   460
#define  CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH   461
#define  CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH   462
#define  CAP_PROP_XI_OUTPUT_DATA_PACKING   463
#define  CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE   464
#define  CAP_PROP_XI_IS_COOLED   465
#define  CAP_PROP_XI_COOLING   466
#define  CAP_PROP_XI_TARGET_TEMP   467
#define  CAP_PROP_XI_CHIP_TEMP   468
#define  CAP_PROP_XI_HOUS_TEMP   469
#define  CAP_PROP_XI_HOUS_BACK_SIDE_TEMP   590
#define  CAP_PROP_XI_SENSOR_BOARD_TEMP   596
#define  CAP_PROP_XI_CMS   470
#define  CAP_PROP_XI_APPLY_CMS   471
#define  CAP_PROP_XI_IMAGE_IS_COLOR   474
#define  CAP_PROP_XI_COLOR_FILTER_ARRAY   475
#define  CAP_PROP_XI_GAMMAY   476
#define  CAP_PROP_XI_GAMMAC   477
#define  CAP_PROP_XI_SHARPNESS   478
#define  CAP_PROP_XI_CC_MATRIX_00   479
#define  CAP_PROP_XI_CC_MATRIX_01   480
#define  CAP_PROP_XI_CC_MATRIX_02   481
#define  CAP_PROP_XI_CC_MATRIX_03   482
#define  CAP_PROP_XI_CC_MATRIX_10   483
#define  CAP_PROP_XI_CC_MATRIX_11   484
#define  CAP_PROP_XI_CC_MATRIX_12   485
#define  CAP_PROP_XI_CC_MATRIX_13   486
#define  CAP_PROP_XI_CC_MATRIX_20   487
#define  CAP_PROP_XI_CC_MATRIX_21   488
#define  CAP_PROP_XI_CC_MATRIX_22   489
#define  CAP_PROP_XI_CC_MATRIX_23   490
#define  CAP_PROP_XI_CC_MATRIX_30   491
#define  CAP_PROP_XI_CC_MATRIX_31   492
#define  CAP_PROP_XI_CC_MATRIX_32   493
#define  CAP_PROP_XI_CC_MATRIX_33   494
#define  CAP_PROP_XI_DEFAULT_CC_MATRIX   495
#define  CAP_PROP_XI_TRG_SELECTOR   498
#define  CAP_PROP_XI_ACQ_FRAME_BURST_COUNT   499
#define  CAP_PROP_XI_DEBOUNCE_EN   507
#define  CAP_PROP_XI_DEBOUNCE_T0   508
#define  CAP_PROP_XI_DEBOUNCE_T1   509
#define  CAP_PROP_XI_DEBOUNCE_POL   510
#define  CAP_PROP_XI_LENS_MODE   511
#define  CAP_PROP_XI_LENS_APERTURE_VALUE   512
#define  CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE   513
#define  CAP_PROP_XI_LENS_FOCUS_MOVE   514
#define  CAP_PROP_XI_LENS_FOCUS_DISTANCE   515
#define  CAP_PROP_XI_LENS_FOCAL_LENGTH   516
#define  CAP_PROP_XI_LENS_FEATURE_SELECTOR   517
#define  CAP_PROP_XI_LENS_FEATURE   518
#define  CAP_PROP_XI_DEVICE_MODEL_ID   521
#define  CAP_PROP_XI_DEVICE_SN   522
#define  CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA   529
#define  CAP_PROP_XI_IMAGE_PAYLOAD_SIZE   530
#define  CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT   531
#define  CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ   532
#define  CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX   533
#define  CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT   534
#define  CAP_PROP_XI_FRAMERATE   535
#define  CAP_PROP_XI_COUNTER_SELECTOR   536
#define  CAP_PROP_XI_COUNTER_VALUE   537
#define  CAP_PROP_XI_ACQ_TIMING_MODE   538
#define  CAP_PROP_XI_AVAILABLE_BANDWIDTH   539
#define  CAP_PROP_XI_BUFFER_POLICY   540
#define  CAP_PROP_XI_LUT_EN   541
#define  CAP_PROP_XI_LUT_INDEX   542
#define  CAP_PROP_XI_LUT_VALUE   543
#define  CAP_PROP_XI_TRG_DELAY   544
#define  CAP_PROP_XI_TS_RST_MODE   545
#define  CAP_PROP_XI_TS_RST_SOURCE   546
#define  CAP_PROP_XI_IS_DEVICE_EXIST   547
#define  CAP_PROP_XI_ACQ_BUFFER_SIZE   548
#define  CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT   549
#define  CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE   550
#define  CAP_PROP_XI_BUFFERS_QUEUE_SIZE   551
#define  CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT   552
#define  CAP_PROP_XI_RECENT_FRAME   553
#define  CAP_PROP_XI_DEVICE_RESET   554
#define  CAP_PROP_XI_COLUMN_FPN_CORRECTION   555
#define  CAP_PROP_XI_ROW_FPN_CORRECTION   591
#define  CAP_PROP_XI_SENSOR_MODE   558
#define  CAP_PROP_XI_HDR   559
#define  CAP_PROP_XI_HDR_KNEEPOINT_COUNT   560
#define  CAP_PROP_XI_HDR_T1   561
#define  CAP_PROP_XI_HDR_T2   562
#define  CAP_PROP_XI_KNEEPOINT1   563
#define  CAP_PROP_XI_KNEEPOINT2   564
#define  CAP_PROP_XI_IMAGE_BLACK_LEVEL   565
#define  CAP_PROP_XI_HW_REVISION   571
#define  CAP_PROP_XI_DEBUG_LEVEL   572
#define  CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION   573
#define  CAP_PROP_XI_FFS_FILE_ID   594
#define  CAP_PROP_XI_FFS_FILE_SIZE   580
#define  CAP_PROP_XI_FREE_FFS_SIZE   581
#define  CAP_PROP_XI_USED_FFS_SIZE   582
#define  CAP_PROP_XI_FFS_ACCESS_KEY   583
#define  CAP_PROP_XI_SENSOR_FEATURE_SELECTOR   585
#define  CAP_PROP_XI_SENSOR_FEATURE_VALUE   586
#define  CAP_PROP_ARAVIS_AUTOTRIGGER   600
#define  CAP_PROP_IOS_DEVICE_FOCUS   9001
#define  CAP_PROP_IOS_DEVICE_EXPOSURE   9002
#define  CAP_PROP_IOS_DEVICE_FLASH   9003
#define  CAP_PROP_IOS_DEVICE_WHITEBALANCE   9004
#define  CAP_PROP_IOS_DEVICE_TORCH   9005
#define  CAP_PROP_GIGA_FRAME_OFFSET_X   10001
#define  CAP_PROP_GIGA_FRAME_OFFSET_Y   10002
#define  CAP_PROP_GIGA_FRAME_WIDTH_MAX   10003
#define  CAP_PROP_GIGA_FRAME_HEIGH_MAX   10004
#define  CAP_PROP_GIGA_FRAME_SENS_WIDTH   10005
#define  CAP_PROP_GIGA_FRAME_SENS_HEIGH   10006
#define  CAP_PROP_INTELPERC_PROFILE_COUNT   11001
#define  CAP_PROP_INTELPERC_PROFILE_IDX   11002
#define  CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE   11003
#define  CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE   11004
#define  CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD   11005
#define  CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ   11006
#define  CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT   11007
#define  CAP_INTELPERC_DEPTH_GENERATOR   1 << 29
#define  CAP_INTELPERC_IMAGE_GENERATOR   1 << 28
#define  CAP_INTELPERC_IR_GENERATOR   1 << 27
#define  CAP_INTELPERC_GENERATORS_MASK   CAP_INTELPERC_DEPTH_GENERATOR + CAP_INTELPERC_IMAGE_GENERATOR + CAP_INTELPERC_IR_GENERATOR
#define  CAP_INTELPERC_DEPTH_MAP   0
#define  CAP_INTELPERC_UVDEPTH_MAP   1
#define  CAP_INTELPERC_IR_MAP   2
#define  CAP_INTELPERC_IMAGE   3
#define  CAP_PROP_GPHOTO2_PREVIEW   17001
#define  CAP_PROP_GPHOTO2_WIDGET_ENUMERATE   17002
#define  CAP_PROP_GPHOTO2_RELOAD_CONFIG   17003
#define  CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE   17004
#define  CAP_PROP_GPHOTO2_COLLECT_MSGS   17005
#define  CAP_PROP_GPHOTO2_FLUSH_MSGS   17006
#define  CAP_PROP_SPEED   17007
#define  CAP_PROP_APERTURE   17008
#define  CAP_PROP_EXPOSUREPROGRAM   17009
#define  CAP_PROP_VIEWFINDER   17010
#define  CAP_PROP_IMAGES_BASE   18000
#define  CAP_PROP_IMAGES_LAST   19000

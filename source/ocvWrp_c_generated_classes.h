CVAPI(struct  detail_AffineBasedEstimator_t* )   pCvdetail_AffineBasedEstimatorCreate()
{
 
        struct detail_AffineBasedEstimator_t* wrapper  = new detail_AffineBasedEstimator_t;
try {  
    wrapper->v = new cv::detail::AffineBasedEstimator();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_AffineBasedEstimatorDelete(struct detail_AffineBasedEstimator_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_AffineBestOf2NearestMatcher_t* )   pCvdetail_AffineBestOf2NearestMatcherCreate(bool full_affine, bool try_use_gpu, 
                                   float match_conf, int num_matches_thresh1)
{
 
        struct detail_AffineBestOf2NearestMatcher_t* wrapper  = new detail_AffineBestOf2NearestMatcher_t;
try {  
    wrapper->v = new cv::detail::AffineBestOf2NearestMatcher(full_affine, try_use_gpu, match_conf, num_matches_thresh1);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_AffineBestOf2NearestMatcherDelete(struct detail_AffineBestOf2NearestMatcher_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  AsyncArray_t* )   pCvAsyncArrayCreate()
{
 
        struct AsyncArray_t* wrapper  = new AsyncArray_t;
try {  
    wrapper->v = new cv::AsyncArray();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvAsyncArrayDelete(struct AsyncArray_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  BFMatcher_t* )   pCvBFMatcherCreate(int normType, bool crossCheck)
{
 
        struct BFMatcher_t* wrapper  = new BFMatcher_t;
try {  
    wrapper->v = new cv::BFMatcher(normType, crossCheck);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvBFMatcherDelete(struct BFMatcher_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  BOWImgDescriptorExtractor_t* )   pCvBOWImgDescriptorExtractorCreate(Ptr_DescriptorExtractor* dextractor, 
                                   Ptr_DescriptorMatcher* dmatcher)
{
 
        struct BOWImgDescriptorExtractor_t* wrapper  = new BOWImgDescriptorExtractor_t;
try {  
    wrapper->v = new cv::BOWImgDescriptorExtractor(*dextractor, *dmatcher);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvBOWImgDescriptorExtractorDelete(struct BOWImgDescriptorExtractor_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  BOWKMeansTrainer_t* )   pCvBOWKMeansTrainerCreate(int clusterCount, TermCriteria_t* termcrit, int attempts, int flags)
{
 
    TermCriteria x2; if (termcrit == 0) { TermCriteria_t a2; x2 = TermCriteria(); a2.v = &x2; termcrit = &a2; };     
        struct BOWKMeansTrainer_t* wrapper  = new BOWKMeansTrainer_t;
try {  
    wrapper->v = new cv::BOWKMeansTrainer(clusterCount, *termcrit->v, attempts, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvBOWKMeansTrainerDelete(struct BOWKMeansTrainer_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BestOf2NearestMatcher_t* )   pCvdetail_BestOf2NearestMatcherCreate(bool try_use_gpu, float match_conf, 
                                   int num_matches_thresh1, int num_matches_thresh2)
{
 
        struct detail_BestOf2NearestMatcher_t* wrapper  = new detail_BestOf2NearestMatcher_t;
try {  
    wrapper->v = new cv::detail::BestOf2NearestMatcher(try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BestOf2NearestMatcherDelete(struct detail_BestOf2NearestMatcher_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BestOf2NearestRangeMatcher_t* )   pCvdetail_BestOf2NearestRangeMatcherCreate(int range_width, bool try_use_gpu, 
                                   float match_conf, int num_matches_thresh1, int num_matches_thresh2)
{
 
        struct detail_BestOf2NearestRangeMatcher_t* wrapper  = new detail_BestOf2NearestRangeMatcher_t;
try {  
    wrapper->v = new cv::detail::BestOf2NearestRangeMatcher(range_width, try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BestOf2NearestRangeMatcherDelete(struct detail_BestOf2NearestRangeMatcher_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BlocksChannelsCompensator_t* )   pCvdetail_BlocksChannelsCompensatorCreate(int bl_width, int bl_height, int nr_feeds)
{
 
        struct detail_BlocksChannelsCompensator_t* wrapper  = new detail_BlocksChannelsCompensator_t;
try {  
    wrapper->v = new cv::detail::BlocksChannelsCompensator(bl_width, bl_height, nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BlocksChannelsCompensatorDelete(struct detail_BlocksChannelsCompensator_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BlocksGainCompensator_t* )   pCvdetail_BlocksGainCompensatorCreate(int bl_width, int bl_height)
{
 
        struct detail_BlocksGainCompensator_t* wrapper  = new detail_BlocksGainCompensator_t;
try {  
    wrapper->v = new cv::detail::BlocksGainCompensator(bl_width, bl_height);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  detail_BlocksGainCompensator_t* )   pCvdetail_BlocksGainCompensatorCreateV2(int bl_width, int bl_height, int nr_feeds)
{
 
        struct detail_BlocksGainCompensator_t* wrapper  = new detail_BlocksGainCompensator_t;
try {  
    wrapper->v = new cv::detail::BlocksGainCompensator(bl_width, bl_height, nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BlocksGainCompensatorDelete(struct detail_BlocksGainCompensator_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BundleAdjusterAffine_t* )   pCvdetail_BundleAdjusterAffineCreate()
{
 
        struct detail_BundleAdjusterAffine_t* wrapper  = new detail_BundleAdjusterAffine_t;
try {  
    wrapper->v = new cv::detail::BundleAdjusterAffine();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BundleAdjusterAffineDelete(struct detail_BundleAdjusterAffine_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BundleAdjusterAffinePartial_t* )   pCvdetail_BundleAdjusterAffinePartialCreate()
{
 
        struct detail_BundleAdjusterAffinePartial_t* wrapper  = new detail_BundleAdjusterAffinePartial_t;
try {  
    wrapper->v = new cv::detail::BundleAdjusterAffinePartial();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BundleAdjusterAffinePartialDelete(struct detail_BundleAdjusterAffinePartial_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BundleAdjusterRay_t* )   pCvdetail_BundleAdjusterRayCreate()
{
 
        struct detail_BundleAdjusterRay_t* wrapper  = new detail_BundleAdjusterRay_t;
try {  
    wrapper->v = new cv::detail::BundleAdjusterRay();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BundleAdjusterRayDelete(struct detail_BundleAdjusterRay_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_BundleAdjusterReproj_t* )   pCvdetail_BundleAdjusterReprojCreate()
{
 
        struct detail_BundleAdjusterReproj_t* wrapper  = new detail_BundleAdjusterReproj_t;
try {  
    wrapper->v = new cv::detail::BundleAdjusterReproj();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_BundleAdjusterReprojDelete(struct detail_BundleAdjusterReproj_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  CascadeClassifier_t* )   pCvCascadeClassifierCreate()
{
 
        struct CascadeClassifier_t* wrapper  = new CascadeClassifier_t;
try {  
    wrapper->v = new cv::CascadeClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  CascadeClassifier_t* )   pCvCascadeClassifierCreateV2(string_t* filename)
{
 
        struct CascadeClassifier_t* wrapper  = new CascadeClassifier_t;
try {  
    wrapper->v = new cv::CascadeClassifier(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvCascadeClassifierDelete(struct CascadeClassifier_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_ChannelsCompensator_t* )   pCvdetail_ChannelsCompensatorCreate(int nr_feeds)
{
 
        struct detail_ChannelsCompensator_t* wrapper  = new detail_ChannelsCompensator_t;
try {  
    wrapper->v = new cv::detail::ChannelsCompensator(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_ChannelsCompensatorDelete(struct detail_ChannelsCompensator_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  CirclesGridFinderParameters_t* )   pCvCirclesGridFinderParametersCreate()
{
 
        struct CirclesGridFinderParameters_t* wrapper  = new CirclesGridFinderParameters_t;
try {  
    wrapper->v = new cv::CirclesGridFinderParameters();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvCirclesGridFinderParametersDelete(struct CirclesGridFinderParameters_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_ClassificationModel_t* )   pCvdnn_ClassificationModelCreate(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_ClassificationModel_t* wrapper  = new dnn_ClassificationModel_t;
try {  
    wrapper->v = new cv::dnn::ClassificationModel(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_ClassificationModel_t* )   pCvdnn_ClassificationModelCreateV2(dnn_Net_t* network)
{
 
        struct dnn_ClassificationModel_t* wrapper  = new dnn_ClassificationModel_t;
try {  
    wrapper->v = new cv::dnn::ClassificationModel(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_ClassificationModelDelete(struct dnn_ClassificationModel_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  DMatch_t* )   pCvDMatchCreate()
{
 
        struct DMatch_t* wrapper  = new DMatch_t;
try {  
    wrapper->v = new cv::DMatch();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  DMatch_t* )   pCvDMatchCreateV2(int _queryIdx, int _trainIdx, float _distance)
{
 
        struct DMatch_t* wrapper  = new DMatch_t;
try {  
    wrapper->v = new cv::DMatch(_queryIdx, _trainIdx, _distance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  DMatch_t* )   pCvDMatchCreateV3(int _queryIdx, int _trainIdx, int _imgIdx, float _distance)
{
 
        struct DMatch_t* wrapper  = new DMatch_t;
try {  
    wrapper->v = new cv::DMatch(_queryIdx, _trainIdx, _imgIdx, _distance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvDMatchDelete(struct DMatch_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_DetectionModel_t* )   pCvdnn_DetectionModelCreate(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_DetectionModel_t* wrapper  = new dnn_DetectionModel_t;
try {  
    wrapper->v = new cv::dnn::DetectionModel(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_DetectionModel_t* )   pCvdnn_DetectionModelCreateV2(dnn_Net_t* network)
{
 
        struct dnn_DetectionModel_t* wrapper  = new dnn_DetectionModel_t;
try {  
    wrapper->v = new cv::dnn::DetectionModel(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_DetectionModelDelete(struct dnn_DetectionModel_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  ocl_Device_t* )   pCvocl_DeviceCreate()
{
 
        struct ocl_Device_t* wrapper  = new ocl_Device_t;
try {  
    wrapper->v = new cv::ocl::Device();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvocl_DeviceDelete(struct ocl_Device_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_DictValue_t* )   pCvdnn_DictValueCreate(int i)
{
 
        struct dnn_DictValue_t* wrapper  = new dnn_DictValue_t;
try {  
    wrapper->v = new cv::dnn::DictValue(i);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_DictValue_t* )   pCvdnn_DictValueCreateV2(double p)
{
 
        struct dnn_DictValue_t* wrapper  = new dnn_DictValue_t;
try {  
    wrapper->v = new cv::dnn::DictValue(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_DictValue_t* )   pCvdnn_DictValueCreateV3(string_t* s)
{
 
        struct dnn_DictValue_t* wrapper  = new dnn_DictValue_t;
try {  
    wrapper->v = new cv::dnn::DictValue(string(s->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_DictValueDelete(struct dnn_DictValue_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_DpSeamFinder_t* )   pCvdetail_DpSeamFinderCreate(string_t* costFunc)
{
 
        struct detail_DpSeamFinder_t* wrapper  = new detail_DpSeamFinder_t;
try {  
    wrapper->v = new cv::detail::DpSeamFinder(string(costFunc->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_DpSeamFinderDelete(struct detail_DpSeamFinder_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_FeatherBlender_t* )   pCvdetail_FeatherBlenderCreate(float sharpness)
{
 
        struct detail_FeatherBlender_t* wrapper  = new detail_FeatherBlender_t;
try {  
    wrapper->v = new cv::detail::FeatherBlender(sharpness);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_FeatherBlenderDelete(struct detail_FeatherBlender_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  FileNode_t* )   pCvFileNodeCreate()
{
 
        struct FileNode_t* wrapper  = new FileNode_t;
try {  
    wrapper->v = new cv::FileNode();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvFileNodeDelete(struct FileNode_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  FileStorage_t* )   pCvFileStorageCreate()
{
 
        struct FileStorage_t* wrapper  = new FileStorage_t;
try {  
    wrapper->v = new cv::FileStorage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  FileStorage_t* )   pCvFileStorageCreateV2(string_t* filename, int flags, string_t* encoding)
{
 
    if (encoding == 0) { string_t a3; a3.v = pEmptyString; encoding = &a3; };      
        struct FileStorage_t* wrapper  = new FileStorage_t;
try {  
    wrapper->v = new cv::FileStorage(string(filename->v), flags, string(encoding->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvFileStorageDelete(struct FileStorage_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  FlannBasedMatcher_t* )   pCvFlannBasedMatcherCreate(Ptr_flann_IndexParams* indexParams, 
                                   Ptr_flann_SearchParams* searchParams)
{
 
    Ptr_flann_IndexParams x1; if (indexParams == 0) { x1 = makePtr<flann::KDTreeIndexParams>(); indexParams = &x1; };       
    Ptr_flann_SearchParams x2; if (searchParams == 0) { x2 = makePtr<flann::SearchParams>(); searchParams = &x2; };       
        struct FlannBasedMatcher_t* wrapper  = new FlannBasedMatcher_t;
try {  
    wrapper->v = new cv::FlannBasedMatcher(*indexParams, *searchParams);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvFlannBasedMatcherDelete(struct FlannBasedMatcher_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_GainCompensator_t* )   pCvdetail_GainCompensatorCreate()
{
 
        struct detail_GainCompensator_t* wrapper  = new detail_GainCompensator_t;
try {  
    wrapper->v = new cv::detail::GainCompensator();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  detail_GainCompensator_t* )   pCvdetail_GainCompensatorCreateV2(int nr_feeds)
{
 
        struct detail_GainCompensator_t* wrapper  = new detail_GainCompensator_t;
try {  
    wrapper->v = new cv::detail::GainCompensator(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_GainCompensatorDelete(struct detail_GainCompensator_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_GraphCutSeamFinder_t* )   pCvdetail_GraphCutSeamFinderCreate(string_t* cost_type, float terminal_cost, 
                                   float bad_region_penalty)
{
 
        struct detail_GraphCutSeamFinder_t* wrapper  = new detail_GraphCutSeamFinder_t;
try {  
    wrapper->v = new cv::detail::GraphCutSeamFinder(string(cost_type->v), terminal_cost, bad_region_penalty);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_GraphCutSeamFinderDelete(struct detail_GraphCutSeamFinder_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  HOGDescriptor_t* )   pCvHOGDescriptorCreate()
{
 
        struct HOGDescriptor_t* wrapper  = new HOGDescriptor_t;
try {  
    wrapper->v = new cv::HOGDescriptor();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  HOGDescriptor_t* )   pCvHOGDescriptorCreateV2(Size_t* _winSize, Size_t* _blockSize, Size_t* _blockStride, 
                                   Size_t* _cellSize, int _nbins, int _derivAperture, double _winSigma, 
                                   HOGDescriptor::HistogramNormType _histogramNormType, double _L2HysThreshold, bool _gammaCorrection, int _nlevels, 
                                   bool _signedGradient)
{
 
        struct HOGDescriptor_t* wrapper  = new HOGDescriptor_t;
try {  
    wrapper->v = new cv::HOGDescriptor(*_winSize->v, *_blockSize->v, *_blockStride->v, *_cellSize->v, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection, _nlevels, _signedGradient);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  HOGDescriptor_t* )   pCvHOGDescriptorCreateV3(string_t* filename)
{
 
        struct HOGDescriptor_t* wrapper  = new HOGDescriptor_t;
try {  
    wrapper->v = new cv::HOGDescriptor(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvHOGDescriptorDelete(struct HOGDescriptor_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_HomographyBasedEstimator_t* )   pCvdetail_HomographyBasedEstimatorCreate(bool is_focals_estimated)
{
 
        struct detail_HomographyBasedEstimator_t* wrapper  = new detail_HomographyBasedEstimator_t;
try {  
    wrapper->v = new cv::detail::HomographyBasedEstimator(is_focals_estimated);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_HomographyBasedEstimatorDelete(struct detail_HomographyBasedEstimator_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  flann_Index_t* )   pCvflann_IndexCreate()
{
 
        struct flann_Index_t* wrapper  = new flann_Index_t;
try {  
    wrapper->v = new cv::flann::Index();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  flann_Index_t* )   pCvflann_IndexCreateV2(Mat_t* features, IndexParams_t* params, 
                                   cvflann::flann_distance_t distType)
{
 
        struct flann_Index_t* wrapper  = new flann_Index_t;
try {  
    wrapper->v = new cv::flann::Index(*features->v, *params->v, distType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  flann_Index_t* )   pCvflann_IndexCreateV3(UMat_t* features, IndexParams_t* params, 
                                   cvflann::flann_distance_t distType)
{
 
        struct flann_Index_t* wrapper  = new flann_Index_t;
try {  
    wrapper->v = new cv::flann::Index(*features->v, *params->v, distType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvflann_IndexDelete(struct flann_Index_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  segmentation_IntelligentScissorsMB_t* )   pCvsegmentation_IntelligentScissorsMBCreate()
{
 
        struct segmentation_IntelligentScissorsMB_t* wrapper  = new segmentation_IntelligentScissorsMB_t;
try {  
    wrapper->v = new cv::segmentation::IntelligentScissorsMB();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvsegmentation_IntelligentScissorsMBDelete(struct segmentation_IntelligentScissorsMB_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  ml_KDTree_t* )   pCvml_KDTreeCreate()
{
 
        struct ml_KDTree_t* wrapper  = new ml_KDTree_t;
try {  
    wrapper->v = new cv::ml::KDTree();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  ml_KDTree_t* )   pCvml_KDTreeCreateV2(Mat_t* points, bool copyAndReorderPoints)
{
 
        struct ml_KDTree_t* wrapper  = new ml_KDTree_t;
try {  
    wrapper->v = new cv::ml::KDTree(*points->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  ml_KDTree_t* )   pCvml_KDTreeCreateV3(UMat_t* points, bool copyAndReorderPoints)
{
 
        struct ml_KDTree_t* wrapper  = new ml_KDTree_t;
try {  
    wrapper->v = new cv::ml::KDTree(*points->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  ml_KDTree_t* )   pCvml_KDTreeCreateV4(Mat_t* points, Mat_t* _labels, bool copyAndReorderPoints)
{
 
        struct ml_KDTree_t* wrapper  = new ml_KDTree_t;
try {  
    wrapper->v = new cv::ml::KDTree(*points->v, *_labels->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  ml_KDTree_t* )   pCvml_KDTreeCreateV5(UMat_t* points, UMat_t* _labels, bool copyAndReorderPoints)
{
 
        struct ml_KDTree_t* wrapper  = new ml_KDTree_t;
try {  
    wrapper->v = new cv::ml::KDTree(*points->v, *_labels->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvml_KDTreeDelete(struct ml_KDTree_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  KalmanFilter_t* )   pCvKalmanFilterCreate()
{
 
        struct KalmanFilter_t* wrapper  = new KalmanFilter_t;
try {  
    wrapper->v = new cv::KalmanFilter();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  KalmanFilter_t* )   pCvKalmanFilterCreateV2(int dynamParams, int measureParams, int controlParams, int _type)
{
 
        struct KalmanFilter_t* wrapper  = new KalmanFilter_t;
try {  
    wrapper->v = new cv::KalmanFilter(dynamParams, measureParams, controlParams, _type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvKalmanFilterDelete(struct KalmanFilter_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  KeyPoint_t* )   pCvKeyPointCreate()
{
 
        struct KeyPoint_t* wrapper  = new KeyPoint_t;
try {  
    wrapper->v = new cv::KeyPoint();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  KeyPoint_t* )   pCvKeyPointCreateV2(float x, float y, float size, float angle, float response, int octave, 
                                   int class_id)
{
 
        struct KeyPoint_t* wrapper  = new KeyPoint_t;
try {  
    wrapper->v = new cv::KeyPoint(x, y, size, angle, response, octave, class_id);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvKeyPointDelete(struct KeyPoint_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_KeypointsModel_t* )   pCvdnn_KeypointsModelCreate(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_KeypointsModel_t* wrapper  = new dnn_KeypointsModel_t;
try {  
    wrapper->v = new cv::dnn::KeypointsModel(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_KeypointsModel_t* )   pCvdnn_KeypointsModelCreateV2(dnn_Net_t* network)
{
 
        struct dnn_KeypointsModel_t* wrapper  = new dnn_KeypointsModel_t;
try {  
    wrapper->v = new cv::dnn::KeypointsModel(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_KeypointsModelDelete(struct dnn_KeypointsModel_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_Model_t* )   pCvdnn_ModelCreate(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_Model_t* wrapper  = new dnn_Model_t;
try {  
    wrapper->v = new cv::dnn::Model(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_Model_t* )   pCvdnn_ModelCreateV2(dnn_Net_t* network)
{
 
        struct dnn_Model_t* wrapper  = new dnn_Model_t;
try {  
    wrapper->v = new cv::dnn::Model(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_ModelDelete(struct dnn_Model_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_MultiBandBlender_t* )   pCvdetail_MultiBandBlenderCreate(int try_gpu, int num_bands, int weight_type)
{
 
        struct detail_MultiBandBlender_t* wrapper  = new detail_MultiBandBlender_t;
try {  
    wrapper->v = new cv::detail::MultiBandBlender(try_gpu, num_bands, weight_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_MultiBandBlenderDelete(struct detail_MultiBandBlender_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_Net_t* )   pCvdnn_NetCreate()
{
 
        struct dnn_Net_t* wrapper  = new dnn_Net_t;
try {  
    wrapper->v = new cv::dnn::Net();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_NetDelete(struct dnn_Net_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  detail_NoBundleAdjuster_t* )   pCvdetail_NoBundleAdjusterCreate()
{
 
        struct detail_NoBundleAdjuster_t* wrapper  = new detail_NoBundleAdjuster_t;
try {  
    wrapper->v = new cv::detail::NoBundleAdjuster();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdetail_NoBundleAdjusterDelete(struct detail_NoBundleAdjuster_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  utils_nested_OriginalClassName_Params_t* )   pCvutils_nested_OriginalClassName_ParamsCreate(int int_param, float float_param)
{
 
        struct utils_nested_OriginalClassName_Params_t* wrapper  = new utils_nested_OriginalClassName_Params_t;
try {  
    wrapper->v = new cv::utils::nested::OriginalClassName::Params(int_param, float_param);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvutils_nested_OriginalClassName_ParamsDelete(struct utils_nested_OriginalClassName_Params_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  PyRotationWarper_t* )   pCvPyRotationWarperCreate(string_t* _type, float scale)
{
 
        struct PyRotationWarper_t* wrapper  = new PyRotationWarper_t;
try {  
    wrapper->v = new cv::PyRotationWarper(string(_type->v), scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  PyRotationWarper_t* )   pCvPyRotationWarperCreateV2()
{
 
        struct PyRotationWarper_t* wrapper  = new PyRotationWarper_t;
try {  
    wrapper->v = new cv::PyRotationWarper();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvPyRotationWarperDelete(struct PyRotationWarper_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  QRCodeDetector_t* )   pCvQRCodeDetectorCreate()
{
 
        struct QRCodeDetector_t* wrapper  = new QRCodeDetector_t;
try {  
    wrapper->v = new cv::QRCodeDetector();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvQRCodeDetectorDelete(struct QRCodeDetector_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  QRCodeEncoder_Params_t* )   pCvQRCodeEncoder_ParamsCreate()
{
 
        struct QRCodeEncoder_Params_t* wrapper  = new QRCodeEncoder_Params_t;
try {  
    wrapper->v = new cv::QRCodeEncoder::Params();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvQRCodeEncoder_ParamsDelete(struct QRCodeEncoder_Params_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_SegmentationModel_t* )   pCvdnn_SegmentationModelCreate(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_SegmentationModel_t* wrapper  = new dnn_SegmentationModel_t;
try {  
    wrapper->v = new cv::dnn::SegmentationModel(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_SegmentationModel_t* )   pCvdnn_SegmentationModelCreateV2(dnn_Net_t* network)
{
 
        struct dnn_SegmentationModel_t* wrapper  = new dnn_SegmentationModel_t;
try {  
    wrapper->v = new cv::dnn::SegmentationModel(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_SegmentationModelDelete(struct dnn_SegmentationModel_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  SimpleBlobDetector_Params_t* )   pCvSimpleBlobDetector_ParamsCreate()
{
 
        struct SimpleBlobDetector_Params_t* wrapper  = new SimpleBlobDetector_Params_t;
try {  
    wrapper->v = new cv::SimpleBlobDetector::Params();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvSimpleBlobDetector_ParamsDelete(struct SimpleBlobDetector_Params_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  Subdiv2D_t* )   pCvSubdiv2DCreate()
{
 
        struct Subdiv2D_t* wrapper  = new Subdiv2D_t;
try {  
    wrapper->v = new cv::Subdiv2D();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  Subdiv2D_t* )   pCvSubdiv2DCreateV2(Rect_t* rect)
{
 
        struct Subdiv2D_t* wrapper  = new Subdiv2D_t;
try {  
    wrapper->v = new cv::Subdiv2D(*rect->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvSubdiv2DDelete(struct Subdiv2D_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_TextDetectionModel_DB_t* )   pCvdnn_TextDetectionModel_DBCreate(dnn_Net_t* network)
{
 
        struct dnn_TextDetectionModel_DB_t* wrapper  = new dnn_TextDetectionModel_DB_t;
try {  
    wrapper->v = new cv::dnn::TextDetectionModel_DB(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_TextDetectionModel_DB_t* )   pCvdnn_TextDetectionModel_DBCreateV2(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_TextDetectionModel_DB_t* wrapper  = new dnn_TextDetectionModel_DB_t;
try {  
    wrapper->v = new cv::dnn::TextDetectionModel_DB(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_TextDetectionModel_DBDelete(struct dnn_TextDetectionModel_DB_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_TextDetectionModel_EAST_t* )   pCvdnn_TextDetectionModel_EASTCreate(dnn_Net_t* network)
{
 
        struct dnn_TextDetectionModel_EAST_t* wrapper  = new dnn_TextDetectionModel_EAST_t;
try {  
    wrapper->v = new cv::dnn::TextDetectionModel_EAST(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_TextDetectionModel_EAST_t* )   pCvdnn_TextDetectionModel_EASTCreateV2(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_TextDetectionModel_EAST_t* wrapper  = new dnn_TextDetectionModel_EAST_t;
try {  
    wrapper->v = new cv::dnn::TextDetectionModel_EAST(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_TextDetectionModel_EASTDelete(struct dnn_TextDetectionModel_EAST_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  dnn_TextRecognitionModel_t* )   pCvdnn_TextRecognitionModelCreate(dnn_Net_t* network)
{
 
        struct dnn_TextRecognitionModel_t* wrapper  = new dnn_TextRecognitionModel_t;
try {  
    wrapper->v = new cv::dnn::TextRecognitionModel(*network->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  dnn_TextRecognitionModel_t* )   pCvdnn_TextRecognitionModelCreateV2(string_t* model, string_t* config)
{
 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
        struct dnn_TextRecognitionModel_t* wrapper  = new dnn_TextRecognitionModel_t;
try {  
    wrapper->v = new cv::dnn::TextRecognitionModel(string(model->v), string(config->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvdnn_TextRecognitionModelDelete(struct dnn_TextRecognitionModel_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  TickMeter_t* )   pCvTickMeterCreate()
{
 
        struct TickMeter_t* wrapper  = new TickMeter_t;
try {  
    wrapper->v = new cv::TickMeter();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvTickMeterDelete(struct TickMeter_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  TrackerDaSiamRPN_Params_t* )   pCvTrackerDaSiamRPN_ParamsCreate()
{
 
        struct TrackerDaSiamRPN_Params_t* wrapper  = new TrackerDaSiamRPN_Params_t;
try {  
    wrapper->v = new cv::TrackerDaSiamRPN::Params();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvTrackerDaSiamRPN_ParamsDelete(struct TrackerDaSiamRPN_Params_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  TrackerGOTURN_Params_t* )   pCvTrackerGOTURN_ParamsCreate()
{
 
        struct TrackerGOTURN_Params_t* wrapper  = new TrackerGOTURN_Params_t;
try {  
    wrapper->v = new cv::TrackerGOTURN::Params();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvTrackerGOTURN_ParamsDelete(struct TrackerGOTURN_Params_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  TrackerMIL_Params_t* )   pCvTrackerMIL_ParamsCreate()
{
 
        struct TrackerMIL_Params_t* wrapper  = new TrackerMIL_Params_t;
try {  
    wrapper->v = new cv::TrackerMIL::Params();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvTrackerMIL_ParamsDelete(struct TrackerMIL_Params_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  UMat_t* )   pCvUMatCreate(UMatUsageFlags usageFlags)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(usageFlags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV2(int rows, int cols, int _type, UMatUsageFlags usageFlags)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(rows, cols, _type, usageFlags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV3(Size_t* size, int _type, UMatUsageFlags usageFlags)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(*size->v, _type, usageFlags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV4(int rows, int cols, int _type, Scalar_t* s, UMatUsageFlags usageFlags)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(rows, cols, _type, *s->v, usageFlags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV5(Size_t* size, int _type, Scalar_t* s, UMatUsageFlags usageFlags)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(*size->v, _type, *s->v, usageFlags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV6(UMat_t* m)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(*m->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV7(UMat_t* m, Range_t* rowRange, Range_t* colRange)
{
 
    Range x3; if (colRange == 0) { Range_t a3; x3 = Range::all(); a3.v = &x3; colRange = &a3; };     
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(*m->v, *rowRange->v, *colRange->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV8(UMat_t* m, Rect_t* roi)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(*m->v, *roi->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  UMat_t* )   pCvUMatCreateV9(UMat_t* m, vector_Range* ranges)
{
 
        struct UMat_t* wrapper  = new UMat_t;
try {  
    wrapper->v = new cv::UMat(*m->v, *ranges);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvUMatDelete(struct UMat_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  UsacParams_t* )   pCvUsacParamsCreate()
{
 
        struct UsacParams_t* wrapper  = new UsacParams_t;
try {  
    wrapper->v = new cv::UsacParams();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvUsacParamsDelete(struct UsacParams_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  VideoCapture_t* )   pCvVideoCaptureCreate()
{
 
        struct VideoCapture_t* wrapper  = new VideoCapture_t;
try {  
    wrapper->v = new cv::VideoCapture();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoCapture_t* )   pCvVideoCaptureCreateV2(string_t* filename, int apiPreference)
{
 
        struct VideoCapture_t* wrapper  = new VideoCapture_t;
try {  
    wrapper->v = new cv::VideoCapture(string(filename->v), apiPreference);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoCapture_t* )   pCvVideoCaptureCreateV3(string_t* filename, int apiPreference, vector_int* params)
{
 
        struct VideoCapture_t* wrapper  = new VideoCapture_t;
try {  
    wrapper->v = new cv::VideoCapture(string(filename->v), apiPreference, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoCapture_t* )   pCvVideoCaptureCreateV4(int index, int apiPreference)
{
 
        struct VideoCapture_t* wrapper  = new VideoCapture_t;
try {  
    wrapper->v = new cv::VideoCapture(index, apiPreference);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoCapture_t* )   pCvVideoCaptureCreateV5(int index, int apiPreference, vector_int* params)
{
 
        struct VideoCapture_t* wrapper  = new VideoCapture_t;
try {  
    wrapper->v = new cv::VideoCapture(index, apiPreference, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvVideoCaptureDelete(struct VideoCapture_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}
CVAPI(struct  VideoWriter_t* )   pCvVideoWriterCreate()
{
 
        struct VideoWriter_t* wrapper  = new VideoWriter_t;
try {  
    wrapper->v = new cv::VideoWriter();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoWriter_t* )   pCvVideoWriterCreateV2(string_t* filename, int fourcc, double fps, Size_t* frameSize, 
                                   bool isColor)
{
 
        struct VideoWriter_t* wrapper  = new VideoWriter_t;
try {  
    wrapper->v = new cv::VideoWriter(string(filename->v), fourcc, fps, *frameSize->v, isColor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoWriter_t* )   pCvVideoWriterCreateV3(string_t* filename, int apiPreference, int fourcc, double fps, 
                                   Size_t* frameSize, bool isColor)
{
 
        struct VideoWriter_t* wrapper  = new VideoWriter_t;
try {  
    wrapper->v = new cv::VideoWriter(string(filename->v), apiPreference, fourcc, fps, *frameSize->v, isColor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoWriter_t* )   pCvVideoWriterCreateV4(string_t* filename, int fourcc, double fps, Size_t* frameSize, 
                                   vector_int* params)
{
 
        struct VideoWriter_t* wrapper  = new VideoWriter_t;
try {  
    wrapper->v = new cv::VideoWriter(string(filename->v), fourcc, fps, *frameSize->v, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}
CVAPI(struct  VideoWriter_t* )   pCvVideoWriterCreateV5(string_t* filename, int apiPreference, int fourcc, double fps, 
                                   Size_t* frameSize, vector_int* params)
{
 
        struct VideoWriter_t* wrapper  = new VideoWriter_t;
try {  
    wrapper->v = new cv::VideoWriter(string(filename->v), apiPreference, fourcc, fps, *frameSize->v, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (wrapper);

}

CVAPI(void)   pCvVideoWriterDelete(struct VideoWriter_t* wrapper)
{
  assert(wrapper);
  delete wrapper->v;
  delete wrapper;
  wrapper = 0;
}

CVAPI(double) pCvUsacParamsGet_confidence(UsacParams_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->confidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_confidence(UsacParams_t* p, double propval)
{
try {
    p->v->confidence = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(bool) pCvUsacParamsGet_isParallel(UsacParams_t* p)
{
    bool retval;
try {

    retval =   (p->v->isParallel);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_isParallel(UsacParams_t* p, bool propval)
{
try {
    p->v->isParallel = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvUsacParamsGet_loIterations(UsacParams_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->loIterations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_loIterations(UsacParams_t* p, int propval)
{
try {
    p->v->loIterations = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(LocalOptimMethod) pCvUsacParamsGet_loMethod(UsacParams_t* p)
{
    LocalOptimMethod retval;
try {

    retval =   (p->v->loMethod);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_loMethod(UsacParams_t* p, LocalOptimMethod propval)
{
try {
    p->v->loMethod = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvUsacParamsGet_loSampleSize(UsacParams_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->loSampleSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_loSampleSize(UsacParams_t* p, int propval)
{
try {
    p->v->loSampleSize = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvUsacParamsGet_maxIterations(UsacParams_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->maxIterations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_maxIterations(UsacParams_t* p, int propval)
{
try {
    p->v->maxIterations = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(NeighborSearchMethod) pCvUsacParamsGet_neighborsSearch(UsacParams_t* p)
{
    NeighborSearchMethod retval;
try {

    retval =   (p->v->neighborsSearch);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_neighborsSearch(UsacParams_t* p, NeighborSearchMethod propval)
{
try {
    p->v->neighborsSearch = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvUsacParamsGet_randomGeneratorState(UsacParams_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->randomGeneratorState);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_randomGeneratorState(UsacParams_t* p, int propval)
{
try {
    p->v->randomGeneratorState = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(SamplingMethod) pCvUsacParamsGet_sampler(UsacParams_t* p)
{
    SamplingMethod retval;
try {

    retval =   (p->v->sampler);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_sampler(UsacParams_t* p, SamplingMethod propval)
{
try {
    p->v->sampler = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(ScoreMethod) pCvUsacParamsGet_score(UsacParams_t* p)
{
    ScoreMethod retval;
try {

    retval =   (p->v->score);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_score(UsacParams_t* p, ScoreMethod propval)
{
try {
    p->v->score = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvUsacParamsGet_threshold(UsacParams_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUsacParamsSet_threshold(UsacParams_t* p, double propval)
{
try {
    p->v->threshold = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_convexHullFactor(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->convexHullFactor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_convexHullFactor(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->convexHullFactor = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Size2f_t*) pCvCirclesGridFinderParametersGet_densityNeighborhoodSize(CirclesGridFinderParameters_t* p)
{
    Size2f_t*  retval = new Size2f_t;
try {
    Size2f tr =   (p->v->densityNeighborhoodSize);
    Size2f*  t = new Size2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_densityNeighborhoodSize(CirclesGridFinderParameters_t* p, Size2f_t* propval)
{
try {
    p->v->densityNeighborhoodSize = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_edgeGain(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->edgeGain);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_edgeGain(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->edgeGain = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_edgePenalty(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->edgePenalty);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_edgePenalty(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->edgePenalty = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_existingVertexGain(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->existingVertexGain);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_existingVertexGain(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->existingVertexGain = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvCirclesGridFinderParametersGet_keypointScale(CirclesGridFinderParameters_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->keypointScale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_keypointScale(CirclesGridFinderParameters_t* p, int propval)
{
try {
    p->v->keypointScale = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvCirclesGridFinderParametersGet_kmeansAttempts(CirclesGridFinderParameters_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->kmeansAttempts);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_kmeansAttempts(CirclesGridFinderParameters_t* p, int propval)
{
try {
    p->v->kmeansAttempts = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_maxRectifiedDistance(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->maxRectifiedDistance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_maxRectifiedDistance(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->maxRectifiedDistance = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_minDensity(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minDensity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_minDensity(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->minDensity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvCirclesGridFinderParametersGet_minDistanceToAddKeypoint(CirclesGridFinderParameters_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->minDistanceToAddKeypoint);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_minDistanceToAddKeypoint(CirclesGridFinderParameters_t* p, int propval)
{
try {
    p->v->minDistanceToAddKeypoint = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_minGraphConfidence(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minGraphConfidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_minGraphConfidence(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->minGraphConfidence = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_minRNGEdgeSwitchDist(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minRNGEdgeSwitchDist);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_minRNGEdgeSwitchDist(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->minRNGEdgeSwitchDist = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_squareSize(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->squareSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_squareSize(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->squareSize = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_vertexGain(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->vertexGain);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_vertexGain(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->vertexGain = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvCirclesGridFinderParametersGet_vertexPenalty(CirclesGridFinderParameters_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->vertexPenalty);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvCirclesGridFinderParametersSet_vertexPenalty(CirclesGridFinderParameters_t* p, float propval)
{
try {
    p->v->vertexPenalty = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(void)   pCvStereoMatcherclear(struct  StereoMatcher_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchercompute(struct  StereoMatcher_t* wrapper, Mat_t* left, Mat_t* right, 
                                   Mat_t* disparity)
{
try {
 
    wrapper->v->compute(*left->v, *right->v, *disparity->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchercomputeV2(struct  StereoMatcher_t* wrapper, UMat_t* left, UMat_t* right, 
                                   UMat_t* disparity)
{
try {
 
    wrapper->v->compute(*left->v, *right->v, *disparity->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvStereoMatcherempty(struct  StereoMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoMatchergetBlockSize(struct  StereoMatcher_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getBlockSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvStereoMatchergetDefaultName(struct  StereoMatcher_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoMatchergetDisp12MaxDiff(struct  StereoMatcher_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDisp12MaxDiff();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoMatchergetMinDisparity(struct  StereoMatcher_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinDisparity();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoMatchergetNumDisparities(struct  StereoMatcher_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNumDisparities();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoMatchergetSpeckleRange(struct  StereoMatcher_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSpeckleRange();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoMatchergetSpeckleWindowSize(struct  StereoMatcher_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSpeckleWindowSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvStereoMatcherread(struct  StereoMatcher_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersave(struct  StereoMatcher_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersetBlockSize(struct  StereoMatcher_t* wrapper, int blockSize)
{
try {
 
    wrapper->v->setBlockSize(blockSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersetDisp12MaxDiff(struct  StereoMatcher_t* wrapper, int disp12MaxDiff)
{
try {
 
    wrapper->v->setDisp12MaxDiff(disp12MaxDiff);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersetMinDisparity(struct  StereoMatcher_t* wrapper, int minDisparity)
{
try {
 
    wrapper->v->setMinDisparity(minDisparity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersetNumDisparities(struct  StereoMatcher_t* wrapper, int numDisparities)
{
try {
 
    wrapper->v->setNumDisparities(numDisparities);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersetSpeckleRange(struct  StereoMatcher_t* wrapper, int speckleRange)
{
try {
 
    wrapper->v->setSpeckleRange(speckleRange);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatchersetSpeckleWindowSize(struct  StereoMatcher_t* wrapper, int speckleWindowSize)
{
try {
 
    wrapper->v->setSpeckleWindowSize(speckleWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoMatcherwrite(struct  StereoMatcher_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMclear(struct  StereoBM_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMcompute(struct  StereoBM_t* wrapper, Mat_t* left, Mat_t* right, Mat_t* disparity)
{
try {
 
    wrapper->v->compute(*left->v, *right->v, *disparity->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMcomputeV2(struct  StereoBM_t* wrapper, UMat_t* left, UMat_t* right, 
                                   UMat_t* disparity)
{
try {
 
    wrapper->v->compute(*left->v, *right->v, *disparity->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_StereoBM*)   pCvStereoBM_create(int numDisparities, int blockSize)
{
Ptr_StereoBM* retval = 0;
try {
 
    Ptr_StereoBM p = cv::StereoBM::create(numDisparities, blockSize);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvStereoBMempty(struct  StereoBM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetBlockSize(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getBlockSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvStereoBMgetDefaultName(struct  StereoBM_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetDisp12MaxDiff(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDisp12MaxDiff();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetMinDisparity(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinDisparity();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetNumDisparities(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNumDisparities();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetPreFilterCap(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPreFilterCap();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetPreFilterSize(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPreFilterSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetPreFilterType(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPreFilterType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvStereoBMgetROI1(struct  StereoBM_t* wrapper)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->getROI1();
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvStereoBMgetROI2(struct  StereoBM_t* wrapper)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->getROI2();
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetSmallerBlockSize(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSmallerBlockSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetSpeckleRange(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSpeckleRange();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetSpeckleWindowSize(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSpeckleWindowSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetTextureThreshold(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getTextureThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoBMgetUniquenessRatio(struct  StereoBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getUniquenessRatio();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvStereoBMread(struct  StereoBM_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsave(struct  StereoBM_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetBlockSize(struct  StereoBM_t* wrapper, int blockSize)
{
try {
 
    wrapper->v->setBlockSize(blockSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetDisp12MaxDiff(struct  StereoBM_t* wrapper, int disp12MaxDiff)
{
try {
 
    wrapper->v->setDisp12MaxDiff(disp12MaxDiff);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetMinDisparity(struct  StereoBM_t* wrapper, int minDisparity)
{
try {
 
    wrapper->v->setMinDisparity(minDisparity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetNumDisparities(struct  StereoBM_t* wrapper, int numDisparities)
{
try {
 
    wrapper->v->setNumDisparities(numDisparities);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetPreFilterCap(struct  StereoBM_t* wrapper, int preFilterCap)
{
try {
 
    wrapper->v->setPreFilterCap(preFilterCap);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetPreFilterSize(struct  StereoBM_t* wrapper, int preFilterSize)
{
try {
 
    wrapper->v->setPreFilterSize(preFilterSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetPreFilterType(struct  StereoBM_t* wrapper, int preFilterType)
{
try {
 
    wrapper->v->setPreFilterType(preFilterType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetROI1(struct  StereoBM_t* wrapper, Rect_t* roi1)
{
try {
 
    wrapper->v->setROI1(*roi1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetROI2(struct  StereoBM_t* wrapper, Rect_t* roi2)
{
try {
 
    wrapper->v->setROI2(*roi2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetSmallerBlockSize(struct  StereoBM_t* wrapper, int blockSize)
{
try {
 
    wrapper->v->setSmallerBlockSize(blockSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetSpeckleRange(struct  StereoBM_t* wrapper, int speckleRange)
{
try {
 
    wrapper->v->setSpeckleRange(speckleRange);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetSpeckleWindowSize(struct  StereoBM_t* wrapper, int speckleWindowSize)
{
try {
 
    wrapper->v->setSpeckleWindowSize(speckleWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetTextureThreshold(struct  StereoBM_t* wrapper, int textureThreshold)
{
try {
 
    wrapper->v->setTextureThreshold(textureThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMsetUniquenessRatio(struct  StereoBM_t* wrapper, int uniquenessRatio)
{
try {
 
    wrapper->v->setUniquenessRatio(uniquenessRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoBMwrite(struct  StereoBM_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMclear(struct  StereoSGBM_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMcompute(struct  StereoSGBM_t* wrapper, Mat_t* left, Mat_t* right, 
                                   Mat_t* disparity)
{
try {
 
    wrapper->v->compute(*left->v, *right->v, *disparity->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMcomputeV2(struct  StereoSGBM_t* wrapper, UMat_t* left, UMat_t* right, 
                                   UMat_t* disparity)
{
try {
 
    wrapper->v->compute(*left->v, *right->v, *disparity->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_StereoSGBM*)   pCvStereoSGBM_create(int minDisparity, int numDisparities, int blockSize, int P1, int P2, 
                                   int disp12MaxDiff, int preFilterCap, int uniquenessRatio, int speckleWindowSize, 
                                   int speckleRange, int mode)
{
Ptr_StereoSGBM* retval = 0;
try {
 
    Ptr_StereoSGBM p = cv::StereoSGBM::create(minDisparity, numDisparities, blockSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, mode);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvStereoSGBMempty(struct  StereoSGBM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetBlockSize(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getBlockSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvStereoSGBMgetDefaultName(struct  StereoSGBM_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetDisp12MaxDiff(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDisp12MaxDiff();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetMinDisparity(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinDisparity();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetMode(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMode();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetNumDisparities(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNumDisparities();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetP1(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getP1();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetP2(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getP2();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetPreFilterCap(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPreFilterCap();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetSpeckleRange(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSpeckleRange();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetSpeckleWindowSize(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSpeckleWindowSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvStereoSGBMgetUniquenessRatio(struct  StereoSGBM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getUniquenessRatio();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvStereoSGBMread(struct  StereoSGBM_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsave(struct  StereoSGBM_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetBlockSize(struct  StereoSGBM_t* wrapper, int blockSize)
{
try {
 
    wrapper->v->setBlockSize(blockSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetDisp12MaxDiff(struct  StereoSGBM_t* wrapper, int disp12MaxDiff)
{
try {
 
    wrapper->v->setDisp12MaxDiff(disp12MaxDiff);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetMinDisparity(struct  StereoSGBM_t* wrapper, int minDisparity)
{
try {
 
    wrapper->v->setMinDisparity(minDisparity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetMode(struct  StereoSGBM_t* wrapper, int mode)
{
try {
 
    wrapper->v->setMode(mode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetNumDisparities(struct  StereoSGBM_t* wrapper, int numDisparities)
{
try {
 
    wrapper->v->setNumDisparities(numDisparities);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetP1(struct  StereoSGBM_t* wrapper, int P1)
{
try {
 
    wrapper->v->setP1(P1);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetP2(struct  StereoSGBM_t* wrapper, int P2)
{
try {
 
    wrapper->v->setP2(P2);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetPreFilterCap(struct  StereoSGBM_t* wrapper, int preFilterCap)
{
try {
 
    wrapper->v->setPreFilterCap(preFilterCap);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetSpeckleRange(struct  StereoSGBM_t* wrapper, int speckleRange)
{
try {
 
    wrapper->v->setSpeckleRange(speckleRange);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetSpeckleWindowSize(struct  StereoSGBM_t* wrapper, int speckleWindowSize)
{
try {
 
    wrapper->v->setSpeckleWindowSize(speckleWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMsetUniquenessRatio(struct  StereoSGBM_t* wrapper, int uniquenessRatio)
{
try {
 
    wrapper->v->setUniquenessRatio(uniquenessRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStereoSGBMwrite(struct  StereoSGBM_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlgorithmclear(struct  Algorithm_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAlgorithmempty(struct  Algorithm_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvAlgorithmgetDefaultName(struct  Algorithm_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAlgorithmread(struct  Algorithm_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlgorithmsave(struct  Algorithm_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlgorithmwrite(struct  Algorithm_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAsyncArrayget(struct  AsyncArray_t* wrapper, Mat_t* dst)
{
try {
 
    wrapper->v->get(*dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAsyncArraygetV2(struct  AsyncArray_t* wrapper, UMat_t* dst)
{
try {
 
    wrapper->v->get(*dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAsyncArraygetV3(struct  AsyncArray_t* wrapper, Mat_t* dst, double timeoutNs)
{
    bool retval;
try {
 
    retval = wrapper->v->get(*dst->v, timeoutNs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvAsyncArraygetV4(struct  AsyncArray_t* wrapper, UMat_t* dst, double timeoutNs)
{
    bool retval;
try {
 
    retval = wrapper->v->get(*dst->v, timeoutNs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAsyncArrayrelease(struct  AsyncArray_t* wrapper)
{
try {
 
    wrapper->v->release();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAsyncArrayvalid(struct  AsyncArray_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->valid();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvAsyncArraywait_for(struct  AsyncArray_t* wrapper, double timeoutNs)
{
    bool retval;
try {
 
    retval = wrapper->v->wait_for(timeoutNs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_OriginalClassName*)   pCvutils_nested_OriginalClassName_create(utils_nested_OriginalClassName_Params_t* params)
{
Ptr_OriginalClassName* retval = 0;
try {
 
    utils::nested::OriginalClassName_Params x1; if (params == 0) { utils_nested_OriginalClassName_Params_t a1; x1 = utils::nested::OriginalClassName::Params(); a1.v = &x1; params = &a1; };     
    Ptr_OriginalClassName p = cv::utils::nested::OriginalClassName::create(*params->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvutils_nested_OriginalClassNamegetFloatParam(struct  utils_nested_OriginalClassName_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getFloatParam();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvutils_nested_OriginalClassNamegetIntParam(struct  utils_nested_OriginalClassName_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getIntParam();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_nested_OriginalClassNameoriginalName()
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::nested::OriginalClassName::originalName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(float) pCvutils_nested_OriginalClassName_ParamsGet_float_value(utils_nested_OriginalClassName_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->float_value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvutils_nested_OriginalClassName_ParamsSet_float_value(utils_nested_OriginalClassName_Params_t* p, float propval)
{
try {
    p->v->float_value = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvutils_nested_OriginalClassName_ParamsGet_int_value(utils_nested_OriginalClassName_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->int_value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvutils_nested_OriginalClassName_ParamsSet_int_value(utils_nested_OriginalClassName_Params_t* p, int propval)
{
try {
    p->v->int_value = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(string_t*)   pCvocl_DeviceOpenCLVersion(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->OpenCLVersion();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvocl_DeviceOpenCL_C_Version(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->OpenCL_C_Version();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DeviceaddressBits(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->addressBits();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_Deviceavailable(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->available();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DevicecompilerAvailable(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->compilerAvailable();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicedeviceVersionMajor(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->deviceVersionMajor();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicedeviceVersionMinor(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->deviceVersionMinor();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicedoubleFPConfig(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->doubleFPConfig();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvocl_DevicedriverVersion(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->driverVersion();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceendianLittle(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->endianLittle();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceerrorCorrectionSupport(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->errorCorrectionSupport();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DeviceexecutionCapabilities(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->executionCapabilities();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvocl_Deviceextensions(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->extensions();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(ocl_Device_t*)   pCvocl_DevicegetDefault()
{
    ocl_Device_t*  retval = new ocl_Device_t;
try { 
    ocl::Device tr = cv::ocl::Device::getDefault();
    ocl::Device*  t = new ocl::Device();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DeviceglobalMemCacheLineSize(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->globalMemCacheLineSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DeviceglobalMemCacheSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->globalMemCacheSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DeviceglobalMemCacheType(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->globalMemCacheType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DeviceglobalMemSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->globalMemSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicehalfFPConfig(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->halfFPConfig();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DevicehostUnifiedMemory(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->hostUnifiedMemory();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_Deviceimage2DMaxHeight(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->image2DMaxHeight();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_Deviceimage2DMaxWidth(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->image2DMaxWidth();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_Deviceimage3DMaxDepth(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->image3DMaxDepth();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_Deviceimage3DMaxHeight(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->image3DMaxHeight();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_Deviceimage3DMaxWidth(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->image3DMaxWidth();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceimageFromBufferSupport(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->imageFromBufferSupport();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DeviceimageMaxArraySize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->imageMaxArraySize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DeviceimageMaxBufferSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->imageMaxBufferSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceimageSupport(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->imageSupport();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceintelSubgroupsSupport(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->intelSubgroupsSupport();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceisAMD(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isAMD();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceisExtensionSupported(struct  ocl_Device_t* wrapper, string_t* extensionName)
{
    bool retval;
try {
 
    retval = wrapper->v->isExtensionSupported(string(extensionName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceisIntel(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isIntel();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DeviceisNVidia(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isNVidia();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_DevicelinkerAvailable(struct  ocl_Device_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->linkerAvailable();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DevicelocalMemSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->localMemSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicelocalMemType(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->localMemType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxClockFrequency(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxClockFrequency();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxComputeUnits(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxComputeUnits();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxConstantArgs(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxConstantArgs();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DevicemaxConstantBufferSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->maxConstantBufferSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DevicemaxMemAllocSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->maxMemAllocSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DevicemaxParameterSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->maxParameterSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxReadImageArgs(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxReadImageArgs();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxSamplers(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxSamplers();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DevicemaxWorkGroupSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->maxWorkGroupSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxWorkItemDims(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxWorkItemDims();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicemaxWriteImageArgs(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->maxWriteImageArgs();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicememBaseAddrAlign(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->memBaseAddrAlign();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvocl_Devicename(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->name();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthChar(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthChar();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthDouble(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthDouble();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthFloat(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthFloat();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthHalf(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthHalf();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthInt(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthInt();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthLong(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthLong();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicenativeVectorWidthShort(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nativeVectorWidthShort();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthChar(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthChar();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthDouble(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthDouble();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthFloat(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthFloat();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthHalf(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthHalf();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthInt(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthInt();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthLong(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthLong();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicepreferredVectorWidthShort(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->preferredVectorWidthShort();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DeviceprintfBufferSize(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->printfBufferSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvocl_DeviceprofilingTimerResolution(struct  ocl_Device_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->profilingTimerResolution();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicesingleFPConfig(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->singleFPConfig();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_Devicetype(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->type();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvocl_DevicevendorID(struct  ocl_Device_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->vendorID();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvocl_DevicevendorName(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->vendorName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvocl_Deviceversion(struct  ocl_Device_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->version();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFileStorageendWriteStruct(struct  FileStorage_t* wrapper)
{
try {
 
    wrapper->v->endWriteStruct();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(FileNode_t*)   pCvFileStoragegetFirstTopLevelNode(struct  FileStorage_t* wrapper)
{
    FileNode_t*  retval = new FileNode_t;
try { 
    FileNode tr = wrapper->v->getFirstTopLevelNode();
    FileNode*  t = new FileNode();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFileStoragegetFormat(struct  FileStorage_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFormat();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(FileNode_t*)   pCvFileStoragegetNode(struct  FileStorage_t* wrapper, c_string nodename)
{
    FileNode_t*  retval = new FileNode_t;
try { 
    FileNode tr = wrapper->v->operator[](nodename);
    FileNode*  t = new FileNode();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileStorageisOpened(struct  FileStorage_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isOpened();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileStorageopen(struct  FileStorage_t* wrapper, string_t* filename, int flags, 
                                   string_t* encoding)
{
    bool retval;
try {
 
    if (encoding == 0) { string_t a3; a3.v = pEmptyString; encoding = &a3; };      
    retval = wrapper->v->open(string(filename->v), flags, string(encoding->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFileStoragerelease(struct  FileStorage_t* wrapper)
{
try {
 
    wrapper->v->release();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvFileStoragereleaseAndGetString(struct  FileStorage_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->releaseAndGetString();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(FileNode_t*)   pCvFileStorageroot(struct  FileStorage_t* wrapper, int streamidx)
{
    FileNode_t*  retval = new FileNode_t;
try { 
    FileNode tr = wrapper->v->root(streamidx);
    FileNode*  t = new FileNode();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFileStoragestartWriteStruct(struct  FileStorage_t* wrapper, string_t* name, int flags, 
                                   string_t* typeName)
{
try {
 
    if (typeName == 0) { string_t a3; a3.v = pEmptyString; typeName = &a3; };      
    wrapper->v->startWriteStruct(string(name->v), flags, string(typeName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFileStoragewrite(struct  FileStorage_t* wrapper, string_t* name, int _val)
{
try {
 
    wrapper->v->write(string(name->v), _val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFileStoragewriteV2(struct  FileStorage_t* wrapper, string_t* name, double _val)
{
try {
 
    wrapper->v->write(string(name->v), _val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFileStoragewriteV3(struct  FileStorage_t* wrapper, string_t* name, string_t* _val)
{
try {
 
    wrapper->v->write(string(name->v), string(_val->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFileStoragewriteV4(struct  FileStorage_t* wrapper, string_t* name, Mat_t* _val)
{
try {
 
    wrapper->v->write(string(name->v), *_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFileStoragewriteV5(struct  FileStorage_t* wrapper, string_t* name, vector_String* _val)
{
try {
 
    wrapper->v->write(string(name->v), *_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFileStoragewriteComment(struct  FileStorage_t* wrapper, string_t* comment, bool _append)
{
try {
 
    wrapper->v->writeComment(string(comment->v), _append);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(FileNode_t*)   pCvFileNodeat(struct  FileNode_t* wrapper, int i)
{
    FileNode_t*  retval = new FileNode_t;
try { 
    FileNode tr = wrapper->v->operator[](i);
    FileNode*  t = new FileNode();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeempty(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(FileNode_t*)   pCvFileNodegetNode(struct  FileNode_t* wrapper, c_string nodename)
{
    FileNode_t*  retval = new FileNode_t;
try { 
    FileNode tr = wrapper->v->operator[](nodename);
    FileNode*  t = new FileNode();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisInt(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isInt();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisMap(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isMap();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisNamed(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isNamed();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisNone(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isNone();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisReal(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isReal();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisSeq(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isSeq();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFileNodeisString(struct  FileNode_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isString();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_String*)   pCvFileNodekeys(struct  FileNode_t* wrapper)
{
vector_String* retval = new vector_String();
try {
 
    vector_String tr = wrapper->v->keys();
    vector_String_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvFileNodemat(struct  FileNode_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->mat();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvFileNodename(struct  FileNode_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->name();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvFileNoderawSize(struct  FileNode_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->rawSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvFileNodereal(struct  FileNode_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->real();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvFileNodesize(struct  FileNode_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvFileNodestring(struct  FileNode_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->string();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFileNodetype(struct  FileNode_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->type();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(float) pCvKeyPointGet_angle(KeyPoint_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->angle);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKeyPointSet_angle(KeyPoint_t* p, float propval)
{
try {
    p->v->angle = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvKeyPointGet_class_id(KeyPoint_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->class_id);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKeyPointSet_class_id(KeyPoint_t* p, int propval)
{
try {
    p->v->class_id = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvKeyPointGet_octave(KeyPoint_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->octave);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKeyPointSet_octave(KeyPoint_t* p, int propval)
{
try {
    p->v->octave = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Point2f_t*) pCvKeyPointGet_pt(KeyPoint_t* p)
{
    Point2f_t*  retval = new Point2f_t;
try {
    Point2f tr =   (p->v->pt);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKeyPointSet_pt(KeyPoint_t* p, Point2f_t* propval)
{
try {
    p->v->pt = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvKeyPointGet_response(KeyPoint_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->response);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKeyPointSet_response(KeyPoint_t* p, float propval)
{
try {
    p->v->response = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvKeyPointGet_size(KeyPoint_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->size);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKeyPointSet_size(KeyPoint_t* p, float propval)
{
try {
    p->v->size = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(void)   pCvKeyPointconvert(vector_KeyPoint* keypoints, vector_Point2f* points2f, 
                                   vector_int* keypointIndexes)
{
try {
 
    vector_int x3; if (keypointIndexes == 0) { x3 = std::vector<int>(); keypointIndexes = &x3; };       
    cv::KeyPoint::convert(*keypoints, *points2f, *keypointIndexes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKeyPointconvertV2(vector_Point2f* points2f, vector_KeyPoint* keypoints, float size, 
                                   float response, int octave, int class_id)
{
try {
 
    cv::KeyPoint::convert(*points2f, *keypoints, size, response, octave, class_id);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvKeyPointoverlap(KeyPoint_t* kp1, KeyPoint_t* kp2)
{
    float retval = 0;
try {
 
    retval = cv::KeyPoint::overlap(*kp1->v, *kp2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(float) pCvDMatchGet_distance(DMatch_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->distance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvDMatchSet_distance(DMatch_t* p, float propval)
{
try {
    p->v->distance = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvDMatchGet_imgIdx(DMatch_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->imgIdx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvDMatchSet_imgIdx(DMatch_t* p, int propval)
{
try {
    p->v->imgIdx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvDMatchGet_queryIdx(DMatch_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->queryIdx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvDMatchSet_queryIdx(DMatch_t* p, int propval)
{
try {
    p->v->queryIdx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvDMatchGet_trainIdx(DMatch_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->trainIdx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvDMatchSet_trainIdx(DMatch_t* p, int propval)
{
try {
    p->v->trainIdx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m00(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m00);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m00(Moments_t* p, double propval)
{
try {
    p->v->m00 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m01(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m01);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m01(Moments_t* p, double propval)
{
try {
    p->v->m01 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m02(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m02);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m02(Moments_t* p, double propval)
{
try {
    p->v->m02 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m03(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m03);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m03(Moments_t* p, double propval)
{
try {
    p->v->m03 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m10(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m10);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m10(Moments_t* p, double propval)
{
try {
    p->v->m10 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m11(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m11);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m11(Moments_t* p, double propval)
{
try {
    p->v->m11 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m12(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m12);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m12(Moments_t* p, double propval)
{
try {
    p->v->m12 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m20(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m20);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m20(Moments_t* p, double propval)
{
try {
    p->v->m20 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m21(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m21);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m21(Moments_t* p, double propval)
{
try {
    p->v->m21 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_m30(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->m30);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_m30(Moments_t* p, double propval)
{
try {
    p->v->m30 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu02(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu02);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu02(Moments_t* p, double propval)
{
try {
    p->v->mu02 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu03(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu03);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu03(Moments_t* p, double propval)
{
try {
    p->v->mu03 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu11(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu11);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu11(Moments_t* p, double propval)
{
try {
    p->v->mu11 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu12(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu12);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu12(Moments_t* p, double propval)
{
try {
    p->v->mu12 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu20(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu20);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu20(Moments_t* p, double propval)
{
try {
    p->v->mu20 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu21(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu21);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu21(Moments_t* p, double propval)
{
try {
    p->v->mu21 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_mu30(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->mu30);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_mu30(Moments_t* p, double propval)
{
try {
    p->v->mu30 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu02(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu02);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu02(Moments_t* p, double propval)
{
try {
    p->v->nu02 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu03(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu03);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu03(Moments_t* p, double propval)
{
try {
    p->v->nu03 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu11(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu11);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu11(Moments_t* p, double propval)
{
try {
    p->v->nu11 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu12(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu12);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu12(Moments_t* p, double propval)
{
try {
    p->v->nu12 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu20(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu20);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu20(Moments_t* p, double propval)
{
try {
    p->v->nu20 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu21(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu21);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu21(Moments_t* p, double propval)
{
try {
    p->v->nu21 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvMomentsGet_nu30(Moments_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->nu30);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvMomentsSet_nu30(Moments_t* p, double propval)
{
try {
    p->v->nu30 = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(double)   pCvTickMetergetAvgTimeMilli(struct  TickMeter_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAvgTimeMilli();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvTickMetergetAvgTimeSec(struct  TickMeter_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAvgTimeSec();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvTickMetergetCounter(struct  TickMeter_t* wrapper)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getCounter();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvTickMetergetFPS(struct  TickMeter_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getFPS();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvTickMetergetTimeMicro(struct  TickMeter_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getTimeMicro();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvTickMetergetTimeMilli(struct  TickMeter_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getTimeMilli();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvTickMetergetTimeSec(struct  TickMeter_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getTimeSec();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvTickMetergetTimeTicks(struct  TickMeter_t* wrapper)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getTimeTicks();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTickMeterreset(struct  TickMeter_t* wrapper)
{
try {
 
    wrapper->v->reset();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTickMeterstart(struct  TickMeter_t* wrapper)
{
try {
 
    wrapper->v->start();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTickMeterstop(struct  TickMeter_t* wrapper)
{
try {
 
    wrapper->v->stop();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(size_t) pCvUMatGet_offset(UMat_t* p)
{
    size_t retval;
try {

    retval =   (p->v->offset);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvUMatSet_offset(UMat_t* p, size_t propval)
{
try {
    p->v->offset = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(void*)   pCvUMathandle(struct  UMat_t* wrapper, AccessFlag accessFlags)
{
    void* retval = 0;
try {
 
    retval = wrapper->v->handle(accessFlags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvUMatisContinuous(struct  UMat_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isContinuous();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvUMatisSubmatrix(struct  UMat_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isSubmatrix();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdnn_DictValuegetIntValue(struct  dnn_DictValue_t* wrapper, int idx)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getIntValue(idx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdnn_DictValuegetRealValue(struct  dnn_DictValue_t* wrapper, int idx)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getRealValue(idx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvdnn_DictValuegetStringValue(struct  dnn_DictValue_t* wrapper, int idx)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getStringValue(idx);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdnn_DictValueisInt(struct  dnn_DictValue_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isInt();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdnn_DictValueisReal(struct  dnn_DictValue_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isReal();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdnn_DictValueisString(struct  dnn_DictValue_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isString();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(vector_Mat*) pCvdnn_LayerGet_blobs(dnn_Layer_t* p)
{
vector_Mat* retval = new vector_Mat();
try {

    vector_Mat tr =    (p->v->blobs);
    vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdnn_LayerSet_blobs(dnn_Layer_t* p, vector_Mat* propval)
{
try {
    p->v->blobs = *propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(string_t*) pCvdnn_LayerGet_name(dnn_Layer_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->name);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(int) pCvdnn_LayerGet_preferableTarget(dnn_Layer_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->preferableTarget);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(string_t*) pCvdnn_LayerGet_type(dnn_Layer_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->type);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}
CVAPI(void)   pCvdnn_Layerclear(struct  dnn_Layer_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdnn_Layerempty(struct  dnn_Layer_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvdnn_LayergetDefaultName(struct  dnn_Layer_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdnn_LayeroutputNameToIndex(struct  dnn_Layer_t* wrapper, string_t* outputName)
{
    int retval = 0;
try {
 
    retval = wrapper->v->outputNameToIndex(string(outputName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_Layerread(struct  dnn_Layer_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_Layersave(struct  dnn_Layer_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_Layerwrite(struct  dnn_Layer_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_Netconnect(struct  dnn_Net_t* wrapper, string_t* outPin, string_t* inpPin)
{
try {
 
    wrapper->v->connect(string(outPin->v), string(inpPin->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvdnn_Netdump(struct  dnn_Net_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->dump();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetdumpToFile(struct  dnn_Net_t* wrapper, string_t* path)
{
try {
 
    wrapper->v->dumpToFile(string(path->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdnn_Netempty(struct  dnn_Net_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetenableFusion(struct  dnn_Net_t* wrapper, bool fusion)
{
try {
 
    wrapper->v->enableFusion(fusion);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvdnn_Netforward(struct  dnn_Net_t* wrapper, string_t* outputName)
{
    Mat_t*  retval = new Mat_t;
try { 
    if (outputName == 0) { string_t a1; a1.v = pEmptyString; outputName = &a1; };      
    Mat tr = wrapper->v->forward(string(outputName->v));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetforwardV2(struct  dnn_Net_t* wrapper, vector_Mat* outputBlobs, string_t* outputName)
{
try {
 
    if (outputName == 0) { string_t a2; a2.v = pEmptyString; outputName = &a2; };      
    wrapper->v->forward(*outputBlobs, string(outputName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetforwardV3(struct  dnn_Net_t* wrapper, vector_UMat* outputBlobs, 
                                   string_t* outputName)
{
try {
 
    if (outputName == 0) { string_t a2; a2.v = pEmptyString; outputName = &a2; };      
    wrapper->v->forward(*outputBlobs, string(outputName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetforwardV4(struct  dnn_Net_t* wrapper, vector_Mat* outputBlobs, 
                                   vector_String* outBlobNames)
{
try {
 
    wrapper->v->forward(*outputBlobs, *outBlobNames);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetforwardV5(struct  dnn_Net_t* wrapper, vector_UMat* outputBlobs, 
                                   vector_String* outBlobNames)
{
try {
 
    wrapper->v->forward(*outputBlobs, *outBlobNames);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetforwardAndRetrieve(struct  dnn_Net_t* wrapper, vector_vector_Mat* outputBlobs, 
                                   vector_String* outBlobNames)
{
try {
 
    wrapper->v->forward(*outputBlobs, *outBlobNames);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(AsyncArray_t*)   pCvdnn_NetforwardAsync(struct  dnn_Net_t* wrapper, string_t* outputName)
{
    AsyncArray_t*  retval = new AsyncArray_t;
try { 
    if (outputName == 0) { string_t a1; a1.v = pEmptyString; outputName = &a1; };      
    AsyncArray tr = wrapper->v->forwardAsync(string(outputName->v));
    AsyncArray*  t = new AsyncArray();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvdnn_NetgetFLOPS(struct  dnn_Net_t* wrapper, vector_MatShape* netInputShapes)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getFLOPS(*netInputShapes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvdnn_NetgetFLOPSV2(struct  dnn_Net_t* wrapper, MatShape* netInputShape)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getFLOPS(*netInputShape);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvdnn_NetgetFLOPSV3(struct  dnn_Net_t* wrapper, int layerId, vector_MatShape* netInputShapes)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getFLOPS(layerId, *netInputShapes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvdnn_NetgetFLOPSV4(struct  dnn_Net_t* wrapper, int layerId, MatShape* netInputShape)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getFLOPS(layerId, *netInputShape);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetgetInputDetails(struct  dnn_Net_t* wrapper, vector_float* scales, 
                                   vector_int* zeropoints)
{
try {
 
    wrapper->v->getInputDetails(*scales, *zeropoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Layer*)   pCvdnn_NetgetLayer(struct  dnn_Net_t* wrapper, int layerId)
{
Ptr_Layer* retval = 0;
try {
 
    Ptr_Layer p = wrapper->v->getLayer(layerId);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_Layer*)   pCvdnn_NetgetLayerV2(struct  dnn_Net_t* wrapper, string_t* layerName)
{
Ptr_Layer* retval = 0;
try {
 
    Ptr_Layer p = wrapper->v->getLayer(string(layerName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_Layer*)   pCvdnn_NetgetLayerV3(struct  dnn_Net_t* wrapper, LayerId_t* layerId)
{
Ptr_Layer* retval = 0;
try {
 
    Ptr_Layer p = wrapper->v->getLayer(*layerId->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdnn_NetgetLayerId(struct  dnn_Net_t* wrapper, string_t* layer)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getLayerId(string(layer->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_String*)   pCvdnn_NetgetLayerNames(struct  dnn_Net_t* wrapper)
{
vector_String* retval = new vector_String();
try {
 
    vector_String tr = wrapper->v->getLayerNames();
    vector_String_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetgetLayerTypes(struct  dnn_Net_t* wrapper, vector_String* layersTypes)
{
try {
 
    wrapper->v->getLayerTypes(*layersTypes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdnn_NetgetLayersCount(struct  dnn_Net_t* wrapper, string_t* layerType)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getLayersCount(string(layerType->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetgetLayersShapes(struct  dnn_Net_t* wrapper, vector_MatShape* netInputShapes, 
                                   vector_int* layersIds, vector_vector_MatShape* inLayersShapes, 
                                   vector_vector_MatShape* outLayersShapes)
{
try {
 
    wrapper->v->getLayersShapes(*netInputShapes, *layersIds, *inLayersShapes, *outLayersShapes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetgetLayersShapesV2(struct  dnn_Net_t* wrapper, MatShape* netInputShape, 
                                   vector_int* layersIds, vector_vector_MatShape* inLayersShapes, 
                                   vector_vector_MatShape* outLayersShapes)
{
try {
 
    wrapper->v->getLayersShapes(*netInputShape, *layersIds, *inLayersShapes, *outLayersShapes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetgetMemoryConsumption(struct  dnn_Net_t* wrapper, MatShape* netInputShape, 
                                   size_t weights, size_t blobs)
{
try {
 
    wrapper->v->getMemoryConsumption(*netInputShape, weights, blobs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetgetMemoryConsumptionV2(struct  dnn_Net_t* wrapper, int layerId, 
                                   vector_MatShape* netInputShapes, size_t weights, size_t blobs)
{
try {
 
    wrapper->v->getMemoryConsumption(layerId, *netInputShapes, weights, blobs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetgetMemoryConsumptionV3(struct  dnn_Net_t* wrapper, int layerId, 
                                   MatShape* netInputShape, size_t weights, size_t blobs)
{
try {
 
    wrapper->v->getMemoryConsumption(layerId, *netInputShape, weights, blobs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetgetOutputDetails(struct  dnn_Net_t* wrapper, vector_float* scales, 
                                   vector_int* zeropoints)
{
try {
 
    wrapper->v->getOutputDetails(*scales, *zeropoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvdnn_NetgetParam(struct  dnn_Net_t* wrapper, int layer, int numParam)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getParam(layer, numParam);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdnn_NetgetParamV2(struct  dnn_Net_t* wrapper, string_t* layerName, int numParam)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getParam(string(layerName->v), numParam);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvdnn_NetgetPerfProfile(struct  dnn_Net_t* wrapper, vector_double* timings)
{
    int64 retval = 0;
try {
 
    retval = wrapper->v->getPerfProfile(*timings);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_int*)   pCvdnn_NetgetUnconnectedOutLayers(struct  dnn_Net_t* wrapper)
{
vector_int* retval = new vector_int();
try {
 
    vector_int tr = wrapper->v->getUnconnectedOutLayers();
    vector_int_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_String*)   pCvdnn_NetgetUnconnectedOutLayersNames(struct  dnn_Net_t* wrapper)
{
vector_String* retval = new vector_String();
try {
 
    vector_String tr = wrapper->v->getUnconnectedOutLayersNames();
    vector_String_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_Netquantize(struct  dnn_Net_t* wrapper, vector_Mat* calibData, int inputsDtype, 
                                   int outputsDtype)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = wrapper->v->quantize(*calibData, inputsDtype, outputsDtype);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_NetquantizeV2(struct  dnn_Net_t* wrapper, vector_UMat* calibData, int inputsDtype, 
                                   int outputsDtype)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = wrapper->v->quantize(*calibData, inputsDtype, outputsDtype);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_NetreadFromModelOptimizer(string_t* xml, string_t* bin)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::Net::readFromModelOptimizer(string(xml->v), string(bin->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_NetreadFromModelOptimizerV2(vector_uchar* bufferModelConfig, 
                                   vector_uchar* bufferWeights)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::Net::readFromModelOptimizer(*bufferModelConfig, *bufferWeights);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_NetsetHalideScheduler(struct  dnn_Net_t* wrapper, string_t* scheduler)
{
try {
 
    wrapper->v->setHalideScheduler(string(scheduler->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetInput(struct  dnn_Net_t* wrapper, Mat_t* blob, string_t* name, 
                                   double scalefactor, Scalar_t* mean)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    Scalar x4; if (mean == 0) { Scalar_t a4; x4 = Scalar(); a4.v = &x4; mean = &a4; };     
    wrapper->v->setInput(*blob->v, string(name->v), scalefactor, *mean->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetInputV2(struct  dnn_Net_t* wrapper, UMat_t* blob, string_t* name, 
                                   double scalefactor, Scalar_t* mean)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    Scalar x4; if (mean == 0) { Scalar_t a4; x4 = Scalar(); a4.v = &x4; mean = &a4; };     
    wrapper->v->setInput(*blob->v, string(name->v), scalefactor, *mean->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetInputShape(struct  dnn_Net_t* wrapper, string_t* inputName, MatShape* shape)
{
try {
 
    wrapper->v->setInputShape(string(inputName->v), *shape);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetInputsNames(struct  dnn_Net_t* wrapper, vector_String* inputBlobNames)
{
try {
 
    wrapper->v->setInputsNames(*inputBlobNames);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetParam(struct  dnn_Net_t* wrapper, int layer, int numParam, Mat_t* blob)
{
try {
 
    wrapper->v->setParam(layer, numParam, *blob->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetParamV2(struct  dnn_Net_t* wrapper, string_t* layerName, int numParam, 
                                   Mat_t* blob)
{
try {
 
    wrapper->v->setParam(string(layerName->v), numParam, *blob->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetPreferableBackend(struct  dnn_Net_t* wrapper, int backendId)
{
try {
 
    wrapper->v->setPreferableBackend(backendId);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NetsetPreferableTarget(struct  dnn_Net_t* wrapper, int targetId)
{
try {
 
    wrapper->v->setPreferableTarget(targetId);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_Modelpredict(struct  dnn_Model_t* wrapper, Mat_t* frame, vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_ModelpredictV2(struct  dnn_Model_t* wrapper, UMat_t* frame, vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetInputCrop(struct  dnn_Model_t* wrapper, bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetInputMean(struct  dnn_Model_t* wrapper, Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_ModelsetInputParams(struct  dnn_Model_t* wrapper, double scale, Size_t* size, 
                                   Scalar_t* mean, bool swapRB, bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetInputScale(struct  dnn_Model_t* wrapper, double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetInputSize(struct  dnn_Model_t* wrapper, Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetInputSizeV2(struct  dnn_Model_t* wrapper, int width, int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetInputSwapRB(struct  dnn_Model_t* wrapper, bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetPreferableBackend(struct  dnn_Model_t* wrapper, dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ModelsetPreferableTarget(struct  dnn_Model_t* wrapper, dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_ClassificationModelclassify(struct  dnn_ClassificationModel_t* wrapper, Mat_t* frame, 
                                   int classId, float conf)
{
try {
 
    wrapper->v->classify(*frame->v, classId, conf);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_ClassificationModelclassifyV2(struct  dnn_ClassificationModel_t* wrapper, 
                                   UMat_t* frame, int classId, float conf)
{
try {
 
    wrapper->v->classify(*frame->v, classId, conf);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdnn_ClassificationModelgetEnableSoftmaxPostProcessing(struct  dnn_ClassificationModel_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getEnableSoftmaxPostProcessing();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_ClassificationModelpredict(struct  dnn_ClassificationModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_ClassificationModelpredictV2(struct  dnn_ClassificationModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_ClassificationModel_t*)   pCvdnn_ClassificationModelsetEnableSoftmaxPostProcessing(struct  dnn_ClassificationModel_t* wrapper, 
                                   bool enable)
{
    dnn_ClassificationModel_t*  retval = new dnn_ClassificationModel_t;
try { 
    dnn::ClassificationModel tr = wrapper->v->setEnableSoftmaxPostProcessing(enable);
    dnn::ClassificationModel*  t = new dnn::ClassificationModel();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetInputCrop(struct  dnn_ClassificationModel_t* wrapper, bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetInputMean(struct  dnn_ClassificationModel_t* wrapper, 
                                   Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_ClassificationModelsetInputParams(struct  dnn_ClassificationModel_t* wrapper, 
                                   double scale, Size_t* size, Scalar_t* mean, bool swapRB, 
                                   bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetInputScale(struct  dnn_ClassificationModel_t* wrapper, 
                                   double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetInputSize(struct  dnn_ClassificationModel_t* wrapper, 
                                   Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetInputSizeV2(struct  dnn_ClassificationModel_t* wrapper, 
                                   int width, int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetInputSwapRB(struct  dnn_ClassificationModel_t* wrapper, 
                                   bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetPreferableBackend(struct  dnn_ClassificationModel_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_ClassificationModelsetPreferableTarget(struct  dnn_ClassificationModel_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Point2f*)   pCvdnn_KeypointsModelestimate(struct  dnn_KeypointsModel_t* wrapper, Mat_t* frame, 
                                   float thresh)
{
vector_Point2f* retval = new vector_Point2f();
try {
 
    vector_Point2f tr = wrapper->v->estimate(*frame->v, thresh);
    vector_Point2f_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Point2f*)   pCvdnn_KeypointsModelestimateV2(struct  dnn_KeypointsModel_t* wrapper, UMat_t* frame, 
                                   float thresh)
{
vector_Point2f* retval = new vector_Point2f();
try {
 
    vector_Point2f tr = wrapper->v->estimate(*frame->v, thresh);
    vector_Point2f_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_KeypointsModelpredict(struct  dnn_KeypointsModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_KeypointsModelpredictV2(struct  dnn_KeypointsModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetInputCrop(struct  dnn_KeypointsModel_t* wrapper, bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetInputMean(struct  dnn_KeypointsModel_t* wrapper, Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_KeypointsModelsetInputParams(struct  dnn_KeypointsModel_t* wrapper, double scale, 
                                   Size_t* size, Scalar_t* mean, bool swapRB, bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetInputScale(struct  dnn_KeypointsModel_t* wrapper, double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetInputSize(struct  dnn_KeypointsModel_t* wrapper, Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetInputSizeV2(struct  dnn_KeypointsModel_t* wrapper, int width, 
                                   int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetInputSwapRB(struct  dnn_KeypointsModel_t* wrapper, bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetPreferableBackend(struct  dnn_KeypointsModel_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_KeypointsModelsetPreferableTarget(struct  dnn_KeypointsModel_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_SegmentationModelpredict(struct  dnn_SegmentationModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_SegmentationModelpredictV2(struct  dnn_SegmentationModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_SegmentationModelsegment(struct  dnn_SegmentationModel_t* wrapper, Mat_t* frame, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->segment(*frame->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_SegmentationModelsegmentV2(struct  dnn_SegmentationModel_t* wrapper, UMat_t* frame, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->segment(*frame->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetInputCrop(struct  dnn_SegmentationModel_t* wrapper, bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetInputMean(struct  dnn_SegmentationModel_t* wrapper, Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_SegmentationModelsetInputParams(struct  dnn_SegmentationModel_t* wrapper, double scale, 
                                   Size_t* size, Scalar_t* mean, bool swapRB, bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetInputScale(struct  dnn_SegmentationModel_t* wrapper, double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetInputSize(struct  dnn_SegmentationModel_t* wrapper, Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetInputSizeV2(struct  dnn_SegmentationModel_t* wrapper, int width, 
                                   int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetInputSwapRB(struct  dnn_SegmentationModel_t* wrapper, bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetPreferableBackend(struct  dnn_SegmentationModel_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_SegmentationModelsetPreferableTarget(struct  dnn_SegmentationModel_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_DetectionModeldetect(struct  dnn_DetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_int* classIds, vector_float* confidences, vector_Rect* boxes, 
                                   float confThreshold, float nmsThreshold)
{
try {
 
    wrapper->v->detect(*frame->v, *classIds, *confidences, *boxes, confThreshold, nmsThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_DetectionModeldetectV2(struct  dnn_DetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_int* classIds, vector_float* confidences, vector_Rect* boxes, 
                                   float confThreshold, float nmsThreshold)
{
try {
 
    wrapper->v->detect(*frame->v, *classIds, *confidences, *boxes, confThreshold, nmsThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdnn_DetectionModelgetNmsAcrossClasses(struct  dnn_DetectionModel_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getNmsAcrossClasses();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_DetectionModelpredict(struct  dnn_DetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_DetectionModelpredictV2(struct  dnn_DetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetInputCrop(struct  dnn_DetectionModel_t* wrapper, bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetInputMean(struct  dnn_DetectionModel_t* wrapper, Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_DetectionModelsetInputParams(struct  dnn_DetectionModel_t* wrapper, double scale, 
                                   Size_t* size, Scalar_t* mean, bool swapRB, bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetInputScale(struct  dnn_DetectionModel_t* wrapper, double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetInputSize(struct  dnn_DetectionModel_t* wrapper, Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetInputSizeV2(struct  dnn_DetectionModel_t* wrapper, int width, 
                                   int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetInputSwapRB(struct  dnn_DetectionModel_t* wrapper, bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_DetectionModel_t*)   pCvdnn_DetectionModelsetNmsAcrossClasses(struct  dnn_DetectionModel_t* wrapper, bool value)
{
    dnn_DetectionModel_t*  retval = new dnn_DetectionModel_t;
try { 
    dnn::DetectionModel tr = wrapper->v->setNmsAcrossClasses(value);
    dnn::DetectionModel*  t = new dnn::DetectionModel();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetPreferableBackend(struct  dnn_DetectionModel_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_DetectionModelsetPreferableTarget(struct  dnn_DetectionModel_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvdnn_TextRecognitionModelgetDecodeType(struct  dnn_TextRecognitionModel_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDecodeType();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_string*)   pCvdnn_TextRecognitionModelgetVocabulary(struct  dnn_TextRecognitionModel_t* wrapper)
{
vector_string* retval = new vector_string();
try {
 
    vector_string tr = wrapper->v->getVocabulary();
    vector_string_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextRecognitionModelpredict(struct  dnn_TextRecognitionModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextRecognitionModelpredictV2(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   UMat_t* frame, vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvdnn_TextRecognitionModelrecognize(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Mat_t* frame)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->recognize(*frame->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvdnn_TextRecognitionModelrecognizeV2(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   UMat_t* frame)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->recognize(*frame->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextRecognitionModelrecognizeV3(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Mat_t* frame, vector_Mat* roiRects, vector_string* results)
{
try {
 
    wrapper->v->recognize(*frame->v, *roiRects, *results);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextRecognitionModelrecognizeV4(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   UMat_t* frame, vector_UMat* roiRects, vector_string* results)
{
try {
 
    wrapper->v->recognize(*frame->v, *roiRects, *results);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_TextRecognitionModel_t*)   pCvdnn_TextRecognitionModelsetDecodeOptsCTCPrefixBeamSearch(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   int beamSize, int vocPruneSize)
{
    dnn_TextRecognitionModel_t*  retval = new dnn_TextRecognitionModel_t;
try { 
    dnn::TextRecognitionModel tr = wrapper->v->setDecodeOptsCTCPrefixBeamSearch(beamSize, vocPruneSize);
    dnn::TextRecognitionModel*  t = new dnn::TextRecognitionModel();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_TextRecognitionModel_t*)   pCvdnn_TextRecognitionModelsetDecodeType(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   string_t* decodeType)
{
    dnn_TextRecognitionModel_t*  retval = new dnn_TextRecognitionModel_t;
try { 
    dnn::TextRecognitionModel tr = wrapper->v->setDecodeType(string(decodeType->v));
    dnn::TextRecognitionModel*  t = new dnn::TextRecognitionModel();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetInputCrop(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetInputMean(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextRecognitionModelsetInputParams(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   double scale, Size_t* size, Scalar_t* mean, bool swapRB, 
                                   bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetInputScale(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetInputSize(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetInputSizeV2(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   int width, int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetInputSwapRB(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetPreferableBackend(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextRecognitionModelsetPreferableTarget(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_TextRecognitionModel_t*)   pCvdnn_TextRecognitionModelsetVocabulary(struct  dnn_TextRecognitionModel_t* wrapper, 
                                   vector_string* vocabulary)
{
    dnn_TextRecognitionModel_t*  retval = new dnn_TextRecognitionModel_t;
try { 
    dnn::TextRecognitionModel tr = wrapper->v->setVocabulary(*vocabulary);
    dnn::TextRecognitionModel*  t = new dnn::TextRecognitionModel();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModeldetect(struct  dnn_TextDetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_vector_Point* detections, vector_float* confidences)
{
try {
 
    wrapper->v->detect(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectV2(struct  dnn_TextDetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_vector_Point* detections, vector_float* confidences)
{
try {
 
    wrapper->v->detect(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectV3(struct  dnn_TextDetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_vector_Point* detections)
{
try {
 
    wrapper->v->detect(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectV4(struct  dnn_TextDetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_vector_Point* detections)
{
try {
 
    wrapper->v->detect(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectTextRectangles(struct  dnn_TextDetectionModel_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectTextRectanglesV2(struct  dnn_TextDetectionModel_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectTextRectanglesV3(struct  dnn_TextDetectionModel_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModeldetectTextRectanglesV4(struct  dnn_TextDetectionModel_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModelpredict(struct  dnn_TextDetectionModel_t* wrapper, Mat_t* frame, 
                                   vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModelpredictV2(struct  dnn_TextDetectionModel_t* wrapper, UMat_t* frame, 
                                   vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetInputCrop(struct  dnn_TextDetectionModel_t* wrapper, bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetInputMean(struct  dnn_TextDetectionModel_t* wrapper, 
                                   Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModelsetInputParams(struct  dnn_TextDetectionModel_t* wrapper, 
                                   double scale, Size_t* size, Scalar_t* mean, bool swapRB, 
                                   bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetInputScale(struct  dnn_TextDetectionModel_t* wrapper, 
                                   double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetInputSize(struct  dnn_TextDetectionModel_t* wrapper, Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetInputSizeV2(struct  dnn_TextDetectionModel_t* wrapper, int width, 
                                   int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetInputSwapRB(struct  dnn_TextDetectionModel_t* wrapper, 
                                   bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetPreferableBackend(struct  dnn_TextDetectionModel_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModelsetPreferableTarget(struct  dnn_TextDetectionModel_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetect(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_vector_Point* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detect(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detect(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectV3(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_vector_Point* detections)
{
try {
 
    wrapper->v->detect(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectV4(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections)
{
try {
 
    wrapper->v->detect(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectTextRectangles(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectTextRectanglesV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectTextRectanglesV3(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTdetectTextRectanglesV4(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvdnn_TextDetectionModel_EASTgetConfidenceThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getConfidenceThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvdnn_TextDetectionModel_EASTgetNMSThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getNMSThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTpredict(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Mat_t* frame, vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTpredictV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   UMat_t* frame, vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_TextDetectionModel_EAST_t*)   pCvdnn_TextDetectionModel_EASTsetConfidenceThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   float confThreshold)
{
    dnn_TextDetectionModel_EAST_t*  retval = new dnn_TextDetectionModel_EAST_t;
try { 
    dnn::TextDetectionModel_EAST tr = wrapper->v->setConfidenceThreshold(confThreshold);
    dnn::TextDetectionModel_EAST*  t = new dnn::TextDetectionModel_EAST();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetInputCrop(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetInputMean(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModel_EASTsetInputParams(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   double scale, Size_t* size, Scalar_t* mean, bool swapRB, 
                                   bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetInputScale(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetInputSize(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetInputSizeV2(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   int width, int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetInputSwapRB(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_TextDetectionModel_EAST_t*)   pCvdnn_TextDetectionModel_EASTsetNMSThreshold(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   float nmsThreshold)
{
    dnn_TextDetectionModel_EAST_t*  retval = new dnn_TextDetectionModel_EAST_t;
try { 
    dnn::TextDetectionModel_EAST tr = wrapper->v->setNMSThreshold(nmsThreshold);
    dnn::TextDetectionModel_EAST*  t = new dnn::TextDetectionModel_EAST();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetPreferableBackend(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_EASTsetPreferableTarget(struct  dnn_TextDetectionModel_EAST_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetect(struct  dnn_TextDetectionModel_DB_t* wrapper, Mat_t* frame, 
                                   vector_vector_Point* detections, vector_float* confidences)
{
try {
 
    wrapper->v->detect(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detect(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectV3(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_vector_Point* detections)
{
try {
 
    wrapper->v->detect(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectV4(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_vector_Point* detections)
{
try {
 
    wrapper->v->detect(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectTextRectangles(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectTextRectanglesV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections, 
                                   vector_float* confidences)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections, *confidences);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectTextRectanglesV3(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_RotatedRect* detections)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBdetectTextRectanglesV4(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_RotatedRect* detections)
{
try {
 
    wrapper->v->detectTextRectangles(*frame->v, *detections);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvdnn_TextDetectionModel_DBgetBinaryThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getBinaryThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdnn_TextDetectionModel_DBgetMaxCandidates(struct  dnn_TextDetectionModel_DB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxCandidates();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvdnn_TextDetectionModel_DBgetPolygonThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getPolygonThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdnn_TextDetectionModel_DBgetUnclipRatio(struct  dnn_TextDetectionModel_DB_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getUnclipRatio();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBpredict(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Mat_t* frame, vector_Mat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBpredictV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   UMat_t* frame, vector_UMat* outs)
{
try {
 
    wrapper->v->predict(*frame->v, *outs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_TextDetectionModel_DB_t*)   pCvdnn_TextDetectionModel_DBsetBinaryThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   float binaryThreshold)
{
    dnn_TextDetectionModel_DB_t*  retval = new dnn_TextDetectionModel_DB_t;
try { 
    dnn::TextDetectionModel_DB tr = wrapper->v->setBinaryThreshold(binaryThreshold);
    dnn::TextDetectionModel_DB*  t = new dnn::TextDetectionModel_DB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetInputCrop(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   bool crop)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputCrop(crop);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetInputMean(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Scalar_t* mean)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputMean(*mean->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_TextDetectionModel_DBsetInputParams(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   double scale, Size_t* size, Scalar_t* mean, bool swapRB, 
                                   bool crop)
{
try {
 
    Size x2; if (size == 0) { Size_t a2; x2 = Size(); a2.v = &x2; size = &a2; };     
    Scalar x3; if (mean == 0) { Scalar_t a3; x3 = Scalar(); a3.v = &x3; mean = &a3; };     
    wrapper->v->setInputParams(scale, *size->v, *mean->v, swapRB, crop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetInputScale(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   double scale)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputScale(scale);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetInputSize(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   Size_t* size)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(*size->v);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetInputSizeV2(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   int width, int height)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSize(width, height);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetInputSwapRB(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   bool swapRB)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setInputSwapRB(swapRB);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_TextDetectionModel_DB_t*)   pCvdnn_TextDetectionModel_DBsetMaxCandidates(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   int maxCandidates)
{
    dnn_TextDetectionModel_DB_t*  retval = new dnn_TextDetectionModel_DB_t;
try { 
    dnn::TextDetectionModel_DB tr = wrapper->v->setMaxCandidates(maxCandidates);
    dnn::TextDetectionModel_DB*  t = new dnn::TextDetectionModel_DB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_TextDetectionModel_DB_t*)   pCvdnn_TextDetectionModel_DBsetPolygonThreshold(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   float polygonThreshold)
{
    dnn_TextDetectionModel_DB_t*  retval = new dnn_TextDetectionModel_DB_t;
try { 
    dnn::TextDetectionModel_DB tr = wrapper->v->setPolygonThreshold(polygonThreshold);
    dnn::TextDetectionModel_DB*  t = new dnn::TextDetectionModel_DB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetPreferableBackend(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   dnn::Backend backendId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableBackend(backendId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Model_t*)   pCvdnn_TextDetectionModel_DBsetPreferableTarget(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   dnn::Target targetId)
{
    dnn_Model_t*  retval = new dnn_Model_t;
try { 
    dnn::Model tr = wrapper->v->setPreferableTarget(targetId);
    dnn::Model*  t = new dnn::Model();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_TextDetectionModel_DB_t*)   pCvdnn_TextDetectionModel_DBsetUnclipRatio(struct  dnn_TextDetectionModel_DB_t* wrapper, 
                                   double unclipRatio)
{
    dnn_TextDetectionModel_DB_t*  retval = new dnn_TextDetectionModel_DB_t;
try { 
    dnn::TextDetectionModel_DB tr = wrapper->v->setUnclipRatio(unclipRatio);
    dnn::TextDetectionModel_DB*  t = new dnn::TextDetectionModel_DB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFeature2Dclear(struct  Feature2D_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2Dcompute(struct  Feature2D_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DcomputeV2(struct  Feature2D_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DcomputeV3(struct  Feature2D_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DcomputeV4(struct  Feature2D_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvFeature2DdefaultNorm(struct  Feature2D_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFeature2DdescriptorSize(struct  Feature2D_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFeature2DdescriptorType(struct  Feature2D_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFeature2Ddetect(struct  Feature2D_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DdetectV2(struct  Feature2D_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DdetectV3(struct  Feature2D_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DdetectV4(struct  Feature2D_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DdetectAndCompute(struct  Feature2D_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DdetectAndComputeV2(struct  Feature2D_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvFeature2Dempty(struct  Feature2D_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvFeature2DgetDefaultName(struct  Feature2D_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFeature2Dread(struct  Feature2D_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DreadV2(struct  Feature2D_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2Dsave(struct  Feature2D_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2Dwrite(struct  Feature2D_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFeature2DwriteV2(struct  Feature2D_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeatureclear(struct  AffineFeature_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturecompute(struct  AffineFeature_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturecomputeV2(struct  AffineFeature_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturecomputeV3(struct  AffineFeature_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturecomputeV4(struct  AffineFeature_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_AffineFeature*)   pCvAffineFeature_create(Ptr_Feature2D* backend, int maxTilt, int minTilt, float tiltStep, 
                                   float rotateStepBase)
{
Ptr_AffineFeature* retval = 0;
try {
 
    Ptr_AffineFeature p = cv::AffineFeature::create(*backend, maxTilt, minTilt, tiltStep, rotateStepBase);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAffineFeaturedefaultNorm(struct  AffineFeature_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAffineFeaturedescriptorSize(struct  AffineFeature_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAffineFeaturedescriptorType(struct  AffineFeature_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAffineFeaturedetect(struct  AffineFeature_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturedetectV2(struct  AffineFeature_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturedetectV3(struct  AffineFeature_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturedetectV4(struct  AffineFeature_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturedetectAndCompute(struct  AffineFeature_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturedetectAndComputeV2(struct  AffineFeature_t* wrapper, UMat_t* image, 
                                   UMat_t* mask, vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAffineFeatureempty(struct  AffineFeature_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvAffineFeaturegetDefaultName(struct  AffineFeature_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAffineFeaturegetViewParams(struct  AffineFeature_t* wrapper, vector_float* tilts, 
                                   vector_float* rolls)
{
try {
 
    wrapper->v->getViewParams(*tilts, *rolls);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeatureread(struct  AffineFeature_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturereadV2(struct  AffineFeature_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturesave(struct  AffineFeature_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturesetViewParams(struct  AffineFeature_t* wrapper, vector_float* tilts, 
                                   vector_float* rolls)
{
try {
 
    wrapper->v->setViewParams(*tilts, *rolls);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturewrite(struct  AffineFeature_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAffineFeaturewriteV2(struct  AffineFeature_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTclear(struct  SIFT_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTcompute(struct  SIFT_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTcomputeV2(struct  SIFT_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTcomputeV3(struct  SIFT_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTcomputeV4(struct  SIFT_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SIFT*)   pCvSIFT_create(int nfeatures, int nOctaveLayers, double contrastThreshold, 
                                   double edgeThreshold, double sigma)
{
Ptr_SIFT* retval = 0;
try {
 
    Ptr_SIFT p = cv::SIFT::create(nfeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_SIFT*)   pCvSIFT_createV2(int nfeatures, int nOctaveLayers, double contrastThreshold, 
                                   double edgeThreshold, double sigma, int descriptorType)
{
Ptr_SIFT* retval = 0;
try {
 
    Ptr_SIFT p = cv::SIFT::create(nfeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma, descriptorType);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSIFTdefaultNorm(struct  SIFT_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSIFTdescriptorSize(struct  SIFT_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSIFTdescriptorType(struct  SIFT_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSIFTdetect(struct  SIFT_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTdetectV2(struct  SIFT_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTdetectV3(struct  SIFT_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTdetectV4(struct  SIFT_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTdetectAndCompute(struct  SIFT_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTdetectAndComputeV2(struct  SIFT_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvSIFTempty(struct  SIFT_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvSIFTgetDefaultName(struct  SIFT_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSIFTread(struct  SIFT_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTreadV2(struct  SIFT_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTsave(struct  SIFT_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTwrite(struct  SIFT_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSIFTwriteV2(struct  SIFT_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKclear(struct  BRISK_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKcompute(struct  BRISK_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKcomputeV2(struct  BRISK_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKcomputeV3(struct  BRISK_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKcomputeV4(struct  BRISK_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_BRISK*)   pCvBRISK_create(int thresh, int octaves, float patternScale)
{
Ptr_BRISK* retval = 0;
try {
 
    Ptr_BRISK p = cv::BRISK::create(thresh, octaves, patternScale);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_BRISK*)   pCvBRISK_createV2(vector_float* radiusList, vector_int* numberList, float dMax, float dMin, 
                                   vector_int* indexChange)
{
Ptr_BRISK* retval = 0;
try {
 
    vector_int x5; if (indexChange == 0) { x5 = std::vector<int>(); indexChange = &x5; };       
    Ptr_BRISK p = cv::BRISK::create(*radiusList, *numberList, dMax, dMin, *indexChange);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_BRISK*)   pCvBRISK_createV3(int thresh, int octaves, vector_float* radiusList, vector_int* numberList, 
                                   float dMax, float dMin, vector_int* indexChange)
{
Ptr_BRISK* retval = 0;
try {
 
    vector_int x7; if (indexChange == 0) { x7 = std::vector<int>(); indexChange = &x7; };       
    Ptr_BRISK p = cv::BRISK::create(thresh, octaves, *radiusList, *numberList, dMax, dMin, *indexChange);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBRISKdefaultNorm(struct  BRISK_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBRISKdescriptorSize(struct  BRISK_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBRISKdescriptorType(struct  BRISK_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBRISKdetect(struct  BRISK_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKdetectV2(struct  BRISK_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKdetectV3(struct  BRISK_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKdetectV4(struct  BRISK_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKdetectAndCompute(struct  BRISK_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKdetectAndComputeV2(struct  BRISK_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvBRISKempty(struct  BRISK_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvBRISKgetDefaultName(struct  BRISK_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBRISKgetOctaves(struct  BRISK_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getOctaves();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBRISKgetThreshold(struct  BRISK_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBRISKread(struct  BRISK_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKreadV2(struct  BRISK_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKsave(struct  BRISK_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKsetOctaves(struct  BRISK_t* wrapper, int octaves)
{
try {
 
    wrapper->v->setOctaves(octaves);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKsetThreshold(struct  BRISK_t* wrapper, int threshold)
{
try {
 
    wrapper->v->setThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKwrite(struct  BRISK_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBRISKwriteV2(struct  BRISK_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBclear(struct  ORB_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBcompute(struct  ORB_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBcomputeV2(struct  ORB_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBcomputeV3(struct  ORB_t* wrapper, vector_Mat* images, vector_vector_KeyPoint* keypoints, 
                                   vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBcomputeV4(struct  ORB_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ORB*)   pCvORB_create(int nfeatures, float scaleFactor, int nlevels, int edgeThreshold, 
                                   int firstLevel, int WTA_K, ORB::ScoreType scoreType, int patchSize, int fastThreshold)
{
Ptr_ORB* retval = 0;
try {
 
    Ptr_ORB p = cv::ORB::create(nfeatures, scaleFactor, nlevels, edgeThreshold, firstLevel, WTA_K, scoreType, patchSize, fastThreshold);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBdefaultNorm(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBdescriptorSize(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBdescriptorType(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvORBdetect(struct  ORB_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBdetectV2(struct  ORB_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBdetectV3(struct  ORB_t* wrapper, vector_Mat* images, vector_vector_KeyPoint* keypoints, 
                                   vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBdetectV4(struct  ORB_t* wrapper, vector_UMat* images, vector_vector_KeyPoint* keypoints, 
                                   vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBdetectAndCompute(struct  ORB_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBdetectAndComputeV2(struct  ORB_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvORBempty(struct  ORB_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvORBgetDefaultName(struct  ORB_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetEdgeThreshold(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getEdgeThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetFastThreshold(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFastThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetFirstLevel(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFirstLevel();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetMaxFeatures(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxFeatures();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetNLevels(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNLevels();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetPatchSize(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPatchSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvORBgetScaleFactor(struct  ORB_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getScaleFactor();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(ORB::ScoreType)   pCvORBgetScoreType(struct  ORB_t* wrapper)
{
    ORB::ScoreType retval;
try {
 
    retval = wrapper->v->getScoreType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvORBgetWTA_K(struct  ORB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getWTA_K();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvORBread(struct  ORB_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBreadV2(struct  ORB_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsave(struct  ORB_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetEdgeThreshold(struct  ORB_t* wrapper, int edgeThreshold)
{
try {
 
    wrapper->v->setEdgeThreshold(edgeThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetFastThreshold(struct  ORB_t* wrapper, int fastThreshold)
{
try {
 
    wrapper->v->setFastThreshold(fastThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetFirstLevel(struct  ORB_t* wrapper, int firstLevel)
{
try {
 
    wrapper->v->setFirstLevel(firstLevel);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetMaxFeatures(struct  ORB_t* wrapper, int maxFeatures)
{
try {
 
    wrapper->v->setMaxFeatures(maxFeatures);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetNLevels(struct  ORB_t* wrapper, int nlevels)
{
try {
 
    wrapper->v->setNLevels(nlevels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetPatchSize(struct  ORB_t* wrapper, int patchSize)
{
try {
 
    wrapper->v->setPatchSize(patchSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetScaleFactor(struct  ORB_t* wrapper, double scaleFactor)
{
try {
 
    wrapper->v->setScaleFactor(scaleFactor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetScoreType(struct  ORB_t* wrapper, ORB::ScoreType scoreType)
{
try {
 
    wrapper->v->setScoreType(scoreType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBsetWTA_K(struct  ORB_t* wrapper, int wta_k)
{
try {
 
    wrapper->v->setWTA_K(wta_k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBwrite(struct  ORB_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvORBwriteV2(struct  ORB_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERclear(struct  MSER_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERcompute(struct  MSER_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERcomputeV2(struct  MSER_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERcomputeV3(struct  MSER_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERcomputeV4(struct  MSER_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_MSER*)   pCvMSER_create(int delta, int min_area, int max_area, double max_variation, 
                                   double min_diversity, int max_evolution, double area_threshold, double min_margin, 
                                   int edge_blur_size)
{
Ptr_MSER* retval = 0;
try {
 
    Ptr_MSER p = cv::MSER::create(delta, min_area, max_area, max_variation, min_diversity, max_evolution, area_threshold, min_margin, edge_blur_size);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvMSERdefaultNorm(struct  MSER_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvMSERdescriptorSize(struct  MSER_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvMSERdescriptorType(struct  MSER_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvMSERdetect(struct  MSER_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectV2(struct  MSER_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectV3(struct  MSER_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectV4(struct  MSER_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectAndCompute(struct  MSER_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectAndComputeV2(struct  MSER_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectRegions(struct  MSER_t* wrapper, Mat_t* image, vector_vector_Point* msers, 
                                   vector_Rect* bboxes)
{
try {
 
    wrapper->v->detectRegions(*image->v, *msers, *bboxes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERdetectRegionsV2(struct  MSER_t* wrapper, UMat_t* image, vector_vector_Point* msers, 
                                   vector_Rect* bboxes)
{
try {
 
    wrapper->v->detectRegions(*image->v, *msers, *bboxes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvMSERempty(struct  MSER_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvMSERgetDefaultName(struct  MSER_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvMSERgetDelta(struct  MSER_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDelta();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvMSERgetMaxArea(struct  MSER_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxArea();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvMSERgetMinArea(struct  MSER_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinArea();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvMSERgetPass2Only(struct  MSER_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getPass2Only();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvMSERread(struct  MSER_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERreadV2(struct  MSER_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERsave(struct  MSER_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERsetDelta(struct  MSER_t* wrapper, int delta)
{
try {
 
    wrapper->v->setDelta(delta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERsetMaxArea(struct  MSER_t* wrapper, int maxArea)
{
try {
 
    wrapper->v->setMaxArea(maxArea);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERsetMinArea(struct  MSER_t* wrapper, int minArea)
{
try {
 
    wrapper->v->setMinArea(minArea);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERsetPass2Only(struct  MSER_t* wrapper, bool f)
{
try {
 
    wrapper->v->setPass2Only(f);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERwrite(struct  MSER_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMSERwriteV2(struct  MSER_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorclear(struct  FastFeatureDetector_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorcompute(struct  FastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorcomputeV2(struct  FastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorcomputeV3(struct  FastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorcomputeV4(struct  FastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_FastFeatureDetector*)   pCvFastFeatureDetector_create(int threshold, bool nonmaxSuppression, 
                                   FastFeatureDetector::DetectorType _type)
{
Ptr_FastFeatureDetector* retval = 0;
try {
 
    Ptr_FastFeatureDetector p = cv::FastFeatureDetector::create(threshold, nonmaxSuppression, _type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFastFeatureDetectordefaultNorm(struct  FastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFastFeatureDetectordescriptorSize(struct  FastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFastFeatureDetectordescriptorType(struct  FastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFastFeatureDetectordetect(struct  FastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectordetectV2(struct  FastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectordetectV3(struct  FastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectordetectV4(struct  FastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectordetectAndCompute(struct  FastFeatureDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* mask, vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectordetectAndComputeV2(struct  FastFeatureDetector_t* wrapper, 
                                   UMat_t* image, UMat_t* mask, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvFastFeatureDetectorempty(struct  FastFeatureDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvFastFeatureDetectorgetDefaultName(struct  FastFeatureDetector_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFastFeatureDetectorgetNonmaxSuppression(struct  FastFeatureDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getNonmaxSuppression();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFastFeatureDetectorgetThreshold(struct  FastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(FastFeatureDetector::DetectorType)   pCvFastFeatureDetectorgetType(struct  FastFeatureDetector_t* wrapper)
{
    FastFeatureDetector::DetectorType retval;
try {
 
    retval = wrapper->v->getType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFastFeatureDetectorread(struct  FastFeatureDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorreadV2(struct  FastFeatureDetector_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorsave(struct  FastFeatureDetector_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorsetNonmaxSuppression(struct  FastFeatureDetector_t* wrapper, bool f)
{
try {
 
    wrapper->v->setNonmaxSuppression(f);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorsetThreshold(struct  FastFeatureDetector_t* wrapper, int threshold)
{
try {
 
    wrapper->v->setThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorsetType(struct  FastFeatureDetector_t* wrapper, 
                                   FastFeatureDetector::DetectorType _type)
{
try {
 
    wrapper->v->setType(_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorwrite(struct  FastFeatureDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFastFeatureDetectorwriteV2(struct  FastFeatureDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorclear(struct  AgastFeatureDetector_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorcompute(struct  AgastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorcomputeV2(struct  AgastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorcomputeV3(struct  AgastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorcomputeV4(struct  AgastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_AgastFeatureDetector*)   pCvAgastFeatureDetector_create(int threshold, bool nonmaxSuppression, 
                                   AgastFeatureDetector::DetectorType _type)
{
Ptr_AgastFeatureDetector* retval = 0;
try {
 
    Ptr_AgastFeatureDetector p = cv::AgastFeatureDetector::create(threshold, nonmaxSuppression, _type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAgastFeatureDetectordefaultNorm(struct  AgastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAgastFeatureDetectordescriptorSize(struct  AgastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAgastFeatureDetectordescriptorType(struct  AgastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAgastFeatureDetectordetect(struct  AgastFeatureDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectordetectV2(struct  AgastFeatureDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectordetectV3(struct  AgastFeatureDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectordetectV4(struct  AgastFeatureDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectordetectAndCompute(struct  AgastFeatureDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* mask, vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectordetectAndComputeV2(struct  AgastFeatureDetector_t* wrapper, 
                                   UMat_t* image, UMat_t* mask, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAgastFeatureDetectorempty(struct  AgastFeatureDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvAgastFeatureDetectorgetDefaultName(struct  AgastFeatureDetector_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvAgastFeatureDetectorgetNonmaxSuppression(struct  AgastFeatureDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getNonmaxSuppression();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAgastFeatureDetectorgetThreshold(struct  AgastFeatureDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(AgastFeatureDetector::DetectorType)   pCvAgastFeatureDetectorgetType(struct  AgastFeatureDetector_t* wrapper)
{
    AgastFeatureDetector::DetectorType retval;
try {
 
    retval = wrapper->v->getType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAgastFeatureDetectorread(struct  AgastFeatureDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorreadV2(struct  AgastFeatureDetector_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorsave(struct  AgastFeatureDetector_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorsetNonmaxSuppression(struct  AgastFeatureDetector_t* wrapper, bool f)
{
try {
 
    wrapper->v->setNonmaxSuppression(f);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorsetThreshold(struct  AgastFeatureDetector_t* wrapper, int threshold)
{
try {
 
    wrapper->v->setThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorsetType(struct  AgastFeatureDetector_t* wrapper, 
                                   AgastFeatureDetector::DetectorType _type)
{
try {
 
    wrapper->v->setType(_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorwrite(struct  AgastFeatureDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAgastFeatureDetectorwriteV2(struct  AgastFeatureDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorclear(struct  GFTTDetector_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorcompute(struct  GFTTDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorcomputeV2(struct  GFTTDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorcomputeV3(struct  GFTTDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorcomputeV4(struct  GFTTDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_GFTTDetector*)   pCvGFTTDetector_create(int maxCorners, double qualityLevel, double minDistance, int blockSize, 
                                   bool useHarrisDetector, double k)
{
Ptr_GFTTDetector* retval = 0;
try {
 
    Ptr_GFTTDetector p = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, useHarrisDetector, k);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_GFTTDetector*)   pCvGFTTDetector_createV2(int maxCorners, double qualityLevel, double minDistance, 
                                   int blockSize, int gradiantSize, bool useHarrisDetector, double k)
{
Ptr_GFTTDetector* retval = 0;
try {
 
    Ptr_GFTTDetector p = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, gradiantSize, useHarrisDetector, k);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGFTTDetectordefaultNorm(struct  GFTTDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGFTTDetectordescriptorSize(struct  GFTTDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGFTTDetectordescriptorType(struct  GFTTDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvGFTTDetectordetect(struct  GFTTDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectordetectV2(struct  GFTTDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectordetectV3(struct  GFTTDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectordetectV4(struct  GFTTDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectordetectAndCompute(struct  GFTTDetector_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectordetectAndComputeV2(struct  GFTTDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* mask, vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvGFTTDetectorempty(struct  GFTTDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGFTTDetectorgetBlockSize(struct  GFTTDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getBlockSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvGFTTDetectorgetDefaultName(struct  GFTTDetector_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvGFTTDetectorgetHarrisDetector(struct  GFTTDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getHarrisDetector();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGFTTDetectorgetK(struct  GFTTDetector_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getK();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGFTTDetectorgetMaxFeatures(struct  GFTTDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxFeatures();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGFTTDetectorgetMinDistance(struct  GFTTDetector_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinDistance();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGFTTDetectorgetQualityLevel(struct  GFTTDetector_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getQualityLevel();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvGFTTDetectorread(struct  GFTTDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorreadV2(struct  GFTTDetector_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsave(struct  GFTTDetector_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsetBlockSize(struct  GFTTDetector_t* wrapper, int blockSize)
{
try {
 
    wrapper->v->setBlockSize(blockSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsetHarrisDetector(struct  GFTTDetector_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setHarrisDetector(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsetK(struct  GFTTDetector_t* wrapper, double k)
{
try {
 
    wrapper->v->setK(k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsetMaxFeatures(struct  GFTTDetector_t* wrapper, int maxFeatures)
{
try {
 
    wrapper->v->setMaxFeatures(maxFeatures);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsetMinDistance(struct  GFTTDetector_t* wrapper, double minDistance)
{
try {
 
    wrapper->v->setMinDistance(minDistance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorsetQualityLevel(struct  GFTTDetector_t* wrapper, double qlevel)
{
try {
 
    wrapper->v->setQualityLevel(qlevel);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorwrite(struct  GFTTDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGFTTDetectorwriteV2(struct  GFTTDetector_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorclear(struct  SimpleBlobDetector_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorcompute(struct  SimpleBlobDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorcomputeV2(struct  SimpleBlobDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorcomputeV3(struct  SimpleBlobDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorcomputeV4(struct  SimpleBlobDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SimpleBlobDetector*)   pCvSimpleBlobDetector_create(SimpleBlobDetector_Params_t* parameters)
{
Ptr_SimpleBlobDetector* retval = 0;
try {
 
    SimpleBlobDetector_Params x1; if (parameters == 0) { SimpleBlobDetector_Params_t a1; x1 = SimpleBlobDetector::Params(); a1.v = &x1; parameters = &a1; };     
    Ptr_SimpleBlobDetector p = cv::SimpleBlobDetector::create(*parameters->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSimpleBlobDetectordefaultNorm(struct  SimpleBlobDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSimpleBlobDetectordescriptorSize(struct  SimpleBlobDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSimpleBlobDetectordescriptorType(struct  SimpleBlobDetector_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSimpleBlobDetectordetect(struct  SimpleBlobDetector_t* wrapper, Mat_t* image, 
                                   vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectordetectV2(struct  SimpleBlobDetector_t* wrapper, UMat_t* image, 
                                   vector_KeyPoint* keypoints, UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectordetectV3(struct  SimpleBlobDetector_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectordetectV4(struct  SimpleBlobDetector_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectordetectAndCompute(struct  SimpleBlobDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* mask, vector_KeyPoint* keypoints, Mat_t* descriptors, 
                                   bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectordetectAndComputeV2(struct  SimpleBlobDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* mask, vector_KeyPoint* keypoints, UMat_t* descriptors, 
                                   bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvSimpleBlobDetectorempty(struct  SimpleBlobDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvSimpleBlobDetectorgetDefaultName(struct  SimpleBlobDetector_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSimpleBlobDetectorread(struct  SimpleBlobDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorreadV2(struct  SimpleBlobDetector_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorsave(struct  SimpleBlobDetector_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorwrite(struct  SimpleBlobDetector_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSimpleBlobDetectorwriteV2(struct  SimpleBlobDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(uchar) pCvSimpleBlobDetector_ParamsGet_blobColor(SimpleBlobDetector_Params_t* p)
{
    uchar retval;
try {

    retval =   (p->v->blobColor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_blobColor(SimpleBlobDetector_Params_t* p, uchar propval)
{
try {
    p->v->blobColor = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(bool) pCvSimpleBlobDetector_ParamsGet_filterByArea(SimpleBlobDetector_Params_t* p)
{
    bool retval;
try {

    retval =   (p->v->filterByArea);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_filterByArea(SimpleBlobDetector_Params_t* p, bool propval)
{
try {
    p->v->filterByArea = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(bool) pCvSimpleBlobDetector_ParamsGet_filterByCircularity(SimpleBlobDetector_Params_t* p)
{
    bool retval;
try {

    retval =   (p->v->filterByCircularity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_filterByCircularity(SimpleBlobDetector_Params_t* p, bool propval)
{
try {
    p->v->filterByCircularity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(bool) pCvSimpleBlobDetector_ParamsGet_filterByColor(SimpleBlobDetector_Params_t* p)
{
    bool retval;
try {

    retval =   (p->v->filterByColor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_filterByColor(SimpleBlobDetector_Params_t* p, bool propval)
{
try {
    p->v->filterByColor = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(bool) pCvSimpleBlobDetector_ParamsGet_filterByConvexity(SimpleBlobDetector_Params_t* p)
{
    bool retval;
try {

    retval =   (p->v->filterByConvexity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_filterByConvexity(SimpleBlobDetector_Params_t* p, bool propval)
{
try {
    p->v->filterByConvexity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(bool) pCvSimpleBlobDetector_ParamsGet_filterByInertia(SimpleBlobDetector_Params_t* p)
{
    bool retval;
try {

    retval =   (p->v->filterByInertia);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_filterByInertia(SimpleBlobDetector_Params_t* p, bool propval)
{
try {
    p->v->filterByInertia = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_maxArea(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->maxArea);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_maxArea(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->maxArea = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_maxCircularity(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->maxCircularity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_maxCircularity(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->maxCircularity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_maxConvexity(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->maxConvexity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_maxConvexity(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->maxConvexity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_maxInertiaRatio(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->maxInertiaRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_maxInertiaRatio(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->maxInertiaRatio = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_maxThreshold(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->maxThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_maxThreshold(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->maxThreshold = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_minArea(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minArea);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minArea(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->minArea = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_minCircularity(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minCircularity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minCircularity(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->minCircularity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_minConvexity(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minConvexity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minConvexity(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->minConvexity = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_minDistBetweenBlobs(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minDistBetweenBlobs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minDistBetweenBlobs(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->minDistBetweenBlobs = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_minInertiaRatio(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minInertiaRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minInertiaRatio(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->minInertiaRatio = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(size_t) pCvSimpleBlobDetector_ParamsGet_minRepeatability(SimpleBlobDetector_Params_t* p)
{
    size_t retval;
try {

    retval =   (p->v->minRepeatability);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minRepeatability(SimpleBlobDetector_Params_t* p, size_t propval)
{
try {
    p->v->minRepeatability = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_minThreshold(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->minThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_minThreshold(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->minThreshold = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvSimpleBlobDetector_ParamsGet_thresholdStep(SimpleBlobDetector_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->thresholdStep);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvSimpleBlobDetector_ParamsSet_thresholdStep(SimpleBlobDetector_Params_t* p, float propval)
{
try {
    p->v->thresholdStep = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(void)   pCvKAZEclear(struct  KAZE_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEcompute(struct  KAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEcomputeV2(struct  KAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEcomputeV3(struct  KAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEcomputeV4(struct  KAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_KAZE*)   pCvKAZE_create(bool extended, bool upright, float threshold, int nOctaves, int nOctaveLayers, 
                                   KAZE::DiffusivityType diffusivity)
{
Ptr_KAZE* retval = 0;
try {
 
    Ptr_KAZE p = cv::KAZE::create(extended, upright, threshold, nOctaves, nOctaveLayers, diffusivity);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvKAZEdefaultNorm(struct  KAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvKAZEdescriptorSize(struct  KAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvKAZEdescriptorType(struct  KAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvKAZEdetect(struct  KAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEdetectV2(struct  KAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEdetectV3(struct  KAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEdetectV4(struct  KAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEdetectAndCompute(struct  KAZE_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEdetectAndComputeV2(struct  KAZE_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvKAZEempty(struct  KAZE_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvKAZEgetDefaultName(struct  KAZE_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(KAZE::DiffusivityType)   pCvKAZEgetDiffusivity(struct  KAZE_t* wrapper)
{
    KAZE::DiffusivityType retval;
try {
 
    retval = wrapper->v->getDiffusivity();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvKAZEgetExtended(struct  KAZE_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getExtended();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvKAZEgetNOctaveLayers(struct  KAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNOctaveLayers();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvKAZEgetNOctaves(struct  KAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNOctaves();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvKAZEgetThreshold(struct  KAZE_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvKAZEgetUpright(struct  KAZE_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpright();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvKAZEread(struct  KAZE_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEreadV2(struct  KAZE_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsave(struct  KAZE_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsetDiffusivity(struct  KAZE_t* wrapper, KAZE::DiffusivityType diff)
{
try {
 
    wrapper->v->setDiffusivity(diff);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsetExtended(struct  KAZE_t* wrapper, bool extended)
{
try {
 
    wrapper->v->setExtended(extended);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsetNOctaveLayers(struct  KAZE_t* wrapper, int octaveLayers)
{
try {
 
    wrapper->v->setNOctaveLayers(octaveLayers);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsetNOctaves(struct  KAZE_t* wrapper, int octaves)
{
try {
 
    wrapper->v->setNOctaves(octaves);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsetThreshold(struct  KAZE_t* wrapper, double threshold)
{
try {
 
    wrapper->v->setThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEsetUpright(struct  KAZE_t* wrapper, bool upright)
{
try {
 
    wrapper->v->setUpright(upright);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEwrite(struct  KAZE_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvKAZEwriteV2(struct  KAZE_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEclear(struct  AKAZE_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEcompute(struct  AKAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEcomputeV2(struct  AKAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* descriptors)
{
try {
 
    wrapper->v->compute(*image->v, *keypoints, *descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEcomputeV3(struct  AKAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEcomputeV4(struct  AKAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* descriptors)
{
try {
 
    wrapper->v->compute(*images, *keypoints, *descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_AKAZE*)   pCvAKAZE_create(AKAZE::DescriptorType descriptor_type, int descriptor_size, 
                                   int descriptor_channels, float threshold, int nOctaves, int nOctaveLayers, 
                                   KAZE::DiffusivityType diffusivity)
{
Ptr_AKAZE* retval = 0;
try {
 
    Ptr_AKAZE p = cv::AKAZE::create(descriptor_type, descriptor_size, descriptor_channels, threshold, nOctaves, nOctaveLayers, diffusivity);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEdefaultNorm(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->defaultNorm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEdescriptorSize(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEdescriptorType(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAKAZEdetect(struct  AKAZE_t* wrapper, Mat_t* image, vector_KeyPoint* keypoints, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEdetectV2(struct  AKAZE_t* wrapper, UMat_t* image, vector_KeyPoint* keypoints, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->detect(*image->v, *keypoints, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEdetectV3(struct  AKAZE_t* wrapper, vector_Mat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEdetectV4(struct  AKAZE_t* wrapper, vector_UMat* images, 
                                   vector_vector_KeyPoint* keypoints, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->detect(*images, *keypoints, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEdetectAndCompute(struct  AKAZE_t* wrapper, Mat_t* image, Mat_t* mask, 
                                   vector_KeyPoint* keypoints, Mat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEdetectAndComputeV2(struct  AKAZE_t* wrapper, UMat_t* image, UMat_t* mask, 
                                   vector_KeyPoint* keypoints, UMat_t* descriptors, bool useProvidedKeypoints)
{
try {
 
    wrapper->v->detectAndCompute(*image->v, *mask->v, *keypoints, *descriptors->v, useProvidedKeypoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAKAZEempty(struct  AKAZE_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvAKAZEgetDefaultName(struct  AKAZE_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEgetDescriptorChannels(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDescriptorChannels();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEgetDescriptorSize(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDescriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(AKAZE::DescriptorType)   pCvAKAZEgetDescriptorType(struct  AKAZE_t* wrapper)
{
    AKAZE::DescriptorType retval;
try {
 
    retval = wrapper->v->getDescriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(KAZE::DiffusivityType)   pCvAKAZEgetDiffusivity(struct  AKAZE_t* wrapper)
{
    KAZE::DiffusivityType retval;
try {
 
    retval = wrapper->v->getDiffusivity();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEgetNOctaveLayers(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNOctaveLayers();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAKAZEgetNOctaves(struct  AKAZE_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNOctaves();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvAKAZEgetThreshold(struct  AKAZE_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAKAZEread(struct  AKAZE_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEreadV2(struct  AKAZE_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsave(struct  AKAZE_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetDescriptorChannels(struct  AKAZE_t* wrapper, int dch)
{
try {
 
    wrapper->v->setDescriptorChannels(dch);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetDescriptorSize(struct  AKAZE_t* wrapper, int dsize)
{
try {
 
    wrapper->v->setDescriptorSize(dsize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetDescriptorType(struct  AKAZE_t* wrapper, AKAZE::DescriptorType dtype)
{
try {
 
    wrapper->v->setDescriptorType(dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetDiffusivity(struct  AKAZE_t* wrapper, KAZE::DiffusivityType diff)
{
try {
 
    wrapper->v->setDiffusivity(diff);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetNOctaveLayers(struct  AKAZE_t* wrapper, int octaveLayers)
{
try {
 
    wrapper->v->setNOctaveLayers(octaveLayers);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetNOctaves(struct  AKAZE_t* wrapper, int octaves)
{
try {
 
    wrapper->v->setNOctaves(octaves);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEsetThreshold(struct  AKAZE_t* wrapper, double threshold)
{
try {
 
    wrapper->v->setThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEwrite(struct  AKAZE_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAKAZEwriteV2(struct  AKAZE_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcheradd(struct  DescriptorMatcher_t* wrapper, vector_Mat* descriptors)
{
try {
 
    wrapper->v->add(*descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcheraddV2(struct  DescriptorMatcher_t* wrapper, vector_UMat* descriptors)
{
try {
 
    wrapper->v->add(*descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherclear(struct  DescriptorMatcher_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_DescriptorMatcher*)   pCvDescriptorMatcherclone(struct  DescriptorMatcher_t* wrapper, bool emptyTrainData)
{
Ptr_DescriptorMatcher* retval = 0;
try {
 
    Ptr_DescriptorMatcher p = wrapper->v->clone(emptyTrainData);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_DescriptorMatcher*)   pCvDescriptorMatcher_create(string_t* descriptorMatcherType)
{
Ptr_DescriptorMatcher* retval = 0;
try {
 
    Ptr_DescriptorMatcher p = cv::DescriptorMatcher::create(string(descriptorMatcherType->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_DescriptorMatcher*)   pCvDescriptorMatcher_createV2(DescriptorMatcher::MatcherType matcherType)
{
Ptr_DescriptorMatcher* retval = 0;
try {
 
    Ptr_DescriptorMatcher p = cv::DescriptorMatcher::create(matcherType);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvDescriptorMatcherempty(struct  DescriptorMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvDescriptorMatchergetDefaultName(struct  DescriptorMatcher_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Mat*)   pCvDescriptorMatchergetTrainDescriptors(struct  DescriptorMatcher_t* wrapper)
{
vector_Mat* retval = new vector_Mat();
try {
 
    vector_Mat tr = wrapper->v->getTrainDescriptors();
    vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvDescriptorMatcherisMaskSupported(struct  DescriptorMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isMaskSupported();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvDescriptorMatcherknnMatch(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, int k, Mat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->knnMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, k, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherknnMatchV2(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, int k, UMat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->knnMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, k, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherknnMatchV3(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_Mat* masks, bool compactResult)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    wrapper->v->knnMatch(*queryDescriptors->v, *matches, k, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherknnMatchV4(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_UMat* masks, bool compactResult)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    wrapper->v->knnMatch(*queryDescriptors->v, *matches, k, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatchermatch(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_DMatch* matches, Mat_t* mask)
{
try {
 
    wrapper->v->match(*queryDescriptors->v, *trainDescriptors->v, *matches, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatchermatchV2(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_DMatch* matches, UMat_t* mask)
{
try {
 
    wrapper->v->match(*queryDescriptors->v, *trainDescriptors->v, *matches, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatchermatchV3(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->match(*queryDescriptors->v, *matches, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatchermatchV4(struct  DescriptorMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->match(*queryDescriptors->v, *matches, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherradiusMatch(struct  DescriptorMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   Mat_t* mask, bool compactResult)
{
try {
 
    wrapper->v->radiusMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, maxDistance, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherradiusMatchV2(struct  DescriptorMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, UMat_t* trainDescriptors, vector_vector_DMatch* matches, 
                                   float maxDistance, UMat_t* mask, bool compactResult)
{
try {
 
    wrapper->v->radiusMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, maxDistance, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherradiusMatchV3(struct  DescriptorMatcher_t* wrapper, 
                                   Mat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_Mat* masks, bool compactResult)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    wrapper->v->radiusMatch(*queryDescriptors->v, *matches, maxDistance, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherradiusMatchV4(struct  DescriptorMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_UMat* masks, bool compactResult)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    wrapper->v->radiusMatch(*queryDescriptors->v, *matches, maxDistance, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherread(struct  DescriptorMatcher_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherreadV2(struct  DescriptorMatcher_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatchersave(struct  DescriptorMatcher_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatchertrain(struct  DescriptorMatcher_t* wrapper)
{
try {
 
    wrapper->v->train();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherwrite(struct  DescriptorMatcher_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDescriptorMatcherwriteV2(struct  DescriptorMatcher_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcheradd(struct  BFMatcher_t* wrapper, vector_Mat* descriptors)
{
try {
 
    wrapper->v->add(*descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcheraddV2(struct  BFMatcher_t* wrapper, vector_UMat* descriptors)
{
try {
 
    wrapper->v->add(*descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherclear(struct  BFMatcher_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_DescriptorMatcher*)   pCvBFMatcherclone(struct  BFMatcher_t* wrapper, bool emptyTrainData)
{
Ptr_DescriptorMatcher* retval = 0;
try {
 
    Ptr_DescriptorMatcher p = wrapper->v->clone(emptyTrainData);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_BFMatcher*)   pCvBFMatcher_create(int normType, bool crossCheck)
{
Ptr_BFMatcher* retval = 0;
try {
 
    Ptr_BFMatcher p = cv::BFMatcher::create(normType, crossCheck);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvBFMatcherempty(struct  BFMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvBFMatchergetDefaultName(struct  BFMatcher_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Mat*)   pCvBFMatchergetTrainDescriptors(struct  BFMatcher_t* wrapper)
{
vector_Mat* retval = new vector_Mat();
try {
 
    vector_Mat tr = wrapper->v->getTrainDescriptors();
    vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvBFMatcherisMaskSupported(struct  BFMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isMaskSupported();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBFMatcherknnMatch(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, int k, Mat_t* mask, bool compactResult)
{
try {
 
    wrapper->v->knnMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, k, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherknnMatchV2(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, int k, UMat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->knnMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, k, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherknnMatchV3(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_Mat* masks, bool compactResult)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    wrapper->v->knnMatch(*queryDescriptors->v, *matches, k, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherknnMatchV4(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_UMat* masks, bool compactResult)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    wrapper->v->knnMatch(*queryDescriptors->v, *matches, k, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatchermatch(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_DMatch* matches, Mat_t* mask)
{
try {
 
    wrapper->v->match(*queryDescriptors->v, *trainDescriptors->v, *matches, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatchermatchV2(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_DMatch* matches, UMat_t* mask)
{
try {
 
    wrapper->v->match(*queryDescriptors->v, *trainDescriptors->v, *matches, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatchermatchV3(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->match(*queryDescriptors->v, *matches, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatchermatchV4(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->match(*queryDescriptors->v, *matches, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherradiusMatch(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, Mat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->radiusMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, maxDistance, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherradiusMatchV2(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, UMat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->radiusMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, maxDistance, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherradiusMatchV3(struct  BFMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, float maxDistance, vector_Mat* masks, bool compactResult)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    wrapper->v->radiusMatch(*queryDescriptors->v, *matches, maxDistance, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherradiusMatchV4(struct  BFMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, float maxDistance, vector_UMat* masks, bool compactResult)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    wrapper->v->radiusMatch(*queryDescriptors->v, *matches, maxDistance, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherread(struct  BFMatcher_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->read(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherreadV2(struct  BFMatcher_t* wrapper, FileNode_t* arg1)
{
try {
 
    wrapper->v->read(*arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatchersave(struct  BFMatcher_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatchertrain(struct  BFMatcher_t* wrapper)
{
try {
 
    wrapper->v->train();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherwrite(struct  BFMatcher_t* wrapper, string_t* fileName)
{
try {
 
    wrapper->v->write(string(fileName->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBFMatcherwriteV2(struct  BFMatcher_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcheradd(struct  FlannBasedMatcher_t* wrapper, vector_Mat* descriptors)
{
try {
 
    wrapper->v->add(*descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcheraddV2(struct  FlannBasedMatcher_t* wrapper, vector_UMat* descriptors)
{
try {
 
    wrapper->v->add(*descriptors);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherclear(struct  FlannBasedMatcher_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_DescriptorMatcher*)   pCvFlannBasedMatcherclone(struct  FlannBasedMatcher_t* wrapper, bool emptyTrainData)
{
Ptr_DescriptorMatcher* retval = 0;
try {
 
    Ptr_DescriptorMatcher p = wrapper->v->clone(emptyTrainData);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_FlannBasedMatcher*)   pCvFlannBasedMatcher_create()
{
Ptr_FlannBasedMatcher* retval = 0;
try {
 
    Ptr_FlannBasedMatcher p = cv::FlannBasedMatcher::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFlannBasedMatcherempty(struct  FlannBasedMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvFlannBasedMatchergetDefaultName(struct  FlannBasedMatcher_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Mat*)   pCvFlannBasedMatchergetTrainDescriptors(struct  FlannBasedMatcher_t* wrapper)
{
vector_Mat* retval = new vector_Mat();
try {
 
    vector_Mat tr = wrapper->v->getTrainDescriptors();
    vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFlannBasedMatcherisMaskSupported(struct  FlannBasedMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isMaskSupported();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFlannBasedMatcherknnMatch(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, int k, Mat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->knnMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, k, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherknnMatchV2(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_vector_DMatch* matches, int k, UMat_t* mask, 
                                   bool compactResult)
{
try {
 
    wrapper->v->knnMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, k, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherknnMatchV3(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_Mat* masks, bool compactResult)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    wrapper->v->knnMatch(*queryDescriptors->v, *matches, k, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherknnMatchV4(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_vector_DMatch* matches, int k, vector_UMat* masks, bool compactResult)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    wrapper->v->knnMatch(*queryDescriptors->v, *matches, k, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatchermatch(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_DMatch* matches, Mat_t* mask)
{
try {
 
    wrapper->v->match(*queryDescriptors->v, *trainDescriptors->v, *matches, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatchermatchV2(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   UMat_t* trainDescriptors, vector_DMatch* matches, UMat_t* mask)
{
try {
 
    wrapper->v->match(*queryDescriptors->v, *trainDescriptors->v, *matches, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatchermatchV3(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_Mat* masks)
{
try {
 
    vector_Mat x3; if (masks == 0) { x3 = vector_Mat(); masks = &x3; };       
    wrapper->v->match(*queryDescriptors->v, *matches, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatchermatchV4(struct  FlannBasedMatcher_t* wrapper, UMat_t* queryDescriptors, 
                                   vector_DMatch* matches, vector_UMat* masks)
{
try {
 
    vector_UMat x3; if (masks == 0) { x3 = vector_UMat(); masks = &x3; };       
    wrapper->v->match(*queryDescriptors->v, *matches, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherradiusMatch(struct  FlannBasedMatcher_t* wrapper, Mat_t* queryDescriptors, 
                                   Mat_t* trainDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   Mat_t* mask, bool compactResult)
{
try {
 
    wrapper->v->radiusMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, maxDistance, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherradiusMatchV2(struct  FlannBasedMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, UMat_t* trainDescriptors, vector_vector_DMatch* matches, 
                                   float maxDistance, UMat_t* mask, bool compactResult)
{
try {
 
    wrapper->v->radiusMatch(*queryDescriptors->v, *trainDescriptors->v, *matches, maxDistance, inparrDefault(mask), compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherradiusMatchV3(struct  FlannBasedMatcher_t* wrapper, 
                                   Mat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_Mat* masks, bool compactResult)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    wrapper->v->radiusMatch(*queryDescriptors->v, *matches, maxDistance, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatcherradiusMatchV4(struct  FlannBasedMatcher_t* wrapper, 
                                   UMat_t* queryDescriptors, vector_vector_DMatch* matches, float maxDistance, 
                                   vector_UMat* masks, bool compactResult)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    wrapper->v->radiusMatch(*queryDescriptors->v, *matches, maxDistance, *masks, compactResult);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatchersave(struct  FlannBasedMatcher_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFlannBasedMatchertrain(struct  FlannBasedMatcher_t* wrapper)
{
try {
 
    wrapper->v->train();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBOWTraineradd(struct  BOWTrainer_t* wrapper, Mat_t* descriptors)
{
try {
 
    wrapper->v->add(*descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBOWTrainerclear(struct  BOWTrainer_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvBOWTrainercluster(struct  BOWTrainer_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->cluster();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvBOWTrainerclusterV2(struct  BOWTrainer_t* wrapper, Mat_t* descriptors)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->cluster(*descriptors->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBOWTrainerdescriptorsCount(struct  BOWTrainer_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorsCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Mat*)   pCvBOWTrainergetDescriptors(struct  BOWTrainer_t* wrapper)
{
vector_Mat* retval = new vector_Mat();
try {
 
    vector_Mat tr = wrapper->v->getDescriptors();
    vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBOWKMeansTraineradd(struct  BOWKMeansTrainer_t* wrapper, Mat_t* descriptors)
{
try {
 
    wrapper->v->add(*descriptors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBOWKMeansTrainerclear(struct  BOWKMeansTrainer_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvBOWKMeansTrainercluster(struct  BOWKMeansTrainer_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->cluster();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvBOWKMeansTrainerclusterV2(struct  BOWKMeansTrainer_t* wrapper, Mat_t* descriptors)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->cluster(*descriptors->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBOWKMeansTrainerdescriptorsCount(struct  BOWKMeansTrainer_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorsCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Mat*)   pCvBOWKMeansTrainergetDescriptors(struct  BOWKMeansTrainer_t* wrapper)
{
vector_Mat* retval = new vector_Mat();
try {
 
    vector_Mat tr = wrapper->v->getDescriptors();
    vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBOWImgDescriptorExtractorcompute(struct  BOWImgDescriptorExtractor_t* wrapper, 
                                   Mat_t* image, vector_KeyPoint* keypoints, Mat_t* imgDescriptor)
{
try {
 
    wrapper->v->compute2(*image->v, *keypoints, *imgDescriptor->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvBOWImgDescriptorExtractordescriptorSize(struct  BOWImgDescriptorExtractor_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBOWImgDescriptorExtractordescriptorType(struct  BOWImgDescriptorExtractor_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->descriptorType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvBOWImgDescriptorExtractorgetVocabulary(struct  BOWImgDescriptorExtractor_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getVocabulary();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBOWImgDescriptorExtractorsetVocabulary(struct  BOWImgDescriptorExtractor_t* wrapper, 
                                   Mat_t* vocabulary)
{
try {
 
    wrapper->v->setVocabulary(*vocabulary->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvflann_Indexbuild(struct  flann_Index_t* wrapper, Mat_t* features, IndexParams_t* params, 
                                   cvflann::flann_distance_t distType)
{
try {
 
    wrapper->v->build(*features->v, *params->v, distType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvflann_IndexbuildV2(struct  flann_Index_t* wrapper, UMat_t* features, IndexParams_t* params, 
                                   cvflann::flann_distance_t distType)
{
try {
 
    wrapper->v->build(*features->v, *params->v, distType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(cvflann::flann_algorithm_t)   pCvflann_IndexgetAlgorithm(struct  flann_Index_t* wrapper)
{
    cvflann::flann_algorithm_t retval;
try {
 
    retval = wrapper->v->getAlgorithm();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(cvflann::flann_distance_t)   pCvflann_IndexgetDistance(struct  flann_Index_t* wrapper)
{
    cvflann::flann_distance_t retval;
try {
 
    retval = wrapper->v->getDistance();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvflann_IndexknnSearch(struct  flann_Index_t* wrapper, Mat_t* query, Mat_t* indices, 
                                   Mat_t* dists, int knn, SearchParams_t* params)
{
try {
 
     flann::SearchParams x5; if (params == 0) { SearchParams_t a5; a5.v = &x5; params = &a5; };         
    wrapper->v->knnSearch(*query->v, *indices->v, *dists->v, knn, *params->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvflann_IndexknnSearchV2(struct  flann_Index_t* wrapper, UMat_t* query, UMat_t* indices, 
                                   UMat_t* dists, int knn, SearchParams_t* params)
{
try {
 
     flann::SearchParams x5; if (params == 0) { SearchParams_t a5; a5.v = &x5; params = &a5; };         
    wrapper->v->knnSearch(*query->v, *indices->v, *dists->v, knn, *params->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvflann_Indexload(struct  flann_Index_t* wrapper, Mat_t* features, string_t* filename)
{
    bool retval;
try {
 
    retval = wrapper->v->load(*features->v, string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvflann_IndexloadV2(struct  flann_Index_t* wrapper, UMat_t* features, string_t* filename)
{
    bool retval;
try {
 
    retval = wrapper->v->load(*features->v, string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvflann_IndexradiusSearch(struct  flann_Index_t* wrapper, Mat_t* query, Mat_t* indices, 
                                   Mat_t* dists, double radius, int maxResults, SearchParams_t* params)
{
    int retval = 0;
try {
 
     flann::SearchParams x6; if (params == 0) { SearchParams_t a6; a6.v = &x6; params = &a6; };         
    retval = wrapper->v->radiusSearch(*query->v, *indices->v, *dists->v, radius, maxResults, *params->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvflann_IndexradiusSearchV2(struct  flann_Index_t* wrapper, UMat_t* query, UMat_t* indices, 
                                   UMat_t* dists, double radius, int maxResults, SearchParams_t* params)
{
    int retval = 0;
try {
 
     flann::SearchParams x6; if (params == 0) { SearchParams_t a6; a6.v = &x6; params = &a6; };         
    retval = wrapper->v->radiusSearch(*query->v, *indices->v, *dists->v, radius, maxResults, *params->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvflann_Indexrelease(struct  flann_Index_t* wrapper)
{
try {
 
    wrapper->v->release();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvflann_Indexsave(struct  flann_Index_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughclear(struct  GeneralizedHough_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughdetect(struct  GeneralizedHough_t* wrapper, Mat_t* image, Mat_t* positions, 
                                   Mat_t* votes)
{
try {
 
    wrapper->v->detect(*image->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughdetectV2(struct  GeneralizedHough_t* wrapper, UMat_t* image, 
                                   UMat_t* positions, UMat_t* votes)
{
try {
 
    wrapper->v->detect(*image->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughdetectV3(struct  GeneralizedHough_t* wrapper, Mat_t* edges, Mat_t* dx, 
                                   Mat_t* dy, Mat_t* positions, Mat_t* votes)
{
try {
 
    wrapper->v->detect(*edges->v, *dx->v, *dy->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughdetectV4(struct  GeneralizedHough_t* wrapper, UMat_t* edges, UMat_t* dx, 
                                   UMat_t* dy, UMat_t* positions, UMat_t* votes)
{
try {
 
    wrapper->v->detect(*edges->v, *dx->v, *dy->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvGeneralizedHoughempty(struct  GeneralizedHough_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughgetCannyHighThresh(struct  GeneralizedHough_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCannyHighThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughgetCannyLowThresh(struct  GeneralizedHough_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCannyLowThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvGeneralizedHoughgetDefaultName(struct  GeneralizedHough_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughgetDp(struct  GeneralizedHough_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDp();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughgetMaxBufferSize(struct  GeneralizedHough_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxBufferSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughgetMinDist(struct  GeneralizedHough_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinDist();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvGeneralizedHoughread(struct  GeneralizedHough_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsave(struct  GeneralizedHough_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetCannyHighThresh(struct  GeneralizedHough_t* wrapper, 
                                   int cannyHighThresh)
{
try {
 
    wrapper->v->setCannyHighThresh(cannyHighThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetCannyLowThresh(struct  GeneralizedHough_t* wrapper, int cannyLowThresh)
{
try {
 
    wrapper->v->setCannyLowThresh(cannyLowThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetDp(struct  GeneralizedHough_t* wrapper, double dp)
{
try {
 
    wrapper->v->setDp(dp);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetMaxBufferSize(struct  GeneralizedHough_t* wrapper, int maxBufferSize)
{
try {
 
    wrapper->v->setMaxBufferSize(maxBufferSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetMinDist(struct  GeneralizedHough_t* wrapper, double minDist)
{
try {
 
    wrapper->v->setMinDist(minDist);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetTemplate(struct  GeneralizedHough_t* wrapper, Mat_t* templ, 
                                   Point_t* templCenter)
{
try {
 
    Point x2; if (templCenter == 0) { Point_t a2; x2 = Point(-1, -1); a2.v = &x2; templCenter = &a2; };     
    wrapper->v->setTemplate(*templ->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetTemplateV2(struct  GeneralizedHough_t* wrapper, UMat_t* templ, 
                                   Point_t* templCenter)
{
try {
 
    Point x2; if (templCenter == 0) { Point_t a2; x2 = Point(-1, -1); a2.v = &x2; templCenter = &a2; };     
    wrapper->v->setTemplate(*templ->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetTemplateV3(struct  GeneralizedHough_t* wrapper, Mat_t* edges, Mat_t* dx, 
                                   Mat_t* dy, Point_t* templCenter)
{
try {
 
    Point x4; if (templCenter == 0) { Point_t a4; x4 = Point(-1, -1); a4.v = &x4; templCenter = &a4; };     
    wrapper->v->setTemplate(*edges->v, *dx->v, *dy->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughsetTemplateV4(struct  GeneralizedHough_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, Point_t* templCenter)
{
try {
 
    Point x4; if (templCenter == 0) { Point_t a4; x4 = Point(-1, -1); a4.v = &x4; templCenter = &a4; };     
    wrapper->v->setTemplate(*edges->v, *dx->v, *dy->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughwrite(struct  GeneralizedHough_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardclear(struct  GeneralizedHoughBallard_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallarddetect(struct  GeneralizedHoughBallard_t* wrapper, Mat_t* image, 
                                   Mat_t* positions, Mat_t* votes)
{
try {
 
    wrapper->v->detect(*image->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallarddetectV2(struct  GeneralizedHoughBallard_t* wrapper, UMat_t* image, 
                                   UMat_t* positions, UMat_t* votes)
{
try {
 
    wrapper->v->detect(*image->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallarddetectV3(struct  GeneralizedHoughBallard_t* wrapper, Mat_t* edges, 
                                   Mat_t* dx, Mat_t* dy, Mat_t* positions, Mat_t* votes)
{
try {
 
    wrapper->v->detect(*edges->v, *dx->v, *dy->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallarddetectV4(struct  GeneralizedHoughBallard_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, UMat_t* positions, UMat_t* votes)
{
try {
 
    wrapper->v->detect(*edges->v, *dx->v, *dy->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvGeneralizedHoughBallardempty(struct  GeneralizedHoughBallard_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughBallardgetCannyHighThresh(struct  GeneralizedHoughBallard_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCannyHighThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughBallardgetCannyLowThresh(struct  GeneralizedHoughBallard_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCannyLowThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvGeneralizedHoughBallardgetDefaultName(struct  GeneralizedHoughBallard_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughBallardgetDp(struct  GeneralizedHoughBallard_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDp();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughBallardgetLevels(struct  GeneralizedHoughBallard_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getLevels();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughBallardgetMaxBufferSize(struct  GeneralizedHoughBallard_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxBufferSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughBallardgetMinDist(struct  GeneralizedHoughBallard_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinDist();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughBallardgetVotesThreshold(struct  GeneralizedHoughBallard_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVotesThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvGeneralizedHoughBallardread(struct  GeneralizedHoughBallard_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsave(struct  GeneralizedHoughBallard_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetCannyHighThresh(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int cannyHighThresh)
{
try {
 
    wrapper->v->setCannyHighThresh(cannyHighThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetCannyLowThresh(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int cannyLowThresh)
{
try {
 
    wrapper->v->setCannyLowThresh(cannyLowThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetDp(struct  GeneralizedHoughBallard_t* wrapper, double dp)
{
try {
 
    wrapper->v->setDp(dp);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetLevels(struct  GeneralizedHoughBallard_t* wrapper, int levels)
{
try {
 
    wrapper->v->setLevels(levels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetMaxBufferSize(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int maxBufferSize)
{
try {
 
    wrapper->v->setMaxBufferSize(maxBufferSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetMinDist(struct  GeneralizedHoughBallard_t* wrapper, 
                                   double minDist)
{
try {
 
    wrapper->v->setMinDist(minDist);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetTemplate(struct  GeneralizedHoughBallard_t* wrapper, 
                                   Mat_t* templ, Point_t* templCenter)
{
try {
 
    Point x2; if (templCenter == 0) { Point_t a2; x2 = Point(-1, -1); a2.v = &x2; templCenter = &a2; };     
    wrapper->v->setTemplate(*templ->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetTemplateV2(struct  GeneralizedHoughBallard_t* wrapper, 
                                   UMat_t* templ, Point_t* templCenter)
{
try {
 
    Point x2; if (templCenter == 0) { Point_t a2; x2 = Point(-1, -1); a2.v = &x2; templCenter = &a2; };     
    wrapper->v->setTemplate(*templ->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetTemplateV3(struct  GeneralizedHoughBallard_t* wrapper, 
                                   Mat_t* edges, Mat_t* dx, Mat_t* dy, Point_t* templCenter)
{
try {
 
    Point x4; if (templCenter == 0) { Point_t a4; x4 = Point(-1, -1); a4.v = &x4; templCenter = &a4; };     
    wrapper->v->setTemplate(*edges->v, *dx->v, *dy->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetTemplateV4(struct  GeneralizedHoughBallard_t* wrapper, 
                                   UMat_t* edges, UMat_t* dx, UMat_t* dy, Point_t* templCenter)
{
try {
 
    Point x4; if (templCenter == 0) { Point_t a4; x4 = Point(-1, -1); a4.v = &x4; templCenter = &a4; };     
    wrapper->v->setTemplate(*edges->v, *dx->v, *dy->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardsetVotesThreshold(struct  GeneralizedHoughBallard_t* wrapper, 
                                   int votesThreshold)
{
try {
 
    wrapper->v->setVotesThreshold(votesThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughBallardwrite(struct  GeneralizedHoughBallard_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilclear(struct  GeneralizedHoughGuil_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuildetect(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* image, 
                                   Mat_t* positions, Mat_t* votes)
{
try {
 
    wrapper->v->detect(*image->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuildetectV2(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* image, 
                                   UMat_t* positions, UMat_t* votes)
{
try {
 
    wrapper->v->detect(*image->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuildetectV3(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* edges, 
                                   Mat_t* dx, Mat_t* dy, Mat_t* positions, Mat_t* votes)
{
try {
 
    wrapper->v->detect(*edges->v, *dx->v, *dy->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuildetectV4(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, UMat_t* positions, UMat_t* votes)
{
try {
 
    wrapper->v->detect(*edges->v, *dx->v, *dy->v, *positions->v, outarrDefault(votes));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvGeneralizedHoughGuilempty(struct  GeneralizedHoughGuil_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetAngleEpsilon(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAngleEpsilon();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetAngleStep(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAngleStep();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetAngleThresh(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getAngleThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetCannyHighThresh(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCannyHighThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetCannyLowThresh(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCannyLowThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvGeneralizedHoughGuilgetDefaultName(struct  GeneralizedHoughGuil_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetDp(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDp();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetLevels(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getLevels();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetMaxAngle(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMaxAngle();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetMaxBufferSize(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxBufferSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetMaxScale(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMaxScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetMinAngle(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinAngle();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetMinDist(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinDist();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetMinScale(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetPosThresh(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPosThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetScaleStep(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getScaleStep();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvGeneralizedHoughGuilgetScaleThresh(struct  GeneralizedHoughGuil_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getScaleThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvGeneralizedHoughGuilgetXi(struct  GeneralizedHoughGuil_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getXi();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvGeneralizedHoughGuilread(struct  GeneralizedHoughGuil_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsave(struct  GeneralizedHoughGuil_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetAngleEpsilon(struct  GeneralizedHoughGuil_t* wrapper, 
                                   double angleEpsilon)
{
try {
 
    wrapper->v->setAngleEpsilon(angleEpsilon);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetAngleStep(struct  GeneralizedHoughGuil_t* wrapper, double angleStep)
{
try {
 
    wrapper->v->setAngleStep(angleStep);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetAngleThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int angleThresh)
{
try {
 
    wrapper->v->setAngleThresh(angleThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetCannyHighThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int cannyHighThresh)
{
try {
 
    wrapper->v->setCannyHighThresh(cannyHighThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetCannyLowThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int cannyLowThresh)
{
try {
 
    wrapper->v->setCannyLowThresh(cannyLowThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetDp(struct  GeneralizedHoughGuil_t* wrapper, double dp)
{
try {
 
    wrapper->v->setDp(dp);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetLevels(struct  GeneralizedHoughGuil_t* wrapper, int levels)
{
try {
 
    wrapper->v->setLevels(levels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetMaxAngle(struct  GeneralizedHoughGuil_t* wrapper, double maxAngle)
{
try {
 
    wrapper->v->setMaxAngle(maxAngle);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetMaxBufferSize(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int maxBufferSize)
{
try {
 
    wrapper->v->setMaxBufferSize(maxBufferSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetMaxScale(struct  GeneralizedHoughGuil_t* wrapper, double maxScale)
{
try {
 
    wrapper->v->setMaxScale(maxScale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetMinAngle(struct  GeneralizedHoughGuil_t* wrapper, double minAngle)
{
try {
 
    wrapper->v->setMinAngle(minAngle);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetMinDist(struct  GeneralizedHoughGuil_t* wrapper, double minDist)
{
try {
 
    wrapper->v->setMinDist(minDist);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetMinScale(struct  GeneralizedHoughGuil_t* wrapper, double minScale)
{
try {
 
    wrapper->v->setMinScale(minScale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetPosThresh(struct  GeneralizedHoughGuil_t* wrapper, int posThresh)
{
try {
 
    wrapper->v->setPosThresh(posThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetScaleStep(struct  GeneralizedHoughGuil_t* wrapper, double scaleStep)
{
try {
 
    wrapper->v->setScaleStep(scaleStep);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetScaleThresh(struct  GeneralizedHoughGuil_t* wrapper, 
                                   int scaleThresh)
{
try {
 
    wrapper->v->setScaleThresh(scaleThresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetTemplate(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* templ, 
                                   Point_t* templCenter)
{
try {
 
    Point x2; if (templCenter == 0) { Point_t a2; x2 = Point(-1, -1); a2.v = &x2; templCenter = &a2; };     
    wrapper->v->setTemplate(*templ->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetTemplateV2(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* templ, 
                                   Point_t* templCenter)
{
try {
 
    Point x2; if (templCenter == 0) { Point_t a2; x2 = Point(-1, -1); a2.v = &x2; templCenter = &a2; };     
    wrapper->v->setTemplate(*templ->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetTemplateV3(struct  GeneralizedHoughGuil_t* wrapper, Mat_t* edges, 
                                   Mat_t* dx, Mat_t* dy, Point_t* templCenter)
{
try {
 
    Point x4; if (templCenter == 0) { Point_t a4; x4 = Point(-1, -1); a4.v = &x4; templCenter = &a4; };     
    wrapper->v->setTemplate(*edges->v, *dx->v, *dy->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetTemplateV4(struct  GeneralizedHoughGuil_t* wrapper, UMat_t* edges, 
                                   UMat_t* dx, UMat_t* dy, Point_t* templCenter)
{
try {
 
    Point x4; if (templCenter == 0) { Point_t a4; x4 = Point(-1, -1); a4.v = &x4; templCenter = &a4; };     
    wrapper->v->setTemplate(*edges->v, *dx->v, *dy->v, *templCenter->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilsetXi(struct  GeneralizedHoughGuil_t* wrapper, double xi)
{
try {
 
    wrapper->v->setXi(xi);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGeneralizedHoughGuilwrite(struct  GeneralizedHoughGuil_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEapply(struct  CLAHE_t* wrapper, Mat_t* src, Mat_t* dst)
{
try {
 
    wrapper->v->apply(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEapplyV2(struct  CLAHE_t* wrapper, UMat_t* src, UMat_t* dst)
{
try {
 
    wrapper->v->apply(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEclear(struct  CLAHE_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEcollectGarbage(struct  CLAHE_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvCLAHEempty(struct  CLAHE_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvCLAHEgetClipLimit(struct  CLAHE_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getClipLimit();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvCLAHEgetDefaultName(struct  CLAHE_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvCLAHEgetTilesGridSize(struct  CLAHE_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getTilesGridSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvCLAHEread(struct  CLAHE_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEsave(struct  CLAHE_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEsetClipLimit(struct  CLAHE_t* wrapper, double clipLimit)
{
try {
 
    wrapper->v->setClipLimit(clipLimit);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEsetTilesGridSize(struct  CLAHE_t* wrapper, Size_t* tileGridSize)
{
try {
 
    wrapper->v->setTilesGridSize(*tileGridSize->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCLAHEwrite(struct  CLAHE_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvSubdiv2DedgeDst(struct  Subdiv2D_t* wrapper, int edge, Point2f_t* dstpt)
{
    int retval = 0;
try {
 
    Point2f* x2; if (dstpt == 0) { Point2f_t a2; x2 = 0; a2.v = x2; dstpt = &a2; };     
    retval = wrapper->v->edgeDst(edge, dstpt->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSubdiv2DedgeOrg(struct  Subdiv2D_t* wrapper, int edge, Point2f_t* orgpt)
{
    int retval = 0;
try {
 
    Point2f* x2; if (orgpt == 0) { Point2f_t a2; x2 = 0; a2.v = x2; orgpt = &a2; };     
    retval = wrapper->v->edgeOrg(edge, orgpt->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSubdiv2DfindNearest(struct  Subdiv2D_t* wrapper, Point2f_t* pt, Point2f_t* nearestPt)
{
    int retval = 0;
try {
 
    Point2f* x2; if (nearestPt == 0) { Point2f_t a2; x2 = 0; a2.v = x2; nearestPt = &a2; };     
    retval = wrapper->v->findNearest(*pt->v, nearestPt->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSubdiv2DgetEdge(struct  Subdiv2D_t* wrapper, int edge, int nextEdgeType)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getEdge(edge, nextEdgeType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSubdiv2DgetEdgeList(struct  Subdiv2D_t* wrapper, vector_Vec4f* edgeList)
{
try {
 
    wrapper->v->getEdgeList(*edgeList);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSubdiv2DgetLeadingEdgeList(struct  Subdiv2D_t* wrapper, vector_int* leadingEdgeList)
{
try {
 
    wrapper->v->getLeadingEdgeList(*leadingEdgeList);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSubdiv2DgetTriangleList(struct  Subdiv2D_t* wrapper, vector_Vec6f* triangleList)
{
try {
 
    wrapper->v->getTriangleList(*triangleList);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Point2f_t*)   pCvSubdiv2DgetVertex(struct  Subdiv2D_t* wrapper, int vertex, int* firstEdge)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->getVertex(vertex, firstEdge);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSubdiv2DgetVoronoiFacetList(struct  Subdiv2D_t* wrapper, vector_int* idx, 
                                   vector_vector_Point2f* facetList, vector_Point2f* facetCenters)
{
try {
 
    wrapper->v->getVoronoiFacetList(*idx, *facetList, *facetCenters);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSubdiv2DinitDelaunay(struct  Subdiv2D_t* wrapper, Rect_t* rect)
{
try {
 
    wrapper->v->initDelaunay(*rect->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvSubdiv2Dinsert(struct  Subdiv2D_t* wrapper, Point2f_t* pt)
{
    int retval = 0;
try {
 
    retval = wrapper->v->insert(*pt->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSubdiv2DinsertV2(struct  Subdiv2D_t* wrapper, vector_Point2f* ptvec)
{
try {
 
    wrapper->v->insert(*ptvec);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvSubdiv2Dlocate(struct  Subdiv2D_t* wrapper, Point2f_t* pt, int edge, int vertex)
{
    int retval = 0;
try {
 
    retval = wrapper->v->locate(*pt->v, edge, vertex);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSubdiv2DnextEdge(struct  Subdiv2D_t* wrapper, int edge)
{
    int retval = 0;
try {
 
    retval = wrapper->v->nextEdge(edge);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSubdiv2DrotateEdge(struct  Subdiv2D_t* wrapper, int edge, int rotate)
{
    int retval = 0;
try {
 
    retval = wrapper->v->rotateEdge(edge, rotate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSubdiv2DsymEdge(struct  Subdiv2D_t* wrapper, int edge)
{
    int retval = 0;
try {
 
    retval = wrapper->v->symEdge(edge);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvLineSegmentDetectorclear(struct  LineSegmentDetector_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvLineSegmentDetectorcompareSegments(struct  LineSegmentDetector_t* wrapper, Size_t* size, 
                                   Mat_t* lines1, Mat_t* lines2, Mat_t* image)
{
    int retval = 0;
try {
 
    retval = wrapper->v->compareSegments(*size->v, *lines1->v, *lines2->v, ioarrDefault(image));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvLineSegmentDetectorcompareSegmentsV2(struct  LineSegmentDetector_t* wrapper, Size_t* size, 
                                   UMat_t* lines1, UMat_t* lines2, UMat_t* image)
{
    int retval = 0;
try {
 
    retval = wrapper->v->compareSegments(*size->v, *lines1->v, *lines2->v, ioarrDefault(image));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvLineSegmentDetectordetect(struct  LineSegmentDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* lines, Mat_t* width, Mat_t* prec, Mat_t* nfa)
{
try {
 
    wrapper->v->detect(*image->v, *lines->v, outarrDefault(width), outarrDefault(prec), outarrDefault(nfa));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLineSegmentDetectordetectV2(struct  LineSegmentDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* lines, UMat_t* width, UMat_t* prec, UMat_t* nfa)
{
try {
 
    wrapper->v->detect(*image->v, *lines->v, outarrDefault(width), outarrDefault(prec), outarrDefault(nfa));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLineSegmentDetectordrawSegments(struct  LineSegmentDetector_t* wrapper, Mat_t* image, 
                                   Mat_t* lines)
{
try {
 
    wrapper->v->drawSegments(*image->v, *lines->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLineSegmentDetectordrawSegmentsV2(struct  LineSegmentDetector_t* wrapper, UMat_t* image, 
                                   UMat_t* lines)
{
try {
 
    wrapper->v->drawSegments(*image->v, *lines->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvLineSegmentDetectorempty(struct  LineSegmentDetector_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvLineSegmentDetectorgetDefaultName(struct  LineSegmentDetector_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvLineSegmentDetectorread(struct  LineSegmentDetector_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLineSegmentDetectorsave(struct  LineSegmentDetector_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLineSegmentDetectorwrite(struct  LineSegmentDetector_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBapplyImage(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Mat_t* image)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->applyImage(*image->v);
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBapplyImageV2(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   UMat_t* image)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->applyImage(*image->v);
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBapplyImageFeatures(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Mat_t* non_edge, Mat_t* gradient_direction, 
                                   Mat_t* gradient_magnitude, Mat_t* image)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->applyImageFeatures(*non_edge->v, *gradient_direction->v, *gradient_magnitude->v, inparrDefault(image));
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBapplyImageFeaturesV2(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   UMat_t* non_edge, UMat_t* gradient_direction, 
                                   UMat_t* gradient_magnitude, UMat_t* image)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->applyImageFeatures(*non_edge->v, *gradient_direction->v, *gradient_magnitude->v, inparrDefault(image));
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvsegmentation_IntelligentScissorsMBbuildMap(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Point_t* sourcePt)
{
try {
 
    wrapper->v->buildMap(*sourcePt->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsegmentation_IntelligentScissorsMBgetContour(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Point_t* targetPt, Mat_t* contour, bool backward)
{
try {
 
    wrapper->v->getContour(*targetPt->v, *contour->v, backward);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsegmentation_IntelligentScissorsMBgetContourV2(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   Point_t* targetPt, UMat_t* contour, bool backward)
{
try {
 
    wrapper->v->getContour(*targetPt->v, *contour->v, backward);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBsetEdgeFeatureCannyParameters(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   double threshold1, double threshold2, 
                                   int apertureSize, bool L2gradient)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->setEdgeFeatureCannyParameters(threshold1, threshold2, apertureSize, L2gradient);
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBsetEdgeFeatureZeroCrossingParameters(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   float gradient_magnitude_min_value)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->setEdgeFeatureZeroCrossingParameters(gradient_magnitude_min_value);
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBsetGradientMagnitudeMaxLimit(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   float gradient_magnitude_threshold_max)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->setGradientMagnitudeMaxLimit(gradient_magnitude_threshold_max);
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(segmentation_IntelligentScissorsMB_t*)   pCvsegmentation_IntelligentScissorsMBsetWeights(struct  segmentation_IntelligentScissorsMB_t* wrapper, 
                                   float weight_non_edge, float weight_gradient_direction, 
                                   float weight_gradient_magnitude)
{
    segmentation_IntelligentScissorsMB_t*  retval = new segmentation_IntelligentScissorsMB_t;
try { 
    segmentation::IntelligentScissorsMB tr = wrapper->v->setWeights(weight_non_edge, weight_gradient_direction, weight_gradient_magnitude);
    segmentation::IntelligentScissorsMB*  t = new segmentation::IntelligentScissorsMB();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(double) pCvml_ParamGridGet_logStep(ml_ParamGrid_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->logStep);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvml_ParamGridSet_logStep(ml_ParamGrid_t* p, double propval)
{
try {
    p->v->logStep = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvml_ParamGridGet_maxVal(ml_ParamGrid_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->maxVal);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvml_ParamGridSet_maxVal(ml_ParamGrid_t* p, double propval)
{
try {
    p->v->maxVal = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvml_ParamGridGet_minVal(ml_ParamGrid_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->minVal);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvml_ParamGridSet_minVal(ml_ParamGrid_t* p, double propval)
{
try {
    p->v->minVal = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(Ptr_ParamGrid*)   pCvml_ParamGrid_create(double minVal, double maxVal, double logstep)
{
Ptr_ParamGrid* retval = 0;
try {
 
    Ptr_ParamGrid p = cv::ml::ParamGrid::create(minVal, maxVal, logstep);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_TrainData*)   pCvml_TrainData_create(Mat_t* samples, int layout, Mat_t* responses, Mat_t* varIdx, 
                                   Mat_t* sampleIdx, Mat_t* sampleWeights, Mat_t* varType)
{
Ptr_TrainData* retval = 0;
try {
 
    Ptr_TrainData p = cv::ml::TrainData::create(*samples->v, layout, *responses->v, inparrDefault(varIdx), inparrDefault(sampleIdx), inparrDefault(sampleWeights), inparrDefault(varType));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_TrainData*)   pCvml_TrainData_createV2(UMat_t* samples, int layout, UMat_t* responses, UMat_t* varIdx, 
                                   UMat_t* sampleIdx, UMat_t* sampleWeights, UMat_t* varType)
{
Ptr_TrainData* retval = 0;
try {
 
    Ptr_TrainData p = cv::ml::TrainData::create(*samples->v, layout, *responses->v, inparrDefault(varIdx), inparrDefault(sampleIdx), inparrDefault(sampleWeights), inparrDefault(varType));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetCatCount(struct  ml_TrainData_t* wrapper, int vi)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCatCount(vi);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetCatMap(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getCatMap();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetCatOfs(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getCatOfs();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetClassLabels(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getClassLabels();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetDefaultSubstValues(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getDefaultSubstValues();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetLayout(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getLayout();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetMissing(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getMissing();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetNAllVars(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNAllVars();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetNSamples(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNSamples();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetNTestSamples(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNTestSamples();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetNTrainSamples(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNTrainSamples();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetNVars(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNVars();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_TrainDatagetNames(struct  ml_TrainData_t* wrapper, vector_String* names)
{
try {
 
    wrapper->v->getNames(*names);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvml_TrainDatagetNormCatResponses(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getNormCatResponses();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_TrainDatagetResponseType(struct  ml_TrainData_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getResponseType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetResponses(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getResponses();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_TrainDatagetSample(struct  ml_TrainData_t* wrapper, Mat_t* varIdx, int sidx, float* buf)
{
try {
 
    wrapper->v->getSample(*varIdx->v, sidx, buf);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_TrainDatagetSampleV2(struct  ml_TrainData_t* wrapper, UMat_t* varIdx, int sidx, 
                                   float* buf)
{
try {
 
    wrapper->v->getSample(*varIdx->v, sidx, buf);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvml_TrainDatagetSampleWeights(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getSampleWeights();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetSamples(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getSamples();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetSubMatrix(Mat_t* matrix, Mat_t* idx, int layout)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::ml::TrainData::getSubMatrix(*matrix->v, *idx->v, layout);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetSubVector(Mat_t* vec, Mat_t* idx)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::ml::TrainData::getSubVector(*vec->v, *idx->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTestNormCatResponses(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTestNormCatResponses();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTestResponses(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTestResponses();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTestSampleIdx(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTestSampleIdx();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTestSampleWeights(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTestSampleWeights();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTestSamples(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTestSamples();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTrainNormCatResponses(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTrainNormCatResponses();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTrainResponses(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTrainResponses();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTrainSampleIdx(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTrainSampleIdx();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTrainSampleWeights(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTrainSampleWeights();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetTrainSamples(struct  ml_TrainData_t* wrapper, int layout, 
                                   bool compressSamples, bool compressVars)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getTrainSamples(layout, compressSamples, compressVars);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_TrainDatagetValues(struct  ml_TrainData_t* wrapper, int vi, Mat_t* sidx, float* values)
{
try {
 
    wrapper->v->getValues(vi, *sidx->v, values);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_TrainDatagetValuesV2(struct  ml_TrainData_t* wrapper, int vi, UMat_t* sidx, 
                                   float* values)
{
try {
 
    wrapper->v->getValues(vi, *sidx->v, values);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvml_TrainDatagetVarIdx(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getVarIdx();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetVarSymbolFlags(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getVarSymbolFlags();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_TrainDatagetVarType(struct  ml_TrainData_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getVarType();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_TrainDatasetTrainTestSplit(struct  ml_TrainData_t* wrapper, int count, bool shuffle)
{
try {
 
    wrapper->v->setTrainTestSplit(count, shuffle);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_TrainDatasetTrainTestSplitRatio(struct  ml_TrainData_t* wrapper, double ratio, 
                                   bool shuffle)
{
try {
 
    wrapper->v->setTrainTestSplitRatio(ratio, shuffle);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_TrainDatashuffleTrainTest(struct  ml_TrainData_t* wrapper)
{
try {
 
    wrapper->v->shuffleTrainTest();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_StatModelcalcError(struct  ml_StatModel_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_StatModelcalcErrorV2(struct  ml_StatModel_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_StatModelclear(struct  ml_StatModel_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_StatModelempty(struct  ml_StatModel_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_StatModelgetDefaultName(struct  ml_StatModel_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_StatModelgetVarCount(struct  ml_StatModel_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_StatModelisClassifier(struct  ml_StatModel_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_StatModelisTrained(struct  ml_StatModel_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_StatModelpredict(struct  ml_StatModel_t* wrapper, Mat_t* samples, Mat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_StatModelpredictV2(struct  ml_StatModel_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_StatModelread(struct  ml_StatModel_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_StatModelsave(struct  ml_StatModel_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_StatModeltrain(struct  ml_StatModel_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_StatModeltrainV2(struct  ml_StatModel_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_StatModeltrainV3(struct  ml_StatModel_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_StatModelwrite(struct  ml_StatModel_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_NormalBayesClassifiercalcError(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_TrainData* data, bool test, Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_NormalBayesClassifiercalcErrorV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_TrainData* data, bool test, UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_NormalBayesClassifierclear(struct  ml_NormalBayesClassifier_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_NormalBayesClassifier*)   pCvml_NormalBayesClassifier_create()
{
Ptr_NormalBayesClassifier* retval = 0;
try {
 
    Ptr_NormalBayesClassifier p = cv::ml::NormalBayesClassifier::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_NormalBayesClassifierempty(struct  ml_NormalBayesClassifier_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_NormalBayesClassifiergetDefaultName(struct  ml_NormalBayesClassifier_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_NormalBayesClassifiergetVarCount(struct  ml_NormalBayesClassifier_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_NormalBayesClassifierisClassifier(struct  ml_NormalBayesClassifier_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_NormalBayesClassifierisTrained(struct  ml_NormalBayesClassifier_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_NormalBayesClassifier*)   pCvml_NormalBayesClassifierload(string_t* filepath, string_t* nodeName)
{
Ptr_NormalBayesClassifier* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_NormalBayesClassifier p = cv::ml::NormalBayesClassifier::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_NormalBayesClassifierpredict(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_NormalBayesClassifierpredictV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   UMat_t* samples, UMat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_NormalBayesClassifierpredictProb(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Mat_t* inputs, Mat_t* outputs, Mat_t* outputProbs, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predictProb(*inputs->v, *outputs->v, *outputProbs->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_NormalBayesClassifierpredictProbV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   UMat_t* inputs, UMat_t* outputs, UMat_t* outputProbs, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predictProb(*inputs->v, *outputs->v, *outputProbs->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_NormalBayesClassifierread(struct  ml_NormalBayesClassifier_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_NormalBayesClassifiersave(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_NormalBayesClassifiertrain(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_NormalBayesClassifiertrainV2(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Mat_t* samples, int layout, Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_NormalBayesClassifiertrainV3(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   UMat_t* samples, int layout, UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_NormalBayesClassifierwrite(struct  ml_NormalBayesClassifier_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_KNearestcalcError(struct  ml_KNearest_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_KNearestcalcErrorV2(struct  ml_KNearest_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_KNearestclear(struct  ml_KNearest_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_KNearest*)   pCvml_KNearest_create()
{
Ptr_KNearest* retval = 0;
try {
 
    Ptr_KNearest p = cv::ml::KNearest::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_KNearestempty(struct  ml_KNearest_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_KNearestfindNearest(struct  ml_KNearest_t* wrapper, Mat_t* samples, int k, 
                                   Mat_t* results, Mat_t* neighborResponses, Mat_t* dist)
{
    float retval = 0;
try {
 
    retval = wrapper->v->findNearest(*samples->v, k, *results->v, outarrDefault(neighborResponses), outarrDefault(dist));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_KNearestfindNearestV2(struct  ml_KNearest_t* wrapper, UMat_t* samples, int k, 
                                   UMat_t* results, UMat_t* neighborResponses, UMat_t* dist)
{
    float retval = 0;
try {
 
    retval = wrapper->v->findNearest(*samples->v, k, *results->v, outarrDefault(neighborResponses), outarrDefault(dist));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_KNearestgetAlgorithmType(struct  ml_KNearest_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getAlgorithmType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_KNearestgetDefaultK(struct  ml_KNearest_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getDefaultK();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_KNearestgetDefaultName(struct  ml_KNearest_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_KNearestgetEmax(struct  ml_KNearest_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getEmax();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_KNearestgetIsClassifier(struct  ml_KNearest_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getIsClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_KNearestgetVarCount(struct  ml_KNearest_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_KNearestisClassifier(struct  ml_KNearest_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_KNearestisTrained(struct  ml_KNearest_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_KNearest*)   pCvml_KNearestload(string_t* filepath)
{
Ptr_KNearest* retval = 0;
try {
 
    Ptr_KNearest p = cv::ml::KNearest::load(string(filepath->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_KNearestpredict(struct  ml_KNearest_t* wrapper, Mat_t* samples, Mat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_KNearestpredictV2(struct  ml_KNearest_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_KNearestread(struct  ml_KNearest_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KNearestsave(struct  ml_KNearest_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KNearestsetAlgorithmType(struct  ml_KNearest_t* wrapper, int _val)
{
try {
 
    wrapper->v->setAlgorithmType(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KNearestsetDefaultK(struct  ml_KNearest_t* wrapper, int _val)
{
try {
 
    wrapper->v->setDefaultK(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KNearestsetEmax(struct  ml_KNearest_t* wrapper, int _val)
{
try {
 
    wrapper->v->setEmax(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KNearestsetIsClassifier(struct  ml_KNearest_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setIsClassifier(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_KNearesttrain(struct  ml_KNearest_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_KNearesttrainV2(struct  ml_KNearest_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_KNearesttrainV3(struct  ml_KNearest_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_KNearestwrite(struct  ml_KNearest_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_SVMcalcError(struct  ml_SVM_t* wrapper, Ptr_TrainData* data, bool test, Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMcalcErrorV2(struct  ml_SVM_t* wrapper, Ptr_TrainData* data, bool test, UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_SVMclear(struct  ml_SVM_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SVM*)   pCvml_SVM_create()
{
Ptr_SVM* retval = 0;
try {
 
    Ptr_SVM p = cv::ml::SVM::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMempty(struct  ml_SVM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetC(struct  ml_SVM_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getC();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_SVMgetClassWeights(struct  ml_SVM_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getClassWeights();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetCoef0(struct  ml_SVM_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getCoef0();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetDecisionFunction(struct  ml_SVM_t* wrapper, int i, Mat_t* alpha, Mat_t* svidx)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDecisionFunction(i, *alpha->v, *svidx->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetDecisionFunctionV2(struct  ml_SVM_t* wrapper, int i, UMat_t* alpha, UMat_t* svidx)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDecisionFunction(i, *alpha->v, *svidx->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_ParamGrid*)   pCvml_SVMgetDefaultGridPtr(int param_id)
{
Ptr_ParamGrid* retval = 0;
try {
 
    Ptr_ParamGrid p = cv::ml::SVM::getDefaultGridPtr(param_id);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_SVMgetDefaultName(struct  ml_SVM_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetDegree(struct  ml_SVM_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDegree();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetGamma(struct  ml_SVM_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_SVMgetKernelType(struct  ml_SVM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getKernelType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetNu(struct  ml_SVM_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getNu();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_SVMgetP(struct  ml_SVM_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getP();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_SVMgetSupportVectors(struct  ml_SVM_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getSupportVectors();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvml_SVMgetTermCriteria(struct  ml_SVM_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_SVMgetType(struct  ml_SVM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_SVMgetUncompressedSupportVectors(struct  ml_SVM_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getUncompressedSupportVectors();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_SVMgetVarCount(struct  ml_SVM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMisClassifier(struct  ml_SVM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMisTrained(struct  ml_SVM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_SVM*)   pCvml_SVMload(string_t* filepath)
{
Ptr_SVM* retval = 0;
try {
 
    Ptr_SVM p = cv::ml::SVM::load(string(filepath->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMpredict(struct  ml_SVM_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMpredictV2(struct  ml_SVM_t* wrapper, UMat_t* samples, UMat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_SVMread(struct  ml_SVM_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsave(struct  ml_SVM_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetC(struct  ml_SVM_t* wrapper, double _val)
{
try {
 
    wrapper->v->setC(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetClassWeights(struct  ml_SVM_t* wrapper, Mat_t* _val)
{
try {
 
    wrapper->v->setClassWeights(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetCoef0(struct  ml_SVM_t* wrapper, double _val)
{
try {
 
    wrapper->v->setCoef0(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetDegree(struct  ml_SVM_t* wrapper, double _val)
{
try {
 
    wrapper->v->setDegree(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetGamma(struct  ml_SVM_t* wrapper, double _val)
{
try {
 
    wrapper->v->setGamma(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetKernel(struct  ml_SVM_t* wrapper, int kernelType)
{
try {
 
    wrapper->v->setKernel(kernelType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetNu(struct  ml_SVM_t* wrapper, double _val)
{
try {
 
    wrapper->v->setNu(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetP(struct  ml_SVM_t* wrapper, double _val)
{
try {
 
    wrapper->v->setP(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetTermCriteria(struct  ml_SVM_t* wrapper, TermCriteria_t* _val)
{
try {
 
    wrapper->v->setTermCriteria(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMsetType(struct  ml_SVM_t* wrapper, int _val)
{
try {
 
    wrapper->v->setType(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_SVMtrain(struct  ml_SVM_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMtrainV2(struct  ml_SVM_t* wrapper, Mat_t* samples, int layout, Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMtrainV3(struct  ml_SVM_t* wrapper, UMat_t* samples, int layout, UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMtrainAuto(struct  ml_SVM_t* wrapper, Mat_t* samples, int layout, Mat_t* responses, 
                                   int kFold, Ptr_ParamGrid* Cgrid, Ptr_ParamGrid* gammaGrid, Ptr_ParamGrid* pGrid, 
                                   Ptr_ParamGrid* nuGrid, Ptr_ParamGrid* coeffGrid, Ptr_ParamGrid* degreeGrid, bool balanced)
{
    bool retval;
try {
 
    Ptr_ParamGrid x5; if (Cgrid == 0) { x5 = ml::SVM::getDefaultGridPtr(ml::SVM::C); Cgrid = &x5; };       
    Ptr_ParamGrid x6; if (gammaGrid == 0) { x6 = ml::SVM::getDefaultGridPtr(ml::SVM::GAMMA); gammaGrid = &x6; };       
    Ptr_ParamGrid x7; if (pGrid == 0) { x7 = ml::SVM::getDefaultGridPtr(ml::SVM::P); pGrid = &x7; };       
    Ptr_ParamGrid x8; if (nuGrid == 0) { x8 = ml::SVM::getDefaultGridPtr(ml::SVM::NU); nuGrid = &x8; };       
    Ptr_ParamGrid x9; if (coeffGrid == 0) { x9 = ml::SVM::getDefaultGridPtr(ml::SVM::COEF); coeffGrid = &x9; };       
    Ptr_ParamGrid x10; if (degreeGrid == 0) { x10 = ml::SVM::getDefaultGridPtr(ml::SVM::DEGREE); degreeGrid = &x10; };       
    retval = wrapper->v->trainAuto(*samples->v, layout, *responses->v, kFold, *Cgrid, *gammaGrid, *pGrid, *nuGrid, *coeffGrid, *degreeGrid, balanced);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMtrainAutoV2(struct  ml_SVM_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses, int kFold, Ptr_ParamGrid* Cgrid, Ptr_ParamGrid* gammaGrid, 
                                   Ptr_ParamGrid* pGrid, Ptr_ParamGrid* nuGrid, Ptr_ParamGrid* coeffGrid, 
                                   Ptr_ParamGrid* degreeGrid, bool balanced)
{
    bool retval;
try {
 
    Ptr_ParamGrid x5; if (Cgrid == 0) { x5 = ml::SVM::getDefaultGridPtr(ml::SVM::C); Cgrid = &x5; };       
    Ptr_ParamGrid x6; if (gammaGrid == 0) { x6 = ml::SVM::getDefaultGridPtr(ml::SVM::GAMMA); gammaGrid = &x6; };       
    Ptr_ParamGrid x7; if (pGrid == 0) { x7 = ml::SVM::getDefaultGridPtr(ml::SVM::P); pGrid = &x7; };       
    Ptr_ParamGrid x8; if (nuGrid == 0) { x8 = ml::SVM::getDefaultGridPtr(ml::SVM::NU); nuGrid = &x8; };       
    Ptr_ParamGrid x9; if (coeffGrid == 0) { x9 = ml::SVM::getDefaultGridPtr(ml::SVM::COEF); coeffGrid = &x9; };       
    Ptr_ParamGrid x10; if (degreeGrid == 0) { x10 = ml::SVM::getDefaultGridPtr(ml::SVM::DEGREE); degreeGrid = &x10; };       
    retval = wrapper->v->trainAuto(*samples->v, layout, *responses->v, kFold, *Cgrid, *gammaGrid, *pGrid, *nuGrid, *coeffGrid, *degreeGrid, balanced);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_SVMwrite(struct  ml_SVM_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_EMcalcError(struct  ml_EM_t* wrapper, Ptr_TrainData* data, bool test, Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_EMcalcErrorV2(struct  ml_EM_t* wrapper, Ptr_TrainData* data, bool test, UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_EMclear(struct  ml_EM_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_EM*)   pCvml_EM_create()
{
Ptr_EM* retval = 0;
try {
 
    Ptr_EM p = cv::ml::EM::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMempty(struct  ml_EM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_EMgetClustersNumber(struct  ml_EM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getClustersNumber();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_EMgetCovarianceMatrixType(struct  ml_EM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCovarianceMatrixType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_EMgetCovs(struct  ml_EM_t* wrapper, vector_Mat* covs)
{
try {
 
    wrapper->v->getCovs(*covs);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvml_EMgetDefaultName(struct  ml_EM_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_EMgetMeans(struct  ml_EM_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getMeans();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvml_EMgetTermCriteria(struct  ml_EM_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_EMgetVarCount(struct  ml_EM_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_EMgetWeights(struct  ml_EM_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getWeights();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMisClassifier(struct  ml_EM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMisTrained(struct  ml_EM_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_EM*)   pCvml_EMload(string_t* filepath, string_t* nodeName)
{
Ptr_EM* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_EM p = cv::ml::EM::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_EMpredict(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_EMpredictV2(struct  ml_EM_t* wrapper, UMat_t* samples, UMat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Vec2d_t*)   pCvml_EMpredict2(struct  ml_EM_t* wrapper, Mat_t* sample, Mat_t* probs)
{
    Vec2d_t*  retval = new Vec2d_t;
try { 
    Vec2d tr = wrapper->v->predict2(*sample->v, *probs->v);
    Vec2d*  t = new Vec2d();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Vec2d_t*)   pCvml_EMpredict2V2(struct  ml_EM_t* wrapper, UMat_t* sample, UMat_t* probs)
{
    Vec2d_t*  retval = new Vec2d_t;
try { 
    Vec2d tr = wrapper->v->predict2(*sample->v, *probs->v);
    Vec2d*  t = new Vec2d();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_EMread(struct  ml_EM_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_EMsave(struct  ml_EM_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_EMsetClustersNumber(struct  ml_EM_t* wrapper, int _val)
{
try {
 
    wrapper->v->setClustersNumber(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_EMsetCovarianceMatrixType(struct  ml_EM_t* wrapper, int _val)
{
try {
 
    wrapper->v->setCovarianceMatrixType(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_EMsetTermCriteria(struct  ml_EM_t* wrapper, TermCriteria_t* _val)
{
try {
 
    wrapper->v->setTermCriteria(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_EMtrain(struct  ml_EM_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainV2(struct  ml_EM_t* wrapper, Mat_t* samples, int layout, Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainV3(struct  ml_EM_t* wrapper, UMat_t* samples, int layout, UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainE(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* means0, Mat_t* covs0, 
                                   Mat_t* weights0, Mat_t* logLikelihoods, Mat_t* labels, Mat_t* probs)
{
    bool retval;
try {
 
    retval = wrapper->v->trainE(*samples->v, *means0->v, inparrDefault(covs0), inparrDefault(weights0), outarrDefault(logLikelihoods), outarrDefault(labels), outarrDefault(probs));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainEV2(struct  ml_EM_t* wrapper, UMat_t* samples, UMat_t* means0, UMat_t* covs0, 
                                   UMat_t* weights0, UMat_t* logLikelihoods, UMat_t* labels, UMat_t* probs)
{
    bool retval;
try {
 
    retval = wrapper->v->trainE(*samples->v, *means0->v, inparrDefault(covs0), inparrDefault(weights0), outarrDefault(logLikelihoods), outarrDefault(labels), outarrDefault(probs));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainEM(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* logLikelihoods, 
                                   Mat_t* labels, Mat_t* probs)
{
    bool retval;
try {
 
    retval = wrapper->v->trainEM(*samples->v, outarrDefault(logLikelihoods), outarrDefault(labels), outarrDefault(probs));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainEMV2(struct  ml_EM_t* wrapper, UMat_t* samples, UMat_t* logLikelihoods, 
                                   UMat_t* labels, UMat_t* probs)
{
    bool retval;
try {
 
    retval = wrapper->v->trainEM(*samples->v, outarrDefault(logLikelihoods), outarrDefault(labels), outarrDefault(probs));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainM(struct  ml_EM_t* wrapper, Mat_t* samples, Mat_t* probs0, Mat_t* logLikelihoods, 
                                   Mat_t* labels, Mat_t* probs)
{
    bool retval;
try {
 
    retval = wrapper->v->trainM(*samples->v, *probs0->v, outarrDefault(logLikelihoods), outarrDefault(labels), outarrDefault(probs));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_EMtrainMV2(struct  ml_EM_t* wrapper, UMat_t* samples, UMat_t* probs0, 
                                   UMat_t* logLikelihoods, UMat_t* labels, UMat_t* probs)
{
    bool retval;
try {
 
    retval = wrapper->v->trainM(*samples->v, *probs0->v, outarrDefault(logLikelihoods), outarrDefault(labels), outarrDefault(probs));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_EMwrite(struct  ml_EM_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_DTreescalcError(struct  ml_DTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_DTreescalcErrorV2(struct  ml_DTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_DTreesclear(struct  ml_DTrees_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_DTrees*)   pCvml_DTrees_create()
{
Ptr_DTrees* retval = 0;
try {
 
    Ptr_DTrees p = cv::ml::DTrees::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreesempty(struct  ml_DTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_DTreesgetCVFolds(struct  ml_DTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCVFolds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_DTreesgetDefaultName(struct  ml_DTrees_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_DTreesgetMaxCategories(struct  ml_DTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxCategories();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_DTreesgetMaxDepth(struct  ml_DTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxDepth();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_DTreesgetMinSampleCount(struct  ml_DTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinSampleCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_DTreesgetPriors(struct  ml_DTrees_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getPriors();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_DTreesgetRegressionAccuracy(struct  ml_DTrees_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getRegressionAccuracy();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreesgetTruncatePrunedTree(struct  ml_DTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getTruncatePrunedTree();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreesgetUse1SERule(struct  ml_DTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUse1SERule();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreesgetUseSurrogates(struct  ml_DTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUseSurrogates();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_DTreesgetVarCount(struct  ml_DTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreesisClassifier(struct  ml_DTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreesisTrained(struct  ml_DTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_DTrees*)   pCvml_DTreesload(string_t* filepath, string_t* nodeName)
{
Ptr_DTrees* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_DTrees p = cv::ml::DTrees::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_DTreespredict(struct  ml_DTrees_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_DTreespredictV2(struct  ml_DTrees_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_DTreesread(struct  ml_DTrees_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessave(struct  ml_DTrees_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetCVFolds(struct  ml_DTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setCVFolds(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetMaxCategories(struct  ml_DTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMaxCategories(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetMaxDepth(struct  ml_DTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMaxDepth(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetMinSampleCount(struct  ml_DTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMinSampleCount(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetPriors(struct  ml_DTrees_t* wrapper, Mat_t* _val)
{
try {
 
    wrapper->v->setPriors(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetRegressionAccuracy(struct  ml_DTrees_t* wrapper, float _val)
{
try {
 
    wrapper->v->setRegressionAccuracy(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetTruncatePrunedTree(struct  ml_DTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setTruncatePrunedTree(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetUse1SERule(struct  ml_DTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUse1SERule(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_DTreessetUseSurrogates(struct  ml_DTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUseSurrogates(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_DTreestrain(struct  ml_DTrees_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreestrainV2(struct  ml_DTrees_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_DTreestrainV3(struct  ml_DTrees_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_DTreeswrite(struct  ml_DTrees_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_RTreescalcError(struct  ml_RTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_RTreescalcErrorV2(struct  ml_RTrees_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_RTreesclear(struct  ml_RTrees_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_RTrees*)   pCvml_RTrees_create()
{
Ptr_RTrees* retval = 0;
try {
 
    Ptr_RTrees p = cv::ml::RTrees::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreesempty(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_RTreesgetActiveVarCount(struct  ml_RTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getActiveVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_RTreesgetCVFolds(struct  ml_RTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCVFolds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreesgetCalculateVarImportance(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getCalculateVarImportance();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_RTreesgetDefaultName(struct  ml_RTrees_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_RTreesgetMaxCategories(struct  ml_RTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxCategories();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_RTreesgetMaxDepth(struct  ml_RTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxDepth();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_RTreesgetMinSampleCount(struct  ml_RTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinSampleCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_RTreesgetOOBError(struct  ml_RTrees_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getOOBError();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_RTreesgetPriors(struct  ml_RTrees_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getPriors();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_RTreesgetRegressionAccuracy(struct  ml_RTrees_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getRegressionAccuracy();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvml_RTreesgetTermCriteria(struct  ml_RTrees_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreesgetTruncatePrunedTree(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getTruncatePrunedTree();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreesgetUse1SERule(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUse1SERule();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreesgetUseSurrogates(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUseSurrogates();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_RTreesgetVarCount(struct  ml_RTrees_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_RTreesgetVarImportance(struct  ml_RTrees_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getVarImportance();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_RTreesgetVotes(struct  ml_RTrees_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
try {
 
    wrapper->v->getVotes(*samples->v, *results->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreesgetVotesV2(struct  ml_RTrees_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
try {
 
    wrapper->v->getVotes(*samples->v, *results->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_RTreesisClassifier(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreesisTrained(struct  ml_RTrees_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_RTrees*)   pCvml_RTreesload(string_t* filepath, string_t* nodeName)
{
Ptr_RTrees* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_RTrees p = cv::ml::RTrees::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_RTreespredict(struct  ml_RTrees_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_RTreespredictV2(struct  ml_RTrees_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_RTreesread(struct  ml_RTrees_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessave(struct  ml_RTrees_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetActiveVarCount(struct  ml_RTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setActiveVarCount(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetCVFolds(struct  ml_RTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setCVFolds(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetCalculateVarImportance(struct  ml_RTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setCalculateVarImportance(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetMaxCategories(struct  ml_RTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMaxCategories(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetMaxDepth(struct  ml_RTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMaxDepth(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetMinSampleCount(struct  ml_RTrees_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMinSampleCount(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetPriors(struct  ml_RTrees_t* wrapper, Mat_t* _val)
{
try {
 
    wrapper->v->setPriors(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetRegressionAccuracy(struct  ml_RTrees_t* wrapper, float _val)
{
try {
 
    wrapper->v->setRegressionAccuracy(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetTermCriteria(struct  ml_RTrees_t* wrapper, TermCriteria_t* _val)
{
try {
 
    wrapper->v->setTermCriteria(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetTruncatePrunedTree(struct  ml_RTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setTruncatePrunedTree(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetUse1SERule(struct  ml_RTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUse1SERule(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_RTreessetUseSurrogates(struct  ml_RTrees_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUseSurrogates(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_RTreestrain(struct  ml_RTrees_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreestrainV2(struct  ml_RTrees_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_RTreestrainV3(struct  ml_RTrees_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_RTreeswrite(struct  ml_RTrees_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_BoostcalcError(struct  ml_Boost_t* wrapper, Ptr_TrainData* data, bool test, Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_BoostcalcErrorV2(struct  ml_Boost_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_Boostclear(struct  ml_Boost_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Boost*)   pCvml_Boost_create()
{
Ptr_Boost* retval = 0;
try {
 
    Ptr_Boost p = cv::ml::Boost::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_Boostempty(struct  ml_Boost_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetBoostType(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getBoostType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetCVFolds(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getCVFolds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_BoostgetDefaultName(struct  ml_Boost_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetMaxCategories(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxCategories();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetMaxDepth(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxDepth();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetMinSampleCount(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMinSampleCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_BoostgetPriors(struct  ml_Boost_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getPriors();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_BoostgetRegressionAccuracy(struct  ml_Boost_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getRegressionAccuracy();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoostgetTruncatePrunedTree(struct  ml_Boost_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getTruncatePrunedTree();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoostgetUse1SERule(struct  ml_Boost_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUse1SERule();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoostgetUseSurrogates(struct  ml_Boost_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUseSurrogates();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetVarCount(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_BoostgetWeakCount(struct  ml_Boost_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getWeakCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_BoostgetWeightTrimRate(struct  ml_Boost_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getWeightTrimRate();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoostisClassifier(struct  ml_Boost_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoostisTrained(struct  ml_Boost_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_Boost*)   pCvml_Boostload(string_t* filepath, string_t* nodeName)
{
Ptr_Boost* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_Boost p = cv::ml::Boost::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_Boostpredict(struct  ml_Boost_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_BoostpredictV2(struct  ml_Boost_t* wrapper, UMat_t* samples, UMat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_Boostread(struct  ml_Boost_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_Boostsave(struct  ml_Boost_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetBoostType(struct  ml_Boost_t* wrapper, int _val)
{
try {
 
    wrapper->v->setBoostType(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetCVFolds(struct  ml_Boost_t* wrapper, int _val)
{
try {
 
    wrapper->v->setCVFolds(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetMaxCategories(struct  ml_Boost_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMaxCategories(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetMaxDepth(struct  ml_Boost_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMaxDepth(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetMinSampleCount(struct  ml_Boost_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMinSampleCount(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetPriors(struct  ml_Boost_t* wrapper, Mat_t* _val)
{
try {
 
    wrapper->v->setPriors(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetRegressionAccuracy(struct  ml_Boost_t* wrapper, float _val)
{
try {
 
    wrapper->v->setRegressionAccuracy(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetTruncatePrunedTree(struct  ml_Boost_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setTruncatePrunedTree(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetUse1SERule(struct  ml_Boost_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUse1SERule(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetUseSurrogates(struct  ml_Boost_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUseSurrogates(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetWeakCount(struct  ml_Boost_t* wrapper, int _val)
{
try {
 
    wrapper->v->setWeakCount(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_BoostsetWeightTrimRate(struct  ml_Boost_t* wrapper, double _val)
{
try {
 
    wrapper->v->setWeightTrimRate(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_Boosttrain(struct  ml_Boost_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoosttrainV2(struct  ml_Boost_t* wrapper, Mat_t* samples, int layout, Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_BoosttrainV3(struct  ml_Boost_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_Boostwrite(struct  ml_Boost_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_ANN_MLPcalcError(struct  ml_ANN_MLP_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_ANN_MLPcalcErrorV2(struct  ml_ANN_MLP_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_ANN_MLPclear(struct  ml_ANN_MLP_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ANN_MLP*)   pCvml_ANN_MLP_create()
{
Ptr_ANN_MLP* retval = 0;
try {
 
    Ptr_ANN_MLP p = cv::ml::ANN_MLP::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_ANN_MLPempty(struct  ml_ANN_MLP_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetAnnealCoolingRatio(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAnnealCoolingRatio();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetAnnealFinalT(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAnnealFinalT();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetAnnealInitialT(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getAnnealInitialT();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_ANN_MLPgetAnnealItePerStep(struct  ml_ANN_MLP_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getAnnealItePerStep();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetBackpropMomentumScale(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getBackpropMomentumScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetBackpropWeightScale(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getBackpropWeightScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_ANN_MLPgetDefaultName(struct  ml_ANN_MLP_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_ANN_MLPgetLayerSizes(struct  ml_ANN_MLP_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getLayerSizes();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetRpropDW0(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getRpropDW0();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetRpropDWMax(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getRpropDWMax();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetRpropDWMin(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getRpropDWMin();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetRpropDWMinus(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getRpropDWMinus();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_ANN_MLPgetRpropDWPlus(struct  ml_ANN_MLP_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getRpropDWPlus();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvml_ANN_MLPgetTermCriteria(struct  ml_ANN_MLP_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_ANN_MLPgetTrainMethod(struct  ml_ANN_MLP_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getTrainMethod();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_ANN_MLPgetVarCount(struct  ml_ANN_MLP_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_ANN_MLPgetWeights(struct  ml_ANN_MLP_t* wrapper, int layerIdx)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getWeights(layerIdx);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_ANN_MLPisClassifier(struct  ml_ANN_MLP_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_ANN_MLPisTrained(struct  ml_ANN_MLP_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_ANN_MLP*)   pCvml_ANN_MLPload(string_t* filepath)
{
Ptr_ANN_MLP* retval = 0;
try {
 
    Ptr_ANN_MLP p = cv::ml::ANN_MLP::load(string(filepath->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_ANN_MLPpredict(struct  ml_ANN_MLP_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_ANN_MLPpredictV2(struct  ml_ANN_MLP_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_ANN_MLPread(struct  ml_ANN_MLP_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsave(struct  ml_ANN_MLP_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetActivationFunction(struct  ml_ANN_MLP_t* wrapper, int _type, double param1, 
                                   double param2)
{
try {
 
    wrapper->v->setActivationFunction(_type, param1, param2);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetAnnealCoolingRatio(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setAnnealCoolingRatio(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetAnnealFinalT(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setAnnealFinalT(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetAnnealInitialT(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setAnnealInitialT(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetAnnealItePerStep(struct  ml_ANN_MLP_t* wrapper, int _val)
{
try {
 
    wrapper->v->setAnnealItePerStep(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetBackpropMomentumScale(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setBackpropMomentumScale(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetBackpropWeightScale(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setBackpropWeightScale(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetLayerSizes(struct  ml_ANN_MLP_t* wrapper, Mat_t* _layer_sizes)
{
try {
 
    wrapper->v->setLayerSizes(*_layer_sizes->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetLayerSizesV2(struct  ml_ANN_MLP_t* wrapper, UMat_t* _layer_sizes)
{
try {
 
    wrapper->v->setLayerSizes(*_layer_sizes->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetRpropDW0(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setRpropDW0(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetRpropDWMax(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setRpropDWMax(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetRpropDWMin(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setRpropDWMin(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetRpropDWMinus(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setRpropDWMinus(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetRpropDWPlus(struct  ml_ANN_MLP_t* wrapper, double _val)
{
try {
 
    wrapper->v->setRpropDWPlus(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetTermCriteria(struct  ml_ANN_MLP_t* wrapper, TermCriteria_t* _val)
{
try {
 
    wrapper->v->setTermCriteria(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_ANN_MLPsetTrainMethod(struct  ml_ANN_MLP_t* wrapper, int method, double param1, 
                                   double param2)
{
try {
 
    wrapper->v->setTrainMethod(method, param1, param2);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_ANN_MLPtrain(struct  ml_ANN_MLP_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_ANN_MLPtrainV2(struct  ml_ANN_MLP_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_ANN_MLPtrainV3(struct  ml_ANN_MLP_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_ANN_MLPwrite(struct  ml_ANN_MLP_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_LogisticRegressioncalcError(struct  ml_LogisticRegression_t* wrapper, 
                                   Ptr_TrainData* data, bool test, Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_LogisticRegressioncalcErrorV2(struct  ml_LogisticRegression_t* wrapper, 
                                   Ptr_TrainData* data, bool test, UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_LogisticRegressionclear(struct  ml_LogisticRegression_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_LogisticRegression*)   pCvml_LogisticRegression_create()
{
Ptr_LogisticRegression* retval = 0;
try {
 
    Ptr_LogisticRegression p = cv::ml::LogisticRegression::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_LogisticRegressionempty(struct  ml_LogisticRegression_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_LogisticRegressiongetDefaultName(struct  ml_LogisticRegression_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_LogisticRegressiongetIterations(struct  ml_LogisticRegression_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvml_LogisticRegressiongetLearningRate(struct  ml_LogisticRegression_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getLearningRate();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_LogisticRegressiongetMiniBatchSize(struct  ml_LogisticRegression_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMiniBatchSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_LogisticRegressiongetRegularization(struct  ml_LogisticRegression_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getRegularization();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvml_LogisticRegressiongetTermCriteria(struct  ml_LogisticRegression_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_LogisticRegressiongetTrainMethod(struct  ml_LogisticRegression_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getTrainMethod();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_LogisticRegressiongetVarCount(struct  ml_LogisticRegression_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_LogisticRegressionget_learnt_thetas(struct  ml_LogisticRegression_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->get_learnt_thetas();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_LogisticRegressionisClassifier(struct  ml_LogisticRegression_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_LogisticRegressionisTrained(struct  ml_LogisticRegression_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_LogisticRegression*)   pCvml_LogisticRegressionload(string_t* filepath, string_t* nodeName)
{
Ptr_LogisticRegression* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_LogisticRegression p = cv::ml::LogisticRegression::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_LogisticRegressionpredict(struct  ml_LogisticRegression_t* wrapper, Mat_t* samples, 
                                   Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_LogisticRegressionpredictV2(struct  ml_LogisticRegression_t* wrapper, UMat_t* samples, 
                                   UMat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_LogisticRegressionread(struct  ml_LogisticRegression_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsave(struct  ml_LogisticRegression_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsetIterations(struct  ml_LogisticRegression_t* wrapper, int _val)
{
try {
 
    wrapper->v->setIterations(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsetLearningRate(struct  ml_LogisticRegression_t* wrapper, double _val)
{
try {
 
    wrapper->v->setLearningRate(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsetMiniBatchSize(struct  ml_LogisticRegression_t* wrapper, int _val)
{
try {
 
    wrapper->v->setMiniBatchSize(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsetRegularization(struct  ml_LogisticRegression_t* wrapper, int _val)
{
try {
 
    wrapper->v->setRegularization(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsetTermCriteria(struct  ml_LogisticRegression_t* wrapper, 
                                   TermCriteria_t* _val)
{
try {
 
    wrapper->v->setTermCriteria(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_LogisticRegressionsetTrainMethod(struct  ml_LogisticRegression_t* wrapper, int _val)
{
try {
 
    wrapper->v->setTrainMethod(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_LogisticRegressiontrain(struct  ml_LogisticRegression_t* wrapper, 
                                   Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_LogisticRegressiontrainV2(struct  ml_LogisticRegression_t* wrapper, Mat_t* samples, 
                                   int layout, Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_LogisticRegressiontrainV3(struct  ml_LogisticRegression_t* wrapper, UMat_t* samples, 
                                   int layout, UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_LogisticRegressionwrite(struct  ml_LogisticRegression_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvml_SVMSGDcalcError(struct  ml_SVMSGD_t* wrapper, Ptr_TrainData* data, bool test, 
                                   Mat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDcalcErrorV2(struct  ml_SVMSGD_t* wrapper, Ptr_TrainData* data, bool test, 
                                   UMat_t* resp)
{
    float retval = 0;
try {
 
    retval = wrapper->v->calcError(*data, test, *resp->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_SVMSGDclear(struct  ml_SVMSGD_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SVMSGD*)   pCvml_SVMSGD_create()
{
Ptr_SVMSGD* retval = 0;
try {
 
    Ptr_SVMSGD p = cv::ml::SVMSGD::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMSGDempty(struct  ml_SVMSGD_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvml_SVMSGDgetDefaultName(struct  ml_SVMSGD_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDgetInitialStepSize(struct  ml_SVMSGD_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getInitialStepSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDgetMarginRegularization(struct  ml_SVMSGD_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getMarginRegularization();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_SVMSGDgetMarginType(struct  ml_SVMSGD_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMarginType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDgetShift(struct  ml_SVMSGD_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getShift();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDgetStepDecreasingPower(struct  ml_SVMSGD_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getStepDecreasingPower();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_SVMSGDgetSvmsgdType(struct  ml_SVMSGD_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSvmsgdType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvml_SVMSGDgetTermCriteria(struct  ml_SVMSGD_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_SVMSGDgetVarCount(struct  ml_SVMSGD_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVarCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvml_SVMSGDgetWeights(struct  ml_SVMSGD_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getWeights();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMSGDisClassifier(struct  ml_SVMSGD_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isClassifier();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMSGDisTrained(struct  ml_SVMSGD_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isTrained();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_SVMSGD*)   pCvml_SVMSGDload(string_t* filepath, string_t* nodeName)
{
Ptr_SVMSGD* retval = 0;
try {
 
    if (nodeName == 0) { string_t a2; a2.v = pEmptyString; nodeName = &a2; };      
    Ptr_SVMSGD p = cv::ml::SVMSGD::load(string(filepath->v), string(nodeName->v));
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDpredict(struct  ml_SVMSGD_t* wrapper, Mat_t* samples, Mat_t* results, int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvml_SVMSGDpredictV2(struct  ml_SVMSGD_t* wrapper, UMat_t* samples, UMat_t* results, 
                                   int flags)
{
    float retval = 0;
try {
 
    retval = wrapper->v->predict(*samples->v, outarrDefault(results), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_SVMSGDread(struct  ml_SVMSGD_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsave(struct  ml_SVMSGD_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetInitialStepSize(struct  ml_SVMSGD_t* wrapper, float InitialStepSize)
{
try {
 
    wrapper->v->setInitialStepSize(InitialStepSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetMarginRegularization(struct  ml_SVMSGD_t* wrapper, float marginRegularization)
{
try {
 
    wrapper->v->setMarginRegularization(marginRegularization);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetMarginType(struct  ml_SVMSGD_t* wrapper, int marginType)
{
try {
 
    wrapper->v->setMarginType(marginType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetOptimalParameters(struct  ml_SVMSGD_t* wrapper, int svmsgdType, int marginType)
{
try {
 
    wrapper->v->setOptimalParameters(svmsgdType, marginType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetStepDecreasingPower(struct  ml_SVMSGD_t* wrapper, float stepDecreasingPower)
{
try {
 
    wrapper->v->setStepDecreasingPower(stepDecreasingPower);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetSvmsgdType(struct  ml_SVMSGD_t* wrapper, int svmsgdType)
{
try {
 
    wrapper->v->setSvmsgdType(svmsgdType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_SVMSGDsetTermCriteria(struct  ml_SVMSGD_t* wrapper, TermCriteria_t* _val)
{
try {
 
    wrapper->v->setTermCriteria(*_val->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvml_SVMSGDtrain(struct  ml_SVMSGD_t* wrapper, Ptr_TrainData* trainData, int flags)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*trainData, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMSGDtrainV2(struct  ml_SVMSGD_t* wrapper, Mat_t* samples, int layout, 
                                   Mat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvml_SVMSGDtrainV3(struct  ml_SVMSGD_t* wrapper, UMat_t* samples, int layout, 
                                   UMat_t* responses)
{
    bool retval;
try {
 
    retval = wrapper->v->train(*samples->v, layout, *responses->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_SVMSGDwrite(struct  ml_SVMSGD_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(vector_int*) pCvml_KDTreeGet_labels(ml_KDTree_t* p)
{
vector_int* retval = new vector_int();
try {

    vector_int tr =    (p->v->labels);
    vector_int_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(int) pCvml_KDTreeGet_maxDepth(ml_KDTree_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->maxDepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(int) pCvml_KDTreeGet_normType(ml_KDTree_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->normType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvml_KDTreeSet_normType(ml_KDTree_t* p, int propval)
{
try {
    p->v->normType = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvml_KDTreeGet_points(ml_KDTree_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->points);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}
CVAPI(void)   pCvml_KDTreebuild(struct  ml_KDTree_t* wrapper, Mat_t* points, bool copyAndReorderPoints)
{
try {
 
    wrapper->v->build(*points->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KDTreebuildV2(struct  ml_KDTree_t* wrapper, UMat_t* points, bool copyAndReorderPoints)
{
try {
 
    wrapper->v->build(*points->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KDTreebuildV3(struct  ml_KDTree_t* wrapper, Mat_t* points, Mat_t* labels, 
                                   bool copyAndReorderPoints)
{
try {
 
    wrapper->v->build(*points->v, *labels->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KDTreebuildV4(struct  ml_KDTree_t* wrapper, UMat_t* points, UMat_t* labels, 
                                   bool copyAndReorderPoints)
{
try {
 
    wrapper->v->build(*points->v, *labels->v, copyAndReorderPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvml_KDTreedims(struct  ml_KDTree_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->dims();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_KDTreefindNearest(struct  ml_KDTree_t* wrapper, Mat_t* vec, int K, int Emax, 
                                   Mat_t* neighborsIdx, Mat_t* neighbors, Mat_t* dist, Mat_t* labels)
{
    int retval = 0;
try {
 
    retval = wrapper->v->findNearest(*vec->v, K, Emax, *neighborsIdx->v, outarrDefault(neighbors), outarrDefault(dist), outarrDefault(labels));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvml_KDTreefindNearestV2(struct  ml_KDTree_t* wrapper, UMat_t* vec, int K, int Emax, 
                                   UMat_t* neighborsIdx, UMat_t* neighbors, UMat_t* dist, UMat_t* labels)
{
    int retval = 0;
try {
 
    retval = wrapper->v->findNearest(*vec->v, K, Emax, *neighborsIdx->v, outarrDefault(neighbors), outarrDefault(dist), outarrDefault(labels));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvml_KDTreefindOrthoRange(struct  ml_KDTree_t* wrapper, Mat_t* minBounds, Mat_t* maxBounds, 
                                   Mat_t* neighborsIdx, Mat_t* neighbors, Mat_t* labels)
{
try {
 
    wrapper->v->findOrthoRange(*minBounds->v, *maxBounds->v, *neighborsIdx->v, outarrDefault(neighbors), outarrDefault(labels));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KDTreefindOrthoRangeV2(struct  ml_KDTree_t* wrapper, UMat_t* minBounds, 
                                   UMat_t* maxBounds, UMat_t* neighborsIdx, UMat_t* neighbors, UMat_t* labels)
{
try {
 
    wrapper->v->findOrthoRange(*minBounds->v, *maxBounds->v, *neighborsIdx->v, outarrDefault(neighbors), outarrDefault(labels));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KDTreegetPoints(struct  ml_KDTree_t* wrapper, Mat_t* idx, Mat_t* pts, Mat_t* labels)
{
try {
 
    wrapper->v->getPoints(*idx->v, *pts->v, outarrDefault(labels));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvml_KDTreegetPointsV2(struct  ml_KDTree_t* wrapper, UMat_t* idx, UMat_t* pts, 
                                   UMat_t* labels)
{
try {
 
    wrapper->v->getPoints(*idx->v, *pts->v, outarrDefault(labels));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBaseCascadeClassifierclear(struct  BaseCascadeClassifier_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvBaseCascadeClassifierempty(struct  BaseCascadeClassifier_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvBaseCascadeClassifiergetDefaultName(struct  BaseCascadeClassifier_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBaseCascadeClassifierread(struct  BaseCascadeClassifier_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBaseCascadeClassifiersave(struct  BaseCascadeClassifier_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBaseCascadeClassifierwrite(struct  BaseCascadeClassifier_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvCascadeClassifierconvert(string_t* oldcascade, string_t* newcascade)
{
    bool retval;
try {
 
    retval = cv::CascadeClassifier::convert(string(oldcascade->v), string(newcascade->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvCascadeClassifierdetectMultiScale(struct  CascadeClassifier_t* wrapper, Mat_t* image, 
                                   vector_Rect* objects, double scaleFactor, int minNeighbors, int flags, 
                                   Size_t* minSize, Size_t* maxSize)
{
try {
 
    Size x6; if (minSize == 0) { Size_t a6; x6 = Size(); a6.v = &x6; minSize = &a6; };     
    Size x7; if (maxSize == 0) { Size_t a7; x7 = Size(); a7.v = &x7; maxSize = &a7; };     
    wrapper->v->detectMultiScale(*image->v, *objects, scaleFactor, minNeighbors, flags, *minSize->v, *maxSize->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCascadeClassifierdetectMultiScaleV2(struct  CascadeClassifier_t* wrapper, UMat_t* image, 
                                   vector_Rect* objects, double scaleFactor, int minNeighbors, int flags, 
                                   Size_t* minSize, Size_t* maxSize)
{
try {
 
    Size x6; if (minSize == 0) { Size_t a6; x6 = Size(); a6.v = &x6; minSize = &a6; };     
    Size x7; if (maxSize == 0) { Size_t a7; x7 = Size(); a7.v = &x7; maxSize = &a7; };     
    wrapper->v->detectMultiScale(*image->v, *objects, scaleFactor, minNeighbors, flags, *minSize->v, *maxSize->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCascadeClassifierdetectMultiScale2(struct  CascadeClassifier_t* wrapper, Mat_t* image, 
                                   vector_Rect* objects, vector_int* numDetections, double scaleFactor, 
                                   int minNeighbors, int flags, Size_t* minSize, Size_t* maxSize)
{
try {
 
    Size x7; if (minSize == 0) { Size_t a7; x7 = Size(); a7.v = &x7; minSize = &a7; };     
    Size x8; if (maxSize == 0) { Size_t a8; x8 = Size(); a8.v = &x8; maxSize = &a8; };     
    wrapper->v->detectMultiScale(*image->v, *objects, *numDetections, scaleFactor, minNeighbors, flags, *minSize->v, *maxSize->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCascadeClassifierdetectMultiScale2V2(struct  CascadeClassifier_t* wrapper, UMat_t* image, 
                                   vector_Rect* objects, vector_int* numDetections, double scaleFactor, 
                                   int minNeighbors, int flags, Size_t* minSize, Size_t* maxSize)
{
try {
 
    Size x7; if (minSize == 0) { Size_t a7; x7 = Size(); a7.v = &x7; minSize = &a7; };     
    Size x8; if (maxSize == 0) { Size_t a8; x8 = Size(); a8.v = &x8; maxSize = &a8; };     
    wrapper->v->detectMultiScale(*image->v, *objects, *numDetections, scaleFactor, minNeighbors, flags, *minSize->v, *maxSize->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCascadeClassifierdetectMultiScale3(struct  CascadeClassifier_t* wrapper, Mat_t* image, 
                                   vector_Rect* objects, vector_int* rejectLevels, vector_double* levelWeights, 
                                   double scaleFactor, int minNeighbors, int flags, Size_t* minSize, 
                                   Size_t* maxSize, bool outputRejectLevels)
{
try {
 
    Size x8; if (minSize == 0) { Size_t a8; x8 = Size(); a8.v = &x8; minSize = &a8; };     
    Size x9; if (maxSize == 0) { Size_t a9; x9 = Size(); a9.v = &x9; maxSize = &a9; };     
    wrapper->v->detectMultiScale(*image->v, *objects, *rejectLevels, *levelWeights, scaleFactor, minNeighbors, flags, *minSize->v, *maxSize->v, outputRejectLevels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCascadeClassifierdetectMultiScale3V2(struct  CascadeClassifier_t* wrapper, UMat_t* image, 
                                   vector_Rect* objects, vector_int* rejectLevels, 
                                   vector_double* levelWeights, double scaleFactor, int minNeighbors, int flags, 
                                   Size_t* minSize, Size_t* maxSize, bool outputRejectLevels)
{
try {
 
    Size x8; if (minSize == 0) { Size_t a8; x8 = Size(); a8.v = &x8; minSize = &a8; };     
    Size x9; if (maxSize == 0) { Size_t a9; x9 = Size(); a9.v = &x9; maxSize = &a9; };     
    wrapper->v->detectMultiScale(*image->v, *objects, *rejectLevels, *levelWeights, scaleFactor, minNeighbors, flags, *minSize->v, *maxSize->v, outputRejectLevels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvCascadeClassifierempty(struct  CascadeClassifier_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvCascadeClassifiergetFeatureType(struct  CascadeClassifier_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFeatureType();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvCascadeClassifiergetOriginalWindowSize(struct  CascadeClassifier_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getOriginalWindowSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvCascadeClassifierisOldFormatCascade(struct  CascadeClassifier_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isOldFormatCascade();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvCascadeClassifierload(struct  CascadeClassifier_t* wrapper, string_t* filename)
{
    bool retval;
try {
 
    retval = wrapper->v->load(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvCascadeClassifierread(struct  CascadeClassifier_t* wrapper, FileNode_t* node)
{
    bool retval;
try {
 
    retval = wrapper->v->read(*node->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(double) pCvHOGDescriptorGet_L2HysThreshold(HOGDescriptor_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->L2HysThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(Size_t*) pCvHOGDescriptorGet_blockSize(HOGDescriptor_t* p)
{
    Size_t*  retval = new Size_t;
try {
    Size tr =   (p->v->blockSize);
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(Size_t*) pCvHOGDescriptorGet_blockStride(HOGDescriptor_t* p)
{
    Size_t*  retval = new Size_t;
try {
    Size tr =   (p->v->blockStride);
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(Size_t*) pCvHOGDescriptorGet_cellSize(HOGDescriptor_t* p)
{
    Size_t*  retval = new Size_t;
try {
    Size tr =   (p->v->cellSize);
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(int) pCvHOGDescriptorGet_derivAperture(HOGDescriptor_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->derivAperture);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(bool) pCvHOGDescriptorGet_gammaCorrection(HOGDescriptor_t* p)
{
    bool retval;
try {

    retval =   (p->v->gammaCorrection);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(HOGDescriptor::HistogramNormType) pCvHOGDescriptorGet_histogramNormType(HOGDescriptor_t* p)
{
    HOGDescriptor::HistogramNormType retval;
try {

    retval =   (p->v->histogramNormType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(int) pCvHOGDescriptorGet_nbins(HOGDescriptor_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->nbins);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(int) pCvHOGDescriptorGet_nlevels(HOGDescriptor_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->nlevels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(bool) pCvHOGDescriptorGet_signedGradient(HOGDescriptor_t* p)
{
    bool retval;
try {

    retval =   (p->v->signedGradient);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(vector_float*) pCvHOGDescriptorGet_svmDetector(HOGDescriptor_t* p)
{
vector_float* retval = new vector_float();
try {

    vector_float tr =    (p->v->svmDetector);
    vector_float_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(double) pCvHOGDescriptorGet_winSigma(HOGDescriptor_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->winSigma);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(Size_t*) pCvHOGDescriptorGet_winSize(HOGDescriptor_t* p)
{
    Size_t*  retval = new Size_t;
try {
    Size tr =   (p->v->winSize);
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}
CVAPI(bool)   pCvHOGDescriptorcheckDetectorSize(struct  HOGDescriptor_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->checkDetectorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvHOGDescriptorcompute(struct  HOGDescriptor_t* wrapper, Mat_t* img, 
                                   vector_float* descriptors, Size_t* winStride, Size_t* padding, vector_Point* locations)
{
try {
 
    Size x3; if (winStride == 0) { Size_t a3; x3 = Size(); a3.v = &x3; winStride = &a3; };     
    Size x4; if (padding == 0) { Size_t a4; x4 = Size(); a4.v = &x4; padding = &a4; };     
    vector_Point x5; if (locations == 0) { x5 = std::vector<Point>(); locations = &x5; };       
    wrapper->v->compute(*img->v, *descriptors, *winStride->v, *padding->v, *locations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptorcomputeV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, 
                                   vector_float* descriptors, Size_t* winStride, Size_t* padding, vector_Point* locations)
{
try {
 
    Size x3; if (winStride == 0) { Size_t a3; x3 = Size(); a3.v = &x3; winStride = &a3; };     
    Size x4; if (padding == 0) { Size_t a4; x4 = Size(); a4.v = &x4; padding = &a4; };     
    vector_Point x5; if (locations == 0) { x5 = std::vector<Point>(); locations = &x5; };       
    wrapper->v->compute(*img->v, *descriptors, *winStride->v, *padding->v, *locations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptorcomputeGradient(struct  HOGDescriptor_t* wrapper, Mat_t* img, Mat_t* grad, 
                                   Mat_t* angleOfs, Size_t* paddingTL, Size_t* paddingBR)
{
try {
 
    Size x4; if (paddingTL == 0) { Size_t a4; x4 = Size(); a4.v = &x4; paddingTL = &a4; };     
    Size x5; if (paddingBR == 0) { Size_t a5; x5 = Size(); a5.v = &x5; paddingBR = &a5; };     
    wrapper->v->computeGradient(*img->v, *grad->v, *angleOfs->v, *paddingTL->v, *paddingBR->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptorcomputeGradientV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, UMat_t* grad, 
                                   UMat_t* angleOfs, Size_t* paddingTL, Size_t* paddingBR)
{
try {
 
    Size x4; if (paddingTL == 0) { Size_t a4; x4 = Size(); a4.v = &x4; paddingTL = &a4; };     
    Size x5; if (paddingBR == 0) { Size_t a5; x5 = Size(); a5.v = &x5; paddingBR = &a5; };     
    wrapper->v->computeGradient(*img->v, *grad->v, *angleOfs->v, *paddingTL->v, *paddingBR->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptordetect(struct  HOGDescriptor_t* wrapper, Mat_t* img, 
                                   vector_Point* foundLocations, vector_double* weights, double hitThreshold, Size_t* winStride, 
                                   Size_t* padding, vector_Point* searchLocations)
{
try {
 
    Size x5; if (winStride == 0) { Size_t a5; x5 = Size(); a5.v = &x5; winStride = &a5; };     
    Size x6; if (padding == 0) { Size_t a6; x6 = Size(); a6.v = &x6; padding = &a6; };     
    vector_Point x7; if (searchLocations == 0) { x7 = std::vector<Point>(); searchLocations = &x7; };       
    wrapper->v->detect(*img->v, *foundLocations, *weights, hitThreshold, *winStride->v, *padding->v, *searchLocations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptordetectV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, 
                                   vector_Point* foundLocations, vector_double* weights, double hitThreshold, Size_t* winStride, 
                                   Size_t* padding, vector_Point* searchLocations)
{
try {
 
    Size x5; if (winStride == 0) { Size_t a5; x5 = Size(); a5.v = &x5; winStride = &a5; };     
    Size x6; if (padding == 0) { Size_t a6; x6 = Size(); a6.v = &x6; padding = &a6; };     
    vector_Point x7; if (searchLocations == 0) { x7 = std::vector<Point>(); searchLocations = &x7; };       
    wrapper->v->detect(*img->v, *foundLocations, *weights, hitThreshold, *winStride->v, *padding->v, *searchLocations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptordetectMultiScale(struct  HOGDescriptor_t* wrapper, Mat_t* img, 
                                   vector_Rect* foundLocations, vector_double* foundWeights, double hitThreshold, 
                                   Size_t* winStride, Size_t* padding, double scale, double groupThreshold, 
                                   bool useMeanshiftGrouping)
{
try {
 
    Size x5; if (winStride == 0) { Size_t a5; x5 = Size(); a5.v = &x5; winStride = &a5; };     
    Size x6; if (padding == 0) { Size_t a6; x6 = Size(); a6.v = &x6; padding = &a6; };     
    wrapper->v->detectMultiScale(*img->v, *foundLocations, *foundWeights, hitThreshold, *winStride->v, *padding->v, scale, groupThreshold, useMeanshiftGrouping);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptordetectMultiScaleV2(struct  HOGDescriptor_t* wrapper, UMat_t* img, 
                                   vector_Rect* foundLocations, vector_double* foundWeights, double hitThreshold, 
                                   Size_t* winStride, Size_t* padding, double scale, double groupThreshold, 
                                   bool useMeanshiftGrouping)
{
try {
 
    Size x5; if (winStride == 0) { Size_t a5; x5 = Size(); a5.v = &x5; winStride = &a5; };     
    Size x6; if (padding == 0) { Size_t a6; x6 = Size(); a6.v = &x6; padding = &a6; };     
    wrapper->v->detectMultiScale(*img->v, *foundLocations, *foundWeights, hitThreshold, *winStride->v, *padding->v, scale, groupThreshold, useMeanshiftGrouping);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(vector_float*)   pCvHOGDescriptorgetDaimlerPeopleDetector()
{
vector_float* retval = new vector_float();
try {
 
    vector_float tr = cv::HOGDescriptor::getDaimlerPeopleDetector();
    vector_float_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_float*)   pCvHOGDescriptorgetDefaultPeopleDetector()
{
vector_float* retval = new vector_float();
try {
 
    vector_float tr = cv::HOGDescriptor::getDefaultPeopleDetector();
    vector_float_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(size_t)   pCvHOGDescriptorgetDescriptorSize(struct  HOGDescriptor_t* wrapper)
{
    size_t retval;
try {
 
    retval = wrapper->v->getDescriptorSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvHOGDescriptorgetWinSigma(struct  HOGDescriptor_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getWinSigma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvHOGDescriptorload(struct  HOGDescriptor_t* wrapper, string_t* filename, string_t* objname)
{
    bool retval;
try {
 
    if (objname == 0) { string_t a2; a2.v = pEmptyString; objname = &a2; };      
    retval = wrapper->v->load(string(filename->v), string(objname->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvHOGDescriptorsave(struct  HOGDescriptor_t* wrapper, string_t* filename, string_t* objname)
{
try {
 
    if (objname == 0) { string_t a2; a2.v = pEmptyString; objname = &a2; };      
    wrapper->v->save(string(filename->v), string(objname->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptorsetSVMDetector(struct  HOGDescriptor_t* wrapper, Mat_t* svmdetector)
{
try {
 
    wrapper->v->setSVMDetector(*svmdetector->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHOGDescriptorsetSVMDetectorV2(struct  HOGDescriptor_t* wrapper, UMat_t* svmdetector)
{
try {
 
    wrapper->v->setSVMDetector(*svmdetector->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_QRCodeEncoder*)   pCvQRCodeEncoder_create(QRCodeEncoder_Params_t* parameters)
{
Ptr_QRCodeEncoder* retval = 0;
try {
 
    QRCodeEncoder::Params x1; if (parameters == 0) { QRCodeEncoder_Params_t a1; x1 = QRCodeEncoder::Params(); a1.v = &x1; parameters = &a1; };     
    Ptr_QRCodeEncoder p = cv::QRCodeEncoder::create(*parameters->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvQRCodeEncoderencode(struct  QRCodeEncoder_t* wrapper, string_t* encoded_info, 
                                   Mat_t* qrcode)
{
try {
 
    wrapper->v->encode(string(encoded_info->v), *qrcode->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvQRCodeEncoderencodeV2(struct  QRCodeEncoder_t* wrapper, string_t* encoded_info, 
                                   UMat_t* qrcode)
{
try {
 
    wrapper->v->encode(string(encoded_info->v), *qrcode->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvQRCodeEncoderencodeStructuredAppend(struct  QRCodeEncoder_t* wrapper, 
                                   string_t* encoded_info, vector_Mat* qrcodes)
{
try {
 
    wrapper->v->encodeStructuredAppend(string(encoded_info->v), *qrcodes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvQRCodeEncoderencodeStructuredAppendV2(struct  QRCodeEncoder_t* wrapper, 
                                   string_t* encoded_info, vector_UMat* qrcodes)
{
try {
 
    wrapper->v->encodeStructuredAppend(string(encoded_info->v), *qrcodes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(QRCodeEncoder::CorrectionLevel) pCvQRCodeEncoder_ParamsGet_correction_level(QRCodeEncoder_Params_t* p)
{
    QRCodeEncoder::CorrectionLevel retval;
try {

    retval =   (p->v->correction_level);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvQRCodeEncoder_ParamsSet_correction_level(QRCodeEncoder_Params_t* p, QRCodeEncoder::CorrectionLevel propval)
{
try {
    p->v->correction_level = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(QRCodeEncoder::EncodeMode) pCvQRCodeEncoder_ParamsGet_mode(QRCodeEncoder_Params_t* p)
{
    QRCodeEncoder::EncodeMode retval;
try {

    retval =   (p->v->mode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvQRCodeEncoder_ParamsSet_mode(QRCodeEncoder_Params_t* p, QRCodeEncoder::EncodeMode propval)
{
try {
    p->v->mode = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvQRCodeEncoder_ParamsGet_structure_number(QRCodeEncoder_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->structure_number);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvQRCodeEncoder_ParamsSet_structure_number(QRCodeEncoder_Params_t* p, int propval)
{
try {
    p->v->structure_number = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvQRCodeEncoder_ParamsGet_version(QRCodeEncoder_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->version);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvQRCodeEncoder_ParamsSet_version(QRCodeEncoder_Params_t* p, int propval)
{
try {
    p->v->version = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(string_t*)   pCvQRCodeDetectordecode(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   Mat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->decode(*img->v, *points->v, outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordecodeV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points, 
                                   UMat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->decode(*img->v, *points->v, outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordecodeCurved(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   Mat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->decodeCurved(*img->v, *points->v, outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordecodeCurvedV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   UMat_t* points, UMat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->decodeCurved(*img->v, *points->v, outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordecodeMulti(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   vector_string* decoded_info, vector_Mat* straight_qrcode)
{
    bool retval;
try {
 
    vector_Mat x4; if (straight_qrcode == 0) { x4 = vector_Mat(); straight_qrcode = &x4; };       
    retval = wrapper->v->decodeMulti(*img->v, *points->v, *decoded_info, *straight_qrcode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordecodeMultiV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points, 
                                   vector_string* decoded_info, vector_UMat* straight_qrcode)
{
    bool retval;
try {
 
    vector_UMat x4; if (straight_qrcode == 0) { x4 = vector_UMat(); straight_qrcode = &x4; };       
    retval = wrapper->v->decodeMulti(*img->v, *points->v, *decoded_info, *straight_qrcode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordetect(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points)
{
    bool retval;
try {
 
    retval = wrapper->v->detect(*img->v, *points->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordetectV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points)
{
    bool retval;
try {
 
    retval = wrapper->v->detect(*img->v, *points->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordetectAndDecode(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points, 
                                   Mat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->detectAndDecode(*img->v, outarrDefault(points), outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordetectAndDecodeV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   UMat_t* points, UMat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->detectAndDecode(*img->v, outarrDefault(points), outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordetectAndDecodeCurved(struct  QRCodeDetector_t* wrapper, Mat_t* img, 
                                   Mat_t* points, Mat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->detectAndDecodeCurved(*img->v, outarrDefault(points), outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvQRCodeDetectordetectAndDecodeCurvedV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   UMat_t* points, UMat_t* straight_qrcode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->detectAndDecodeCurved(*img->v, outarrDefault(points), outarrDefault(straight_qrcode));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordetectAndDecodeMulti(struct  QRCodeDetector_t* wrapper, Mat_t* img, 
                                   vector_string* decoded_info, Mat_t* points, vector_Mat* straight_qrcode)
{
    bool retval;
try {
 
    vector_Mat x4; if (straight_qrcode == 0) { x4 = vector_Mat(); straight_qrcode = &x4; };       
    retval = wrapper->v->detectAndDecodeMulti(*img->v, *decoded_info, outarrDefault(points), *straight_qrcode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordetectAndDecodeMultiV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, 
                                   vector_string* decoded_info, UMat_t* points, vector_UMat* straight_qrcode)
{
    bool retval;
try {
 
    vector_UMat x4; if (straight_qrcode == 0) { x4 = vector_UMat(); straight_qrcode = &x4; };       
    retval = wrapper->v->detectAndDecodeMulti(*img->v, *decoded_info, outarrDefault(points), *straight_qrcode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordetectMulti(struct  QRCodeDetector_t* wrapper, Mat_t* img, Mat_t* points)
{
    bool retval;
try {
 
    retval = wrapper->v->detectMulti(*img->v, *points->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvQRCodeDetectordetectMultiV2(struct  QRCodeDetector_t* wrapper, UMat_t* img, UMat_t* points)
{
    bool retval;
try {
 
    retval = wrapper->v->detectMulti(*img->v, *points->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvQRCodeDetectorsetEpsX(struct  QRCodeDetector_t* wrapper, double epsX)
{
try {
 
    wrapper->v->setEpsX(epsX);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvQRCodeDetectorsetEpsY(struct  QRCodeDetector_t* wrapper, double epsY)
{
try {
 
    wrapper->v->setEpsY(epsY);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_FaceDetectorYN*)   pCvFaceDetectorYN_create(string_t* model, string_t* config, Size_t* input_size, 
                                   float score_threshold, float nms_threshold, int top_k, int backend_id, int target_id)
{
Ptr_FaceDetectorYN* retval = 0;
try {
 
    Ptr_FaceDetectorYN p = cv::FaceDetectorYN::create(string(model->v), string(config->v), *input_size->v, score_threshold, nms_threshold, top_k, backend_id, target_id);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFaceDetectorYNdetect(struct  FaceDetectorYN_t* wrapper, Mat_t* image, Mat_t* faces)
{
    int retval = 0;
try {
 
    retval = wrapper->v->detect(*image->v, *faces->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFaceDetectorYNdetectV2(struct  FaceDetectorYN_t* wrapper, UMat_t* image, UMat_t* faces)
{
    int retval = 0;
try {
 
    retval = wrapper->v->detect(*image->v, *faces->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvFaceDetectorYNgetInputSize(struct  FaceDetectorYN_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getInputSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvFaceDetectorYNgetNMSThreshold(struct  FaceDetectorYN_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getNMSThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvFaceDetectorYNgetScoreThreshold(struct  FaceDetectorYN_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getScoreThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFaceDetectorYNgetTopK(struct  FaceDetectorYN_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getTopK();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFaceDetectorYNsetInputSize(struct  FaceDetectorYN_t* wrapper, Size_t* input_size)
{
try {
 
    wrapper->v->setInputSize(*input_size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFaceDetectorYNsetNMSThreshold(struct  FaceDetectorYN_t* wrapper, float nms_threshold)
{
try {
 
    wrapper->v->setNMSThreshold(nms_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFaceDetectorYNsetScoreThreshold(struct  FaceDetectorYN_t* wrapper, float score_threshold)
{
try {
 
    wrapper->v->setScoreThreshold(score_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFaceDetectorYNsetTopK(struct  FaceDetectorYN_t* wrapper, int top_k)
{
try {
 
    wrapper->v->setTopK(top_k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFaceRecognizerSFalignCrop(struct  FaceRecognizerSF_t* wrapper, Mat_t* src_img, 
                                   Mat_t* face_box, Mat_t* aligned_img)
{
try {
 
    wrapper->v->alignCrop(*src_img->v, *face_box->v, *aligned_img->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFaceRecognizerSFalignCropV2(struct  FaceRecognizerSF_t* wrapper, UMat_t* src_img, 
                                   UMat_t* face_box, UMat_t* aligned_img)
{
try {
 
    wrapper->v->alignCrop(*src_img->v, *face_box->v, *aligned_img->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_FaceRecognizerSF*)   pCvFaceRecognizerSF_create(string_t* model, string_t* config, int backend_id, int target_id)
{
Ptr_FaceRecognizerSF* retval = 0;
try {
 
    Ptr_FaceRecognizerSF p = cv::FaceRecognizerSF::create(string(model->v), string(config->v), backend_id, target_id);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFaceRecognizerSFfeature(struct  FaceRecognizerSF_t* wrapper, Mat_t* aligned_img, 
                                   Mat_t* face_feature)
{
try {
 
    wrapper->v->feature(*aligned_img->v, *face_feature->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFaceRecognizerSFfeatureV2(struct  FaceRecognizerSF_t* wrapper, UMat_t* aligned_img, 
                                   UMat_t* face_feature)
{
try {
 
    wrapper->v->feature(*aligned_img->v, *face_feature->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvFaceRecognizerSFmatch(struct  FaceRecognizerSF_t* wrapper, Mat_t* face_feature1, 
                                   Mat_t* face_feature2, int dis_type)
{
    double retval = 0;
try {
 
    retval = wrapper->v->match(*face_feature1->v, *face_feature2->v, dis_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvFaceRecognizerSFmatchV2(struct  FaceRecognizerSF_t* wrapper, UMat_t* face_feature1, 
                                   UMat_t* face_feature2, int dis_type)
{
    double retval = 0;
try {
 
    retval = wrapper->v->match(*face_feature1->v, *face_feature2->v, dis_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTonemapclear(struct  Tonemap_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTonemapempty(struct  Tonemap_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvTonemapgetDefaultName(struct  Tonemap_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapgetGamma(struct  Tonemap_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTonemapprocess(struct  Tonemap_t* wrapper, Mat_t* src, Mat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapprocessV2(struct  Tonemap_t* wrapper, UMat_t* src, UMat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapread(struct  Tonemap_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapsave(struct  Tonemap_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapsetGamma(struct  Tonemap_t* wrapper, float gamma)
{
try {
 
    wrapper->v->setGamma(gamma);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapwrite(struct  Tonemap_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragoclear(struct  TonemapDrago_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTonemapDragoempty(struct  TonemapDrago_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapDragogetBias(struct  TonemapDrago_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getBias();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvTonemapDragogetDefaultName(struct  TonemapDrago_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapDragogetGamma(struct  TonemapDrago_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapDragogetSaturation(struct  TonemapDrago_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getSaturation();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTonemapDragoprocess(struct  TonemapDrago_t* wrapper, Mat_t* src, Mat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragoprocessV2(struct  TonemapDrago_t* wrapper, UMat_t* src, UMat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragoread(struct  TonemapDrago_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragosave(struct  TonemapDrago_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragosetBias(struct  TonemapDrago_t* wrapper, float bias)
{
try {
 
    wrapper->v->setBias(bias);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragosetGamma(struct  TonemapDrago_t* wrapper, float gamma)
{
try {
 
    wrapper->v->setGamma(gamma);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragosetSaturation(struct  TonemapDrago_t* wrapper, float saturation)
{
try {
 
    wrapper->v->setSaturation(saturation);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapDragowrite(struct  TonemapDrago_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardclear(struct  TonemapReinhard_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTonemapReinhardempty(struct  TonemapReinhard_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapReinhardgetColorAdaptation(struct  TonemapReinhard_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getColorAdaptation();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvTonemapReinhardgetDefaultName(struct  TonemapReinhard_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapReinhardgetGamma(struct  TonemapReinhard_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapReinhardgetIntensity(struct  TonemapReinhard_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getIntensity();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapReinhardgetLightAdaptation(struct  TonemapReinhard_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getLightAdaptation();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTonemapReinhardprocess(struct  TonemapReinhard_t* wrapper, Mat_t* src, Mat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardprocessV2(struct  TonemapReinhard_t* wrapper, UMat_t* src, UMat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardread(struct  TonemapReinhard_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardsave(struct  TonemapReinhard_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardsetColorAdaptation(struct  TonemapReinhard_t* wrapper, float color_adapt)
{
try {
 
    wrapper->v->setColorAdaptation(color_adapt);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardsetGamma(struct  TonemapReinhard_t* wrapper, float gamma)
{
try {
 
    wrapper->v->setGamma(gamma);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardsetIntensity(struct  TonemapReinhard_t* wrapper, float intensity)
{
try {
 
    wrapper->v->setIntensity(intensity);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardsetLightAdaptation(struct  TonemapReinhard_t* wrapper, float light_adapt)
{
try {
 
    wrapper->v->setLightAdaptation(light_adapt);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapReinhardwrite(struct  TonemapReinhard_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiukclear(struct  TonemapMantiuk_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTonemapMantiukempty(struct  TonemapMantiuk_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvTonemapMantiukgetDefaultName(struct  TonemapMantiuk_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapMantiukgetGamma(struct  TonemapMantiuk_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapMantiukgetSaturation(struct  TonemapMantiuk_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getSaturation();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTonemapMantiukgetScale(struct  TonemapMantiuk_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTonemapMantiukprocess(struct  TonemapMantiuk_t* wrapper, Mat_t* src, Mat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiukprocessV2(struct  TonemapMantiuk_t* wrapper, UMat_t* src, UMat_t* dst)
{
try {
 
    wrapper->v->process(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiukread(struct  TonemapMantiuk_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiuksave(struct  TonemapMantiuk_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiuksetGamma(struct  TonemapMantiuk_t* wrapper, float gamma)
{
try {
 
    wrapper->v->setGamma(gamma);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiuksetSaturation(struct  TonemapMantiuk_t* wrapper, float saturation)
{
try {
 
    wrapper->v->setSaturation(saturation);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiuksetScale(struct  TonemapMantiuk_t* wrapper, float scale)
{
try {
 
    wrapper->v->setScale(scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTonemapMantiukwrite(struct  TonemapMantiuk_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignExposuresclear(struct  AlignExposures_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAlignExposuresempty(struct  AlignExposures_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvAlignExposuresgetDefaultName(struct  AlignExposures_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAlignExposuresprocess(struct  AlignExposures_t* wrapper, vector_Mat* src, vector_Mat* dst, 
                                   Mat_t* times, Mat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignExposuresprocessV2(struct  AlignExposures_t* wrapper, vector_UMat* src, 
                                   vector_Mat* dst, UMat_t* times, UMat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignExposuresread(struct  AlignExposures_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignExposuressave(struct  AlignExposures_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignExposureswrite(struct  AlignExposures_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Point_t*)   pCvAlignMTBcalculateShift(struct  AlignMTB_t* wrapper, Mat_t* img0, Mat_t* img1)
{
    Point_t*  retval = new Point_t;
try { 
    Point tr = wrapper->v->calculateShift(*img0->v, *img1->v);
    Point*  t = new Point();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point_t*)   pCvAlignMTBcalculateShiftV2(struct  AlignMTB_t* wrapper, UMat_t* img0, UMat_t* img1)
{
    Point_t*  retval = new Point_t;
try { 
    Point tr = wrapper->v->calculateShift(*img0->v, *img1->v);
    Point*  t = new Point();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAlignMTBclear(struct  AlignMTB_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBcomputeBitmaps(struct  AlignMTB_t* wrapper, Mat_t* img, Mat_t* tb, Mat_t* eb)
{
try {
 
    wrapper->v->computeBitmaps(*img->v, *tb->v, *eb->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBcomputeBitmapsV2(struct  AlignMTB_t* wrapper, UMat_t* img, UMat_t* tb, UMat_t* eb)
{
try {
 
    wrapper->v->computeBitmaps(*img->v, *tb->v, *eb->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvAlignMTBempty(struct  AlignMTB_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvAlignMTBgetCut(struct  AlignMTB_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getCut();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvAlignMTBgetDefaultName(struct  AlignMTB_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAlignMTBgetExcludeRange(struct  AlignMTB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getExcludeRange();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvAlignMTBgetMaxBits(struct  AlignMTB_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxBits();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvAlignMTBprocess(struct  AlignMTB_t* wrapper, vector_Mat* src, vector_Mat* dst, 
                                   Mat_t* times, Mat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBprocessV2(struct  AlignMTB_t* wrapper, vector_UMat* src, vector_Mat* dst, 
                                   UMat_t* times, UMat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBprocessV3(struct  AlignMTB_t* wrapper, vector_Mat* src, vector_Mat* dst)
{
try {
 
    wrapper->v->process(*src, *dst);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBprocessV4(struct  AlignMTB_t* wrapper, vector_UMat* src, vector_Mat* dst)
{
try {
 
    wrapper->v->process(*src, *dst);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBread(struct  AlignMTB_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBsave(struct  AlignMTB_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBsetCut(struct  AlignMTB_t* wrapper, bool value)
{
try {
 
    wrapper->v->setCut(value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBsetExcludeRange(struct  AlignMTB_t* wrapper, int exclude_range)
{
try {
 
    wrapper->v->setExcludeRange(exclude_range);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBsetMaxBits(struct  AlignMTB_t* wrapper, int max_bits)
{
try {
 
    wrapper->v->setMaxBits(max_bits);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBshiftMat(struct  AlignMTB_t* wrapper, Mat_t* src, Mat_t* dst, Point_t* shift)
{
try {
 
    wrapper->v->shiftMat(*src->v, *dst->v, *shift->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBshiftMatV2(struct  AlignMTB_t* wrapper, UMat_t* src, UMat_t* dst, Point_t* shift)
{
try {
 
    wrapper->v->shiftMat(*src->v, *dst->v, *shift->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvAlignMTBwrite(struct  AlignMTB_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateCRFclear(struct  CalibrateCRF_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvCalibrateCRFempty(struct  CalibrateCRF_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvCalibrateCRFgetDefaultName(struct  CalibrateCRF_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvCalibrateCRFprocess(struct  CalibrateCRF_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateCRFprocessV2(struct  CalibrateCRF_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateCRFread(struct  CalibrateCRF_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateCRFsave(struct  CalibrateCRF_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateCRFwrite(struct  CalibrateCRF_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecclear(struct  CalibrateDebevec_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvCalibrateDebevecempty(struct  CalibrateDebevec_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvCalibrateDebevecgetDefaultName(struct  CalibrateDebevec_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvCalibrateDebevecgetLambda(struct  CalibrateDebevec_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getLambda();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvCalibrateDebevecgetRandom(struct  CalibrateDebevec_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getRandom();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvCalibrateDebevecgetSamples(struct  CalibrateDebevec_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSamples();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvCalibrateDebevecprocess(struct  CalibrateDebevec_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecprocessV2(struct  CalibrateDebevec_t* wrapper, vector_UMat* src, 
                                   UMat_t* dst, UMat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecread(struct  CalibrateDebevec_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecsave(struct  CalibrateDebevec_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecsetLambda(struct  CalibrateDebevec_t* wrapper, float lambda)
{
try {
 
    wrapper->v->setLambda(lambda);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecsetRandom(struct  CalibrateDebevec_t* wrapper, bool _random)
{
try {
 
    wrapper->v->setRandom(_random);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecsetSamples(struct  CalibrateDebevec_t* wrapper, int samples)
{
try {
 
    wrapper->v->setSamples(samples);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateDebevecwrite(struct  CalibrateDebevec_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonclear(struct  CalibrateRobertson_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvCalibrateRobertsonempty(struct  CalibrateRobertson_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvCalibrateRobertsongetDefaultName(struct  CalibrateRobertson_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvCalibrateRobertsongetMaxIter(struct  CalibrateRobertson_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxIter();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvCalibrateRobertsongetRadiance(struct  CalibrateRobertson_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->getRadiance();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvCalibrateRobertsongetThreshold(struct  CalibrateRobertson_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvCalibrateRobertsonprocess(struct  CalibrateRobertson_t* wrapper, vector_Mat* src, 
                                   Mat_t* dst, Mat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonprocessV2(struct  CalibrateRobertson_t* wrapper, vector_UMat* src, 
                                   UMat_t* dst, UMat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonread(struct  CalibrateRobertson_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonsave(struct  CalibrateRobertson_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonsetMaxIter(struct  CalibrateRobertson_t* wrapper, int max_iter)
{
try {
 
    wrapper->v->setMaxIter(max_iter);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonsetThreshold(struct  CalibrateRobertson_t* wrapper, float threshold)
{
try {
 
    wrapper->v->setThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCalibrateRobertsonwrite(struct  CalibrateRobertson_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeExposuresclear(struct  MergeExposures_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvMergeExposuresempty(struct  MergeExposures_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvMergeExposuresgetDefaultName(struct  MergeExposures_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvMergeExposuresprocess(struct  MergeExposures_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeExposuresprocessV2(struct  MergeExposures_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeExposuresread(struct  MergeExposures_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeExposuressave(struct  MergeExposures_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeExposureswrite(struct  MergeExposures_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecclear(struct  MergeDebevec_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvMergeDebevecempty(struct  MergeDebevec_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvMergeDebevecgetDefaultName(struct  MergeDebevec_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvMergeDebevecprocess(struct  MergeDebevec_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecprocessV2(struct  MergeDebevec_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecprocessV3(struct  MergeDebevec_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecprocessV4(struct  MergeDebevec_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecread(struct  MergeDebevec_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecsave(struct  MergeDebevec_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeDebevecwrite(struct  MergeDebevec_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertensclear(struct  MergeMertens_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvMergeMertensempty(struct  MergeMertens_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvMergeMertensgetContrastWeight(struct  MergeMertens_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getContrastWeight();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvMergeMertensgetDefaultName(struct  MergeMertens_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvMergeMertensgetExposureWeight(struct  MergeMertens_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getExposureWeight();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvMergeMertensgetSaturationWeight(struct  MergeMertens_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getSaturationWeight();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvMergeMertensprocess(struct  MergeMertens_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertensprocessV2(struct  MergeMertens_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertensprocessV3(struct  MergeMertens_t* wrapper, vector_Mat* src, Mat_t* dst)
{
try {
 
    wrapper->v->process(*src, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertensprocessV4(struct  MergeMertens_t* wrapper, vector_UMat* src, UMat_t* dst)
{
try {
 
    wrapper->v->process(*src, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertensread(struct  MergeMertens_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertenssave(struct  MergeMertens_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertenssetContrastWeight(struct  MergeMertens_t* wrapper, float contrast_weiht)
{
try {
 
    wrapper->v->setContrastWeight(contrast_weiht);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertenssetExposureWeight(struct  MergeMertens_t* wrapper, float exposure_weight)
{
try {
 
    wrapper->v->setExposureWeight(exposure_weight);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertenssetSaturationWeight(struct  MergeMertens_t* wrapper, float saturation_weight)
{
try {
 
    wrapper->v->setSaturationWeight(saturation_weight);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeMertenswrite(struct  MergeMertens_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonclear(struct  MergeRobertson_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvMergeRobertsonempty(struct  MergeRobertson_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvMergeRobertsongetDefaultName(struct  MergeRobertson_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvMergeRobertsonprocess(struct  MergeRobertson_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times, Mat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonprocessV2(struct  MergeRobertson_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times, UMat_t* response)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v, *response->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonprocessV3(struct  MergeRobertson_t* wrapper, vector_Mat* src, Mat_t* dst, 
                                   Mat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonprocessV4(struct  MergeRobertson_t* wrapper, vector_UMat* src, UMat_t* dst, 
                                   UMat_t* times)
{
try {
 
    wrapper->v->process(*src, *dst->v, *times->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonread(struct  MergeRobertson_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonsave(struct  MergeRobertson_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvMergeRobertsonwrite(struct  MergeRobertson_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Stitcher::Status)   pCvStitchercomposePanorama(struct  Stitcher_t* wrapper, Mat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->composePanorama(*pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitchercomposePanoramaV2(struct  Stitcher_t* wrapper, UMat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->composePanorama(*pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitchercomposePanoramaV3(struct  Stitcher_t* wrapper, vector_Mat* images, Mat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->composePanorama(*images, *pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitchercomposePanoramaV4(struct  Stitcher_t* wrapper, vector_UMat* images, UMat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->composePanorama(*images, *pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvStitchercompositingResol(struct  Stitcher_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->compositingResol();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_Stitcher*)   pCvStitcher_create(Stitcher::Mode mode)
{
Ptr_Stitcher* retval = 0;
try {
 
    Ptr_Stitcher p = cv::Stitcher::create(mode);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitcherestimateTransform(struct  Stitcher_t* wrapper, vector_Mat* images, 
                                   vector_Mat* masks)
{
    Stitcher::Status retval;
try {
 
    vector_Mat x2; if (masks == 0) { x2 = vector_Mat(); masks = &x2; };       
    retval = wrapper->v->estimateTransform(*images, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitcherestimateTransformV2(struct  Stitcher_t* wrapper, vector_UMat* images, 
                                   vector_UMat* masks)
{
    Stitcher::Status retval;
try {
 
    vector_UMat x2; if (masks == 0) { x2 = vector_UMat(); masks = &x2; };       
    retval = wrapper->v->estimateTransform(*images, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(InterpolationFlags)   pCvStitcherinterpolationFlags(struct  Stitcher_t* wrapper)
{
    InterpolationFlags retval;
try {
 
    retval = wrapper->v->interpolationFlags();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvStitcherpanoConfidenceThresh(struct  Stitcher_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->panoConfidenceThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvStitcherregistrationResol(struct  Stitcher_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->registrationResol();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvStitcherseamEstimationResol(struct  Stitcher_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->seamEstimationResol();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvStitchersetCompositingResol(struct  Stitcher_t* wrapper, double resol_mpx)
{
try {
 
    wrapper->v->setCompositingResol(resol_mpx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStitchersetInterpolationFlags(struct  Stitcher_t* wrapper, InterpolationFlags interp_flags)
{
try {
 
    wrapper->v->setInterpolationFlags(interp_flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStitchersetPanoConfidenceThresh(struct  Stitcher_t* wrapper, double conf_thresh)
{
try {
 
    wrapper->v->setPanoConfidenceThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStitchersetRegistrationResol(struct  Stitcher_t* wrapper, double resol_mpx)
{
try {
 
    wrapper->v->setRegistrationResol(resol_mpx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStitchersetSeamEstimationResol(struct  Stitcher_t* wrapper, double resol_mpx)
{
try {
 
    wrapper->v->setSeamEstimationResol(resol_mpx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvStitchersetWaveCorrection(struct  Stitcher_t* wrapper, bool flag)
{
try {
 
    wrapper->v->setWaveCorrection(flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Stitcher::Status)   pCvStitcherstitch(struct  Stitcher_t* wrapper, vector_Mat* images, Mat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->stitch(*images, *pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitcherstitchV2(struct  Stitcher_t* wrapper, vector_UMat* images, UMat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->stitch(*images, *pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitcherstitchV3(struct  Stitcher_t* wrapper, vector_Mat* images, vector_Mat* masks, 
                                   Mat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->stitch(*images, *masks, *pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Stitcher::Status)   pCvStitcherstitchV4(struct  Stitcher_t* wrapper, vector_UMat* images, vector_UMat* masks, 
                                   UMat_t* pano)
{
    Stitcher::Status retval;
try {
 
    retval = wrapper->v->stitch(*images, *masks, *pano->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvStitcherwaveCorrection(struct  Stitcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->waveCorrection();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvStitcherworkScale(struct  Stitcher_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->workScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_Blenderblend(struct  detail_Blender_t* wrapper, Mat_t* dst, Mat_t* dst_mask)
{
try {
 
    wrapper->v->blend(*dst->v, *dst_mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlenderblendV2(struct  detail_Blender_t* wrapper, UMat_t* dst, UMat_t* dst_mask)
{
try {
 
    wrapper->v->blend(*dst->v, *dst_mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Blender*)   pCvdetail_BlendercreateDefault(int _type, bool try_gpu)
{
Ptr_Blender* retval = 0;
try {
 
    Ptr_Blender p = cv::detail::Blender::createDefault(_type, try_gpu);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_Blenderfeed(struct  detail_Blender_t* wrapper, Mat_t* img, Mat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->feed(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlenderfeedV2(struct  detail_Blender_t* wrapper, UMat_t* img, UMat_t* mask, 
                                   Point_t* tl)
{
try {
 
    wrapper->v->feed(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_Blenderprepare(struct  detail_Blender_t* wrapper, vector_Point* corners, 
                                   vector_Size* sizes)
{
try {
 
    wrapper->v->prepare(*corners, *sizes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlenderprepareV2(struct  detail_Blender_t* wrapper, Rect_t* dst_roi)
{
try {
 
    wrapper->v->prepare(*dst_roi->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeatherBlenderblend(struct  detail_FeatherBlender_t* wrapper, Mat_t* dst, 
                                   Mat_t* dst_mask)
{
try {
 
    wrapper->v->blend(*dst->v, *dst_mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeatherBlenderblendV2(struct  detail_FeatherBlender_t* wrapper, UMat_t* dst, 
                                   UMat_t* dst_mask)
{
try {
 
    wrapper->v->blend(*dst->v, *dst_mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Blender*)   pCvdetail_FeatherBlendercreateDefault(int _type, bool try_gpu)
{
Ptr_Blender* retval = 0;
try {
 
    Ptr_Blender p = cv::detail::Blender::createDefault(_type, try_gpu);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvdetail_FeatherBlendercreateWeightMaps(struct  detail_FeatherBlender_t* wrapper, 
                                   vector_UMat* masks, vector_Point* corners, vector_UMat* weight_maps)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->createWeightMaps(*masks, *corners, *weight_maps);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_FeatherBlenderfeed(struct  detail_FeatherBlender_t* wrapper, Mat_t* img, 
                                   Mat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->feed(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeatherBlenderfeedV2(struct  detail_FeatherBlender_t* wrapper, UMat_t* img, 
                                   UMat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->feed(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeatherBlenderprepare(struct  detail_FeatherBlender_t* wrapper, Rect_t* dst_roi)
{
try {
 
    wrapper->v->prepare(*dst_roi->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeatherBlendersetSharpness(struct  detail_FeatherBlender_t* wrapper, float _val)
{
try {
 
    wrapper->v->setSharpness(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvdetail_FeatherBlendersharpness(struct  detail_FeatherBlender_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->sharpness();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_MultiBandBlenderblend(struct  detail_MultiBandBlender_t* wrapper, Mat_t* dst, 
                                   Mat_t* dst_mask)
{
try {
 
    wrapper->v->blend(*dst->v, *dst_mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_MultiBandBlenderblendV2(struct  detail_MultiBandBlender_t* wrapper, UMat_t* dst, 
                                   UMat_t* dst_mask)
{
try {
 
    wrapper->v->blend(*dst->v, *dst_mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Blender*)   pCvdetail_MultiBandBlendercreateDefault(int _type, bool try_gpu)
{
Ptr_Blender* retval = 0;
try {
 
    Ptr_Blender p = cv::detail::Blender::createDefault(_type, try_gpu);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_MultiBandBlenderfeed(struct  detail_MultiBandBlender_t* wrapper, Mat_t* img, 
                                   Mat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->feed(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_MultiBandBlenderfeedV2(struct  detail_MultiBandBlender_t* wrapper, UMat_t* img, 
                                   UMat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->feed(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdetail_MultiBandBlendernumBands(struct  detail_MultiBandBlender_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->numBands();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_MultiBandBlenderprepare(struct  detail_MultiBandBlender_t* wrapper, Rect_t* dst_roi)
{
try {
 
    wrapper->v->prepare(*dst_roi->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_MultiBandBlendersetNumBands(struct  detail_MultiBandBlender_t* wrapper, int _val)
{
try {
 
    wrapper->v->setNumBands(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(Mat_t*) pCvdetail_CameraParamsGet_R(detail_CameraParams_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->R);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_CameraParamsSet_R(detail_CameraParams_t* p, Mat_t* propval)
{
try {
    p->v->R = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvdetail_CameraParamsGet_aspect(detail_CameraParams_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->aspect);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_CameraParamsSet_aspect(detail_CameraParams_t* p, double propval)
{
try {
    p->v->aspect = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvdetail_CameraParamsGet_focal(detail_CameraParams_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->focal);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_CameraParamsSet_focal(detail_CameraParams_t* p, double propval)
{
try {
    p->v->focal = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvdetail_CameraParamsGet_ppx(detail_CameraParams_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->ppx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_CameraParamsSet_ppx(detail_CameraParams_t* p, double propval)
{
try {
    p->v->ppx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvdetail_CameraParamsGet_ppy(detail_CameraParams_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->ppy);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_CameraParamsSet_ppy(detail_CameraParams_t* p, double propval)
{
try {
    p->v->ppy = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvdetail_CameraParamsGet_t(detail_CameraParams_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->t);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_CameraParamsSet_t(detail_CameraParams_t* p, Mat_t* propval)
{
try {
    p->v->t = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(Mat_t*)   pCvdetail_CameraParamsK(struct  detail_CameraParams_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->K();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_ExposureCompensatorapply(struct  detail_ExposureCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ExposureCompensatorapplyV2(struct  detail_ExposureCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_ExposureCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_ExposureCompensatorfeed(struct  detail_ExposureCompensator_t* wrapper, 
                                   vector_Point* corners, vector_UMat* images, vector_UMat* masks)
{
try {
 
    wrapper->v->feed(*corners, *images, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ExposureCompensatorgetMatGains(struct  detail_ExposureCompensator_t* wrapper, 
                                   vector_Mat* arg1)
{
try {
 
    wrapper->v->getMatGains(*arg1);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdetail_ExposureCompensatorgetUpdateGain(struct  detail_ExposureCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_ExposureCompensatorsetMatGains(struct  detail_ExposureCompensator_t* wrapper, 
                                   vector_Mat* arg1)
{
try {
 
    wrapper->v->setMatGains(*arg1);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ExposureCompensatorsetUpdateGain(struct  detail_ExposureCompensator_t* wrapper, 
                                   bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_NoExposureCompensatorapply(struct  detail_NoExposureCompensator_t* wrapper, 
                                   int arg1, Point_t* arg2, Mat_t* arg3, Mat_t* arg4)
{
try {
 
    wrapper->v->apply(arg1, *arg2->v, *arg3->v, *arg4->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_NoExposureCompensatorapplyV2(struct  detail_NoExposureCompensator_t* wrapper, 
                                   int arg1, Point_t* arg2, UMat_t* arg3, UMat_t* arg4)
{
try {
 
    wrapper->v->apply(arg1, *arg2->v, *arg3->v, *arg4->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_NoExposureCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_NoExposureCompensatorgetMatGains(struct  detail_NoExposureCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->getMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdetail_NoExposureCompensatorgetUpdateGain(struct  detail_NoExposureCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_NoExposureCompensatorsetMatGains(struct  detail_NoExposureCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->setMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_NoExposureCompensatorsetUpdateGain(struct  detail_NoExposureCompensator_t* wrapper, 
                                   bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_GainCompensatorapply(struct  detail_GainCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_GainCompensatorapplyV2(struct  detail_GainCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_GainCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_GainCompensatorgetMatGains(struct  detail_GainCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->getMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdetail_GainCompensatorgetNrFeeds(struct  detail_GainCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrFeeds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_GainCompensatorgetSimilarityThreshold(struct  detail_GainCompensator_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getSimilarityThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_GainCompensatorgetUpdateGain(struct  detail_GainCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_GainCompensatorsetMatGains(struct  detail_GainCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->setMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_GainCompensatorsetNrFeeds(struct  detail_GainCompensator_t* wrapper, int nr_feeds)
{
try {
 
    wrapper->v->setNrFeeds(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_GainCompensatorsetSimilarityThreshold(struct  detail_GainCompensator_t* wrapper, 
                                   double similarity_threshold)
{
try {
 
    wrapper->v->setSimilarityThreshold(similarity_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_GainCompensatorsetUpdateGain(struct  detail_GainCompensator_t* wrapper, bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ChannelsCompensatorapply(struct  detail_ChannelsCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ChannelsCompensatorapplyV2(struct  detail_ChannelsCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_ChannelsCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_ChannelsCompensatorgetMatGains(struct  detail_ChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->getMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdetail_ChannelsCompensatorgetNrFeeds(struct  detail_ChannelsCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrFeeds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_ChannelsCompensatorgetSimilarityThreshold(struct  detail_ChannelsCompensator_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getSimilarityThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_ChannelsCompensatorgetUpdateGain(struct  detail_ChannelsCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_ChannelsCompensatorsetMatGains(struct  detail_ChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->setMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ChannelsCompensatorsetNrFeeds(struct  detail_ChannelsCompensator_t* wrapper, 
                                   int nr_feeds)
{
try {
 
    wrapper->v->setNrFeeds(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ChannelsCompensatorsetSimilarityThreshold(struct  detail_ChannelsCompensator_t* wrapper, 
                                   double similarity_threshold)
{
try {
 
    wrapper->v->setSimilarityThreshold(similarity_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_ChannelsCompensatorsetUpdateGain(struct  detail_ChannelsCompensator_t* wrapper, 
                                   bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorapply(struct  detail_BlocksCompensator_t* wrapper, int index, 
                                   Point_t* corner, Mat_t* image, Mat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorapplyV2(struct  detail_BlocksCompensator_t* wrapper, int index, 
                                   Point_t* corner, UMat_t* image, UMat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_BlocksCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvdetail_BlocksCompensatorgetBlockSize(struct  detail_BlocksCompensator_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getBlockSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BlocksCompensatorgetMatGains(struct  detail_BlocksCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->getMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdetail_BlocksCompensatorgetNrFeeds(struct  detail_BlocksCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrFeeds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdetail_BlocksCompensatorgetNrGainsFilteringIterations(struct  detail_BlocksCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrGainsFilteringIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BlocksCompensatorgetSimilarityThreshold(struct  detail_BlocksCompensator_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getSimilarityThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BlocksCompensatorgetUpdateGain(struct  detail_BlocksCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetBlockSize(struct  detail_BlocksCompensator_t* wrapper, 
                                   int width, int height)
{
try {
 
    wrapper->v->setBlockSize(width, height);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetBlockSizeV2(struct  detail_BlocksCompensator_t* wrapper, 
                                   Size_t* size)
{
try {
 
    wrapper->v->setBlockSize(*size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetMatGains(struct  detail_BlocksCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->setMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetNrFeeds(struct  detail_BlocksCompensator_t* wrapper, 
                                   int nr_feeds)
{
try {
 
    wrapper->v->setNrFeeds(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetNrGainsFilteringIterations(struct  detail_BlocksCompensator_t* wrapper, 
                                   int nr_iterations)
{
try {
 
    wrapper->v->setNrGainsFilteringIterations(nr_iterations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetSimilarityThreshold(struct  detail_BlocksCompensator_t* wrapper, 
                                   double similarity_threshold)
{
try {
 
    wrapper->v->setSimilarityThreshold(similarity_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksCompensatorsetUpdateGain(struct  detail_BlocksCompensator_t* wrapper, bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorapply(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int index, Point_t* corner, Mat_t* image, Mat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorapplyV2(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int index, Point_t* corner, UMat_t* image, UMat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_BlocksGainCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvdetail_BlocksGainCompensatorgetBlockSize(struct  detail_BlocksGainCompensator_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getBlockSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorgetMatGains(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->getMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdetail_BlocksGainCompensatorgetNrFeeds(struct  detail_BlocksGainCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrFeeds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdetail_BlocksGainCompensatorgetNrGainsFilteringIterations(struct  detail_BlocksGainCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrGainsFilteringIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BlocksGainCompensatorgetSimilarityThreshold(struct  detail_BlocksGainCompensator_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getSimilarityThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BlocksGainCompensatorgetUpdateGain(struct  detail_BlocksGainCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetBlockSize(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int width, int height)
{
try {
 
    wrapper->v->setBlockSize(width, height);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetBlockSizeV2(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   Size_t* size)
{
try {
 
    wrapper->v->setBlockSize(*size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetMatGains(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->setMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetNrFeeds(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int nr_feeds)
{
try {
 
    wrapper->v->setNrFeeds(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetNrGainsFilteringIterations(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   int nr_iterations)
{
try {
 
    wrapper->v->setNrGainsFilteringIterations(nr_iterations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetSimilarityThreshold(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   double similarity_threshold)
{
try {
 
    wrapper->v->setSimilarityThreshold(similarity_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksGainCompensatorsetUpdateGain(struct  detail_BlocksGainCompensator_t* wrapper, 
                                   bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorapply(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int index, Point_t* corner, Mat_t* image, Mat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorapplyV2(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int index, Point_t* corner, UMat_t* image, UMat_t* mask)
{
try {
 
    wrapper->v->apply(index, *corner->v, *image->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_ExposureCompensator*)   pCvdetail_BlocksChannelsCompensatorcreateDefault(int _type)
{
Ptr_ExposureCompensator* retval = 0;
try {
 
    Ptr_ExposureCompensator p = cv::detail::ExposureCompensator::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvdetail_BlocksChannelsCompensatorgetBlockSize(struct  detail_BlocksChannelsCompensator_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getBlockSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorgetMatGains(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->getMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdetail_BlocksChannelsCompensatorgetNrFeeds(struct  detail_BlocksChannelsCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrFeeds();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdetail_BlocksChannelsCompensatorgetNrGainsFilteringIterations(struct  detail_BlocksChannelsCompensator_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNrGainsFilteringIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BlocksChannelsCompensatorgetSimilarityThreshold(struct  detail_BlocksChannelsCompensator_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getSimilarityThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BlocksChannelsCompensatorgetUpdateGain(struct  detail_BlocksChannelsCompensator_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUpdateGain();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetBlockSize(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int width, int height)
{
try {
 
    wrapper->v->setBlockSize(width, height);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetBlockSizeV2(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   Size_t* size)
{
try {
 
    wrapper->v->setBlockSize(*size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetMatGains(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   vector_Mat* umv)
{
try {
 
    wrapper->v->setMatGains(*umv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetNrFeeds(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int nr_feeds)
{
try {
 
    wrapper->v->setNrFeeds(nr_feeds);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetNrGainsFilteringIterations(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   int nr_iterations)
{
try {
 
    wrapper->v->setNrGainsFilteringIterations(nr_iterations);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetSimilarityThreshold(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   double similarity_threshold)
{
try {
 
    wrapper->v->setSimilarityThreshold(similarity_threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BlocksChannelsCompensatorsetUpdateGain(struct  detail_BlocksChannelsCompensator_t* wrapper, 
                                   bool b)
{
try {
 
    wrapper->v->setUpdateGain(b);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(UMat_t*) pCvdetail_ImageFeaturesGet_descriptors(detail_ImageFeatures_t* p)
{
    UMat_t*  retval = new UMat_t;
try {
    UMat tr =   (p->v->descriptors);
    UMat*  t = new UMat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_ImageFeaturesSet_descriptors(detail_ImageFeatures_t* p, UMat_t* propval)
{
try {
    p->v->descriptors = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvdetail_ImageFeaturesGet_img_idx(detail_ImageFeatures_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->img_idx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_ImageFeaturesSet_img_idx(detail_ImageFeatures_t* p, int propval)
{
try {
    p->v->img_idx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Size_t*) pCvdetail_ImageFeaturesGet_img_size(detail_ImageFeatures_t* p)
{
    Size_t*  retval = new Size_t;
try {
    Size tr =   (p->v->img_size);
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_ImageFeaturesSet_img_size(detail_ImageFeatures_t* p, Size_t* propval)
{
try {
    p->v->img_size = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(vector_KeyPoint*) pCvdetail_ImageFeaturesGet_keypoints(detail_ImageFeatures_t* p)
{
vector_KeyPoint* retval = new vector_KeyPoint();
try {

    vector_KeyPoint tr =    (p->v->keypoints);
    vector_KeyPoint_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_ImageFeaturesSet_keypoints(detail_ImageFeatures_t* p, vector_KeyPoint* propval)
{
try {
    p->v->keypoints = *propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(vector_KeyPoint*)   pCvdetail_ImageFeaturesgetKeypoints(struct  detail_ImageFeatures_t* wrapper)
{
vector_KeyPoint* retval = new vector_KeyPoint();
try {
 
    vector_KeyPoint tr = wrapper->v->getKeypoints();
    vector_KeyPoint_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(Mat_t*) pCvdetail_MatchesInfoGet_H(detail_MatchesInfo_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->H);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_H(detail_MatchesInfo_t* p, Mat_t* propval)
{
try {
    p->v->H = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(double) pCvdetail_MatchesInfoGet_confidence(detail_MatchesInfo_t* p)
{
    double retval = 0;
try {

    retval =   (p->v->confidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_confidence(detail_MatchesInfo_t* p, double propval)
{
try {
    p->v->confidence = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvdetail_MatchesInfoGet_dst_img_idx(detail_MatchesInfo_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->dst_img_idx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_dst_img_idx(detail_MatchesInfo_t* p, int propval)
{
try {
    p->v->dst_img_idx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(vector_uchar*) pCvdetail_MatchesInfoGet_inliers_mask(detail_MatchesInfo_t* p)
{
vector_uchar* retval = new vector_uchar();
try {

    vector_uchar tr =    (p->v->inliers_mask);
    vector_uchar_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_inliers_mask(detail_MatchesInfo_t* p, vector_uchar* propval)
{
try {
    p->v->inliers_mask = *propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(vector_DMatch*) pCvdetail_MatchesInfoGet_matches(detail_MatchesInfo_t* p)
{
vector_DMatch* retval = new vector_DMatch();
try {

    vector_DMatch tr =    (p->v->matches);
    vector_DMatch_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_matches(detail_MatchesInfo_t* p, vector_DMatch* propval)
{
try {
    p->v->matches = *propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvdetail_MatchesInfoGet_num_inliers(detail_MatchesInfo_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->num_inliers);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_num_inliers(detail_MatchesInfo_t* p, int propval)
{
try {
    p->v->num_inliers = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvdetail_MatchesInfoGet_src_img_idx(detail_MatchesInfo_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->src_img_idx);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvdetail_MatchesInfoSet_src_img_idx(detail_MatchesInfo_t* p, int propval)
{
try {
    p->v->src_img_idx = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(vector_uchar*)   pCvdetail_MatchesInfogetInliers(struct  detail_MatchesInfo_t* wrapper)
{
vector_uchar* retval = new vector_uchar();
try {
 
    vector_uchar tr = wrapper->v->getInliers();
    vector_uchar_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_DMatch*)   pCvdetail_MatchesInfogetMatches(struct  detail_MatchesInfo_t* wrapper)
{
vector_DMatch* retval = new vector_DMatch();
try {
 
    vector_DMatch tr = wrapper->v->getMatches();
    vector_DMatch_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_FeaturesMatcherapply(struct  detail_FeaturesMatcher_t* wrapper, 
                                   detail_ImageFeatures_t* features1, detail_ImageFeatures_t* features2, 
                                   detail_MatchesInfo_t* matches_info)
{
try {
 
    wrapper->v->operator ()(*features1->v, *features2->v, *matches_info->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeaturesMatcherapply2(struct  detail_FeaturesMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, UMat_t* mask)
{
try {
 
    wrapper->v->operator ()(*features, *pairwise_matches, inparrConstDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_FeaturesMatchercollectGarbage(struct  detail_FeaturesMatcher_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvdetail_FeaturesMatcherisThreadSafe(struct  detail_FeaturesMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isThreadSafe();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BestOf2NearestMatcherapply(struct  detail_BestOf2NearestMatcher_t* wrapper, 
                                   detail_ImageFeatures_t* features1, detail_ImageFeatures_t* features2, 
                                   detail_MatchesInfo_t* matches_info)
{
try {
 
    wrapper->v->operator ()(*features1->v, *features2->v, *matches_info->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BestOf2NearestMatcherapply2(struct  detail_BestOf2NearestMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, UMat_t* mask)
{
try {
 
    wrapper->v->operator ()(*features, *pairwise_matches, inparrConstDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BestOf2NearestMatchercollectGarbage(struct  detail_BestOf2NearestMatcher_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_BestOf2NearestMatcher*)   pCvdetail_BestOf2NearestMatcher_create(bool try_use_gpu, float match_conf, 
                                   int num_matches_thresh1, int num_matches_thresh2)
{
Ptr_BestOf2NearestMatcher* retval = 0;
try {
 
    Ptr_BestOf2NearestMatcher p = cv::detail::BestOf2NearestMatcher::create(try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BestOf2NearestMatcherisThreadSafe(struct  detail_BestOf2NearestMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isThreadSafe();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BestOf2NearestRangeMatcherapply2(struct  detail_BestOf2NearestRangeMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->operator ()(*features, *pairwise_matches, inparrConstDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BestOf2NearestRangeMatchercollectGarbage(struct  detail_BestOf2NearestRangeMatcher_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_BestOf2NearestMatcher*)   pCvdetail_BestOf2NearestRangeMatcher_create(bool try_use_gpu, float match_conf, 
                                   int num_matches_thresh1, int num_matches_thresh2)
{
Ptr_BestOf2NearestMatcher* retval = 0;
try {
 
    Ptr_BestOf2NearestMatcher p = cv::detail::BestOf2NearestMatcher::create(try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BestOf2NearestRangeMatcherisThreadSafe(struct  detail_BestOf2NearestRangeMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isThreadSafe();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_AffineBestOf2NearestMatcherapply(struct  detail_AffineBestOf2NearestMatcher_t* wrapper, 
                                   detail_ImageFeatures_t* features1, detail_ImageFeatures_t* features2, 
                                   detail_MatchesInfo_t* matches_info)
{
try {
 
    wrapper->v->operator ()(*features1->v, *features2->v, *matches_info->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_AffineBestOf2NearestMatcherapply2(struct  detail_AffineBestOf2NearestMatcher_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   UMat_t* mask)
{
try {
 
    wrapper->v->operator ()(*features, *pairwise_matches, inparrConstDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_AffineBestOf2NearestMatchercollectGarbage(struct  detail_AffineBestOf2NearestMatcher_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_BestOf2NearestMatcher*)   pCvdetail_AffineBestOf2NearestMatcher_create(bool try_use_gpu, float match_conf, 
                                   int num_matches_thresh1, int num_matches_thresh2)
{
Ptr_BestOf2NearestMatcher* retval = 0;
try {
 
    Ptr_BestOf2NearestMatcher p = cv::detail::BestOf2NearestMatcher::create(try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_AffineBestOf2NearestMatcherisThreadSafe(struct  detail_AffineBestOf2NearestMatcher_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isThreadSafe();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_Estimatorapply(struct  detail_Estimator_t* wrapper, vector_ImageFeatures* features, 
                                   vector_MatchesInfo* pairwise_matches, vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_HomographyBasedEstimatorapply(struct  detail_HomographyBasedEstimator_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_AffineBasedEstimatorapply(struct  detail_AffineBasedEstimator_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BundleAdjusterBaseapply(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BundleAdjusterBaseconfThresh(struct  detail_BundleAdjusterBase_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->confThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdetail_BundleAdjusterBaserefinementMask(struct  detail_BundleAdjusterBase_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->refinementMask();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BundleAdjusterBasesetConfThresh(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   double conf_thresh)
{
try {
 
    wrapper->v->setConfThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterBasesetRefinementMask(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->setRefinementMask(*mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterBasesetTermCriteria(struct  detail_BundleAdjusterBase_t* wrapper, 
                                   TermCriteria_t* term_criteria)
{
try {
 
    wrapper->v->setTermCriteria(*term_criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(TermCriteria_t*)   pCvdetail_BundleAdjusterBasetermCriteria(struct  detail_BundleAdjusterBase_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->termCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_NoBundleAdjusterapply(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_NoBundleAdjusterconfThresh(struct  detail_NoBundleAdjuster_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->confThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdetail_NoBundleAdjusterrefinementMask(struct  detail_NoBundleAdjuster_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->refinementMask();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_NoBundleAdjustersetConfThresh(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   double conf_thresh)
{
try {
 
    wrapper->v->setConfThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_NoBundleAdjustersetRefinementMask(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->setRefinementMask(*mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_NoBundleAdjustersetTermCriteria(struct  detail_NoBundleAdjuster_t* wrapper, 
                                   TermCriteria_t* term_criteria)
{
try {
 
    wrapper->v->setTermCriteria(*term_criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(TermCriteria_t*)   pCvdetail_NoBundleAdjustertermCriteria(struct  detail_NoBundleAdjuster_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->termCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BundleAdjusterReprojapply(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BundleAdjusterReprojconfThresh(struct  detail_BundleAdjusterReproj_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->confThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdetail_BundleAdjusterReprojrefinementMask(struct  detail_BundleAdjusterReproj_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->refinementMask();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BundleAdjusterReprojsetConfThresh(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   double conf_thresh)
{
try {
 
    wrapper->v->setConfThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterReprojsetRefinementMask(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->setRefinementMask(*mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterReprojsetTermCriteria(struct  detail_BundleAdjusterReproj_t* wrapper, 
                                   TermCriteria_t* term_criteria)
{
try {
 
    wrapper->v->setTermCriteria(*term_criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(TermCriteria_t*)   pCvdetail_BundleAdjusterReprojtermCriteria(struct  detail_BundleAdjusterReproj_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->termCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BundleAdjusterRayapply(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BundleAdjusterRayconfThresh(struct  detail_BundleAdjusterRay_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->confThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdetail_BundleAdjusterRayrefinementMask(struct  detail_BundleAdjusterRay_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->refinementMask();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BundleAdjusterRaysetConfThresh(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   double conf_thresh)
{
try {
 
    wrapper->v->setConfThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterRaysetRefinementMask(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->setRefinementMask(*mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterRaysetTermCriteria(struct  detail_BundleAdjusterRay_t* wrapper, 
                                   TermCriteria_t* term_criteria)
{
try {
 
    wrapper->v->setTermCriteria(*term_criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(TermCriteria_t*)   pCvdetail_BundleAdjusterRaytermCriteria(struct  detail_BundleAdjusterRay_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->termCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BundleAdjusterAffineapply(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BundleAdjusterAffineconfThresh(struct  detail_BundleAdjusterAffine_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->confThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdetail_BundleAdjusterAffinerefinementMask(struct  detail_BundleAdjusterAffine_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->refinementMask();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BundleAdjusterAffinesetConfThresh(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   double conf_thresh)
{
try {
 
    wrapper->v->setConfThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterAffinesetRefinementMask(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->setRefinementMask(*mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterAffinesetTermCriteria(struct  detail_BundleAdjusterAffine_t* wrapper, 
                                   TermCriteria_t* term_criteria)
{
try {
 
    wrapper->v->setTermCriteria(*term_criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(TermCriteria_t*)   pCvdetail_BundleAdjusterAffinetermCriteria(struct  detail_BundleAdjusterAffine_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->termCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvdetail_BundleAdjusterAffinePartialapply(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   vector_ImageFeatures* features, vector_MatchesInfo* pairwise_matches, 
                                   vector_CameraParams* cameras)
{
    bool retval;
try {
 
    retval = wrapper->v->operator ()(*features, *pairwise_matches, *cameras);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdetail_BundleAdjusterAffinePartialconfThresh(struct  detail_BundleAdjusterAffinePartial_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->confThresh();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdetail_BundleAdjusterAffinePartialrefinementMask(struct  detail_BundleAdjusterAffinePartial_t* wrapper)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->refinementMask();
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_BundleAdjusterAffinePartialsetConfThresh(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   double conf_thresh)
{
try {
 
    wrapper->v->setConfThresh(conf_thresh);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterAffinePartialsetRefinementMask(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   Mat_t* mask)
{
try {
 
    wrapper->v->setRefinementMask(*mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_BundleAdjusterAffinePartialsetTermCriteria(struct  detail_BundleAdjusterAffinePartial_t* wrapper, 
                                   TermCriteria_t* term_criteria)
{
try {
 
    wrapper->v->setTermCriteria(*term_criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(TermCriteria_t*)   pCvdetail_BundleAdjusterAffinePartialtermCriteria(struct  detail_BundleAdjusterAffinePartial_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->termCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_SeamFinder*)   pCvdetail_SeamFindercreateDefault(int _type)
{
Ptr_SeamFinder* retval = 0;
try {
 
    Ptr_SeamFinder p = cv::detail::SeamFinder::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_SeamFinderfind(struct  detail_SeamFinder_t* wrapper, vector_UMat* src, 
                                   vector_Point* corners, vector_UMat* masks)
{
try {
 
    wrapper->v->find(*src, *corners, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SeamFinder*)   pCvdetail_NoSeamFindercreateDefault(int _type)
{
Ptr_SeamFinder* retval = 0;
try {
 
    Ptr_SeamFinder p = cv::detail::SeamFinder::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_NoSeamFinderfind(struct  detail_NoSeamFinder_t* wrapper, vector_UMat* arg1, 
                                   vector_Point* arg2, vector_UMat* arg3)
{
try {
 
    wrapper->v->find(*arg1, *arg2, *arg3);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SeamFinder*)   pCvdetail_PairwiseSeamFindercreateDefault(int _type)
{
Ptr_SeamFinder* retval = 0;
try {
 
    Ptr_SeamFinder p = cv::detail::SeamFinder::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_PairwiseSeamFinderfind(struct  detail_PairwiseSeamFinder_t* wrapper, 
                                   vector_UMat* src, vector_Point* corners, vector_UMat* masks)
{
try {
 
    wrapper->v->find(*src, *corners, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SeamFinder*)   pCvdetail_VoronoiSeamFindercreateDefault(int _type)
{
Ptr_SeamFinder* retval = 0;
try {
 
    Ptr_SeamFinder p = cv::detail::SeamFinder::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_VoronoiSeamFinderfind(struct  detail_VoronoiSeamFinder_t* wrapper, vector_UMat* src, 
                                   vector_Point* corners, vector_UMat* masks)
{
try {
 
    wrapper->v->find(*src, *corners, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SeamFinder*)   pCvdetail_DpSeamFindercreateDefault(int _type)
{
Ptr_SeamFinder* retval = 0;
try {
 
    Ptr_SeamFinder p = cv::detail::SeamFinder::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_DpSeamFinderfind(struct  detail_DpSeamFinder_t* wrapper, vector_UMat* src, 
                                   vector_Point* corners, vector_UMat* masks)
{
try {
 
    wrapper->v->find(*src, *corners, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_DpSeamFindersetCostFunction(struct  detail_DpSeamFinder_t* wrapper, string_t* _val)
{
try {
 
    wrapper->v->setCostFunction(string(_val->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_GraphCutSeamFinderfind(struct  detail_GraphCutSeamFinder_t* wrapper, 
                                   vector_UMat* src, vector_Point* corners, vector_UMat* masks)
{
try {
 
    wrapper->v->find(*src, *corners, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Timelapser*)   pCvdetail_TimelapsercreateDefault(int _type)
{
Ptr_Timelapser* retval = 0;
try {
 
    Ptr_Timelapser p = cv::detail::Timelapser::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(UMat_t*)   pCvdetail_TimelapsergetDst(struct  detail_Timelapser_t* wrapper)
{
    UMat_t*  retval = new UMat_t;
try { 
    UMat tr = wrapper->v->getDst();
    UMat*  t = new UMat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_Timelapserinitialize(struct  detail_Timelapser_t* wrapper, vector_Point* corners, 
                                   vector_Size* sizes)
{
try {
 
    wrapper->v->initialize(*corners, *sizes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_Timelapserprocess(struct  detail_Timelapser_t* wrapper, Mat_t* img, Mat_t* mask, 
                                   Point_t* tl)
{
try {
 
    wrapper->v->process(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_TimelapserprocessV2(struct  detail_Timelapser_t* wrapper, UMat_t* img, UMat_t* mask, 
                                   Point_t* tl)
{
try {
 
    wrapper->v->process(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_Timelapser*)   pCvdetail_TimelapserCropcreateDefault(int _type)
{
Ptr_Timelapser* retval = 0;
try {
 
    Ptr_Timelapser p = cv::detail::Timelapser::createDefault(_type);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(UMat_t*)   pCvdetail_TimelapserCropgetDst(struct  detail_TimelapserCrop_t* wrapper)
{
    UMat_t*  retval = new UMat_t;
try { 
    UMat tr = wrapper->v->getDst();
    UMat*  t = new UMat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_TimelapserCropinitialize(struct  detail_TimelapserCrop_t* wrapper, 
                                   vector_Point* corners, vector_Size* sizes)
{
try {
 
    wrapper->v->initialize(*corners, *sizes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_TimelapserCropprocess(struct  detail_TimelapserCrop_t* wrapper, Mat_t* img, 
                                   Mat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->process(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_TimelapserCropprocessV2(struct  detail_TimelapserCrop_t* wrapper, UMat_t* img, 
                                   UMat_t* mask, Point_t* tl)
{
try {
 
    wrapper->v->process(*img->v, *mask->v, *tl->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_SphericalProjectormapBackward(struct  detail_SphericalProjector_t* wrapper, float u, 
                                   float v, float x, float y)
{
try {
 
    wrapper->v->mapBackward(u, v, x, y);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_SphericalProjectormapForward(struct  detail_SphericalProjector_t* wrapper, float x, 
                                   float y, float u, float v)
{
try {
 
    wrapper->v->mapForward(x, y, u, v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Rect_t*)   pCvPyRotationWarperbuildMaps(struct  PyRotationWarper_t* wrapper, Size_t* src_size, Mat_t* K, 
                                   Mat_t* R, Mat_t* xmap, Mat_t* ymap)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->buildMaps(*src_size->v, *K->v, *R->v, *xmap->v, *ymap->v);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvPyRotationWarperbuildMapsV2(struct  PyRotationWarper_t* wrapper, Size_t* src_size, 
                                   UMat_t* K, UMat_t* R, UMat_t* xmap, UMat_t* ymap)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->buildMaps(*src_size->v, *K->v, *R->v, *xmap->v, *ymap->v);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvPyRotationWarpergetScale(struct  PyRotationWarper_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvPyRotationWarpersetScale(struct  PyRotationWarper_t* wrapper, float arg1)
{
try {
 
    wrapper->v->setScale(arg1);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Point_t*)   pCvPyRotationWarperwarp(struct  PyRotationWarper_t* wrapper, Mat_t* src, Mat_t* K, Mat_t* R, 
                                   int interp_mode, int border_mode, Mat_t* dst)
{
    Point_t*  retval = new Point_t;
try { 
    Point tr = wrapper->v->warp(*src->v, *K->v, *R->v, interp_mode, border_mode, *dst->v);
    Point*  t = new Point();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point_t*)   pCvPyRotationWarperwarpV2(struct  PyRotationWarper_t* wrapper, UMat_t* src, UMat_t* K, 
                                   UMat_t* R, int interp_mode, int border_mode, UMat_t* dst)
{
    Point_t*  retval = new Point_t;
try { 
    Point tr = wrapper->v->warp(*src->v, *K->v, *R->v, interp_mode, border_mode, *dst->v);
    Point*  t = new Point();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvPyRotationWarperwarpBackward(struct  PyRotationWarper_t* wrapper, Mat_t* src, Mat_t* K, 
                                   Mat_t* R, int interp_mode, int border_mode, Size_t* dst_size, 
                                   Mat_t* dst)
{
try {
 
    wrapper->v->warpBackward(*src->v, *K->v, *R->v, interp_mode, border_mode, *dst_size->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPyRotationWarperwarpBackwardV2(struct  PyRotationWarper_t* wrapper, UMat_t* src, UMat_t* K, 
                                   UMat_t* R, int interp_mode, int border_mode, Size_t* dst_size, 
                                   UMat_t* dst)
{
try {
 
    wrapper->v->warpBackward(*src->v, *K->v, *R->v, interp_mode, border_mode, *dst_size->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Point2f_t*)   pCvPyRotationWarperwarpPoint(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, Mat_t* K, 
                                   Mat_t* R)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->warpPoint(*pt->v, *K->v, *R->v);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point2f_t*)   pCvPyRotationWarperwarpPointV2(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, UMat_t* K, 
                                   UMat_t* R)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->warpPoint(*pt->v, *K->v, *R->v);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point2f_t*)   pCvPyRotationWarperwarpPointBackward(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   Mat_t* K, Mat_t* R)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->warpPointBackward(*pt->v, *K->v, *R->v);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point2f_t*)   pCvPyRotationWarperwarpPointBackwardV2(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   UMat_t* K, UMat_t* R)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->warpPointBackward(*pt->v, *K->v, *R->v);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point2f_t*)   pCvPyRotationWarperwarpPointBackwardV3(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   Mat_t* K, Mat_t* R)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->warpPointBackward(*pt->v, *K->v, *R->v);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point2f_t*)   pCvPyRotationWarperwarpPointBackwardV4(struct  PyRotationWarper_t* wrapper, Point2f_t* pt, 
                                   UMat_t* K, UMat_t* R)
{
    Point2f_t*  retval = new Point2f_t;
try { 
    Point2f tr = wrapper->v->warpPointBackward(*pt->v, *K->v, *R->v);
    Point2f*  t = new Point2f();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvPyRotationWarperwarpRoi(struct  PyRotationWarper_t* wrapper, Size_t* src_size, Mat_t* K, 
                                   Mat_t* R)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->warpRoi(*src_size->v, *K->v, *R->v);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvPyRotationWarperwarpRoiV2(struct  PyRotationWarper_t* wrapper, Size_t* src_size, UMat_t* K, 
                                   UMat_t* R)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = wrapper->v->warpRoi(*src_size->v, *K->v, *R->v);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorapply(struct  BackgroundSubtractor_t* wrapper, Mat_t* image, 
                                   Mat_t* fgmask, double learningRate)
{
try {
 
    wrapper->v->apply(*image->v, *fgmask->v, learningRate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorapplyV2(struct  BackgroundSubtractor_t* wrapper, UMat_t* image, 
                                   UMat_t* fgmask, double learningRate)
{
try {
 
    wrapper->v->apply(*image->v, *fgmask->v, learningRate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorclear(struct  BackgroundSubtractor_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvBackgroundSubtractorempty(struct  BackgroundSubtractor_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorgetBackgroundImage(struct  BackgroundSubtractor_t* wrapper, 
                                   Mat_t* backgroundImage)
{
try {
 
    wrapper->v->getBackgroundImage(*backgroundImage->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorgetBackgroundImageV2(struct  BackgroundSubtractor_t* wrapper, 
                                   UMat_t* backgroundImage)
{
try {
 
    wrapper->v->getBackgroundImage(*backgroundImage->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvBackgroundSubtractorgetDefaultName(struct  BackgroundSubtractor_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorread(struct  BackgroundSubtractor_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorsave(struct  BackgroundSubtractor_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorwrite(struct  BackgroundSubtractor_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2apply(struct  BackgroundSubtractorMOG2_t* wrapper, Mat_t* image, 
                                   Mat_t* fgmask, double learningRate)
{
try {
 
    wrapper->v->apply(*image->v, *fgmask->v, learningRate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2applyV2(struct  BackgroundSubtractorMOG2_t* wrapper, UMat_t* image, 
                                   UMat_t* fgmask, double learningRate)
{
try {
 
    wrapper->v->apply(*image->v, *fgmask->v, learningRate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2clear(struct  BackgroundSubtractorMOG2_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvBackgroundSubtractorMOG2empty(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorMOG2getBackgroundImage(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   Mat_t* backgroundImage)
{
try {
 
    wrapper->v->getBackgroundImage(*backgroundImage->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2getBackgroundImageV2(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   UMat_t* backgroundImage)
{
try {
 
    wrapper->v->getBackgroundImage(*backgroundImage->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getBackgroundRatio(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getBackgroundRatio();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getComplexityReductionThreshold(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getComplexityReductionThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvBackgroundSubtractorMOG2getDefaultName(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvBackgroundSubtractorMOG2getDetectShadows(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getDetectShadows();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorMOG2getHistory(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getHistory();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorMOG2getNMixtures(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNMixtures();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getShadowThreshold(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getShadowThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorMOG2getShadowValue(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getShadowValue();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getVarInit(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getVarInit();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getVarMax(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getVarMax();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getVarMin(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getVarMin();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getVarThreshold(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getVarThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorMOG2getVarThresholdGen(struct  BackgroundSubtractorMOG2_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getVarThresholdGen();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorMOG2read(struct  BackgroundSubtractorMOG2_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2save(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setBackgroundRatio(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double ratio)
{
try {
 
    wrapper->v->setBackgroundRatio(ratio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setComplexityReductionThreshold(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double ct)
{
try {
 
    wrapper->v->setComplexityReductionThreshold(ct);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setDetectShadows(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   bool detectShadows)
{
try {
 
    wrapper->v->setDetectShadows(detectShadows);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setHistory(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   int history)
{
try {
 
    wrapper->v->setHistory(history);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setNMixtures(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   int nmixtures)
{
try {
 
    wrapper->v->setNMixtures(nmixtures);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setShadowThreshold(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double threshold)
{
try {
 
    wrapper->v->setShadowThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setShadowValue(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   int value)
{
try {
 
    wrapper->v->setShadowValue(value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setVarInit(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varInit)
{
try {
 
    wrapper->v->setVarInit(varInit);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setVarMax(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varMax)
{
try {
 
    wrapper->v->setVarMax(varMax);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setVarMin(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varMin)
{
try {
 
    wrapper->v->setVarMin(varMin);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setVarThreshold(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varThreshold)
{
try {
 
    wrapper->v->setVarThreshold(varThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2setVarThresholdGen(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   double varThresholdGen)
{
try {
 
    wrapper->v->setVarThresholdGen(varThresholdGen);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorMOG2write(struct  BackgroundSubtractorMOG2_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNapply(struct  BackgroundSubtractorKNN_t* wrapper, Mat_t* image, 
                                   Mat_t* fgmask, double learningRate)
{
try {
 
    wrapper->v->apply(*image->v, *fgmask->v, learningRate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNapplyV2(struct  BackgroundSubtractorKNN_t* wrapper, UMat_t* image, 
                                   UMat_t* fgmask, double learningRate)
{
try {
 
    wrapper->v->apply(*image->v, *fgmask->v, learningRate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNclear(struct  BackgroundSubtractorKNN_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvBackgroundSubtractorKNNempty(struct  BackgroundSubtractorKNN_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorKNNgetBackgroundImage(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   Mat_t* backgroundImage)
{
try {
 
    wrapper->v->getBackgroundImage(*backgroundImage->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNgetBackgroundImageV2(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   UMat_t* backgroundImage)
{
try {
 
    wrapper->v->getBackgroundImage(*backgroundImage->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvBackgroundSubtractorKNNgetDefaultName(struct  BackgroundSubtractorKNN_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvBackgroundSubtractorKNNgetDetectShadows(struct  BackgroundSubtractorKNN_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getDetectShadows();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorKNNgetDist2Threshold(struct  BackgroundSubtractorKNN_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getDist2Threshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorKNNgetHistory(struct  BackgroundSubtractorKNN_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getHistory();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorKNNgetNSamples(struct  BackgroundSubtractorKNN_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNSamples();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvBackgroundSubtractorKNNgetShadowThreshold(struct  BackgroundSubtractorKNN_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getShadowThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorKNNgetShadowValue(struct  BackgroundSubtractorKNN_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getShadowValue();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvBackgroundSubtractorKNNgetkNNSamples(struct  BackgroundSubtractorKNN_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getkNNSamples();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvBackgroundSubtractorKNNread(struct  BackgroundSubtractorKNN_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsave(struct  BackgroundSubtractorKNN_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetDetectShadows(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   bool detectShadows)
{
try {
 
    wrapper->v->setDetectShadows(detectShadows);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetDist2Threshold(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   double _dist2Threshold)
{
try {
 
    wrapper->v->setDist2Threshold(_dist2Threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetHistory(struct  BackgroundSubtractorKNN_t* wrapper, int history)
{
try {
 
    wrapper->v->setHistory(history);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetNSamples(struct  BackgroundSubtractorKNN_t* wrapper, int _nN)
{
try {
 
    wrapper->v->setNSamples(_nN);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetShadowThreshold(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   double threshold)
{
try {
 
    wrapper->v->setShadowThreshold(threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetShadowValue(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   int value)
{
try {
 
    wrapper->v->setShadowValue(value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNsetkNNSamples(struct  BackgroundSubtractorKNN_t* wrapper, int _nkNN)
{
try {
 
    wrapper->v->setkNNSamples(_nkNN);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvBackgroundSubtractorKNNwrite(struct  BackgroundSubtractorKNN_t* wrapper, 
                                   Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

CVAPI(Mat_t*) pCvKalmanFilterGet_controlMatrix(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->controlMatrix);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_controlMatrix(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->controlMatrix = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_errorCovPost(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->errorCovPost);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_errorCovPost(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->errorCovPost = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_errorCovPre(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->errorCovPre);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_errorCovPre(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->errorCovPre = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_gain(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->gain);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_gain(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->gain = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_measurementMatrix(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->measurementMatrix);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_measurementMatrix(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->measurementMatrix = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_measurementNoiseCov(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->measurementNoiseCov);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_measurementNoiseCov(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->measurementNoiseCov = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_processNoiseCov(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->processNoiseCov);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_processNoiseCov(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->processNoiseCov = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_statePost(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->statePost);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_statePost(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->statePost = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_statePre(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->statePre);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_statePre(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->statePre = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(Mat_t*) pCvKalmanFilterGet_transitionMatrix(KalmanFilter_t* p)
{
    Mat_t*  retval = new Mat_t;
try {
    Mat tr =   (p->v->transitionMatrix);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvKalmanFilterSet_transitionMatrix(KalmanFilter_t* p, Mat_t* propval)
{
try {
    p->v->transitionMatrix = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(Mat_t*)   pCvKalmanFiltercorrect(struct  KalmanFilter_t* wrapper, Mat_t* measurement)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->correct(*measurement->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvKalmanFilterpredict(struct  KalmanFilter_t* wrapper, Mat_t* control)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = wrapper->v->predict(inparrConstDefault(control));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvDenseOpticalFlowcalc(struct  DenseOpticalFlow_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDenseOpticalFlowcalcV2(struct  DenseOpticalFlow_t* wrapper, UMat_t* I0, UMat_t* I1, 
                                   UMat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDenseOpticalFlowclear(struct  DenseOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDenseOpticalFlowcollectGarbage(struct  DenseOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvDenseOpticalFlowempty(struct  DenseOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvDenseOpticalFlowgetDefaultName(struct  DenseOpticalFlow_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvDenseOpticalFlowread(struct  DenseOpticalFlow_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDenseOpticalFlowsave(struct  DenseOpticalFlow_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDenseOpticalFlowwrite(struct  DenseOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparseOpticalFlowcalc(struct  SparseOpticalFlow_t* wrapper, Mat_t* prevImg, Mat_t* nextImg, 
                                   Mat_t* prevPts, Mat_t* nextPts, Mat_t* status, Mat_t* err)
{
try {
 
    wrapper->v->calc(*prevImg->v, *nextImg->v, *prevPts->v, *nextPts->v, *status->v, outarrDefault(err));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparseOpticalFlowcalcV2(struct  SparseOpticalFlow_t* wrapper, UMat_t* prevImg, 
                                   UMat_t* nextImg, UMat_t* prevPts, UMat_t* nextPts, UMat_t* status, UMat_t* err)
{
try {
 
    wrapper->v->calc(*prevImg->v, *nextImg->v, *prevPts->v, *nextPts->v, *status->v, outarrDefault(err));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparseOpticalFlowclear(struct  SparseOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvSparseOpticalFlowempty(struct  SparseOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvSparseOpticalFlowgetDefaultName(struct  SparseOpticalFlow_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSparseOpticalFlowread(struct  SparseOpticalFlow_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparseOpticalFlowsave(struct  SparseOpticalFlow_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparseOpticalFlowwrite(struct  SparseOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowcalc(struct  FarnebackOpticalFlow_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowcalcV2(struct  FarnebackOpticalFlow_t* wrapper, UMat_t* I0, UMat_t* I1, 
                                   UMat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowclear(struct  FarnebackOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowcollectGarbage(struct  FarnebackOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_FarnebackOpticalFlow*)   pCvFarnebackOpticalFlow_create(int numLevels, double pyrScale, bool fastPyramids, int winSize, 
                                   int numIters, int polyN, double polySigma, int flags)
{
Ptr_FarnebackOpticalFlow* retval = 0;
try {
 
    Ptr_FarnebackOpticalFlow p = cv::FarnebackOpticalFlow::create(numLevels, pyrScale, fastPyramids, winSize, numIters, polyN, polySigma, flags);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFarnebackOpticalFlowempty(struct  FarnebackOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvFarnebackOpticalFlowgetDefaultName(struct  FarnebackOpticalFlow_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvFarnebackOpticalFlowgetFastPyramids(struct  FarnebackOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getFastPyramids();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFarnebackOpticalFlowgetFlags(struct  FarnebackOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFlags();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFarnebackOpticalFlowgetNumIters(struct  FarnebackOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNumIters();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFarnebackOpticalFlowgetNumLevels(struct  FarnebackOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getNumLevels();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFarnebackOpticalFlowgetPolyN(struct  FarnebackOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPolyN();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvFarnebackOpticalFlowgetPolySigma(struct  FarnebackOpticalFlow_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getPolySigma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvFarnebackOpticalFlowgetPyrScale(struct  FarnebackOpticalFlow_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getPyrScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvFarnebackOpticalFlowgetWinSize(struct  FarnebackOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getWinSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvFarnebackOpticalFlowread(struct  FarnebackOpticalFlow_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsave(struct  FarnebackOpticalFlow_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetFastPyramids(struct  FarnebackOpticalFlow_t* wrapper, 
                                   bool fastPyramids)
{
try {
 
    wrapper->v->setFastPyramids(fastPyramids);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetFlags(struct  FarnebackOpticalFlow_t* wrapper, int flags)
{
try {
 
    wrapper->v->setFlags(flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetNumIters(struct  FarnebackOpticalFlow_t* wrapper, int numIters)
{
try {
 
    wrapper->v->setNumIters(numIters);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetNumLevels(struct  FarnebackOpticalFlow_t* wrapper, int numLevels)
{
try {
 
    wrapper->v->setNumLevels(numLevels);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetPolyN(struct  FarnebackOpticalFlow_t* wrapper, int polyN)
{
try {
 
    wrapper->v->setPolyN(polyN);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetPolySigma(struct  FarnebackOpticalFlow_t* wrapper, double polySigma)
{
try {
 
    wrapper->v->setPolySigma(polySigma);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetPyrScale(struct  FarnebackOpticalFlow_t* wrapper, double pyrScale)
{
try {
 
    wrapper->v->setPyrScale(pyrScale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowsetWinSize(struct  FarnebackOpticalFlow_t* wrapper, int winSize)
{
try {
 
    wrapper->v->setWinSize(winSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvFarnebackOpticalFlowwrite(struct  FarnebackOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementcalc(struct  VariationalRefinement_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementcalcV2(struct  VariationalRefinement_t* wrapper, UMat_t* I0, 
                                   UMat_t* I1, UMat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementcalcUV(struct  VariationalRefinement_t* wrapper, Mat_t* I0, Mat_t* I1, 
                                   Mat_t* flow_u, Mat_t* flow_v)
{
try {
 
    wrapper->v->calcUV(*I0->v, *I1->v, *flow_u->v, *flow_v->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementcalcUVV2(struct  VariationalRefinement_t* wrapper, UMat_t* I0, 
                                   UMat_t* I1, UMat_t* flow_u, UMat_t* flow_v)
{
try {
 
    wrapper->v->calcUV(*I0->v, *I1->v, *flow_u->v, *flow_v->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementclear(struct  VariationalRefinement_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementcollectGarbage(struct  VariationalRefinement_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_VariationalRefinement*)   pCvVariationalRefinement_create()
{
Ptr_VariationalRefinement* retval = 0;
try {
 
    Ptr_VariationalRefinement p = cv::VariationalRefinement::create();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVariationalRefinementempty(struct  VariationalRefinement_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvVariationalRefinementgetAlpha(struct  VariationalRefinement_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getAlpha();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvVariationalRefinementgetDefaultName(struct  VariationalRefinement_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvVariationalRefinementgetDelta(struct  VariationalRefinement_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getDelta();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvVariationalRefinementgetFixedPointIterations(struct  VariationalRefinement_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFixedPointIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvVariationalRefinementgetGamma(struct  VariationalRefinement_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvVariationalRefinementgetOmega(struct  VariationalRefinement_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getOmega();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvVariationalRefinementgetSorIterations(struct  VariationalRefinement_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getSorIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvVariationalRefinementread(struct  VariationalRefinement_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsave(struct  VariationalRefinement_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsetAlpha(struct  VariationalRefinement_t* wrapper, float _val)
{
try {
 
    wrapper->v->setAlpha(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsetDelta(struct  VariationalRefinement_t* wrapper, float _val)
{
try {
 
    wrapper->v->setDelta(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsetFixedPointIterations(struct  VariationalRefinement_t* wrapper, 
                                   int _val)
{
try {
 
    wrapper->v->setFixedPointIterations(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsetGamma(struct  VariationalRefinement_t* wrapper, float _val)
{
try {
 
    wrapper->v->setGamma(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsetOmega(struct  VariationalRefinement_t* wrapper, float _val)
{
try {
 
    wrapper->v->setOmega(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementsetSorIterations(struct  VariationalRefinement_t* wrapper, int _val)
{
try {
 
    wrapper->v->setSorIterations(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVariationalRefinementwrite(struct  VariationalRefinement_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowcalc(struct  DISOpticalFlow_t* wrapper, Mat_t* I0, Mat_t* I1, Mat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowcalcV2(struct  DISOpticalFlow_t* wrapper, UMat_t* I0, UMat_t* I1, 
                                   UMat_t* flow)
{
try {
 
    wrapper->v->calc(*I0->v, *I1->v, *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowclear(struct  DISOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowcollectGarbage(struct  DISOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->collectGarbage();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_DISOpticalFlow*)   pCvDISOpticalFlow_create(int preset)
{
Ptr_DISOpticalFlow* retval = 0;
try {
 
    Ptr_DISOpticalFlow p = cv::DISOpticalFlow::create(preset);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvDISOpticalFlowempty(struct  DISOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvDISOpticalFlowgetDefaultName(struct  DISOpticalFlow_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvDISOpticalFlowgetFinestScale(struct  DISOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFinestScale();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvDISOpticalFlowgetGradientDescentIterations(struct  DISOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getGradientDescentIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvDISOpticalFlowgetPatchSize(struct  DISOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPatchSize();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvDISOpticalFlowgetPatchStride(struct  DISOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getPatchStride();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvDISOpticalFlowgetUseMeanNormalization(struct  DISOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUseMeanNormalization();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvDISOpticalFlowgetUseSpatialPropagation(struct  DISOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getUseSpatialPropagation();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvDISOpticalFlowgetVariationalRefinementAlpha(struct  DISOpticalFlow_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getVariationalRefinementAlpha();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvDISOpticalFlowgetVariationalRefinementDelta(struct  DISOpticalFlow_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getVariationalRefinementDelta();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvDISOpticalFlowgetVariationalRefinementGamma(struct  DISOpticalFlow_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getVariationalRefinementGamma();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvDISOpticalFlowgetVariationalRefinementIterations(struct  DISOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getVariationalRefinementIterations();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvDISOpticalFlowread(struct  DISOpticalFlow_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsave(struct  DISOpticalFlow_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetFinestScale(struct  DISOpticalFlow_t* wrapper, int _val)
{
try {
 
    wrapper->v->setFinestScale(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetGradientDescentIterations(struct  DISOpticalFlow_t* wrapper, int _val)
{
try {
 
    wrapper->v->setGradientDescentIterations(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetPatchSize(struct  DISOpticalFlow_t* wrapper, int _val)
{
try {
 
    wrapper->v->setPatchSize(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetPatchStride(struct  DISOpticalFlow_t* wrapper, int _val)
{
try {
 
    wrapper->v->setPatchStride(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetUseMeanNormalization(struct  DISOpticalFlow_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUseMeanNormalization(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetUseSpatialPropagation(struct  DISOpticalFlow_t* wrapper, bool _val)
{
try {
 
    wrapper->v->setUseSpatialPropagation(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetVariationalRefinementAlpha(struct  DISOpticalFlow_t* wrapper, float _val)
{
try {
 
    wrapper->v->setVariationalRefinementAlpha(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetVariationalRefinementDelta(struct  DISOpticalFlow_t* wrapper, float _val)
{
try {
 
    wrapper->v->setVariationalRefinementDelta(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetVariationalRefinementGamma(struct  DISOpticalFlow_t* wrapper, float _val)
{
try {
 
    wrapper->v->setVariationalRefinementGamma(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowsetVariationalRefinementIterations(struct  DISOpticalFlow_t* wrapper, 
                                   int _val)
{
try {
 
    wrapper->v->setVariationalRefinementIterations(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvDISOpticalFlowwrite(struct  DISOpticalFlow_t* wrapper, Ptr_FileStorage* fs, string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowcalc(struct  SparsePyrLKOpticalFlow_t* wrapper, Mat_t* prevImg, 
                                   Mat_t* nextImg, Mat_t* prevPts, Mat_t* nextPts, Mat_t* status, Mat_t* err)
{
try {
 
    wrapper->v->calc(*prevImg->v, *nextImg->v, *prevPts->v, *nextPts->v, *status->v, outarrDefault(err));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowcalcV2(struct  SparsePyrLKOpticalFlow_t* wrapper, UMat_t* prevImg, 
                                   UMat_t* nextImg, UMat_t* prevPts, UMat_t* nextPts, UMat_t* status, 
                                   UMat_t* err)
{
try {
 
    wrapper->v->calc(*prevImg->v, *nextImg->v, *prevPts->v, *nextPts->v, *status->v, outarrDefault(err));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowclear(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
try {
 
    wrapper->v->clear();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_SparsePyrLKOpticalFlow*)   pCvSparsePyrLKOpticalFlow_create(Size_t* winSize, int maxLevel, TermCriteria_t* crit, 
                                   int flags, double minEigThreshold)
{
Ptr_SparsePyrLKOpticalFlow* retval = 0;
try {
 
    Size x1; if (winSize == 0) { Size_t a1; x1 = Size(21, 21); a1.v = &x1; winSize = &a1; };     
    TermCriteria x3; if (crit == 0) { TermCriteria_t a3; x3 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01); a3.v = &x3; crit = &a3; };     
    Ptr_SparsePyrLKOpticalFlow p = cv::SparsePyrLKOpticalFlow::create(*winSize->v, maxLevel, *crit->v, flags, minEigThreshold);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvSparsePyrLKOpticalFlowempty(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->empty();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvSparsePyrLKOpticalFlowgetDefaultName(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getDefaultName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSparsePyrLKOpticalFlowgetFlags(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getFlags();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvSparsePyrLKOpticalFlowgetMaxLevel(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    int retval = 0;
try {
 
    retval = wrapper->v->getMaxLevel();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvSparsePyrLKOpticalFlowgetMinEigThreshold(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    double retval = 0;
try {
 
    retval = wrapper->v->getMinEigThreshold();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(TermCriteria_t*)   pCvSparsePyrLKOpticalFlowgetTermCriteria(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    TermCriteria_t*  retval = new TermCriteria_t;
try { 
    TermCriteria tr = wrapper->v->getTermCriteria();
    TermCriteria*  t = new TermCriteria();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvSparsePyrLKOpticalFlowgetWinSize(struct  SparsePyrLKOpticalFlow_t* wrapper)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = wrapper->v->getWinSize();
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowread(struct  SparsePyrLKOpticalFlow_t* wrapper, FileNode_t* fn)
{
try {
 
    wrapper->v->read(*fn->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowsave(struct  SparsePyrLKOpticalFlow_t* wrapper, string_t* filename)
{
try {
 
    wrapper->v->save(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowsetFlags(struct  SparsePyrLKOpticalFlow_t* wrapper, int flags)
{
try {
 
    wrapper->v->setFlags(flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowsetMaxLevel(struct  SparsePyrLKOpticalFlow_t* wrapper, int maxLevel)
{
try {
 
    wrapper->v->setMaxLevel(maxLevel);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowsetMinEigThreshold(struct  SparsePyrLKOpticalFlow_t* wrapper, 
                                   double minEigThreshold)
{
try {
 
    wrapper->v->setMinEigThreshold(minEigThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowsetTermCriteria(struct  SparsePyrLKOpticalFlow_t* wrapper, 
                                   TermCriteria_t* crit)
{
try {
 
    wrapper->v->setTermCriteria(*crit->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowsetWinSize(struct  SparsePyrLKOpticalFlow_t* wrapper, 
                                   Size_t* winSize)
{
try {
 
    wrapper->v->setWinSize(*winSize->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSparsePyrLKOpticalFlowwrite(struct  SparsePyrLKOpticalFlow_t* wrapper, Ptr_FileStorage* fs, 
                                   string_t* name)
{
try {
 
    if (name == 0) { string_t a2; a2.v = pEmptyString; name = &a2; };      
    wrapper->v->write(*fs, string(name->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTrackerinit(struct  Tracker_t* wrapper, Mat_t* image, Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTrackerinitV2(struct  Tracker_t* wrapper, UMat_t* image, Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTrackerupdate(struct  Tracker_t* wrapper, Mat_t* image, Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvTrackerupdateV2(struct  Tracker_t* wrapper, UMat_t* image, Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_TrackerMIL*)   pCvTrackerMIL_create(TrackerMIL_Params_t* parameters)
{
Ptr_TrackerMIL* retval = 0;
try {
 
    TrackerMIL::Params x1; if (parameters == 0) { TrackerMIL_Params_t a1; x1 = TrackerMIL::Params(); a1.v = &x1; parameters = &a1; };     
    Ptr_TrackerMIL p = cv::TrackerMIL::create(*parameters->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTrackerMILinit(struct  TrackerMIL_t* wrapper, Mat_t* image, Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTrackerMILinitV2(struct  TrackerMIL_t* wrapper, UMat_t* image, Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTrackerMILupdate(struct  TrackerMIL_t* wrapper, Mat_t* image, Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvTrackerMILupdateV2(struct  TrackerMIL_t* wrapper, UMat_t* image, Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(int) pCvTrackerMIL_ParamsGet_featureSetNumFeatures(TrackerMIL_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->featureSetNumFeatures);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_featureSetNumFeatures(TrackerMIL_Params_t* p, int propval)
{
try {
    p->v->featureSetNumFeatures = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvTrackerMIL_ParamsGet_samplerInitInRadius(TrackerMIL_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->samplerInitInRadius);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_samplerInitInRadius(TrackerMIL_Params_t* p, float propval)
{
try {
    p->v->samplerInitInRadius = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvTrackerMIL_ParamsGet_samplerInitMaxNegNum(TrackerMIL_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->samplerInitMaxNegNum);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_samplerInitMaxNegNum(TrackerMIL_Params_t* p, int propval)
{
try {
    p->v->samplerInitMaxNegNum = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvTrackerMIL_ParamsGet_samplerSearchWinSize(TrackerMIL_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->samplerSearchWinSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_samplerSearchWinSize(TrackerMIL_Params_t* p, float propval)
{
try {
    p->v->samplerSearchWinSize = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(float) pCvTrackerMIL_ParamsGet_samplerTrackInRadius(TrackerMIL_Params_t* p)
{
    float retval = 0;
try {

    retval =   (p->v->samplerTrackInRadius);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_samplerTrackInRadius(TrackerMIL_Params_t* p, float propval)
{
try {
    p->v->samplerTrackInRadius = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvTrackerMIL_ParamsGet_samplerTrackMaxNegNum(TrackerMIL_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->samplerTrackMaxNegNum);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_samplerTrackMaxNegNum(TrackerMIL_Params_t* p, int propval)
{
try {
    p->v->samplerTrackMaxNegNum = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvTrackerMIL_ParamsGet_samplerTrackMaxPosNum(TrackerMIL_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->samplerTrackMaxPosNum);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerMIL_ParamsSet_samplerTrackMaxPosNum(TrackerMIL_Params_t* p, int propval)
{
try {
    p->v->samplerTrackMaxPosNum = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(Ptr_TrackerGOTURN*)   pCvTrackerGOTURN_create(TrackerGOTURN_Params_t* parameters)
{
Ptr_TrackerGOTURN* retval = 0;
try {
 
    TrackerGOTURN::Params x1; if (parameters == 0) { TrackerGOTURN_Params_t a1; x1 = TrackerGOTURN::Params(); a1.v = &x1; parameters = &a1; };     
    Ptr_TrackerGOTURN p = cv::TrackerGOTURN::create(*parameters->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTrackerGOTURNinit(struct  TrackerGOTURN_t* wrapper, Mat_t* image, Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTrackerGOTURNinitV2(struct  TrackerGOTURN_t* wrapper, UMat_t* image, Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTrackerGOTURNupdate(struct  TrackerGOTURN_t* wrapper, Mat_t* image, Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvTrackerGOTURNupdateV2(struct  TrackerGOTURN_t* wrapper, UMat_t* image, Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(string_t*) pCvTrackerGOTURN_ParamsGet_modelBin(TrackerGOTURN_Params_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->modelBin);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerGOTURN_ParamsSet_modelBin(TrackerGOTURN_Params_t* p, string_t* propval)
{
try {
    p->v->modelBin = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(string_t*) pCvTrackerGOTURN_ParamsGet_modelTxt(TrackerGOTURN_Params_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->modelTxt);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerGOTURN_ParamsSet_modelTxt(TrackerGOTURN_Params_t* p, string_t* propval)
{
try {
    p->v->modelTxt = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(Ptr_TrackerDaSiamRPN*)   pCvTrackerDaSiamRPN_create(TrackerDaSiamRPN_Params_t* parameters)
{
Ptr_TrackerDaSiamRPN* retval = 0;
try {
 
    TrackerDaSiamRPN::Params x1; if (parameters == 0) { TrackerDaSiamRPN_Params_t a1; x1 = TrackerDaSiamRPN::Params(); a1.v = &x1; parameters = &a1; };     
    Ptr_TrackerDaSiamRPN p = cv::TrackerDaSiamRPN::create(*parameters->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvTrackerDaSiamRPNgetTrackingScore(struct  TrackerDaSiamRPN_t* wrapper)
{
    float retval = 0;
try {
 
    retval = wrapper->v->getTrackingScore();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvTrackerDaSiamRPNinit(struct  TrackerDaSiamRPN_t* wrapper, Mat_t* image, 
                                   Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvTrackerDaSiamRPNinitV2(struct  TrackerDaSiamRPN_t* wrapper, UMat_t* image, 
                                   Rect_t* boundingBox)
{
try {
 
    wrapper->v->init(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvTrackerDaSiamRPNupdate(struct  TrackerDaSiamRPN_t* wrapper, Mat_t* image, 
                                   Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvTrackerDaSiamRPNupdateV2(struct  TrackerDaSiamRPN_t* wrapper, UMat_t* image, 
                                   Rect_t* boundingBox)
{
    bool retval;
try {
 
    retval = wrapper->v->update(*image->v, *boundingBox->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

CVAPI(int) pCvTrackerDaSiamRPN_ParamsGet_backend(TrackerDaSiamRPN_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->backend);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerDaSiamRPN_ParamsSet_backend(TrackerDaSiamRPN_Params_t* p, int propval)
{
try {
    p->v->backend = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(string_t*) pCvTrackerDaSiamRPN_ParamsGet_kernel_cls1(TrackerDaSiamRPN_Params_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->kernel_cls1);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerDaSiamRPN_ParamsSet_kernel_cls1(TrackerDaSiamRPN_Params_t* p, string_t* propval)
{
try {
    p->v->kernel_cls1 = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(string_t*) pCvTrackerDaSiamRPN_ParamsGet_kernel_r1(TrackerDaSiamRPN_Params_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->kernel_r1);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerDaSiamRPN_ParamsSet_kernel_r1(TrackerDaSiamRPN_Params_t* p, string_t* propval)
{
try {
    p->v->kernel_r1 = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(string_t*) pCvTrackerDaSiamRPN_ParamsGet_model(TrackerDaSiamRPN_Params_t* p)
{
    string_t* retval = new string_t;
 try {

    string  sr =   (p->v->model);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerDaSiamRPN_ParamsSet_model(TrackerDaSiamRPN_Params_t* p, string_t* propval)
{
try {
    p->v->model = *propval->v;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}

CVAPI(int) pCvTrackerDaSiamRPN_ParamsGet_target(TrackerDaSiamRPN_Params_t* p)
{
    int retval = 0;
try {

    retval =   (p->v->target);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);
}

CVAPI(void) pCvTrackerDaSiamRPN_ParamsSet_target(TrackerDaSiamRPN_Params_t* p, int propval)
{
try {
    p->v->target = propval;
} catch (std::exception &e) { 
         exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return ;
}
CVAPI(double)   pCvVideoCaptureget(struct  VideoCapture_t* wrapper, int propId)
{
    double retval = 0;
try {
 
    retval = wrapper->v->get(propId);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvVideoCapturegetBackendName(struct  VideoCapture_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getBackendName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCapturegetExceptionMode(struct  VideoCapture_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->getExceptionMode();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCapturegrab(struct  VideoCapture_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->grab();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureisOpened(struct  VideoCapture_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isOpened();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureopen(struct  VideoCapture_t* wrapper, string_t* filename, int apiPreference)
{
    bool retval;
try {
 
    retval = wrapper->v->open(string(filename->v), apiPreference);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureopenV2(struct  VideoCapture_t* wrapper, string_t* filename, int apiPreference, 
                                   vector_int* params)
{
    bool retval;
try {
 
    retval = wrapper->v->open(string(filename->v), apiPreference, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureopenV3(struct  VideoCapture_t* wrapper, int index, int apiPreference)
{
    bool retval;
try {
 
    retval = wrapper->v->open(index, apiPreference);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureopenV4(struct  VideoCapture_t* wrapper, int index, int apiPreference, 
                                   vector_int* params)
{
    bool retval;
try {
 
    retval = wrapper->v->open(index, apiPreference, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureread(struct  VideoCapture_t* wrapper, Mat_t* image)
{
    bool retval;
try {
 
    retval = wrapper->v->read(*image->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCapturereadV2(struct  VideoCapture_t* wrapper, UMat_t* image)
{
    bool retval;
try {
 
    retval = wrapper->v->read(*image->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvVideoCapturerelease(struct  VideoCapture_t* wrapper)
{
try {
 
    wrapper->v->release();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvVideoCaptureretrieve(struct  VideoCapture_t* wrapper, Mat_t* image, int flag)
{
    bool retval;
try {
 
    retval = wrapper->v->retrieve(*image->v, flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureretrieveV2(struct  VideoCapture_t* wrapper, UMat_t* image, int flag)
{
    bool retval;
try {
 
    retval = wrapper->v->retrieve(*image->v, flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoCaptureset(struct  VideoCapture_t* wrapper, int propId, double value)
{
    bool retval;
try {
 
    retval = wrapper->v->set(propId, value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvVideoCapturesetExceptionMode(struct  VideoCapture_t* wrapper, bool enable)
{
try {
 
    wrapper->v->setExceptionMode(enable);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvVideoWriterfourcc(char c1, char c2, char c3, char c4)
{
    int retval = 0;
try {
 
    retval = cv::VideoWriter::fourcc(c1, c2, c3, c4);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvVideoWriterget(struct  VideoWriter_t* wrapper, int propId)
{
    double retval = 0;
try {
 
    retval = wrapper->v->get(propId);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvVideoWritergetBackendName(struct  VideoWriter_t* wrapper)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = wrapper->v->getBackendName();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoWriterisOpened(struct  VideoWriter_t* wrapper)
{
    bool retval;
try {
 
    retval = wrapper->v->isOpened();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoWriteropen(struct  VideoWriter_t* wrapper, string_t* filename, int fourcc, double fps, 
                                   Size_t* frameSize, bool isColor)
{
    bool retval;
try {
 
    retval = wrapper->v->open(string(filename->v), fourcc, fps, *frameSize->v, isColor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoWriteropenV2(struct  VideoWriter_t* wrapper, string_t* filename, int apiPreference, 
                                   int fourcc, double fps, Size_t* frameSize, bool isColor)
{
    bool retval;
try {
 
    retval = wrapper->v->open(string(filename->v), apiPreference, fourcc, fps, *frameSize->v, isColor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoWriteropenV3(struct  VideoWriter_t* wrapper, string_t* filename, int fourcc, 
                                   double fps, Size_t* frameSize, vector_int* params)
{
    bool retval;
try {
 
    retval = wrapper->v->open(string(filename->v), fourcc, fps, *frameSize->v, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvVideoWriteropenV4(struct  VideoWriter_t* wrapper, string_t* filename, int apiPreference, 
                                   int fourcc, double fps, Size_t* frameSize, vector_int* params)
{
    bool retval;
try {
 
    retval = wrapper->v->open(string(filename->v), apiPreference, fourcc, fps, *frameSize->v, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvVideoWriterrelease(struct  VideoWriter_t* wrapper)
{
try {
 
    wrapper->v->release();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvVideoWriterset(struct  VideoWriter_t* wrapper, int propId, double value)
{
    bool retval;
try {
 
    retval = wrapper->v->set(propId, value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvVideoWriterwrite(struct  VideoWriter_t* wrapper, Mat_t* image)
{
try {
 
    wrapper->v->write(*image->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvVideoWriterwriteV2(struct  VideoWriter_t* wrapper, UMat_t* image)
{
try {
 
    wrapper->v->write(*image->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}

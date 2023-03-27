
// ---------------------- Ptr_AKAZE  wrapper ---------------------------------
CVAPI(AKAZE_t*)   pCvPtr_AKAZEConvert(Ptr_AKAZE* wrapper)
{
    AKAZE_t* retval = 0;
try {
    Ptr_AKAZE p = *wrapper;
    AKAZE*  c =  p; 
    retval = new  AKAZE_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_AKAZE*) pCvPtr_AKAZECreate(AKAZE_t* wrapper)
{   Ptr_AKAZE* nptr = new Ptr_AKAZE();
	try { nptr = new Ptr_AKAZE(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_AKAZEDelete( Ptr_AKAZE* ptr, AKAZE_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_ANN_MLP  wrapper ---------------------------------
CVAPI(ml_ANN_MLP_t*)   pCvPtr_ANN_MLPConvert(Ptr_ANN_MLP* wrapper)
{
    ml_ANN_MLP_t* retval = 0;
try {
    Ptr_ANN_MLP p = *wrapper;
    ml::ANN_MLP*  c =  p; 
    retval = new  ml_ANN_MLP_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_ANN_MLP*) pCvPtr_ANN_MLPCreate(ml_ANN_MLP_t* wrapper)
{   Ptr_ANN_MLP* nptr = new Ptr_ANN_MLP();
	try { nptr = new Ptr_ANN_MLP(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_ANN_MLPDelete( Ptr_ANN_MLP* ptr, ml_ANN_MLP_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_AffineFeature  wrapper ---------------------------------
CVAPI(AffineFeature_t*)   pCvPtr_AffineFeatureConvert(Ptr_AffineFeature* wrapper)
{
    AffineFeature_t* retval = 0;
try {
    Ptr_AffineFeature p = *wrapper;
    AffineFeature*  c =  p; 
    retval = new  AffineFeature_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_AffineFeature*) pCvPtr_AffineFeatureCreate(AffineFeature_t* wrapper)
{   Ptr_AffineFeature* nptr = new Ptr_AffineFeature();
	try { nptr = new Ptr_AffineFeature(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_AffineFeatureDelete( Ptr_AffineFeature* ptr, AffineFeature_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_AgastFeatureDetector  wrapper ---------------------------------
CVAPI(AgastFeatureDetector_t*)   pCvPtr_AgastFeatureDetectorConvert(Ptr_AgastFeatureDetector* wrapper)
{
    AgastFeatureDetector_t* retval = 0;
try {
    Ptr_AgastFeatureDetector p = *wrapper;
    AgastFeatureDetector*  c =  p; 
    retval = new  AgastFeatureDetector_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_AgastFeatureDetector*) pCvPtr_AgastFeatureDetectorCreate(AgastFeatureDetector_t* wrapper)
{   Ptr_AgastFeatureDetector* nptr = new Ptr_AgastFeatureDetector();
	try { nptr = new Ptr_AgastFeatureDetector(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_AgastFeatureDetectorDelete( Ptr_AgastFeatureDetector* ptr, AgastFeatureDetector_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_AlignMTB  wrapper ---------------------------------
CVAPI(AlignMTB_t*)   pCvPtr_AlignMTBConvert(Ptr_AlignMTB* wrapper)
{
    AlignMTB_t* retval = 0;
try {
    Ptr_AlignMTB p = *wrapper;
    AlignMTB*  c =  p; 
    retval = new  AlignMTB_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_AlignMTB*) pCvPtr_AlignMTBCreate(AlignMTB_t* wrapper)
{   Ptr_AlignMTB* nptr = new Ptr_AlignMTB();
	try { nptr = new Ptr_AlignMTB(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_AlignMTBDelete( Ptr_AlignMTB* ptr, AlignMTB_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_BRISK  wrapper ---------------------------------
CVAPI(BRISK_t*)   pCvPtr_BRISKConvert(Ptr_BRISK* wrapper)
{
    BRISK_t* retval = 0;
try {
    Ptr_BRISK p = *wrapper;
    BRISK*  c =  p; 
    retval = new  BRISK_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_BRISK*) pCvPtr_BRISKCreate(BRISK_t* wrapper)
{   Ptr_BRISK* nptr = new Ptr_BRISK();
	try { nptr = new Ptr_BRISK(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BRISKDelete( Ptr_BRISK* ptr, BRISK_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_BackgroundSubtractorKNN  wrapper ---------------------------------
CVAPI(BackgroundSubtractorKNN_t*)   pCvPtr_BackgroundSubtractorKNNConvert(Ptr_BackgroundSubtractorKNN* wrapper)
{
    BackgroundSubtractorKNN_t* retval = 0;
try {
    Ptr_BackgroundSubtractorKNN p = *wrapper;
    BackgroundSubtractorKNN*  c =  p; 
    retval = new  BackgroundSubtractorKNN_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_BackgroundSubtractorKNN*) pCvPtr_BackgroundSubtractorKNNCreate(BackgroundSubtractorKNN_t* wrapper)
{   Ptr_BackgroundSubtractorKNN* nptr = new Ptr_BackgroundSubtractorKNN();
	try { nptr = new Ptr_BackgroundSubtractorKNN(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BackgroundSubtractorKNNDelete( Ptr_BackgroundSubtractorKNN* ptr, BackgroundSubtractorKNN_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_BackgroundSubtractorMOG2  wrapper ---------------------------------
CVAPI(BackgroundSubtractorMOG2_t*)   pCvPtr_BackgroundSubtractorMOG2Convert(Ptr_BackgroundSubtractorMOG2* wrapper)
{
    BackgroundSubtractorMOG2_t* retval = 0;
try {
    Ptr_BackgroundSubtractorMOG2 p = *wrapper;
    BackgroundSubtractorMOG2*  c =  p; 
    retval = new  BackgroundSubtractorMOG2_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_BackgroundSubtractorMOG2*) pCvPtr_BackgroundSubtractorMOG2Create(BackgroundSubtractorMOG2_t* wrapper)
{   Ptr_BackgroundSubtractorMOG2* nptr = new Ptr_BackgroundSubtractorMOG2();
	try { nptr = new Ptr_BackgroundSubtractorMOG2(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BackgroundSubtractorMOG2Delete( Ptr_BackgroundSubtractorMOG2* ptr, BackgroundSubtractorMOG2_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_BestOf2NearestMatcher  wrapper ---------------------------------
CVAPI(detail_BestOf2NearestMatcher_t*)   pCvPtr_BestOf2NearestMatcherConvert(Ptr_BestOf2NearestMatcher* wrapper)
{
    detail_BestOf2NearestMatcher_t* retval = 0;
try {
    Ptr_BestOf2NearestMatcher p = *wrapper;
    detail::BestOf2NearestMatcher*  c =  p; 
    retval = new  detail_BestOf2NearestMatcher_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_BestOf2NearestMatcher*) pCvPtr_BestOf2NearestMatcherCreate(detail_BestOf2NearestMatcher_t* wrapper)
{   Ptr_BestOf2NearestMatcher* nptr = new Ptr_BestOf2NearestMatcher();
	try { nptr = new Ptr_BestOf2NearestMatcher(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BestOf2NearestMatcherDelete( Ptr_BestOf2NearestMatcher* ptr, detail_BestOf2NearestMatcher_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Blender  wrapper ---------------------------------
CVAPI(detail_Blender_t*)   pCvPtr_BlenderConvert(Ptr_Blender* wrapper)
{
    detail_Blender_t* retval = 0;
try {
    Ptr_Blender p = *wrapper;
    detail::Blender*  c =  p; 
    retval = new  detail_Blender_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Blender*) pCvPtr_BlenderCreate(detail_Blender_t* wrapper)
{   Ptr_Blender* nptr = new Ptr_Blender();
	try { nptr = new Ptr_Blender(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BlenderDelete( Ptr_Blender* ptr, detail_Blender_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_CLAHE  wrapper ---------------------------------
CVAPI(CLAHE_t*)   pCvPtr_CLAHEConvert(Ptr_CLAHE* wrapper)
{
    CLAHE_t* retval = 0;
try {
    Ptr_CLAHE p = *wrapper;
    CLAHE*  c =  p; 
    retval = new  CLAHE_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_CLAHE*) pCvPtr_CLAHECreate(CLAHE_t* wrapper)
{   Ptr_CLAHE* nptr = new Ptr_CLAHE();
	try { nptr = new Ptr_CLAHE(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_CLAHEDelete( Ptr_CLAHE* ptr, CLAHE_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_CalibrateDebevec  wrapper ---------------------------------
CVAPI(CalibrateDebevec_t*)   pCvPtr_CalibrateDebevecConvert(Ptr_CalibrateDebevec* wrapper)
{
    CalibrateDebevec_t* retval = 0;
try {
    Ptr_CalibrateDebevec p = *wrapper;
    CalibrateDebevec*  c =  p; 
    retval = new  CalibrateDebevec_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_CalibrateDebevec*) pCvPtr_CalibrateDebevecCreate(CalibrateDebevec_t* wrapper)
{   Ptr_CalibrateDebevec* nptr = new Ptr_CalibrateDebevec();
	try { nptr = new Ptr_CalibrateDebevec(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_CalibrateDebevecDelete( Ptr_CalibrateDebevec* ptr, CalibrateDebevec_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_CalibrateRobertson  wrapper ---------------------------------
CVAPI(CalibrateRobertson_t*)   pCvPtr_CalibrateRobertsonConvert(Ptr_CalibrateRobertson* wrapper)
{
    CalibrateRobertson_t* retval = 0;
try {
    Ptr_CalibrateRobertson p = *wrapper;
    CalibrateRobertson*  c =  p; 
    retval = new  CalibrateRobertson_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_CalibrateRobertson*) pCvPtr_CalibrateRobertsonCreate(CalibrateRobertson_t* wrapper)
{   Ptr_CalibrateRobertson* nptr = new Ptr_CalibrateRobertson();
	try { nptr = new Ptr_CalibrateRobertson(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_CalibrateRobertsonDelete( Ptr_CalibrateRobertson* ptr, CalibrateRobertson_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_DISOpticalFlow  wrapper ---------------------------------
CVAPI(DISOpticalFlow_t*)   pCvPtr_DISOpticalFlowConvert(Ptr_DISOpticalFlow* wrapper)
{
    DISOpticalFlow_t* retval = 0;
try {
    Ptr_DISOpticalFlow p = *wrapper;
    DISOpticalFlow*  c =  p; 
    retval = new  DISOpticalFlow_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_DISOpticalFlow*) pCvPtr_DISOpticalFlowCreate(DISOpticalFlow_t* wrapper)
{   Ptr_DISOpticalFlow* nptr = new Ptr_DISOpticalFlow();
	try { nptr = new Ptr_DISOpticalFlow(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_DISOpticalFlowDelete( Ptr_DISOpticalFlow* ptr, DISOpticalFlow_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_DTrees  wrapper ---------------------------------
CVAPI(ml_DTrees_t*)   pCvPtr_DTreesConvert(Ptr_DTrees* wrapper)
{
    ml_DTrees_t* retval = 0;
try {
    Ptr_DTrees p = *wrapper;
    ml::DTrees*  c =  p; 
    retval = new  ml_DTrees_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_DTrees*) pCvPtr_DTreesCreate(ml_DTrees_t* wrapper)
{   Ptr_DTrees* nptr = new Ptr_DTrees();
	try { nptr = new Ptr_DTrees(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_DTreesDelete( Ptr_DTrees* ptr, ml_DTrees_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_DescriptorExtractor  wrapper ---------------------------------
CVAPI(DescriptorExtractor_t*)   pCvPtr_DescriptorExtractorConvert(Ptr_DescriptorExtractor* wrapper)
{
    DescriptorExtractor_t* retval = 0;
try {
    Ptr_DescriptorExtractor p = *wrapper;
    DescriptorExtractor*  c =  p; 
    retval = new  DescriptorExtractor_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_DescriptorExtractor*) pCvPtr_DescriptorExtractorCreate(DescriptorExtractor_t* wrapper)
{   Ptr_DescriptorExtractor* nptr = new Ptr_DescriptorExtractor();
	try { nptr = new Ptr_DescriptorExtractor(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_DescriptorExtractorDelete( Ptr_DescriptorExtractor* ptr, DescriptorExtractor_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_BFMatcher  wrapper ---------------------------------
CVAPI(BFMatcher_t*)   pCvPtr_BFMatcherConvert(Ptr_BFMatcher* wrapper)
{
    BFMatcher_t* retval = 0;
try {
    Ptr_BFMatcher p = *wrapper;
    BFMatcher*  c =  p; 
    retval = new  BFMatcher_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_BFMatcher*) pCvPtr_BFMatcherCreate(BFMatcher_t* wrapper)
{   Ptr_BFMatcher* nptr = new Ptr_BFMatcher();
	try { nptr = new Ptr_BFMatcher(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BFMatcherDelete( Ptr_BFMatcher* ptr, BFMatcher_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_DescriptorMatcher  wrapper ---------------------------------
CVAPI(DescriptorMatcher_t*)   pCvPtr_DescriptorMatcherConvert(Ptr_DescriptorMatcher* wrapper)
{
    DescriptorMatcher_t* retval = 0;
try {
    Ptr_DescriptorMatcher p = *wrapper;
    DescriptorMatcher*  c =  p; 
    retval = new  DescriptorMatcher_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_DescriptorMatcher*) pCvPtr_DescriptorMatcherCreate(DescriptorMatcher_t* wrapper)
{   Ptr_DescriptorMatcher* nptr = new Ptr_DescriptorMatcher();
	try { nptr = new Ptr_DescriptorMatcher(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_DescriptorMatcherDelete( Ptr_DescriptorMatcher* ptr, DescriptorMatcher_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FlannBasedMatcher  wrapper ---------------------------------
CVAPI(FlannBasedMatcher_t*)   pCvPtr_FlannBasedMatcherConvert(Ptr_FlannBasedMatcher* wrapper)
{
    FlannBasedMatcher_t* retval = 0;
try {
    Ptr_FlannBasedMatcher p = *wrapper;
    FlannBasedMatcher*  c =  p; 
    retval = new  FlannBasedMatcher_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FlannBasedMatcher*) pCvPtr_FlannBasedMatcherCreate(FlannBasedMatcher_t* wrapper)
{   Ptr_FlannBasedMatcher* nptr = new Ptr_FlannBasedMatcher();
	try { nptr = new Ptr_FlannBasedMatcher(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FlannBasedMatcherDelete( Ptr_FlannBasedMatcher* ptr, FlannBasedMatcher_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_EM  wrapper ---------------------------------
CVAPI(ml_EM_t*)   pCvPtr_EMConvert(Ptr_EM* wrapper)
{
    ml_EM_t* retval = 0;
try {
    Ptr_EM p = *wrapper;
    ml::EM*  c =  p; 
    retval = new  ml_EM_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_EM*) pCvPtr_EMCreate(ml_EM_t* wrapper)
{   Ptr_EM* nptr = new Ptr_EM();
	try { nptr = new Ptr_EM(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_EMDelete( Ptr_EM* ptr, ml_EM_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_ExposureCompensator  wrapper ---------------------------------
CVAPI(detail_ExposureCompensator_t*)   pCvPtr_ExposureCompensatorConvert(Ptr_ExposureCompensator* wrapper)
{
    detail_ExposureCompensator_t* retval = 0;
try {
    Ptr_ExposureCompensator p = *wrapper;
    detail::ExposureCompensator*  c =  p; 
    retval = new  detail_ExposureCompensator_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_ExposureCompensator*) pCvPtr_ExposureCompensatorCreate(detail_ExposureCompensator_t* wrapper)
{   Ptr_ExposureCompensator* nptr = new Ptr_ExposureCompensator();
	try { nptr = new Ptr_ExposureCompensator(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_ExposureCompensatorDelete( Ptr_ExposureCompensator* ptr, detail_ExposureCompensator_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FaceDetectorYN  wrapper ---------------------------------
CVAPI(FaceDetectorYN_t*)   pCvPtr_FaceDetectorYNConvert(Ptr_FaceDetectorYN* wrapper)
{
    FaceDetectorYN_t* retval = 0;
try {
    Ptr_FaceDetectorYN p = *wrapper;
    FaceDetectorYN*  c =  p; 
    retval = new  FaceDetectorYN_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FaceDetectorYN*) pCvPtr_FaceDetectorYNCreate(FaceDetectorYN_t* wrapper)
{   Ptr_FaceDetectorYN* nptr = new Ptr_FaceDetectorYN();
	try { nptr = new Ptr_FaceDetectorYN(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FaceDetectorYNDelete( Ptr_FaceDetectorYN* ptr, FaceDetectorYN_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_RTrees  wrapper ---------------------------------
CVAPI(ml_RTrees_t*)   pCvPtr_RTreesConvert(Ptr_RTrees* wrapper)
{
    ml_RTrees_t* retval = 0;
try {
    Ptr_RTrees p = *wrapper;
    ml::RTrees*  c =  p; 
    retval = new  ml_RTrees_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_RTrees*) pCvPtr_RTreesCreate(ml_RTrees_t* wrapper)
{   Ptr_RTrees* nptr = new Ptr_RTrees();
	try { nptr = new Ptr_RTrees(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_RTreesDelete( Ptr_RTrees* ptr, ml_RTrees_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Boost  wrapper ---------------------------------
CVAPI(ml_Boost_t*)   pCvPtr_BoostConvert(Ptr_Boost* wrapper)
{
    ml_Boost_t* retval = 0;
try {
    Ptr_Boost p = *wrapper;
    ml::Boost*  c =  p; 
    retval = new  ml_Boost_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Boost*) pCvPtr_BoostCreate(ml_Boost_t* wrapper)
{   Ptr_Boost* nptr = new Ptr_Boost();
	try { nptr = new Ptr_Boost(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_BoostDelete( Ptr_Boost* ptr, ml_Boost_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FaceRecognizerSF  wrapper ---------------------------------
CVAPI(FaceRecognizerSF_t*)   pCvPtr_FaceRecognizerSFConvert(Ptr_FaceRecognizerSF* wrapper)
{
    FaceRecognizerSF_t* retval = 0;
try {
    Ptr_FaceRecognizerSF p = *wrapper;
    FaceRecognizerSF*  c =  p; 
    retval = new  FaceRecognizerSF_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FaceRecognizerSF*) pCvPtr_FaceRecognizerSFCreate(FaceRecognizerSF_t* wrapper)
{   Ptr_FaceRecognizerSF* nptr = new Ptr_FaceRecognizerSF();
	try { nptr = new Ptr_FaceRecognizerSF(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FaceRecognizerSFDelete( Ptr_FaceRecognizerSF* ptr, FaceRecognizerSF_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FarnebackOpticalFlow  wrapper ---------------------------------
CVAPI(FarnebackOpticalFlow_t*)   pCvPtr_FarnebackOpticalFlowConvert(Ptr_FarnebackOpticalFlow* wrapper)
{
    FarnebackOpticalFlow_t* retval = 0;
try {
    Ptr_FarnebackOpticalFlow p = *wrapper;
    FarnebackOpticalFlow*  c =  p; 
    retval = new  FarnebackOpticalFlow_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FarnebackOpticalFlow*) pCvPtr_FarnebackOpticalFlowCreate(FarnebackOpticalFlow_t* wrapper)
{   Ptr_FarnebackOpticalFlow* nptr = new Ptr_FarnebackOpticalFlow();
	try { nptr = new Ptr_FarnebackOpticalFlow(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FarnebackOpticalFlowDelete( Ptr_FarnebackOpticalFlow* ptr, FarnebackOpticalFlow_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FastFeatureDetector  wrapper ---------------------------------
CVAPI(FastFeatureDetector_t*)   pCvPtr_FastFeatureDetectorConvert(Ptr_FastFeatureDetector* wrapper)
{
    FastFeatureDetector_t* retval = 0;
try {
    Ptr_FastFeatureDetector p = *wrapper;
    FastFeatureDetector*  c =  p; 
    retval = new  FastFeatureDetector_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FastFeatureDetector*) pCvPtr_FastFeatureDetectorCreate(FastFeatureDetector_t* wrapper)
{   Ptr_FastFeatureDetector* nptr = new Ptr_FastFeatureDetector();
	try { nptr = new Ptr_FastFeatureDetector(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FastFeatureDetectorDelete( Ptr_FastFeatureDetector* ptr, FastFeatureDetector_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Feature2D  wrapper ---------------------------------
CVAPI(Feature2D_t*)   pCvPtr_Feature2DConvert(Ptr_Feature2D* wrapper)
{
    Feature2D_t* retval = 0;
try {
    Ptr_Feature2D p = *wrapper;
    Feature2D*  c =  p; 
    retval = new  Feature2D_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Feature2D*) pCvPtr_Feature2DCreate(Feature2D_t* wrapper)
{   Ptr_Feature2D* nptr = new Ptr_Feature2D();
	try { nptr = new Ptr_Feature2D(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_Feature2DDelete( Ptr_Feature2D* ptr, Feature2D_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FeatureDetector  wrapper ---------------------------------
CVAPI(FeatureDetector_t*)   pCvPtr_FeatureDetectorConvert(Ptr_FeatureDetector* wrapper)
{
    FeatureDetector_t* retval = 0;
try {
    Ptr_FeatureDetector p = *wrapper;
    FeatureDetector*  c =  p; 
    retval = new  FeatureDetector_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FeatureDetector*) pCvPtr_FeatureDetectorCreate(FeatureDetector_t* wrapper)
{   Ptr_FeatureDetector* nptr = new Ptr_FeatureDetector();
	try { nptr = new Ptr_FeatureDetector(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FeatureDetectorDelete( Ptr_FeatureDetector* ptr, FeatureDetector_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_FileStorage  wrapper ---------------------------------
CVAPI(FileStorage_t*)   pCvPtr_FileStorageConvert(Ptr_FileStorage* wrapper)
{
    FileStorage_t* retval = 0;
try {
    Ptr_FileStorage p = *wrapper;
    FileStorage*  c =  p; 
    retval = new  FileStorage_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_FileStorage*) pCvPtr_FileStorageCreate(FileStorage_t* wrapper)
{   Ptr_FileStorage* nptr = new Ptr_FileStorage();
	try { nptr = new Ptr_FileStorage(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_FileStorageDelete( Ptr_FileStorage* ptr, FileStorage_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_GFTTDetector  wrapper ---------------------------------
CVAPI(GFTTDetector_t*)   pCvPtr_GFTTDetectorConvert(Ptr_GFTTDetector* wrapper)
{
    GFTTDetector_t* retval = 0;
try {
    Ptr_GFTTDetector p = *wrapper;
    GFTTDetector*  c =  p; 
    retval = new  GFTTDetector_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_GFTTDetector*) pCvPtr_GFTTDetectorCreate(GFTTDetector_t* wrapper)
{   Ptr_GFTTDetector* nptr = new Ptr_GFTTDetector();
	try { nptr = new Ptr_GFTTDetector(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_GFTTDetectorDelete( Ptr_GFTTDetector* ptr, GFTTDetector_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_GeneralizedHoughBallard  wrapper ---------------------------------
CVAPI(GeneralizedHoughBallard_t*)   pCvPtr_GeneralizedHoughBallardConvert(Ptr_GeneralizedHoughBallard* wrapper)
{
    GeneralizedHoughBallard_t* retval = 0;
try {
    Ptr_GeneralizedHoughBallard p = *wrapper;
    GeneralizedHoughBallard*  c =  p; 
    retval = new  GeneralizedHoughBallard_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_GeneralizedHoughBallard*) pCvPtr_GeneralizedHoughBallardCreate(GeneralizedHoughBallard_t* wrapper)
{   Ptr_GeneralizedHoughBallard* nptr = new Ptr_GeneralizedHoughBallard();
	try { nptr = new Ptr_GeneralizedHoughBallard(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_GeneralizedHoughBallardDelete( Ptr_GeneralizedHoughBallard* ptr, GeneralizedHoughBallard_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_GeneralizedHoughGuil  wrapper ---------------------------------
CVAPI(GeneralizedHoughGuil_t*)   pCvPtr_GeneralizedHoughGuilConvert(Ptr_GeneralizedHoughGuil* wrapper)
{
    GeneralizedHoughGuil_t* retval = 0;
try {
    Ptr_GeneralizedHoughGuil p = *wrapper;
    GeneralizedHoughGuil*  c =  p; 
    retval = new  GeneralizedHoughGuil_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_GeneralizedHoughGuil*) pCvPtr_GeneralizedHoughGuilCreate(GeneralizedHoughGuil_t* wrapper)
{   Ptr_GeneralizedHoughGuil* nptr = new Ptr_GeneralizedHoughGuil();
	try { nptr = new Ptr_GeneralizedHoughGuil(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_GeneralizedHoughGuilDelete( Ptr_GeneralizedHoughGuil* ptr, GeneralizedHoughGuil_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_KAZE  wrapper ---------------------------------
CVAPI(KAZE_t*)   pCvPtr_KAZEConvert(Ptr_KAZE* wrapper)
{
    KAZE_t* retval = 0;
try {
    Ptr_KAZE p = *wrapper;
    KAZE*  c =  p; 
    retval = new  KAZE_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_KAZE*) pCvPtr_KAZECreate(KAZE_t* wrapper)
{   Ptr_KAZE* nptr = new Ptr_KAZE();
	try { nptr = new Ptr_KAZE(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_KAZEDelete( Ptr_KAZE* ptr, KAZE_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_KNearest  wrapper ---------------------------------
CVAPI(ml_KNearest_t*)   pCvPtr_KNearestConvert(Ptr_KNearest* wrapper)
{
    ml_KNearest_t* retval = 0;
try {
    Ptr_KNearest p = *wrapper;
    ml::KNearest*  c =  p; 
    retval = new  ml_KNearest_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_KNearest*) pCvPtr_KNearestCreate(ml_KNearest_t* wrapper)
{   Ptr_KNearest* nptr = new Ptr_KNearest();
	try { nptr = new Ptr_KNearest(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_KNearestDelete( Ptr_KNearest* ptr, ml_KNearest_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Layer  wrapper ---------------------------------
CVAPI(dnn_Layer_t*)   pCvPtr_LayerConvert(Ptr_Layer* wrapper)
{
    dnn_Layer_t* retval = 0;
try {
    Ptr_Layer p = *wrapper;
    dnn::Layer*  c =  p; 
    retval = new  dnn_Layer_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Layer*) pCvPtr_LayerCreate(dnn_Layer_t* wrapper)
{   Ptr_Layer* nptr = new Ptr_Layer();
	try { nptr = new Ptr_Layer(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_LayerDelete( Ptr_Layer* ptr, dnn_Layer_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_LineSegmentDetector  wrapper ---------------------------------
CVAPI(LineSegmentDetector_t*)   pCvPtr_LineSegmentDetectorConvert(Ptr_LineSegmentDetector* wrapper)
{
    LineSegmentDetector_t* retval = 0;
try {
    Ptr_LineSegmentDetector p = *wrapper;
    LineSegmentDetector*  c =  p; 
    retval = new  LineSegmentDetector_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_LineSegmentDetector*) pCvPtr_LineSegmentDetectorCreate(LineSegmentDetector_t* wrapper)
{   Ptr_LineSegmentDetector* nptr = new Ptr_LineSegmentDetector();
	try { nptr = new Ptr_LineSegmentDetector(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_LineSegmentDetectorDelete( Ptr_LineSegmentDetector* ptr, LineSegmentDetector_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_LogisticRegression  wrapper ---------------------------------
CVAPI(ml_LogisticRegression_t*)   pCvPtr_LogisticRegressionConvert(Ptr_LogisticRegression* wrapper)
{
    ml_LogisticRegression_t* retval = 0;
try {
    Ptr_LogisticRegression p = *wrapper;
    ml::LogisticRegression*  c =  p; 
    retval = new  ml_LogisticRegression_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_LogisticRegression*) pCvPtr_LogisticRegressionCreate(ml_LogisticRegression_t* wrapper)
{   Ptr_LogisticRegression* nptr = new Ptr_LogisticRegression();
	try { nptr = new Ptr_LogisticRegression(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_LogisticRegressionDelete( Ptr_LogisticRegression* ptr, ml_LogisticRegression_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_MSER  wrapper ---------------------------------
CVAPI(MSER_t*)   pCvPtr_MSERConvert(Ptr_MSER* wrapper)
{
    MSER_t* retval = 0;
try {
    Ptr_MSER p = *wrapper;
    MSER*  c =  p; 
    retval = new  MSER_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_MSER*) pCvPtr_MSERCreate(MSER_t* wrapper)
{   Ptr_MSER* nptr = new Ptr_MSER();
	try { nptr = new Ptr_MSER(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_MSERDelete( Ptr_MSER* ptr, MSER_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_MergeDebevec  wrapper ---------------------------------
CVAPI(MergeDebevec_t*)   pCvPtr_MergeDebevecConvert(Ptr_MergeDebevec* wrapper)
{
    MergeDebevec_t* retval = 0;
try {
    Ptr_MergeDebevec p = *wrapper;
    MergeDebevec*  c =  p; 
    retval = new  MergeDebevec_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_MergeDebevec*) pCvPtr_MergeDebevecCreate(MergeDebevec_t* wrapper)
{   Ptr_MergeDebevec* nptr = new Ptr_MergeDebevec();
	try { nptr = new Ptr_MergeDebevec(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_MergeDebevecDelete( Ptr_MergeDebevec* ptr, MergeDebevec_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_MergeMertens  wrapper ---------------------------------
CVAPI(MergeMertens_t*)   pCvPtr_MergeMertensConvert(Ptr_MergeMertens* wrapper)
{
    MergeMertens_t* retval = 0;
try {
    Ptr_MergeMertens p = *wrapper;
    MergeMertens*  c =  p; 
    retval = new  MergeMertens_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_MergeMertens*) pCvPtr_MergeMertensCreate(MergeMertens_t* wrapper)
{   Ptr_MergeMertens* nptr = new Ptr_MergeMertens();
	try { nptr = new Ptr_MergeMertens(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_MergeMertensDelete( Ptr_MergeMertens* ptr, MergeMertens_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_MergeRobertson  wrapper ---------------------------------
CVAPI(MergeRobertson_t*)   pCvPtr_MergeRobertsonConvert(Ptr_MergeRobertson* wrapper)
{
    MergeRobertson_t* retval = 0;
try {
    Ptr_MergeRobertson p = *wrapper;
    MergeRobertson*  c =  p; 
    retval = new  MergeRobertson_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_MergeRobertson*) pCvPtr_MergeRobertsonCreate(MergeRobertson_t* wrapper)
{   Ptr_MergeRobertson* nptr = new Ptr_MergeRobertson();
	try { nptr = new Ptr_MergeRobertson(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_MergeRobertsonDelete( Ptr_MergeRobertson* ptr, MergeRobertson_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_NormalBayesClassifier  wrapper ---------------------------------
CVAPI(ml_NormalBayesClassifier_t*)   pCvPtr_NormalBayesClassifierConvert(Ptr_NormalBayesClassifier* wrapper)
{
    ml_NormalBayesClassifier_t* retval = 0;
try {
    Ptr_NormalBayesClassifier p = *wrapper;
    ml::NormalBayesClassifier*  c =  p; 
    retval = new  ml_NormalBayesClassifier_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_NormalBayesClassifier*) pCvPtr_NormalBayesClassifierCreate(ml_NormalBayesClassifier_t* wrapper)
{   Ptr_NormalBayesClassifier* nptr = new Ptr_NormalBayesClassifier();
	try { nptr = new Ptr_NormalBayesClassifier(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_NormalBayesClassifierDelete( Ptr_NormalBayesClassifier* ptr, ml_NormalBayesClassifier_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_ORB  wrapper ---------------------------------
CVAPI(ORB_t*)   pCvPtr_ORBConvert(Ptr_ORB* wrapper)
{
    ORB_t* retval = 0;
try {
    Ptr_ORB p = *wrapper;
    ORB*  c =  p; 
    retval = new  ORB_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_ORB*) pCvPtr_ORBCreate(ORB_t* wrapper)
{   Ptr_ORB* nptr = new Ptr_ORB();
	try { nptr = new Ptr_ORB(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_ORBDelete( Ptr_ORB* ptr, ORB_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_OriginalClassName  wrapper ---------------------------------
CVAPI(utils_nested_OriginalClassName_t*)   pCvPtr_OriginalClassNameConvert(Ptr_OriginalClassName* wrapper)
{
    utils_nested_OriginalClassName_t* retval = 0;
try {
    Ptr_OriginalClassName p = *wrapper;
    utils::nested::OriginalClassName*  c =  p; 
    retval = new  utils_nested_OriginalClassName_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_OriginalClassName*) pCvPtr_OriginalClassNameCreate(utils_nested_OriginalClassName_t* wrapper)
{   Ptr_OriginalClassName* nptr = new Ptr_OriginalClassName();
	try { nptr = new Ptr_OriginalClassName(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_OriginalClassNameDelete( Ptr_OriginalClassName* ptr, utils_nested_OriginalClassName_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_ParamGrid  wrapper ---------------------------------
CVAPI(ml_ParamGrid_t*)   pCvPtr_ParamGridConvert(Ptr_ParamGrid* wrapper)
{
    ml_ParamGrid_t* retval = 0;
try {
    Ptr_ParamGrid p = *wrapper;
    ml::ParamGrid*  c =  p; 
    retval = new  ml_ParamGrid_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_ParamGrid*) pCvPtr_ParamGridCreate(ml_ParamGrid_t* wrapper)
{   Ptr_ParamGrid* nptr = new Ptr_ParamGrid();
	try { nptr = new Ptr_ParamGrid(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_ParamGridDelete( Ptr_ParamGrid* ptr, ml_ParamGrid_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_QRCodeEncoder  wrapper ---------------------------------
CVAPI(QRCodeEncoder_t*)   pCvPtr_QRCodeEncoderConvert(Ptr_QRCodeEncoder* wrapper)
{
    QRCodeEncoder_t* retval = 0;
try {
    Ptr_QRCodeEncoder p = *wrapper;
    QRCodeEncoder*  c =  p; 
    retval = new  QRCodeEncoder_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_QRCodeEncoder*) pCvPtr_QRCodeEncoderCreate(QRCodeEncoder_t* wrapper)
{   Ptr_QRCodeEncoder* nptr = new Ptr_QRCodeEncoder();
	try { nptr = new Ptr_QRCodeEncoder(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_QRCodeEncoderDelete( Ptr_QRCodeEncoder* ptr, QRCodeEncoder_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_SIFT  wrapper ---------------------------------
CVAPI(SIFT_t*)   pCvPtr_SIFTConvert(Ptr_SIFT* wrapper)
{
    SIFT_t* retval = 0;
try {
    Ptr_SIFT p = *wrapper;
    SIFT*  c =  p; 
    retval = new  SIFT_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_SIFT*) pCvPtr_SIFTCreate(SIFT_t* wrapper)
{   Ptr_SIFT* nptr = new Ptr_SIFT();
	try { nptr = new Ptr_SIFT(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_SIFTDelete( Ptr_SIFT* ptr, SIFT_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_SVM  wrapper ---------------------------------
CVAPI(ml_SVM_t*)   pCvPtr_SVMConvert(Ptr_SVM* wrapper)
{
    ml_SVM_t* retval = 0;
try {
    Ptr_SVM p = *wrapper;
    ml::SVM*  c =  p; 
    retval = new  ml_SVM_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_SVM*) pCvPtr_SVMCreate(ml_SVM_t* wrapper)
{   Ptr_SVM* nptr = new Ptr_SVM();
	try { nptr = new Ptr_SVM(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_SVMDelete( Ptr_SVM* ptr, ml_SVM_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_SVMSGD  wrapper ---------------------------------
CVAPI(ml_SVMSGD_t*)   pCvPtr_SVMSGDConvert(Ptr_SVMSGD* wrapper)
{
    ml_SVMSGD_t* retval = 0;
try {
    Ptr_SVMSGD p = *wrapper;
    ml::SVMSGD*  c =  p; 
    retval = new  ml_SVMSGD_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_SVMSGD*) pCvPtr_SVMSGDCreate(ml_SVMSGD_t* wrapper)
{   Ptr_SVMSGD* nptr = new Ptr_SVMSGD();
	try { nptr = new Ptr_SVMSGD(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_SVMSGDDelete( Ptr_SVMSGD* ptr, ml_SVMSGD_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_SeamFinder  wrapper ---------------------------------
CVAPI(detail_SeamFinder_t*)   pCvPtr_SeamFinderConvert(Ptr_SeamFinder* wrapper)
{
    detail_SeamFinder_t* retval = 0;
try {
    Ptr_SeamFinder p = *wrapper;
    detail::SeamFinder*  c =  p; 
    retval = new  detail_SeamFinder_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_SeamFinder*) pCvPtr_SeamFinderCreate(detail_SeamFinder_t* wrapper)
{   Ptr_SeamFinder* nptr = new Ptr_SeamFinder();
	try { nptr = new Ptr_SeamFinder(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_SeamFinderDelete( Ptr_SeamFinder* ptr, detail_SeamFinder_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_SimpleBlobDetector  wrapper ---------------------------------
CVAPI(SimpleBlobDetector_t*)   pCvPtr_SimpleBlobDetectorConvert(Ptr_SimpleBlobDetector* wrapper)
{
    SimpleBlobDetector_t* retval = 0;
try {
    Ptr_SimpleBlobDetector p = *wrapper;
    SimpleBlobDetector*  c =  p; 
    retval = new  SimpleBlobDetector_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_SimpleBlobDetector*) pCvPtr_SimpleBlobDetectorCreate(SimpleBlobDetector_t* wrapper)
{   Ptr_SimpleBlobDetector* nptr = new Ptr_SimpleBlobDetector();
	try { nptr = new Ptr_SimpleBlobDetector(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_SimpleBlobDetectorDelete( Ptr_SimpleBlobDetector* ptr, SimpleBlobDetector_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_SparsePyrLKOpticalFlow  wrapper ---------------------------------
CVAPI(SparsePyrLKOpticalFlow_t*)   pCvPtr_SparsePyrLKOpticalFlowConvert(Ptr_SparsePyrLKOpticalFlow* wrapper)
{
    SparsePyrLKOpticalFlow_t* retval = 0;
try {
    Ptr_SparsePyrLKOpticalFlow p = *wrapper;
    SparsePyrLKOpticalFlow*  c =  p; 
    retval = new  SparsePyrLKOpticalFlow_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_SparsePyrLKOpticalFlow*) pCvPtr_SparsePyrLKOpticalFlowCreate(SparsePyrLKOpticalFlow_t* wrapper)
{   Ptr_SparsePyrLKOpticalFlow* nptr = new Ptr_SparsePyrLKOpticalFlow();
	try { nptr = new Ptr_SparsePyrLKOpticalFlow(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_SparsePyrLKOpticalFlowDelete( Ptr_SparsePyrLKOpticalFlow* ptr, SparsePyrLKOpticalFlow_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_StereoBM  wrapper ---------------------------------
CVAPI(StereoBM_t*)   pCvPtr_StereoBMConvert(Ptr_StereoBM* wrapper)
{
    StereoBM_t* retval = 0;
try {
    Ptr_StereoBM p = *wrapper;
    StereoBM*  c =  p; 
    retval = new  StereoBM_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_StereoBM*) pCvPtr_StereoBMCreate(StereoBM_t* wrapper)
{   Ptr_StereoBM* nptr = new Ptr_StereoBM();
	try { nptr = new Ptr_StereoBM(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_StereoBMDelete( Ptr_StereoBM* ptr, StereoBM_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_StereoSGBM  wrapper ---------------------------------
CVAPI(StereoSGBM_t*)   pCvPtr_StereoSGBMConvert(Ptr_StereoSGBM* wrapper)
{
    StereoSGBM_t* retval = 0;
try {
    Ptr_StereoSGBM p = *wrapper;
    StereoSGBM*  c =  p; 
    retval = new  StereoSGBM_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_StereoSGBM*) pCvPtr_StereoSGBMCreate(StereoSGBM_t* wrapper)
{   Ptr_StereoSGBM* nptr = new Ptr_StereoSGBM();
	try { nptr = new Ptr_StereoSGBM(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_StereoSGBMDelete( Ptr_StereoSGBM* ptr, StereoSGBM_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Stitcher  wrapper ---------------------------------
CVAPI(Stitcher_t*)   pCvPtr_StitcherConvert(Ptr_Stitcher* wrapper)
{
    Stitcher_t* retval = 0;
try {
    Ptr_Stitcher p = *wrapper;
    Stitcher*  c =  p; 
    retval = new  Stitcher_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Stitcher*) pCvPtr_StitcherCreate(Stitcher_t* wrapper)
{   Ptr_Stitcher* nptr = new Ptr_Stitcher();
	try { nptr = new Ptr_Stitcher(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_StitcherDelete( Ptr_Stitcher* ptr, Stitcher_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Timelapser  wrapper ---------------------------------
CVAPI(detail_Timelapser_t*)   pCvPtr_TimelapserConvert(Ptr_Timelapser* wrapper)
{
    detail_Timelapser_t* retval = 0;
try {
    Ptr_Timelapser p = *wrapper;
    detail::Timelapser*  c =  p; 
    retval = new  detail_Timelapser_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Timelapser*) pCvPtr_TimelapserCreate(detail_Timelapser_t* wrapper)
{   Ptr_Timelapser* nptr = new Ptr_Timelapser();
	try { nptr = new Ptr_Timelapser(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TimelapserDelete( Ptr_Timelapser* ptr, detail_Timelapser_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_Tonemap  wrapper ---------------------------------
CVAPI(Tonemap_t*)   pCvPtr_TonemapConvert(Ptr_Tonemap* wrapper)
{
    Tonemap_t* retval = 0;
try {
    Ptr_Tonemap p = *wrapper;
    Tonemap*  c =  p; 
    retval = new  Tonemap_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_Tonemap*) pCvPtr_TonemapCreate(Tonemap_t* wrapper)
{   Ptr_Tonemap* nptr = new Ptr_Tonemap();
	try { nptr = new Ptr_Tonemap(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TonemapDelete( Ptr_Tonemap* ptr, Tonemap_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TonemapDrago  wrapper ---------------------------------
CVAPI(TonemapDrago_t*)   pCvPtr_TonemapDragoConvert(Ptr_TonemapDrago* wrapper)
{
    TonemapDrago_t* retval = 0;
try {
    Ptr_TonemapDrago p = *wrapper;
    TonemapDrago*  c =  p; 
    retval = new  TonemapDrago_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TonemapDrago*) pCvPtr_TonemapDragoCreate(TonemapDrago_t* wrapper)
{   Ptr_TonemapDrago* nptr = new Ptr_TonemapDrago();
	try { nptr = new Ptr_TonemapDrago(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TonemapDragoDelete( Ptr_TonemapDrago* ptr, TonemapDrago_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TonemapMantiuk  wrapper ---------------------------------
CVAPI(TonemapMantiuk_t*)   pCvPtr_TonemapMantiukConvert(Ptr_TonemapMantiuk* wrapper)
{
    TonemapMantiuk_t* retval = 0;
try {
    Ptr_TonemapMantiuk p = *wrapper;
    TonemapMantiuk*  c =  p; 
    retval = new  TonemapMantiuk_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TonemapMantiuk*) pCvPtr_TonemapMantiukCreate(TonemapMantiuk_t* wrapper)
{   Ptr_TonemapMantiuk* nptr = new Ptr_TonemapMantiuk();
	try { nptr = new Ptr_TonemapMantiuk(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TonemapMantiukDelete( Ptr_TonemapMantiuk* ptr, TonemapMantiuk_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TonemapReinhard  wrapper ---------------------------------
CVAPI(TonemapReinhard_t*)   pCvPtr_TonemapReinhardConvert(Ptr_TonemapReinhard* wrapper)
{
    TonemapReinhard_t* retval = 0;
try {
    Ptr_TonemapReinhard p = *wrapper;
    TonemapReinhard*  c =  p; 
    retval = new  TonemapReinhard_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TonemapReinhard*) pCvPtr_TonemapReinhardCreate(TonemapReinhard_t* wrapper)
{   Ptr_TonemapReinhard* nptr = new Ptr_TonemapReinhard();
	try { nptr = new Ptr_TonemapReinhard(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TonemapReinhardDelete( Ptr_TonemapReinhard* ptr, TonemapReinhard_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TrackerDaSiamRPN  wrapper ---------------------------------
CVAPI(TrackerDaSiamRPN_t*)   pCvPtr_TrackerDaSiamRPNConvert(Ptr_TrackerDaSiamRPN* wrapper)
{
    TrackerDaSiamRPN_t* retval = 0;
try {
    Ptr_TrackerDaSiamRPN p = *wrapper;
    TrackerDaSiamRPN*  c =  p; 
    retval = new  TrackerDaSiamRPN_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TrackerDaSiamRPN*) pCvPtr_TrackerDaSiamRPNCreate(TrackerDaSiamRPN_t* wrapper)
{   Ptr_TrackerDaSiamRPN* nptr = new Ptr_TrackerDaSiamRPN();
	try { nptr = new Ptr_TrackerDaSiamRPN(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TrackerDaSiamRPNDelete( Ptr_TrackerDaSiamRPN* ptr, TrackerDaSiamRPN_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TrackerGOTURN  wrapper ---------------------------------
CVAPI(TrackerGOTURN_t*)   pCvPtr_TrackerGOTURNConvert(Ptr_TrackerGOTURN* wrapper)
{
    TrackerGOTURN_t* retval = 0;
try {
    Ptr_TrackerGOTURN p = *wrapper;
    TrackerGOTURN*  c =  p; 
    retval = new  TrackerGOTURN_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TrackerGOTURN*) pCvPtr_TrackerGOTURNCreate(TrackerGOTURN_t* wrapper)
{   Ptr_TrackerGOTURN* nptr = new Ptr_TrackerGOTURN();
	try { nptr = new Ptr_TrackerGOTURN(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TrackerGOTURNDelete( Ptr_TrackerGOTURN* ptr, TrackerGOTURN_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TrackerMIL  wrapper ---------------------------------
CVAPI(TrackerMIL_t*)   pCvPtr_TrackerMILConvert(Ptr_TrackerMIL* wrapper)
{
    TrackerMIL_t* retval = 0;
try {
    Ptr_TrackerMIL p = *wrapper;
    TrackerMIL*  c =  p; 
    retval = new  TrackerMIL_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TrackerMIL*) pCvPtr_TrackerMILCreate(TrackerMIL_t* wrapper)
{   Ptr_TrackerMIL* nptr = new Ptr_TrackerMIL();
	try { nptr = new Ptr_TrackerMIL(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TrackerMILDelete( Ptr_TrackerMIL* ptr, TrackerMIL_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_TrainData  wrapper ---------------------------------
CVAPI(ml_TrainData_t*)   pCvPtr_TrainDataConvert(Ptr_TrainData* wrapper)
{
    ml_TrainData_t* retval = 0;
try {
    Ptr_TrainData p = *wrapper;
    ml::TrainData*  c =  p; 
    retval = new  ml_TrainData_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_TrainData*) pCvPtr_TrainDataCreate(ml_TrainData_t* wrapper)
{   Ptr_TrainData* nptr = new Ptr_TrainData();
	try { nptr = new Ptr_TrainData(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_TrainDataDelete( Ptr_TrainData* ptr, ml_TrainData_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_VariationalRefinement  wrapper ---------------------------------
CVAPI(VariationalRefinement_t*)   pCvPtr_VariationalRefinementConvert(Ptr_VariationalRefinement* wrapper)
{
    VariationalRefinement_t* retval = 0;
try {
    Ptr_VariationalRefinement p = *wrapper;
    VariationalRefinement*  c =  p; 
    retval = new  VariationalRefinement_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_VariationalRefinement*) pCvPtr_VariationalRefinementCreate(VariationalRefinement_t* wrapper)
{   Ptr_VariationalRefinement* nptr = new Ptr_VariationalRefinement();
	try { nptr = new Ptr_VariationalRefinement(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_VariationalRefinementDelete( Ptr_VariationalRefinement* ptr, VariationalRefinement_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_flann_IndexParams  wrapper ---------------------------------
CVAPI(IndexParams_t*)   pCvPtr_flann_IndexParamsConvert(Ptr_flann_IndexParams* wrapper)
{
    IndexParams_t* retval = 0;
try {
    Ptr_flann_IndexParams p = *wrapper;
    flann::IndexParams*  c =  p; 
    retval = new  IndexParams_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_flann_IndexParams*) pCvPtr_flann_IndexParamsCreate(IndexParams_t* wrapper)
{   Ptr_flann_IndexParams* nptr = new Ptr_flann_IndexParams();
	try { nptr = new Ptr_flann_IndexParams(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_flann_IndexParamsDelete( Ptr_flann_IndexParams* ptr, IndexParams_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_flann_SearchParams  wrapper ---------------------------------
CVAPI(SearchParams_t*)   pCvPtr_flann_SearchParamsConvert(Ptr_flann_SearchParams* wrapper)
{
    SearchParams_t* retval = 0;
try {
    Ptr_flann_SearchParams p = *wrapper;
    flann::SearchParams*  c =  p; 
    retval = new  SearchParams_t;
    retval->v = c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_flann_SearchParams*) pCvPtr_flann_SearchParamsCreate(SearchParams_t* wrapper)
{   Ptr_flann_SearchParams* nptr = new Ptr_flann_SearchParams();
	try { nptr = new Ptr_flann_SearchParams(wrapper->v);	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what()); };
	return (nptr);	
}                                

CVAPI(void)   pCvPtr_flann_SearchParamsDelete( Ptr_flann_SearchParams* ptr, SearchParams_t* wrapper)
{
    assert(ptr);
    if (wrapper != 0) { delete wrapper; wrapper = 0;};
    delete ptr;
    ptr = 0;
}
// ---------------------- Ptr_float  wrapper ---------------------------------
CVAPI(float)   pCvPtr_floatConvert(Ptr_float* wrapper)
{
    float retval = 0;
try {
    Ptr_float p = *wrapper;
    float*  c =  p; 
    retval = *c;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(Ptr_float*) pCvPtr_floatCreate()
{   Ptr_float* nptr = new Ptr_float();
	return (nptr);	
}     

CVAPI(void)   pCvPtr_floatDelete( Ptr_float* ptr)
{
    assert(ptr);
    delete ptr;
    ptr = 0;
}
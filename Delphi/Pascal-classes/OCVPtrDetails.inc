procedure TOcvPtr<T, U>.setOcvFunctions();
begin
  if TypeInfo(T) = TypeInfo(PCvPtr_AKAZE) then
  begin
    ocvCreate := @pCvPtr_AKAZECreate;
    ocvDelete := @pCvPtr_AKAZEDelete;
    ocvConvert:= @pCvPtr_AKAZEConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_ANN_MLP) then
  begin
    ocvCreate := @pCvPtr_ANN_MLPCreate;
    ocvDelete := @pCvPtr_ANN_MLPDelete;
    ocvConvert:= @pCvPtr_ANN_MLPConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_AffineFeature) then
  begin
    ocvCreate := @pCvPtr_AffineFeatureCreate;
    ocvDelete := @pCvPtr_AffineFeatureDelete;
    ocvConvert:= @pCvPtr_AffineFeatureConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_AgastFeatureDetector) then
  begin
    ocvCreate := @pCvPtr_AgastFeatureDetectorCreate;
    ocvDelete := @pCvPtr_AgastFeatureDetectorDelete;
    ocvConvert:= @pCvPtr_AgastFeatureDetectorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_AlignMTB) then
  begin
    ocvCreate := @pCvPtr_AlignMTBCreate;
    ocvDelete := @pCvPtr_AlignMTBDelete;
    ocvConvert:= @pCvPtr_AlignMTBConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_BRISK) then
  begin
    ocvCreate := @pCvPtr_BRISKCreate;
    ocvDelete := @pCvPtr_BRISKDelete;
    ocvConvert:= @pCvPtr_BRISKConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_BackgroundSubtractorKNN) then
  begin
    ocvCreate := @pCvPtr_BackgroundSubtractorKNNCreate;
    ocvDelete := @pCvPtr_BackgroundSubtractorKNNDelete;
    ocvConvert:= @pCvPtr_BackgroundSubtractorKNNConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_BackgroundSubtractorMOG2) then
  begin
    ocvCreate := @pCvPtr_BackgroundSubtractorMOG2Create;
    ocvDelete := @pCvPtr_BackgroundSubtractorMOG2Delete;
    ocvConvert:= @pCvPtr_BackgroundSubtractorMOG2Convert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_BestOf2NearestMatcher) then
  begin
    ocvCreate := @pCvPtr_BestOf2NearestMatcherCreate;
    ocvDelete := @pCvPtr_BestOf2NearestMatcherDelete;
    ocvConvert:= @pCvPtr_BestOf2NearestMatcherConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Blender) then
  begin
    ocvCreate := @pCvPtr_BlenderCreate;
    ocvDelete := @pCvPtr_BlenderDelete;
    ocvConvert:= @pCvPtr_BlenderConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_CLAHE) then
  begin
    ocvCreate := @pCvPtr_CLAHECreate;
    ocvDelete := @pCvPtr_CLAHEDelete;
    ocvConvert:= @pCvPtr_CLAHEConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_CalibrateDebevec) then
  begin
    ocvCreate := @pCvPtr_CalibrateDebevecCreate;
    ocvDelete := @pCvPtr_CalibrateDebevecDelete;
    ocvConvert:= @pCvPtr_CalibrateDebevecConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_CalibrateRobertson) then
  begin
    ocvCreate := @pCvPtr_CalibrateRobertsonCreate;
    ocvDelete := @pCvPtr_CalibrateRobertsonDelete;
    ocvConvert:= @pCvPtr_CalibrateRobertsonConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_DISOpticalFlow) then
  begin
    ocvCreate := @pCvPtr_DISOpticalFlowCreate;
    ocvDelete := @pCvPtr_DISOpticalFlowDelete;
    ocvConvert:= @pCvPtr_DISOpticalFlowConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_DTrees) then
  begin
    ocvCreate := @pCvPtr_DTreesCreate;
    ocvDelete := @pCvPtr_DTreesDelete;
    ocvConvert:= @pCvPtr_DTreesConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_DescriptorExtractor) then
  begin
    ocvCreate := @pCvPtr_DescriptorExtractorCreate;
    ocvDelete := @pCvPtr_DescriptorExtractorDelete;
    ocvConvert:= @pCvPtr_DescriptorExtractorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_BFMatcher) then
  begin
    ocvCreate := @pCvPtr_BFMatcherCreate;
    ocvDelete := @pCvPtr_BFMatcherDelete;
    ocvConvert:= @pCvPtr_BFMatcherConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_DescriptorMatcher) then
  begin
    ocvCreate := @pCvPtr_DescriptorMatcherCreate;
    ocvDelete := @pCvPtr_DescriptorMatcherDelete;
    ocvConvert:= @pCvPtr_DescriptorMatcherConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FlannBasedMatcher) then
  begin
    ocvCreate := @pCvPtr_FlannBasedMatcherCreate;
    ocvDelete := @pCvPtr_FlannBasedMatcherDelete;
    ocvConvert:= @pCvPtr_FlannBasedMatcherConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_EM) then
  begin
    ocvCreate := @pCvPtr_EMCreate;
    ocvDelete := @pCvPtr_EMDelete;
    ocvConvert:= @pCvPtr_EMConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_ExposureCompensator) then
  begin
    ocvCreate := @pCvPtr_ExposureCompensatorCreate;
    ocvDelete := @pCvPtr_ExposureCompensatorDelete;
    ocvConvert:= @pCvPtr_ExposureCompensatorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FaceDetectorYN) then
  begin
    ocvCreate := @pCvPtr_FaceDetectorYNCreate;
    ocvDelete := @pCvPtr_FaceDetectorYNDelete;
    ocvConvert:= @pCvPtr_FaceDetectorYNConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_RTrees) then
  begin
    ocvCreate := @pCvPtr_RTreesCreate;
    ocvDelete := @pCvPtr_RTreesDelete;
    ocvConvert:= @pCvPtr_RTreesConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Boost) then
  begin
    ocvCreate := @pCvPtr_BoostCreate;
    ocvDelete := @pCvPtr_BoostDelete;
    ocvConvert:= @pCvPtr_BoostConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FaceRecognizerSF) then
  begin
    ocvCreate := @pCvPtr_FaceRecognizerSFCreate;
    ocvDelete := @pCvPtr_FaceRecognizerSFDelete;
    ocvConvert:= @pCvPtr_FaceRecognizerSFConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FarnebackOpticalFlow) then
  begin
    ocvCreate := @pCvPtr_FarnebackOpticalFlowCreate;
    ocvDelete := @pCvPtr_FarnebackOpticalFlowDelete;
    ocvConvert:= @pCvPtr_FarnebackOpticalFlowConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FastFeatureDetector) then
  begin
    ocvCreate := @pCvPtr_FastFeatureDetectorCreate;
    ocvDelete := @pCvPtr_FastFeatureDetectorDelete;
    ocvConvert:= @pCvPtr_FastFeatureDetectorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Feature2D) then
  begin
    ocvCreate := @pCvPtr_Feature2DCreate;
    ocvDelete := @pCvPtr_Feature2DDelete;
    ocvConvert:= @pCvPtr_Feature2DConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FeatureDetector) then
  begin
    ocvCreate := @pCvPtr_FeatureDetectorCreate;
    ocvDelete := @pCvPtr_FeatureDetectorDelete;
    ocvConvert:= @pCvPtr_FeatureDetectorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_FileStorage) then
  begin
    ocvCreate := @pCvPtr_FileStorageCreate;
    ocvDelete := @pCvPtr_FileStorageDelete;
    ocvConvert:= @pCvPtr_FileStorageConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_GFTTDetector) then
  begin
    ocvCreate := @pCvPtr_GFTTDetectorCreate;
    ocvDelete := @pCvPtr_GFTTDetectorDelete;
    ocvConvert:= @pCvPtr_GFTTDetectorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_GeneralizedHoughBallard) then
  begin
    ocvCreate := @pCvPtr_GeneralizedHoughBallardCreate;
    ocvDelete := @pCvPtr_GeneralizedHoughBallardDelete;
    ocvConvert:= @pCvPtr_GeneralizedHoughBallardConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_GeneralizedHoughGuil) then
  begin
    ocvCreate := @pCvPtr_GeneralizedHoughGuilCreate;
    ocvDelete := @pCvPtr_GeneralizedHoughGuilDelete;
    ocvConvert:= @pCvPtr_GeneralizedHoughGuilConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_KAZE) then
  begin
    ocvCreate := @pCvPtr_KAZECreate;
    ocvDelete := @pCvPtr_KAZEDelete;
    ocvConvert:= @pCvPtr_KAZEConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_KNearest) then
  begin
    ocvCreate := @pCvPtr_KNearestCreate;
    ocvDelete := @pCvPtr_KNearestDelete;
    ocvConvert:= @pCvPtr_KNearestConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Layer) then
  begin
    ocvCreate := @pCvPtr_LayerCreate;
    ocvDelete := @pCvPtr_LayerDelete;
    ocvConvert:= @pCvPtr_LayerConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_LineSegmentDetector) then
  begin
    ocvCreate := @pCvPtr_LineSegmentDetectorCreate;
    ocvDelete := @pCvPtr_LineSegmentDetectorDelete;
    ocvConvert:= @pCvPtr_LineSegmentDetectorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_LogisticRegression) then
  begin
    ocvCreate := @pCvPtr_LogisticRegressionCreate;
    ocvDelete := @pCvPtr_LogisticRegressionDelete;
    ocvConvert:= @pCvPtr_LogisticRegressionConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_MSER) then
  begin
    ocvCreate := @pCvPtr_MSERCreate;
    ocvDelete := @pCvPtr_MSERDelete;
    ocvConvert:= @pCvPtr_MSERConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_MergeDebevec) then
  begin
    ocvCreate := @pCvPtr_MergeDebevecCreate;
    ocvDelete := @pCvPtr_MergeDebevecDelete;
    ocvConvert:= @pCvPtr_MergeDebevecConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_MergeMertens) then
  begin
    ocvCreate := @pCvPtr_MergeMertensCreate;
    ocvDelete := @pCvPtr_MergeMertensDelete;
    ocvConvert:= @pCvPtr_MergeMertensConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_MergeRobertson) then
  begin
    ocvCreate := @pCvPtr_MergeRobertsonCreate;
    ocvDelete := @pCvPtr_MergeRobertsonDelete;
    ocvConvert:= @pCvPtr_MergeRobertsonConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_NormalBayesClassifier) then
  begin
    ocvCreate := @pCvPtr_NormalBayesClassifierCreate;
    ocvDelete := @pCvPtr_NormalBayesClassifierDelete;
    ocvConvert:= @pCvPtr_NormalBayesClassifierConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_ORB) then
  begin
    ocvCreate := @pCvPtr_ORBCreate;
    ocvDelete := @pCvPtr_ORBDelete;
    ocvConvert:= @pCvPtr_ORBConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_OriginalClassName) then
  begin
    ocvCreate := @pCvPtr_OriginalClassNameCreate;
    ocvDelete := @pCvPtr_OriginalClassNameDelete;
    ocvConvert:= @pCvPtr_OriginalClassNameConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_ParamGrid) then
  begin
    ocvCreate := @pCvPtr_ParamGridCreate;
    ocvDelete := @pCvPtr_ParamGridDelete;
    ocvConvert:= @pCvPtr_ParamGridConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_QRCodeEncoder) then
  begin
    ocvCreate := @pCvPtr_QRCodeEncoderCreate;
    ocvDelete := @pCvPtr_QRCodeEncoderDelete;
    ocvConvert:= @pCvPtr_QRCodeEncoderConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_SIFT) then
  begin
    ocvCreate := @pCvPtr_SIFTCreate;
    ocvDelete := @pCvPtr_SIFTDelete;
    ocvConvert:= @pCvPtr_SIFTConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_SVM) then
  begin
    ocvCreate := @pCvPtr_SVMCreate;
    ocvDelete := @pCvPtr_SVMDelete;
    ocvConvert:= @pCvPtr_SVMConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_SVMSGD) then
  begin
    ocvCreate := @pCvPtr_SVMSGDCreate;
    ocvDelete := @pCvPtr_SVMSGDDelete;
    ocvConvert:= @pCvPtr_SVMSGDConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_SeamFinder) then
  begin
    ocvCreate := @pCvPtr_SeamFinderCreate;
    ocvDelete := @pCvPtr_SeamFinderDelete;
    ocvConvert:= @pCvPtr_SeamFinderConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_SimpleBlobDetector) then
  begin
    ocvCreate := @pCvPtr_SimpleBlobDetectorCreate;
    ocvDelete := @pCvPtr_SimpleBlobDetectorDelete;
    ocvConvert:= @pCvPtr_SimpleBlobDetectorConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_SparsePyrLKOpticalFlow) then
  begin
    ocvCreate := @pCvPtr_SparsePyrLKOpticalFlowCreate;
    ocvDelete := @pCvPtr_SparsePyrLKOpticalFlowDelete;
    ocvConvert:= @pCvPtr_SparsePyrLKOpticalFlowConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_StereoBM) then
  begin
    ocvCreate := @pCvPtr_StereoBMCreate;
    ocvDelete := @pCvPtr_StereoBMDelete;
    ocvConvert:= @pCvPtr_StereoBMConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_StereoSGBM) then
  begin
    ocvCreate := @pCvPtr_StereoSGBMCreate;
    ocvDelete := @pCvPtr_StereoSGBMDelete;
    ocvConvert:= @pCvPtr_StereoSGBMConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Stitcher) then
  begin
    ocvCreate := @pCvPtr_StitcherCreate;
    ocvDelete := @pCvPtr_StitcherDelete;
    ocvConvert:= @pCvPtr_StitcherConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Timelapser) then
  begin
    ocvCreate := @pCvPtr_TimelapserCreate;
    ocvDelete := @pCvPtr_TimelapserDelete;
    ocvConvert:= @pCvPtr_TimelapserConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_Tonemap) then
  begin
    ocvCreate := @pCvPtr_TonemapCreate;
    ocvDelete := @pCvPtr_TonemapDelete;
    ocvConvert:= @pCvPtr_TonemapConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TonemapDrago) then
  begin
    ocvCreate := @pCvPtr_TonemapDragoCreate;
    ocvDelete := @pCvPtr_TonemapDragoDelete;
    ocvConvert:= @pCvPtr_TonemapDragoConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TonemapMantiuk) then
  begin
    ocvCreate := @pCvPtr_TonemapMantiukCreate;
    ocvDelete := @pCvPtr_TonemapMantiukDelete;
    ocvConvert:= @pCvPtr_TonemapMantiukConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TonemapReinhard) then
  begin
    ocvCreate := @pCvPtr_TonemapReinhardCreate;
    ocvDelete := @pCvPtr_TonemapReinhardDelete;
    ocvConvert:= @pCvPtr_TonemapReinhardConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TrackerDaSiamRPN) then
  begin
    ocvCreate := @pCvPtr_TrackerDaSiamRPNCreate;
    ocvDelete := @pCvPtr_TrackerDaSiamRPNDelete;
    ocvConvert:= @pCvPtr_TrackerDaSiamRPNConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TrackerGOTURN) then
  begin
    ocvCreate := @pCvPtr_TrackerGOTURNCreate;
    ocvDelete := @pCvPtr_TrackerGOTURNDelete;
    ocvConvert:= @pCvPtr_TrackerGOTURNConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TrackerMIL) then
  begin
    ocvCreate := @pCvPtr_TrackerMILCreate;
    ocvDelete := @pCvPtr_TrackerMILDelete;
    ocvConvert:= @pCvPtr_TrackerMILConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_TrainData) then
  begin
    ocvCreate := @pCvPtr_TrainDataCreate;
    ocvDelete := @pCvPtr_TrainDataDelete;
    ocvConvert:= @pCvPtr_TrainDataConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_VariationalRefinement) then
  begin
    ocvCreate := @pCvPtr_VariationalRefinementCreate;
    ocvDelete := @pCvPtr_VariationalRefinementDelete;
    ocvConvert:= @pCvPtr_VariationalRefinementConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_flann_IndexParams) then
  begin
    ocvCreate := @pCvPtr_flann_IndexParamsCreate;
    ocvDelete := @pCvPtr_flann_IndexParamsDelete;
    ocvConvert:= @pCvPtr_flann_IndexParamsConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_flann_SearchParams) then
  begin
    ocvCreate := @pCvPtr_flann_SearchParamsCreate;
    ocvDelete := @pCvPtr_flann_SearchParamsDelete;
    ocvConvert:= @pCvPtr_flann_SearchParamsConvert;
    Exit;
  end ;
  if TypeInfo(T) = TypeInfo(PCvPtr_float) then
  begin
    ocvCreate := @pCvPtr_floatCreate;
    ocvDelete := @pCvPtr_floatDelete;
    ocvConvert:= @pCvPtr_floatConvert;
    Exit;
  end ;
  raise Exception.Create('Unrecognized Opencv Ptr type');
end;

CVAPI(RotatedRect_t*)   pCvCamShift(Mat_t* probImage, Rect_t* window, TermCriteria_t* criteria)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::CamShift(*probImage->v, *window->v, *criteria->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvCamShiftV2(UMat_t* probImage, Rect_t* window, TermCriteria_t* criteria)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::CamShift(*probImage->v, *window->v, *criteria->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvCanny(Mat_t* image, Mat_t* edges, double threshold1, double threshold2, int apertureSize, 
                                   bool L2gradient)
{
try {
 
    cv::Canny(*image->v, *edges->v, threshold1, threshold2, apertureSize, L2gradient);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCannyV2(UMat_t* image, UMat_t* edges, double threshold1, double threshold2, 
                                   int apertureSize, bool L2gradient)
{
try {
 
    cv::Canny(*image->v, *edges->v, threshold1, threshold2, apertureSize, L2gradient);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCannyV3(Mat_t* dx, Mat_t* dy, Mat_t* edges, double threshold1, double threshold2, 
                                   bool L2gradient)
{
try {
 
    cv::Canny(*dx->v, *dy->v, *edges->v, threshold1, threshold2, L2gradient);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvCannyV4(UMat_t* dx, UMat_t* dy, UMat_t* edges, double threshold1, double threshold2, 
                                   bool L2gradient)
{
try {
 
    cv::Canny(*dx->v, *dy->v, *edges->v, threshold1, threshold2, L2gradient);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvEMD(Mat_t* signature1, Mat_t* signature2, int distType, Mat_t* cost, Ptr_float* lowerBound, 
                                   Mat_t* flow)
{
    float retval = 0;
try {
 
    Ptr_float x5; if (lowerBound == 0) { x5 = Ptr<float>(); lowerBound = &x5; };       
    retval = cv::wrapperEMD(*signature1->v, *signature2->v, distType, inparrDefault(cost), *lowerBound, outarrDefault(flow));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvEMDV2(UMat_t* signature1, UMat_t* signature2, int distType, UMat_t* cost, 
                                   Ptr_float* lowerBound, UMat_t* flow)
{
    float retval = 0;
try {
 
    Ptr_float x5; if (lowerBound == 0) { x5 = Ptr<float>(); lowerBound = &x5; };       
    retval = cv::wrapperEMD(*signature1->v, *signature2->v, distType, inparrDefault(cost), *lowerBound, outarrDefault(flow));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvGaussianBlur(Mat_t* src, Mat_t* dst, Size_t* ksize, double sigmaX, double sigmaY, 
                                   int borderType)
{
try {
 
    cv::GaussianBlur(*src->v, *dst->v, *ksize->v, sigmaX, sigmaY, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvGaussianBlurV2(UMat_t* src, UMat_t* dst, Size_t* ksize, double sigmaX, double sigmaY, 
                                   int borderType)
{
try {
 
    cv::GaussianBlur(*src->v, *dst->v, *ksize->v, sigmaX, sigmaY, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughCircles(Mat_t* image, Mat_t* circles, int method, double dp, double minDist, 
                                   double param1, double param2, int minRadius, int maxRadius)
{
try {
 
    cv::HoughCircles(*image->v, *circles->v, method, dp, minDist, param1, param2, minRadius, maxRadius);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughCirclesV2(UMat_t* image, UMat_t* circles, int method, double dp, double minDist, 
                                   double param1, double param2, int minRadius, int maxRadius)
{
try {
 
    cv::HoughCircles(*image->v, *circles->v, method, dp, minDist, param1, param2, minRadius, maxRadius);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLines(Mat_t* image, Mat_t* lines, double rho, double theta, int threshold, double srn, 
                                   double stn, double min_theta, double max_theta)
{
try {
 
    cv::HoughLines(*image->v, *lines->v, rho, theta, threshold, srn, stn, min_theta, max_theta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesV2(UMat_t* image, UMat_t* lines, double rho, double theta, int threshold, 
                                   double srn, double stn, double min_theta, double max_theta)
{
try {
 
    cv::HoughLines(*image->v, *lines->v, rho, theta, threshold, srn, stn, min_theta, max_theta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesP(Mat_t* image, Mat_t* lines, double rho, double theta, int threshold, 
                                   double minLineLength, double maxLineGap)
{
try {
 
    cv::HoughLinesP(*image->v, *lines->v, rho, theta, threshold, minLineLength, maxLineGap);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesPV2(UMat_t* image, UMat_t* lines, double rho, double theta, int threshold, 
                                   double minLineLength, double maxLineGap)
{
try {
 
    cv::HoughLinesP(*image->v, *lines->v, rho, theta, threshold, minLineLength, maxLineGap);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesPointSet(Mat_t* point, Mat_t* lines, int lines_max, int threshold, 
                                   double min_rho, double max_rho, double rho_step, double min_theta, double max_theta, 
                                   double theta_step)
{
try {
 
    cv::HoughLinesPointSet(*point->v, *lines->v, lines_max, threshold, min_rho, max_rho, rho_step, min_theta, max_theta, theta_step);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesPointSetV2(UMat_t* point, UMat_t* lines, int lines_max, int threshold, 
                                   double min_rho, double max_rho, double rho_step, double min_theta, double max_theta, 
                                   double theta_step)
{
try {
 
    cv::HoughLinesPointSet(*point->v, *lines->v, lines_max, threshold, min_rho, max_rho, rho_step, min_theta, max_theta, theta_step);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesWithAccumulator(Mat_t* image, Mat_t* lines, double rho, double theta, 
                                   int threshold, double srn, double stn, double min_theta, double max_theta)
{
try {
 
    cv::HoughLinesWithAccumulator(*image->v, *lines->v, rho, theta, threshold, srn, stn, min_theta, max_theta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHoughLinesWithAccumulatorV2(UMat_t* image, UMat_t* lines, double rho, double theta, 
                                   int threshold, double srn, double stn, double min_theta, double max_theta)
{
try {
 
    cv::HoughLinesWithAccumulator(*image->v, *lines->v, rho, theta, threshold, srn, stn, min_theta, max_theta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHuMoments(Moments_t* m, Mat_t* hu)
{
try {
 
    cv::HuMoments(*m->v, *hu->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvHuMomentsV2(Moments_t* m, UMat_t* hu)
{
try {
 
    cv::HuMoments(*m->v, *hu->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLUT(Mat_t* src, Mat_t* lut, Mat_t* dst)
{
try {
 
    cv::LUT(*src->v, *lut->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLUTV2(UMat_t* src, UMat_t* lut, UMat_t* dst)
{
try {
 
    cv::LUT(*src->v, *lut->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLaplacian(Mat_t* src, Mat_t* dst, int ddepth, int ksize, double scale, double delta, 
                                   int borderType)
{
try {
 
    cv::Laplacian(*src->v, *dst->v, ddepth, ksize, scale, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvLaplacianV2(UMat_t* src, UMat_t* dst, int ddepth, int ksize, double scale, double delta, 
                                   int borderType)
{
try {
 
    cv::Laplacian(*src->v, *dst->v, ddepth, ksize, scale, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvMahalanobis(Mat_t* v1, Mat_t* v2, Mat_t* icovar)
{
    double retval = 0;
try {
 
    retval = cv::Mahalanobis(*v1->v, *v2->v, *icovar->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvMahalanobisV2(UMat_t* v1, UMat_t* v2, UMat_t* icovar)
{
    double retval = 0;
try {
 
    retval = cv::Mahalanobis(*v1->v, *v2->v, *icovar->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvPCABackProject(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* _result)
{
try {
 
    cv::PCABackProject(*data->v, *mean->v, *eigenvectors->v, *_result->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCABackProjectV2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* _result)
{
try {
 
    cv::PCABackProject(*data->v, *mean->v, *eigenvectors->v, *_result->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCACompute(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, int maxComponents)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, maxComponents);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCAComputeV2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, int maxComponents)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, maxComponents);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCAComputeV3(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, double retainedVariance)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, retainedVariance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCAComputeV4(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, double retainedVariance)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, retainedVariance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCACompute2(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* eigenvalues, 
                                   int maxComponents)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, *eigenvalues->v, maxComponents);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCACompute2V2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* eigenvalues, 
                                   int maxComponents)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, *eigenvalues->v, maxComponents);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCACompute2V3(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* eigenvalues, 
                                   double retainedVariance)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, *eigenvalues->v, retainedVariance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCACompute2V4(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* eigenvalues, 
                                   double retainedVariance)
{
try {
 
    cv::PCACompute(*data->v, *mean->v, *eigenvectors->v, *eigenvalues->v, retainedVariance);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCAProject(Mat_t* data, Mat_t* mean, Mat_t* eigenvectors, Mat_t* _result)
{
try {
 
    cv::PCAProject(*data->v, *mean->v, *eigenvectors->v, *_result->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvPCAProjectV2(UMat_t* data, UMat_t* mean, UMat_t* eigenvectors, UMat_t* _result)
{
try {
 
    cv::PCAProject(*data->v, *mean->v, *eigenvectors->v, *_result->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvPSNR(Mat_t* src1, Mat_t* src2, double R)
{
    double retval = 0;
try {
 
    retval = cv::PSNR(*src1->v, *src2->v, R);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvPSNRV2(UMat_t* src1, UMat_t* src2, double R)
{
    double retval = 0;
try {
 
    retval = cv::PSNR(*src1->v, *src2->v, R);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Vec3d_t*)   pCvRQDecomp3x3(Mat_t* src, Mat_t* mtxR, Mat_t* mtxQ, Mat_t* Qx, Mat_t* Qy, Mat_t* Qz)
{
    Vec3d_t*  retval = new Vec3d_t;
try { 
    Vec3d tr = cv::RQDecomp3x3(*src->v, *mtxR->v, *mtxQ->v, outarrDefault(Qx), outarrDefault(Qy), outarrDefault(Qz));
    Vec3d*  t = new Vec3d();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Vec3d_t*)   pCvRQDecomp3x3V2(UMat_t* src, UMat_t* mtxR, UMat_t* mtxQ, UMat_t* Qx, UMat_t* Qy, UMat_t* Qz)
{
    Vec3d_t*  retval = new Vec3d_t;
try { 
    Vec3d tr = cv::RQDecomp3x3(*src->v, *mtxR->v, *mtxQ->v, outarrDefault(Qx), outarrDefault(Qy), outarrDefault(Qz));
    Vec3d*  t = new Vec3d();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvRodrigues(Mat_t* src, Mat_t* dst, Mat_t* jacobian)
{
try {
 
    cv::Rodrigues(*src->v, *dst->v, outarrDefault(jacobian));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvRodriguesV2(UMat_t* src, UMat_t* dst, UMat_t* jacobian)
{
try {
 
    cv::Rodrigues(*src->v, *dst->v, outarrDefault(jacobian));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSVBackSubst(Mat_t* w, Mat_t* u, Mat_t* vt, Mat_t* rhs, Mat_t* dst)
{
try {
 
    cv::SVBackSubst(*w->v, *u->v, *vt->v, *rhs->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSVBackSubstV2(UMat_t* w, UMat_t* u, UMat_t* vt, UMat_t* rhs, UMat_t* dst)
{
try {
 
    cv::SVBackSubst(*w->v, *u->v, *vt->v, *rhs->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSVDecomp(Mat_t* src, Mat_t* w, Mat_t* u, Mat_t* vt, int flags)
{
try {
 
    cv::SVDecomp(*src->v, *w->v, *u->v, *vt->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSVDecompV2(UMat_t* src, UMat_t* w, UMat_t* u, UMat_t* vt, int flags)
{
try {
 
    cv::SVDecomp(*src->v, *w->v, *u->v, *vt->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvScharr(Mat_t* src, Mat_t* dst, int ddepth, int dx, int dy, double scale, double delta, 
                                   int borderType)
{
try {
 
    cv::Scharr(*src->v, *dst->v, ddepth, dx, dy, scale, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvScharrV2(UMat_t* src, UMat_t* dst, int ddepth, int dx, int dy, double scale, double delta, 
                                   int borderType)
{
try {
 
    cv::Scharr(*src->v, *dst->v, ddepth, dx, dy, scale, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSobel(Mat_t* src, Mat_t* dst, int ddepth, int dx, int dy, int ksize, double scale, 
                                   double delta, int borderType)
{
try {
 
    cv::Sobel(*src->v, *dst->v, ddepth, dx, dy, ksize, scale, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvSobelV2(UMat_t* src, UMat_t* dst, int ddepth, int dx, int dy, int ksize, double scale, 
                                   double delta, int borderType)
{
try {
 
    cv::Sobel(*src->v, *dst->v, ddepth, dx, dy, ksize, scale, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvabsdiff(Mat_t* src1, Mat_t* src2, Mat_t* dst)
{
try {
 
    cv::absdiff(*src1->v, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvabsdiffV2(UMat_t* src1, UMat_t* src2, UMat_t* dst)
{
try {
 
    cv::absdiff(*src1->v, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulate(Mat_t* src, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::accumulate(*src->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateV2(UMat_t* src, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::accumulate(*src->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateProduct(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::accumulateProduct(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateProductV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::accumulateProduct(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateSquare(Mat_t* src, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::accumulateSquare(*src->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateSquareV2(UMat_t* src, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::accumulateSquare(*src->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateWeighted(Mat_t* src, Mat_t* dst, double alpha, Mat_t* mask)
{
try {
 
    cv::accumulateWeighted(*src->v, *dst->v, alpha, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaccumulateWeightedV2(UMat_t* src, UMat_t* dst, double alpha, UMat_t* mask)
{
try {
 
    cv::accumulateWeighted(*src->v, *dst->v, alpha, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvadaptiveThreshold(Mat_t* src, Mat_t* dst, double maxValue, int adaptiveMethod, 
                                   int thresholdType, int blockSize, double C)
{
try {
 
    cv::adaptiveThreshold(*src->v, *dst->v, maxValue, adaptiveMethod, thresholdType, blockSize, C);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvadaptiveThresholdV2(UMat_t* src, UMat_t* dst, double maxValue, int adaptiveMethod, 
                                   int thresholdType, int blockSize, double C)
{
try {
 
    cv::adaptiveThreshold(*src->v, *dst->v, maxValue, adaptiveMethod, thresholdType, blockSize, C);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvadd(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask, int dtype)
{
try {
 
    cv::add(*src1->v, *src2->v, *dst->v, inparrDefault(mask), dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaddV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask, int dtype)
{
try {
 
    cv::add(*src1->v, *src2->v, *dst->v, inparrDefault(mask), dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaddText(Mat_t* img, string_t* text, Point_t* org, string_t* nameFont, int pointSize, 
                                   Scalar_t* color, int weight, int style, int spacing)
{
try {
 
    Scalar x6; if (color == 0) { Scalar_t a6; x6 = Scalar::all(0); a6.v = &x6; color = &a6; };     
    cv::addText(*img->v, string(text->v), *org->v, string(nameFont->v), pointSize, *color->v, weight, style, spacing);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaddWeighted(Mat_t* src1, double alpha, Mat_t* src2, double beta, double gamma, Mat_t* dst, 
                                   int dtype)
{
try {
 
    cv::addWeighted(*src1->v, alpha, *src2->v, beta, gamma, *dst->v, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvaddWeightedV2(UMat_t* src1, double alpha, UMat_t* src2, double beta, double gamma, 
                                   UMat_t* dst, int dtype)
{
try {
 
    cv::addWeighted(*src1->v, alpha, *src2->v, beta, gamma, *dst->v, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvapplyColorMap(Mat_t* src, Mat_t* dst, int colormap)
{
try {
 
    cv::applyColorMap(*src->v, *dst->v, colormap);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvapplyColorMapV2(UMat_t* src, UMat_t* dst, int colormap)
{
try {
 
    cv::applyColorMap(*src->v, *dst->v, colormap);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvapplyColorMapV3(Mat_t* src, Mat_t* dst, Mat_t* userColor)
{
try {
 
    cv::applyColorMap(*src->v, *dst->v, *userColor->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvapplyColorMapV4(UMat_t* src, UMat_t* dst, UMat_t* userColor)
{
try {
 
    cv::applyColorMap(*src->v, *dst->v, *userColor->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvapproxPolyDP(Mat_t* curve, Mat_t* approxCurve, double epsilon, bool closed)
{
try {
 
    cv::approxPolyDP(*curve->v, *approxCurve->v, epsilon, closed);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvapproxPolyDPV2(UMat_t* curve, UMat_t* approxCurve, double epsilon, bool closed)
{
try {
 
    cv::approxPolyDP(*curve->v, *approxCurve->v, epsilon, closed);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvarcLength(Mat_t* curve, bool closed)
{
    double retval = 0;
try {
 
    retval = cv::arcLength(*curve->v, closed);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvarcLengthV2(UMat_t* curve, bool closed)
{
    double retval = 0;
try {
 
    retval = cv::arcLength(*curve->v, closed);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvarrowedLine(Mat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, int thickness, 
                                   int line_type, int shift, double tipLength)
{
try {
 
    cv::arrowedLine(*img->v, *pt1->v, *pt2->v, *color->v, thickness, line_type, shift, tipLength);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvarrowedLineV2(UMat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, int thickness, 
                                   int line_type, int shift, double tipLength)
{
try {
 
    cv::arrowedLine(*img->v, *pt1->v, *pt2->v, *color->v, thickness, line_type, shift, tipLength);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbatchDistance(Mat_t* src1, Mat_t* src2, Mat_t* dist, int dtype, Mat_t* nidx, int normType, 
                                   int K, Mat_t* mask, int update, bool crosscheck)
{
try {
 
    cv::batchDistance(*src1->v, *src2->v, *dist->v, dtype, *nidx->v, normType, K, inparrDefault(mask), update, crosscheck);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbatchDistanceV2(UMat_t* src1, UMat_t* src2, UMat_t* dist, int dtype, UMat_t* nidx, 
                                   int normType, int K, UMat_t* mask, int update, bool crosscheck)
{
try {
 
    cv::batchDistance(*src1->v, *src2->v, *dist->v, dtype, *nidx->v, normType, K, inparrDefault(mask), update, crosscheck);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbilateralFilter(Mat_t* src, Mat_t* dst, int d, double sigmaColor, double sigmaSpace, 
                                   int borderType)
{
try {
 
    cv::bilateralFilter(*src->v, *dst->v, d, sigmaColor, sigmaSpace, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbilateralFilterV2(UMat_t* src, UMat_t* dst, int d, double sigmaColor, double sigmaSpace, 
                                   int borderType)
{
try {
 
    cv::bilateralFilter(*src->v, *dst->v, d, sigmaColor, sigmaSpace, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_and(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::bitwise_and(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_andV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::bitwise_and(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_not(Mat_t* src, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::bitwise_not(*src->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_notV2(UMat_t* src, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::bitwise_not(*src->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_or(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::bitwise_or(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_orV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::bitwise_or(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_xor(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::bitwise_xor(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvbitwise_xorV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::bitwise_xor(*src1->v, *src2->v, *dst->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvblendLinear(Mat_t* src1, Mat_t* src2, Mat_t* weights1, Mat_t* weights2, Mat_t* dst)
{
try {
 
    cv::blendLinear(*src1->v, *src2->v, *weights1->v, *weights2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvblendLinearV2(UMat_t* src1, UMat_t* src2, UMat_t* weights1, UMat_t* weights2, UMat_t* dst)
{
try {
 
    cv::blendLinear(*src1->v, *src2->v, *weights1->v, *weights2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvblur(Mat_t* src, Mat_t* dst, Size_t* ksize, Point_t* anchor, int borderType)
{
try {
 
    Point x4; if (anchor == 0) { Point_t a4; x4 = Point(-1,-1); a4.v = &x4; anchor = &a4; };     
    cv::blur(*src->v, *dst->v, *ksize->v, *anchor->v, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvblurV2(UMat_t* src, UMat_t* dst, Size_t* ksize, Point_t* anchor, int borderType)
{
try {
 
    Point x4; if (anchor == 0) { Point_t a4; x4 = Point(-1,-1); a4.v = &x4; anchor = &a4; };     
    cv::blur(*src->v, *dst->v, *ksize->v, *anchor->v, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvborderInterpolate(int p, int len, int borderType)
{
    int retval = 0;
try {
 
    retval = cv::borderInterpolate(p, len, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvboundingRect(Mat_t* _array)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::boundingRect(*_array->v);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvboundingRectV2(UMat_t* _array)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::boundingRect(*_array->v);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvboxFilter(Mat_t* src, Mat_t* dst, int ddepth, Size_t* ksize, Point_t* anchor, 
                                   bool normalize, int borderType)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1,-1); a5.v = &x5; anchor = &a5; };     
    cv::boxFilter(*src->v, *dst->v, ddepth, *ksize->v, *anchor->v, normalize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvboxFilterV2(UMat_t* src, UMat_t* dst, int ddepth, Size_t* ksize, Point_t* anchor, 
                                   bool normalize, int borderType)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1,-1); a5.v = &x5; anchor = &a5; };     
    cv::boxFilter(*src->v, *dst->v, ddepth, *ksize->v, *anchor->v, normalize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvboxPoints(RotatedRect_t* box, Mat_t* points)
{
try {
 
    cv::boxPoints(*box->v, *points->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvboxPointsV2(RotatedRect_t* box, UMat_t* points)
{
try {
 
    cv::boxPoints(*box->v, *points->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvbuildOpticalFlowPyramid(Mat_t* img, vector_Mat* pyramid, Size_t* winSize, int maxLevel, 
                                   bool withDerivatives, int pyrBorder, int derivBorder, bool tryReuseInputImage)
{
    int retval = 0;
try {
 
    retval = cv::buildOpticalFlowPyramid(*img->v, *pyramid, *winSize->v, maxLevel, withDerivatives, pyrBorder, derivBorder, tryReuseInputImage);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvbuildOpticalFlowPyramidV2(UMat_t* img, vector_UMat* pyramid, Size_t* winSize, int maxLevel, 
                                   bool withDerivatives, int pyrBorder, int derivBorder, bool tryReuseInputImage)
{
    int retval = 0;
try {
 
    retval = cv::buildOpticalFlowPyramid(*img->v, *pyramid, *winSize->v, maxLevel, withDerivatives, pyrBorder, derivBorder, tryReuseInputImage);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcalcBackProject(vector_Mat* images, vector_int* channels, Mat_t* hist, Mat_t* dst, 
                                   vector_float* ranges, double scale)
{
try {
 
    cv::calcBackProject(*images, *channels, *hist->v, *dst->v, *ranges, scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcBackProjectV2(vector_UMat* images, vector_int* channels, UMat_t* hist, UMat_t* dst, 
                                   vector_float* ranges, double scale)
{
try {
 
    cv::calcBackProject(*images, *channels, *hist->v, *dst->v, *ranges, scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcCovarMatrix(Mat_t* samples, Mat_t* covar, Mat_t* mean, int flags, int ctype)
{
try {
 
    cv::calcCovarMatrix(*samples->v, *covar->v, *mean->v, flags, ctype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcCovarMatrixV2(UMat_t* samples, UMat_t* covar, UMat_t* mean, int flags, int ctype)
{
try {
 
    cv::calcCovarMatrix(*samples->v, *covar->v, *mean->v, flags, ctype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcHist(vector_Mat* images, vector_int* channels, Mat_t* mask, Mat_t* hist, 
                                   vector_int* histSize, vector_float* ranges, bool accumulate)
{
try {
 
    cv::calcHist(*images, *channels, *mask->v, *hist->v, *histSize, *ranges, accumulate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcHistV2(vector_UMat* images, vector_int* channels, UMat_t* mask, UMat_t* hist, 
                                   vector_int* histSize, vector_float* ranges, bool accumulate)
{
try {
 
    cv::calcHist(*images, *channels, *mask->v, *hist->v, *histSize, *ranges, accumulate);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcOpticalFlowFarneback(Mat_t* prev, Mat_t* next, Mat_t* flow, double pyr_scale, 
                                   int levels, int winsize, int iterations, int poly_n, double poly_sigma, 
                                   int flags)
{
try {
 
    cv::calcOpticalFlowFarneback(*prev->v, *next->v, *flow->v, pyr_scale, levels, winsize, iterations, poly_n, poly_sigma, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcOpticalFlowFarnebackV2(UMat_t* prev, UMat_t* next, UMat_t* flow, double pyr_scale, 
                                   int levels, int winsize, int iterations, int poly_n, double poly_sigma, 
                                   int flags)
{
try {
 
    cv::calcOpticalFlowFarneback(*prev->v, *next->v, *flow->v, pyr_scale, levels, winsize, iterations, poly_n, poly_sigma, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcOpticalFlowPyrLK(Mat_t* prevImg, Mat_t* nextImg, Mat_t* prevPts, Mat_t* nextPts, 
                                   Mat_t* status, Mat_t* err, Size_t* winSize, int maxLevel, TermCriteria_t* criteria, 
                                   int flags, double minEigThreshold)
{
try {
 
    Size x7; if (winSize == 0) { Size_t a7; x7 = Size(21,21); a7.v = &x7; winSize = &a7; };     
    TermCriteria x9; if (criteria == 0) { TermCriteria_t a9; x9 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01); a9.v = &x9; criteria = &a9; };     
    cv::calcOpticalFlowPyrLK(*prevImg->v, *nextImg->v, *prevPts->v, *nextPts->v, *status->v, *err->v, *winSize->v, maxLevel, *criteria->v, flags, minEigThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalcOpticalFlowPyrLKV2(UMat_t* prevImg, UMat_t* nextImg, UMat_t* prevPts, UMat_t* nextPts, 
                                   UMat_t* status, UMat_t* err, Size_t* winSize, int maxLevel, 
                                   TermCriteria_t* criteria, int flags, double minEigThreshold)
{
try {
 
    Size x7; if (winSize == 0) { Size_t a7; x7 = Size(21,21); a7.v = &x7; winSize = &a7; };     
    TermCriteria x9; if (criteria == 0) { TermCriteria_t a9; x9 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01); a9.v = &x9; criteria = &a9; };     
    cv::calcOpticalFlowPyrLK(*prevImg->v, *nextImg->v, *prevPts->v, *nextPts->v, *status->v, *err->v, *winSize->v, maxLevel, *criteria->v, flags, minEigThreshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvcalibrateCamera(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* imageSize, 
                                   Mat_t* cameraMatrix, Mat_t* distCoeffs, vector_Mat* rvecs, vector_Mat* tvecs, int flags, 
                                   TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x9; if (criteria == 0) { TermCriteria_t a9; x9 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a9.v = &x9; criteria = &a9; };     
    retval = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraV2(vector_UMat* objectPoints, vector_UMat* imagePoints, Size_t* imageSize, 
                                   UMat_t* cameraMatrix, UMat_t* distCoeffs, vector_UMat* rvecs, vector_UMat* tvecs, int flags, 
                                   TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x9; if (criteria == 0) { TermCriteria_t a9; x9 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a9.v = &x9; criteria = &a9; };     
    retval = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraExtended(vector_Mat* objectPoints, vector_Mat* imagePoints, 
                                   Size_t* imageSize, Mat_t* cameraMatrix, Mat_t* distCoeffs, vector_Mat* rvecs, 
                                   vector_Mat* tvecs, Mat_t* stdDeviationsIntrinsics, Mat_t* stdDeviationsExtrinsics, 
                                   Mat_t* perViewErrors, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x12; if (criteria == 0) { TermCriteria_t a12; x12 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a12.v = &x12; criteria = &a12; };     
    retval = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, *stdDeviationsIntrinsics->v, *stdDeviationsExtrinsics->v, *perViewErrors->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraExtendedV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* imageSize, UMat_t* cameraMatrix, UMat_t* distCoeffs, vector_UMat* rvecs, 
                                   vector_UMat* tvecs, UMat_t* stdDeviationsIntrinsics, 
                                   UMat_t* stdDeviationsExtrinsics, UMat_t* perViewErrors, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x12; if (criteria == 0) { TermCriteria_t a12; x12 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a12.v = &x12; criteria = &a12; };     
    retval = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, *stdDeviationsIntrinsics->v, *stdDeviationsExtrinsics->v, *perViewErrors->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraRO(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* imageSize, 
                                   int iFixedPoint, Mat_t* cameraMatrix, Mat_t* distCoeffs, vector_Mat* rvecs, 
                                   vector_Mat* tvecs, Mat_t* newObjPoints, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x11; if (criteria == 0) { TermCriteria_t a11; x11 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a11.v = &x11; criteria = &a11; };     
    retval = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize->v, iFixedPoint, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, *newObjPoints->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraROV2(vector_UMat* objectPoints, vector_UMat* imagePoints, Size_t* imageSize, 
                                   int iFixedPoint, UMat_t* cameraMatrix, UMat_t* distCoeffs, vector_UMat* rvecs, 
                                   vector_UMat* tvecs, UMat_t* newObjPoints, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x11; if (criteria == 0) { TermCriteria_t a11; x11 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a11.v = &x11; criteria = &a11; };     
    retval = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize->v, iFixedPoint, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, *newObjPoints->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraROExtended(vector_Mat* objectPoints, vector_Mat* imagePoints, 
                                   Size_t* imageSize, int iFixedPoint, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   vector_Mat* rvecs, vector_Mat* tvecs, Mat_t* newObjPoints, 
                                   Mat_t* stdDeviationsIntrinsics, Mat_t* stdDeviationsExtrinsics, Mat_t* stdDeviationsObjPoints, 
                                   Mat_t* perViewErrors, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x15; if (criteria == 0) { TermCriteria_t a15; x15 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a15.v = &x15; criteria = &a15; };     
    retval = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize->v, iFixedPoint, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, *newObjPoints->v, *stdDeviationsIntrinsics->v, *stdDeviationsExtrinsics->v, *stdDeviationsObjPoints->v, *perViewErrors->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcalibrateCameraROExtendedV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* imageSize, int iFixedPoint, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   vector_UMat* rvecs, vector_UMat* tvecs, UMat_t* newObjPoints, 
                                   UMat_t* stdDeviationsIntrinsics, UMat_t* stdDeviationsExtrinsics, 
                                   UMat_t* stdDeviationsObjPoints, UMat_t* perViewErrors, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x15; if (criteria == 0) { TermCriteria_t a15; x15 = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON); a15.v = &x15; criteria = &a15; };     
    retval = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize->v, iFixedPoint, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, *newObjPoints->v, *stdDeviationsIntrinsics->v, *stdDeviationsExtrinsics->v, *stdDeviationsObjPoints->v, *perViewErrors->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcalibrateHandEye(vector_Mat* R_gripper2base, vector_Mat* t_gripper2base, 
                                   vector_Mat* R_target2cam, vector_Mat* t_target2cam, Mat_t* R_cam2gripper, Mat_t* t_cam2gripper, 
                                   HandEyeCalibrationMethod method)
{
try {
 
    cv::calibrateHandEye(*R_gripper2base, *t_gripper2base, *R_target2cam, *t_target2cam, *R_cam2gripper->v, *t_cam2gripper->v, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalibrateHandEyeV2(vector_UMat* R_gripper2base, vector_UMat* t_gripper2base, 
                                   vector_UMat* R_target2cam, vector_UMat* t_target2cam, UMat_t* R_cam2gripper, 
                                   UMat_t* t_cam2gripper, HandEyeCalibrationMethod method)
{
try {
 
    cv::calibrateHandEye(*R_gripper2base, *t_gripper2base, *R_target2cam, *t_target2cam, *R_cam2gripper->v, *t_cam2gripper->v, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalibrateRobotWorldHandEye(vector_Mat* R_world2cam, vector_Mat* t_world2cam, 
                                   vector_Mat* R_base2gripper, vector_Mat* t_base2gripper, Mat_t* R_base2world, 
                                   Mat_t* t_base2world, Mat_t* R_gripper2cam, Mat_t* t_gripper2cam, 
                                   RobotWorldHandEyeCalibrationMethod method)
{
try {
 
    cv::calibrateRobotWorldHandEye(*R_world2cam, *t_world2cam, *R_base2gripper, *t_base2gripper, *R_base2world->v, *t_base2world->v, *R_gripper2cam->v, *t_gripper2cam->v, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalibrateRobotWorldHandEyeV2(vector_UMat* R_world2cam, vector_UMat* t_world2cam, 
                                   vector_UMat* R_base2gripper, vector_UMat* t_base2gripper, UMat_t* R_base2world, 
                                   UMat_t* t_base2world, UMat_t* R_gripper2cam, UMat_t* t_gripper2cam, 
                                   RobotWorldHandEyeCalibrationMethod method)
{
try {
 
    cv::calibrateRobotWorldHandEye(*R_world2cam, *t_world2cam, *R_base2gripper, *t_base2gripper, *R_base2world->v, *t_base2world->v, *R_gripper2cam->v, *t_gripper2cam->v, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalibrationMatrixValues(Mat_t* cameraMatrix, Size_t* imageSize, double apertureWidth, 
                                   double apertureHeight, double fovx, double fovy, double focalLength, 
                                   Point2d_t* principalPoint, double aspectRatio)
{
try {
 
    cv::calibrationMatrixValues(*cameraMatrix->v, *imageSize->v, apertureWidth, apertureHeight, fovx, fovy, focalLength, *principalPoint->v, aspectRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcalibrationMatrixValuesV2(UMat_t* cameraMatrix, Size_t* imageSize, double apertureWidth, 
                                   double apertureHeight, double fovx, double fovy, double focalLength, 
                                   Point2d_t* principalPoint, double aspectRatio)
{
try {
 
    cv::calibrationMatrixValues(*cameraMatrix->v, *imageSize->v, apertureWidth, apertureHeight, fovx, fovy, focalLength, *principalPoint->v, aspectRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcartToPolar(Mat_t* x, Mat_t* y, Mat_t* magnitude, Mat_t* angle, bool angleInDegrees)
{
try {
 
    cv::cartToPolar(*x->v, *y->v, *magnitude->v, *angle->v, angleInDegrees);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcartToPolarV2(UMat_t* x, UMat_t* y, UMat_t* magnitude, UMat_t* angle, bool angleInDegrees)
{
try {
 
    cv::cartToPolar(*x->v, *y->v, *magnitude->v, *angle->v, angleInDegrees);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvcheckChessboard(Mat_t* img, Size_t* size)
{
    bool retval;
try {
 
    retval = cv::checkChessboard(*img->v, *size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvcheckChessboardV2(UMat_t* img, Size_t* size)
{
    bool retval;
try {
 
    retval = cv::checkChessboard(*img->v, *size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvcheckHardwareSupport(int feature)
{
    bool retval;
try {
 
    retval = cv::checkHardwareSupport(feature);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvcheckRange(Mat_t* a, bool quiet, Point_t* _pos, double minVal, double maxVal)
{
    bool retval;
try {
 
    Point* x3; if (_pos == 0) { Point_t a3; x3 = 0; a3.v = x3; _pos = &a3; };     
    retval = cv::checkRange(*a->v, quiet, _pos->v, minVal, maxVal);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvcheckRangeV2(UMat_t* a, bool quiet, Point_t* _pos, double minVal, double maxVal)
{
    bool retval;
try {
 
    Point* x3; if (_pos == 0) { Point_t a3; x3 = 0; a3.v = x3; _pos = &a3; };     
    retval = cv::checkRange(*a->v, quiet, _pos->v, minVal, maxVal);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcircle(Mat_t* img, Point_t* center, int radius, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::circle(*img->v, *center->v, radius, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcircleV2(UMat_t* img, Point_t* center, int radius, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::circle(*img->v, *center->v, radius, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvclipLine(Rect_t* imgRect, Point_t* pt1, Point_t* pt2)
{
    bool retval;
try {
 
    retval = cv::clipLine(*imgRect->v, *pt1->v, *pt2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcolorChange(Mat_t* src, Mat_t* mask, Mat_t* dst, float red_mul, float green_mul, 
                                   float blue_mul)
{
try {
 
    cv::colorChange(*src->v, *mask->v, *dst->v, red_mul, green_mul, blue_mul);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcolorChangeV2(UMat_t* src, UMat_t* mask, UMat_t* dst, float red_mul, float green_mul, 
                                   float blue_mul)
{
try {
 
    cv::colorChange(*src->v, *mask->v, *dst->v, red_mul, green_mul, blue_mul);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcompare(Mat_t* src1, Mat_t* src2, Mat_t* dst, int cmpop)
{
try {
 
    cv::compare(*src1->v, *src2->v, *dst->v, cmpop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcompareV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, int cmpop)
{
try {
 
    cv::compare(*src1->v, *src2->v, *dst->v, cmpop);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvcompareHist(Mat_t* H1, Mat_t* H2, int method)
{
    double retval = 0;
try {
 
    retval = cv::compareHist(*H1->v, *H2->v, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcompareHistV2(UMat_t* H1, UMat_t* H2, int method)
{
    double retval = 0;
try {
 
    retval = cv::compareHist(*H1->v, *H2->v, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcompleteSymm(Mat_t* m, bool lowerToUpper)
{
try {
 
    cv::completeSymm(*m->v, lowerToUpper);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcompleteSymmV2(UMat_t* m, bool lowerToUpper)
{
try {
 
    cv::completeSymm(*m->v, lowerToUpper);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcomposeRT(Mat_t* rvec1, Mat_t* tvec1, Mat_t* rvec2, Mat_t* tvec2, Mat_t* rvec3, 
                                   Mat_t* tvec3, Mat_t* dr3dr1, Mat_t* dr3dt1, Mat_t* dr3dr2, Mat_t* dr3dt2, Mat_t* dt3dr1, 
                                   Mat_t* dt3dt1, Mat_t* dt3dr2, Mat_t* dt3dt2)
{
try {
 
    cv::composeRT(*rvec1->v, *tvec1->v, *rvec2->v, *tvec2->v, *rvec3->v, *tvec3->v, outarrDefault(dr3dr1), outarrDefault(dr3dt1), outarrDefault(dr3dr2), outarrDefault(dr3dt2), outarrDefault(dt3dr1), outarrDefault(dt3dt1), outarrDefault(dt3dr2), outarrDefault(dt3dt2));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcomposeRTV2(UMat_t* rvec1, UMat_t* tvec1, UMat_t* rvec2, UMat_t* tvec2, UMat_t* rvec3, 
                                   UMat_t* tvec3, UMat_t* dr3dr1, UMat_t* dr3dt1, UMat_t* dr3dr2, UMat_t* dr3dt2, 
                                   UMat_t* dt3dr1, UMat_t* dt3dt1, UMat_t* dt3dr2, UMat_t* dt3dt2)
{
try {
 
    cv::composeRT(*rvec1->v, *tvec1->v, *rvec2->v, *tvec2->v, *rvec3->v, *tvec3->v, outarrDefault(dr3dr1), outarrDefault(dr3dt1), outarrDefault(dr3dr2), outarrDefault(dr3dt2), outarrDefault(dt3dr1), outarrDefault(dt3dt1), outarrDefault(dt3dr2), outarrDefault(dt3dt2));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcomputeCorrespondEpilines(Mat_t* points, int whichImage, Mat_t* F, Mat_t* lines)
{
try {
 
    cv::computeCorrespondEpilines(*points->v, whichImage, *F->v, *lines->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcomputeCorrespondEpilinesV2(UMat_t* points, int whichImage, UMat_t* F, UMat_t* lines)
{
try {
 
    cv::computeCorrespondEpilines(*points->v, whichImage, *F->v, *lines->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvcomputeECC(Mat_t* templateImage, Mat_t* inputImage, Mat_t* inputMask)
{
    double retval = 0;
try {
 
    retval = cv::computeECC(*templateImage->v, *inputImage->v, inparrDefault(inputMask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcomputeECCV2(UMat_t* templateImage, UMat_t* inputImage, UMat_t* inputMask)
{
    double retval = 0;
try {
 
    retval = cv::computeECC(*templateImage->v, *inputImage->v, inparrDefault(inputMask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponents(Mat_t* image, Mat_t* labels, int connectivity, int ltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponents(*image->v, *labels->v, connectivity, ltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsV2(UMat_t* image, UMat_t* labels, int connectivity, int ltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponents(*image->v, *labels->v, connectivity, ltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsWithAlgorithm(Mat_t* image, Mat_t* labels, int connectivity, int ltype, 
                                   int ccltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponents(*image->v, *labels->v, connectivity, ltype, ccltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsWithAlgorithmV2(UMat_t* image, UMat_t* labels, int connectivity, 
                                   int ltype, int ccltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponents(*image->v, *labels->v, connectivity, ltype, ccltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsWithStats(Mat_t* image, Mat_t* labels, Mat_t* stats, Mat_t* centroids, 
                                   int connectivity, int ltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponentsWithStats(*image->v, *labels->v, *stats->v, *centroids->v, connectivity, ltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsWithStatsV2(UMat_t* image, UMat_t* labels, UMat_t* stats, 
                                   UMat_t* centroids, int connectivity, int ltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponentsWithStats(*image->v, *labels->v, *stats->v, *centroids->v, connectivity, ltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsWithStatsWithAlgorithm(Mat_t* image, Mat_t* labels, Mat_t* stats, 
                                   Mat_t* centroids, int connectivity, int ltype, int ccltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponentsWithStats(*image->v, *labels->v, *stats->v, *centroids->v, connectivity, ltype, ccltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvconnectedComponentsWithStatsWithAlgorithmV2(UMat_t* image, UMat_t* labels, UMat_t* stats, 
                                   UMat_t* centroids, int connectivity, int ltype, int ccltype)
{
    int retval = 0;
try {
 
    retval = cv::connectedComponentsWithStats(*image->v, *labels->v, *stats->v, *centroids->v, connectivity, ltype, ccltype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcontourArea(Mat_t* contour, bool oriented)
{
    double retval = 0;
try {
 
    retval = cv::contourArea(*contour->v, oriented);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvcontourAreaV2(UMat_t* contour, bool oriented)
{
    double retval = 0;
try {
 
    retval = cv::contourArea(*contour->v, oriented);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvconvertFp16(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::convertFp16(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertFp16V2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::convertFp16(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertMaps(Mat_t* map1, Mat_t* map2, Mat_t* dstmap1, Mat_t* dstmap2, int dstmap1type, 
                                   bool nninterpolation)
{
try {
 
    cv::convertMaps(*map1->v, *map2->v, *dstmap1->v, *dstmap2->v, dstmap1type, nninterpolation);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertMapsV2(UMat_t* map1, UMat_t* map2, UMat_t* dstmap1, UMat_t* dstmap2, 
                                   int dstmap1type, bool nninterpolation)
{
try {
 
    cv::convertMaps(*map1->v, *map2->v, *dstmap1->v, *dstmap2->v, dstmap1type, nninterpolation);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertPointsFromHomogeneous(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::convertPointsFromHomogeneous(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertPointsFromHomogeneousV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::convertPointsFromHomogeneous(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertPointsToHomogeneous(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::convertPointsToHomogeneous(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertPointsToHomogeneousV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::convertPointsToHomogeneous(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertScaleAbs(Mat_t* src, Mat_t* dst, double alpha, double beta)
{
try {
 
    cv::convertScaleAbs(*src->v, *dst->v, alpha, beta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvertScaleAbsV2(UMat_t* src, UMat_t* dst, double alpha, double beta)
{
try {
 
    cv::convertScaleAbs(*src->v, *dst->v, alpha, beta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvexHull(Mat_t* points, Mat_t* hull, bool clockwise, bool returnPoints)
{
try {
 
    cv::convexHull(*points->v, *hull->v, clockwise, returnPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvexHullV2(UMat_t* points, UMat_t* hull, bool clockwise, bool returnPoints)
{
try {
 
    cv::convexHull(*points->v, *hull->v, clockwise, returnPoints);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvexityDefects(Mat_t* contour, Mat_t* convexhull, Mat_t* convexityDefects)
{
try {
 
    cv::convexityDefects(*contour->v, *convexhull->v, *convexityDefects->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvconvexityDefectsV2(UMat_t* contour, UMat_t* convexhull, UMat_t* convexityDefects)
{
try {
 
    cv::convexityDefects(*contour->v, *convexhull->v, *convexityDefects->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcopyMakeBorder(Mat_t* src, Mat_t* dst, int top, int bottom, int left, int right, 
                                   int borderType, Scalar_t* value)
{
try {
 
    Scalar x8; if (value == 0) { Scalar_t a8; x8 = Scalar(); a8.v = &x8; value = &a8; };     
    cv::copyMakeBorder(*src->v, *dst->v, top, bottom, left, right, borderType, *value->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcopyMakeBorderV2(UMat_t* src, UMat_t* dst, int top, int bottom, int left, int right, 
                                   int borderType, Scalar_t* value)
{
try {
 
    Scalar x8; if (value == 0) { Scalar_t a8; x8 = Scalar(); a8.v = &x8; value = &a8; };     
    cv::copyMakeBorder(*src->v, *dst->v, top, bottom, left, right, borderType, *value->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcopyTo(Mat_t* src, Mat_t* dst, Mat_t* mask)
{
try {
 
    cv::copyTo(*src->v, *dst->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcopyToV2(UMat_t* src, UMat_t* dst, UMat_t* mask)
{
try {
 
    cv::copyTo(*src->v, *dst->v, *mask->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerEigenValsAndVecs(Mat_t* src, Mat_t* dst, int blockSize, int ksize, int borderType)
{
try {
 
    cv::cornerEigenValsAndVecs(*src->v, *dst->v, blockSize, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerEigenValsAndVecsV2(UMat_t* src, UMat_t* dst, int blockSize, int ksize, 
                                   int borderType)
{
try {
 
    cv::cornerEigenValsAndVecs(*src->v, *dst->v, blockSize, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerHarris(Mat_t* src, Mat_t* dst, int blockSize, int ksize, double k, int borderType)
{
try {
 
    cv::cornerHarris(*src->v, *dst->v, blockSize, ksize, k, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerHarrisV2(UMat_t* src, UMat_t* dst, int blockSize, int ksize, double k, 
                                   int borderType)
{
try {
 
    cv::cornerHarris(*src->v, *dst->v, blockSize, ksize, k, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerMinEigenVal(Mat_t* src, Mat_t* dst, int blockSize, int ksize, int borderType)
{
try {
 
    cv::cornerMinEigenVal(*src->v, *dst->v, blockSize, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerMinEigenValV2(UMat_t* src, UMat_t* dst, int blockSize, int ksize, int borderType)
{
try {
 
    cv::cornerMinEigenVal(*src->v, *dst->v, blockSize, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerSubPix(Mat_t* image, Mat_t* corners, Size_t* winSize, Size_t* zeroZone, 
                                   TermCriteria_t* criteria)
{
try {
 
    cv::cornerSubPix(*image->v, *corners->v, *winSize->v, *zeroZone->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcornerSubPixV2(UMat_t* image, UMat_t* corners, Size_t* winSize, Size_t* zeroZone, 
                                   TermCriteria_t* criteria)
{
try {
 
    cv::cornerSubPix(*image->v, *corners->v, *winSize->v, *zeroZone->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcorrectMatches(Mat_t* F, Mat_t* points1, Mat_t* points2, Mat_t* newPoints1, 
                                   Mat_t* newPoints2)
{
try {
 
    cv::correctMatches(*F->v, *points1->v, *points2->v, *newPoints1->v, *newPoints2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcorrectMatchesV2(UMat_t* F, UMat_t* points1, UMat_t* points2, UMat_t* newPoints1, 
                                   UMat_t* newPoints2)
{
try {
 
    cv::correctMatches(*F->v, *points1->v, *points2->v, *newPoints1->v, *newPoints2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvcountNonZero(Mat_t* src)
{
    int retval = 0;
try {
 
    retval = cv::countNonZero(*src->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvcountNonZeroV2(UMat_t* src)
{
    int retval = 0;
try {
 
    retval = cv::countNonZero(*src->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_AlignMTB*)   pCvcreateAlignMTB(int max_bits, int exclude_range, bool cut)
{
Ptr_AlignMTB* retval = 0;
try {
 
    Ptr_AlignMTB p = cv::createAlignMTB(max_bits, exclude_range, cut);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_BackgroundSubtractorKNN*)   pCvcreateBackgroundSubtractorKNN(int history, double dist2Threshold, bool detectShadows)
{
Ptr_BackgroundSubtractorKNN* retval = 0;
try {
 
    Ptr_BackgroundSubtractorKNN p = cv::createBackgroundSubtractorKNN(history, dist2Threshold, detectShadows);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_BackgroundSubtractorMOG2*)   pCvcreateBackgroundSubtractorMOG2(int history, double varThreshold, bool detectShadows)
{
Ptr_BackgroundSubtractorMOG2* retval = 0;
try {
 
    Ptr_BackgroundSubtractorMOG2 p = cv::createBackgroundSubtractorMOG2(history, varThreshold, detectShadows);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_CLAHE*)   pCvcreateCLAHE(double clipLimit, Size_t* tileGridSize)
{
Ptr_CLAHE* retval = 0;
try {
 
    Size x2; if (tileGridSize == 0) { Size_t a2; x2 = Size(8, 8); a2.v = &x2; tileGridSize = &a2; };     
    Ptr_CLAHE p = cv::createCLAHE(clipLimit, *tileGridSize->v);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_CalibrateDebevec*)   pCvcreateCalibrateDebevec(int samples, float lambda, bool _random)
{
Ptr_CalibrateDebevec* retval = 0;
try {
 
    Ptr_CalibrateDebevec p = cv::createCalibrateDebevec(samples, lambda, _random);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_CalibrateRobertson*)   pCvcreateCalibrateRobertson(int max_iter, float threshold)
{
Ptr_CalibrateRobertson* retval = 0;
try {
 
    Ptr_CalibrateRobertson p = cv::createCalibrateRobertson(max_iter, threshold);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_GeneralizedHoughBallard*)   pCvcreateGeneralizedHoughBallard()
{
Ptr_GeneralizedHoughBallard* retval = 0;
try {
 
    Ptr_GeneralizedHoughBallard p = cv::createGeneralizedHoughBallard();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_GeneralizedHoughGuil*)   pCvcreateGeneralizedHoughGuil()
{
Ptr_GeneralizedHoughGuil* retval = 0;
try {
 
    Ptr_GeneralizedHoughGuil p = cv::createGeneralizedHoughGuil();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcreateHanningWindow(Mat_t* dst, Size_t* winSize, int _type)
{
try {
 
    cv::createHanningWindow(*dst->v, *winSize->v, _type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcreateHanningWindowV2(UMat_t* dst, Size_t* winSize, int _type)
{
try {
 
    cv::createHanningWindow(*dst->v, *winSize->v, _type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Ptr_LineSegmentDetector*)   pCvcreateLineSegmentDetector(int refine, double scale, double sigma_scale, double quant, 
                                   double ang_th, double log_eps, double density_th, int n_bins)
{
Ptr_LineSegmentDetector* retval = 0;
try {
 
    Ptr_LineSegmentDetector p = cv::createLineSegmentDetector(refine, scale, sigma_scale, quant, ang_th, log_eps, density_th, n_bins);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_MergeDebevec*)   pCvcreateMergeDebevec()
{
Ptr_MergeDebevec* retval = 0;
try {
 
    Ptr_MergeDebevec p = cv::createMergeDebevec();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_MergeMertens*)   pCvcreateMergeMertens(float contrast_weight, float saturation_weight, float exposure_weight)
{
Ptr_MergeMertens* retval = 0;
try {
 
    Ptr_MergeMertens p = cv::createMergeMertens(contrast_weight, saturation_weight, exposure_weight);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_MergeRobertson*)   pCvcreateMergeRobertson()
{
Ptr_MergeRobertson* retval = 0;
try {
 
    Ptr_MergeRobertson p = cv::createMergeRobertson();
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_Tonemap*)   pCvcreateTonemap(float gamma)
{
Ptr_Tonemap* retval = 0;
try {
 
    Ptr_Tonemap p = cv::createTonemap(gamma);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_TonemapDrago*)   pCvcreateTonemapDrago(float gamma, float saturation, float bias)
{
Ptr_TonemapDrago* retval = 0;
try {
 
    Ptr_TonemapDrago p = cv::createTonemapDrago(gamma, saturation, bias);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_TonemapMantiuk*)   pCvcreateTonemapMantiuk(float gamma, float scale, float saturation)
{
Ptr_TonemapMantiuk* retval = 0;
try {
 
    Ptr_TonemapMantiuk p = cv::createTonemapMantiuk(gamma, scale, saturation);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Ptr_TonemapReinhard*)   pCvcreateTonemapReinhard(float gamma, float intensity, float light_adapt, float color_adapt)
{
Ptr_TonemapReinhard* retval = 0;
try {
 
    Ptr_TonemapReinhard p = cv::createTonemapReinhard(gamma, intensity, light_adapt, color_adapt);
    retval = Ptr_cpy(p);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvcubeRoot(float _val)
{
    float retval = 0;
try {
 
    retval = cv::cubeRoot(_val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvcvtColor(Mat_t* src, Mat_t* dst, int code, int dstCn)
{
try {
 
    cv::cvtColor(*src->v, *dst->v, code, dstCn);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcvtColorV2(UMat_t* src, UMat_t* dst, int code, int dstCn)
{
try {
 
    cv::cvtColor(*src->v, *dst->v, code, dstCn);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcvtColorTwoPlane(Mat_t* src1, Mat_t* src2, Mat_t* dst, int code)
{
try {
 
    cv::cvtColorTwoPlane(*src1->v, *src2->v, *dst->v, code);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvcvtColorTwoPlaneV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, int code)
{
try {
 
    cv::cvtColorTwoPlane(*src1->v, *src2->v, *dst->v, code);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdct(Mat_t* src, Mat_t* dst, int flags)
{
try {
 
    cv::dct(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdctV2(UMat_t* src, UMat_t* dst, int flags)
{
try {
 
    cv::dct(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdecolor(Mat_t* src, Mat_t* grayscale, Mat_t* color_boost)
{
try {
 
    cv::decolor(*src->v, *grayscale->v, *color_boost->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdecolorV2(UMat_t* src, UMat_t* grayscale, UMat_t* color_boost)
{
try {
 
    cv::decolor(*src->v, *grayscale->v, *color_boost->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdecomposeEssentialMat(Mat_t* E, Mat_t* R1, Mat_t* R2, Mat_t* t)
{
try {
 
    cv::decomposeEssentialMat(*E->v, *R1->v, *R2->v, *t->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdecomposeEssentialMatV2(UMat_t* E, UMat_t* R1, UMat_t* R2, UMat_t* t)
{
try {
 
    cv::decomposeEssentialMat(*E->v, *R1->v, *R2->v, *t->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvdecomposeHomographyMat(Mat_t* H, Mat_t* K, vector_Mat* rotations, vector_Mat* translations, 
                                   vector_Mat* normals)
{
    int retval = 0;
try {
 
    retval = cv::decomposeHomographyMat(*H->v, *K->v, *rotations, *translations, *normals);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvdecomposeHomographyMatV2(UMat_t* H, UMat_t* K, vector_UMat* rotations, 
                                   vector_UMat* translations, vector_UMat* normals)
{
    int retval = 0;
try {
 
    retval = cv::decomposeHomographyMat(*H->v, *K->v, *rotations, *translations, *normals);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdecomposeProjectionMatrix(Mat_t* projMatrix, Mat_t* cameraMatrix, Mat_t* rotMatrix, 
                                   Mat_t* transVect, Mat_t* rotMatrixX, Mat_t* rotMatrixY, Mat_t* rotMatrixZ, 
                                   Mat_t* eulerAngles)
{
try {
 
    cv::decomposeProjectionMatrix(*projMatrix->v, *cameraMatrix->v, *rotMatrix->v, *transVect->v, outarrDefault(rotMatrixX), outarrDefault(rotMatrixY), outarrDefault(rotMatrixZ), outarrDefault(eulerAngles));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdecomposeProjectionMatrixV2(UMat_t* projMatrix, UMat_t* cameraMatrix, UMat_t* rotMatrix, 
                                   UMat_t* transVect, UMat_t* rotMatrixX, UMat_t* rotMatrixY, UMat_t* rotMatrixZ, 
                                   UMat_t* eulerAngles)
{
try {
 
    cv::decomposeProjectionMatrix(*projMatrix->v, *cameraMatrix->v, *rotMatrix->v, *transVect->v, outarrDefault(rotMatrixX), outarrDefault(rotMatrixY), outarrDefault(rotMatrixZ), outarrDefault(eulerAngles));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdemosaicing(Mat_t* src, Mat_t* dst, int code, int dstCn)
{
try {
 
    cv::demosaicing(*src->v, *dst->v, code, dstCn);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdemosaicingV2(UMat_t* src, UMat_t* dst, int code, int dstCn)
{
try {
 
    cv::demosaicing(*src->v, *dst->v, code, dstCn);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdenoise_TVL1(vector_Mat* observations, Mat_t* _result, double lambda, int niters)
{
try {
 
    cv::denoise_TVL1(*observations, *_result->v, lambda, niters);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdestroyAllWindows()
{
try {
 
    cv::destroyAllWindows();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdestroyWindow(string_t* winname)
{
try {
 
    cv::destroyWindow(string(winname->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetailEnhance(Mat_t* src, Mat_t* dst, float sigma_s, float sigma_r)
{
try {
 
    cv::detailEnhance(*src->v, *dst->v, sigma_s, sigma_r);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetailEnhanceV2(UMat_t* src, UMat_t* dst, float sigma_s, float sigma_r)
{
try {
 
    cv::detailEnhance(*src->v, *dst->v, sigma_s, sigma_r);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_computeImageFeatures(Ptr_Feature2D* featuresFinder, vector_Mat* images, 
                                   vector_ImageFeatures* features, vector_Mat* masks)
{
try {
 
    vector_Mat x4; if (masks == 0) { x4 = vector_Mat(); masks = &x4; };       
    cv::detail::computeImageFeatures(*featuresFinder, *images, *features, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_computeImageFeaturesV2(Ptr_Feature2D* featuresFinder, vector_UMat* images, 
                                   vector_ImageFeatures* features, vector_UMat* masks)
{
try {
 
    vector_UMat x4; if (masks == 0) { x4 = vector_UMat(); masks = &x4; };       
    cv::detail::computeImageFeatures(*featuresFinder, *images, *features, *masks);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_computeImageFeatures2(Ptr_Feature2D* featuresFinder, Mat_t* image, 
                                   detail_ImageFeatures_t* features, Mat_t* mask)
{
try {
 
    cv::detail::computeImageFeatures(*featuresFinder, *image->v, *features->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_computeImageFeatures2V2(Ptr_Feature2D* featuresFinder, UMat_t* image, 
                                   detail_ImageFeatures_t* features, UMat_t* mask)
{
try {
 
    cv::detail::computeImageFeatures(*featuresFinder, *image->v, *features->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_createLaplacePyr(Mat_t* img, int num_levels, vector_UMat* pyr)
{
try {
 
    cv::detail::createLaplacePyr(*img->v, num_levels, *pyr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_createLaplacePyrV2(UMat_t* img, int num_levels, vector_UMat* pyr)
{
try {
 
    cv::detail::createLaplacePyr(*img->v, num_levels, *pyr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_createLaplacePyrGpu(Mat_t* img, int num_levels, vector_UMat* pyr)
{
try {
 
    cv::detail::createLaplacePyrGpu(*img->v, num_levels, *pyr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_createLaplacePyrGpuV2(UMat_t* img, int num_levels, vector_UMat* pyr)
{
try {
 
    cv::detail::createLaplacePyrGpu(*img->v, num_levels, *pyr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_createWeightMap(Mat_t* mask, float sharpness, Mat_t* weight)
{
try {
 
    cv::detail::createWeightMap(*mask->v, sharpness, *weight->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_createWeightMapV2(UMat_t* mask, float sharpness, UMat_t* weight)
{
try {
 
    cv::detail::createWeightMap(*mask->v, sharpness, *weight->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(vector_int*)   pCvdetail_leaveBiggestComponent(vector_ImageFeatures* features, 
                                   vector_MatchesInfo* pairwise_matches, float conf_threshold)
{
vector_int* retval = new vector_int();
try {
 
    vector_int tr = cv::detail::leaveBiggestComponent(*features, *pairwise_matches, conf_threshold);
    vector_int_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvdetail_matchesGraphAsString(vector_String* pathes, vector_MatchesInfo* pairwise_matches, 
                                   float conf_threshold)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::detail::matchesGraphAsString(*pathes, *pairwise_matches, conf_threshold);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdetail_normalizeUsingWeightMap(Mat_t* weight, Mat_t* src)
{
try {
 
    cv::detail::normalizeUsingWeightMap(*weight->v, *src->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_normalizeUsingWeightMapV2(UMat_t* weight, UMat_t* src)
{
try {
 
    cv::detail::normalizeUsingWeightMap(*weight->v, *src->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_restoreImageFromLaplacePyr(vector_UMat* pyr)
{
try {
 
    cv::detail::restoreImageFromLaplacePyr(*pyr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_restoreImageFromLaplacePyrGpu(vector_UMat* pyr)
{
try {
 
    cv::detail::restoreImageFromLaplacePyrGpu(*pyr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdetail_waveCorrect(vector_Mat* rmats, detail::WaveCorrectKind kind)
{
try {
 
    cv::detail::waveCorrect(*rmats, kind);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvdeterminant(Mat_t* mtx)
{
    double retval = 0;
try {
 
    retval = cv::determinant(*mtx->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvdeterminantV2(UMat_t* mtx)
{
    double retval = 0;
try {
 
    retval = cv::determinant(*mtx->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdft(Mat_t* src, Mat_t* dst, int flags, int nonzeroRows)
{
try {
 
    cv::dft(*src->v, *dst->v, flags, nonzeroRows);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdftV2(UMat_t* src, UMat_t* dst, int flags, int nonzeroRows)
{
try {
 
    cv::dft(*src->v, *dst->v, flags, nonzeroRows);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdilate(Mat_t* src, Mat_t* dst, Mat_t* kernel, Point_t* anchor, int iterations, 
                                   int borderType, Scalar_t* borderValue)
{
try {
 
    Point x4; if (anchor == 0) { Point_t a4; x4 = Point(-1,-1); a4.v = &x4; anchor = &a4; };     
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = morphologyDefaultBorderValue(); a7.v = &x7; borderValue = &a7; };     
    cv::dilate(*src->v, *dst->v, *kernel->v, *anchor->v, iterations, borderType, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdilateV2(UMat_t* src, UMat_t* dst, UMat_t* kernel, Point_t* anchor, int iterations, 
                                   int borderType, Scalar_t* borderValue)
{
try {
 
    Point x4; if (anchor == 0) { Point_t a4; x4 = Point(-1,-1); a4.v = &x4; anchor = &a4; };     
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = morphologyDefaultBorderValue(); a7.v = &x7; borderValue = &a7; };     
    cv::dilate(*src->v, *dst->v, *kernel->v, *anchor->v, iterations, borderType, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdisplayOverlay(string_t* winname, string_t* text, int delayms)
{
try {
 
    cv::displayOverlay(string(winname->v), string(text->v), delayms);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdisplayStatusBar(string_t* winname, string_t* text, int delayms)
{
try {
 
    cv::displayStatusBar(string(winname->v), string(text->v), delayms);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdistanceTransform(Mat_t* src, Mat_t* dst, int distanceType, int maskSize, int dstType)
{
try {
 
    cv::distanceTransform(*src->v, *dst->v, distanceType, maskSize, dstType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdistanceTransformV2(UMat_t* src, UMat_t* dst, int distanceType, int maskSize, int dstType)
{
try {
 
    cv::distanceTransform(*src->v, *dst->v, distanceType, maskSize, dstType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdistanceTransformWithLabels(Mat_t* src, Mat_t* dst, Mat_t* labels, int distanceType, 
                                   int maskSize, int labelType)
{
try {
 
    cv::distanceTransform(*src->v, *dst->v, *labels->v, distanceType, maskSize, labelType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdistanceTransformWithLabelsV2(UMat_t* src, UMat_t* dst, UMat_t* labels, int distanceType, 
                                   int maskSize, int labelType)
{
try {
 
    cv::distanceTransform(*src->v, *dst->v, *labels->v, distanceType, maskSize, labelType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdivSpectrums(Mat_t* a, Mat_t* b, Mat_t* c, int flags, bool conjB)
{
try {
 
    cv::divSpectrums(*a->v, *b->v, *c->v, flags, conjB);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdivSpectrumsV2(UMat_t* a, UMat_t* b, UMat_t* c, int flags, bool conjB)
{
try {
 
    cv::divSpectrums(*a->v, *b->v, *c->v, flags, conjB);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdivide(Mat_t* src1, Mat_t* src2, Mat_t* dst, double scale, int dtype)
{
try {
 
    cv::divide(*src1->v, *src2->v, *dst->v, scale, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdivideV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, double scale, int dtype)
{
try {
 
    cv::divide(*src1->v, *src2->v, *dst->v, scale, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdivideV3(double scale, Mat_t* src2, Mat_t* dst, int dtype)
{
try {
 
    cv::divide(scale, *src2->v, *dst->v, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdivideV4(double scale, UMat_t* src2, UMat_t* dst, int dtype)
{
try {
 
    cv::divide(scale, *src2->v, *dst->v, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NMSBoxes(vector_Rect2d* bboxes, vector_float* scores, float score_threshold, 
                                   float nms_threshold, vector_int* indices, float eta, int top_k)
{
try {
 
    cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices, eta, top_k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_NMSBoxesRotated(vector_RotatedRect* bboxes, vector_float* scores, 
                                   float score_threshold, float nms_threshold, vector_int* indices, float eta, int top_k)
{
try {
 
    cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices, eta, top_k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvdnn_blobFromImage(Mat_t* image, double scalefactor, Size_t* size, Scalar_t* mean, 
                                   bool swapRB, bool crop, int ddepth)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x3; if (size == 0) { Size_t a3; x3 = Size(); a3.v = &x3; size = &a3; };     
    Scalar x4; if (mean == 0) { Scalar_t a4; x4 = Scalar(); a4.v = &x4; mean = &a4; };     
    Mat tr = cv::dnn::blobFromImage(*image->v, scalefactor, *size->v, *mean->v, swapRB, crop, ddepth);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdnn_blobFromImageV2(UMat_t* image, double scalefactor, Size_t* size, Scalar_t* mean, 
                                   bool swapRB, bool crop, int ddepth)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x3; if (size == 0) { Size_t a3; x3 = Size(); a3.v = &x3; size = &a3; };     
    Scalar x4; if (mean == 0) { Scalar_t a4; x4 = Scalar(); a4.v = &x4; mean = &a4; };     
    Mat tr = cv::dnn::blobFromImage(*image->v, scalefactor, *size->v, *mean->v, swapRB, crop, ddepth);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdnn_blobFromImages(vector_Mat* images, double scalefactor, Size_t* size, Scalar_t* mean, 
                                   bool swapRB, bool crop, int ddepth)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x3; if (size == 0) { Size_t a3; x3 = Size(); a3.v = &x3; size = &a3; };     
    Scalar x4; if (mean == 0) { Scalar_t a4; x4 = Scalar(); a4.v = &x4; mean = &a4; };     
    Mat tr = cv::dnn::blobFromImages(*images, scalefactor, *size->v, *mean->v, swapRB, crop, ddepth);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdnn_blobFromImagesV2(vector_UMat* images, double scalefactor, Size_t* size, Scalar_t* mean, 
                                   bool swapRB, bool crop, int ddepth)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x3; if (size == 0) { Size_t a3; x3 = Size(); a3.v = &x3; size = &a3; };     
    Scalar x4; if (mean == 0) { Scalar_t a4; x4 = Scalar(); a4.v = &x4; mean = &a4; };     
    Mat tr = cv::dnn::blobFromImages(*images, scalefactor, *size->v, *mean->v, swapRB, crop, ddepth);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_Target*)   pCvdnn_getAvailableTargets(dnn::Backend be)
{
vector_Target* retval = new vector_Target();
try {
 
    vector_Target tr = cv::dnn::getAvailableTargets(be);
    vector_Target_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_imagesFromBlob(Mat_t* blob_, vector_Mat* images_)
{
try {
 
    cv::dnn::imagesFromBlob(*blob_->v, *images_);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_imagesFromBlobV2(Mat_t* blob_, vector_UMat* images_)
{
try {
 
    cv::dnn::imagesFromBlob(*blob_->v, *images_);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(dnn_Net_t*)   pCvdnn_readNet(string_t* model, string_t* config, string_t* framework)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
    if (framework == 0) { string_t a3; a3.v = pEmptyString; framework = &a3; };      
    dnn::Net tr = cv::dnn::readNet(string(model->v), string(config->v), string(framework->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetV2(string_t* framework, vector_uchar* bufferModel, vector_uchar* bufferConfig)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    vector_uchar x3; if (bufferConfig == 0) { x3 = std::vector<uchar>(); bufferConfig = &x3; };       
    dnn::Net tr = cv::dnn::readNet(string(framework->v), *bufferModel, *bufferConfig);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromCaffe(string_t* prototxt, string_t* caffeModel)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    if (caffeModel == 0) { string_t a2; a2.v = pEmptyString; caffeModel = &a2; };      
    dnn::Net tr = cv::dnn::readNetFromCaffe(string(prototxt->v), string(caffeModel->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromCaffeV2(vector_uchar* bufferProto, vector_uchar* bufferModel)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    vector_uchar x2; if (bufferModel == 0) { x2 = std::vector<uchar>(); bufferModel = &x2; };       
    dnn::Net tr = cv::dnn::readNetFromCaffe(*bufferProto, *bufferModel);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromDarknet(string_t* cfgFile, string_t* darknetModel)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    if (darknetModel == 0) { string_t a2; a2.v = pEmptyString; darknetModel = &a2; };      
    dnn::Net tr = cv::dnn::readNetFromDarknet(string(cfgFile->v), string(darknetModel->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromDarknetV2(vector_uchar* bufferCfg, vector_uchar* bufferModel)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    vector_uchar x2; if (bufferModel == 0) { x2 = std::vector<uchar>(); bufferModel = &x2; };       
    dnn::Net tr = cv::dnn::readNetFromDarknet(*bufferCfg, *bufferModel);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromModelOptimizer(string_t* xml, string_t* bin)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::readNetFromModelOptimizer(string(xml->v), string(bin->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromModelOptimizerV2(vector_uchar* bufferModelConfig, 
                                   vector_uchar* bufferWeights)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::readNetFromModelOptimizer(*bufferModelConfig, *bufferWeights);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromONNX(string_t* onnxFile)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::readNetFromONNX(string(onnxFile->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromONNXV2(vector_uchar* buffer)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::readNetFromONNX(*buffer);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromTensorflow(string_t* model, string_t* config)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    if (config == 0) { string_t a2; a2.v = pEmptyString; config = &a2; };      
    dnn::Net tr = cv::dnn::readNetFromTensorflow(string(model->v), string(config->v));
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromTensorflowV2(vector_uchar* bufferModel, vector_uchar* bufferConfig)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    vector_uchar x2; if (bufferConfig == 0) { x2 = std::vector<uchar>(); bufferConfig = &x2; };       
    dnn::Net tr = cv::dnn::readNetFromTensorflow(*bufferModel, *bufferConfig);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(dnn_Net_t*)   pCvdnn_readNetFromTorch(string_t* model, bool isBinary, bool evaluate)
{
    dnn_Net_t*  retval = new dnn_Net_t;
try { 
    dnn::Net tr = cv::dnn::readNetFromTorch(string(model->v), isBinary, evaluate);
    dnn::Net*  t = new dnn::Net();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdnn_readTensorFromONNX(string_t* path)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::dnn::readTensorFromONNX(string(path->v));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvdnn_readTorchBlob(string_t* filename, bool isBinary)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::dnn::readTorchBlob(string(filename->v), isBinary);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvdnn_shrinkCaffeModel(string_t* src, string_t* dst, vector_String* layersTypes)
{
try {
 
    vector_String x3; if (layersTypes == 0) { x3 = std::vector<String>(); layersTypes = &x3; };       
    cv::dnn::shrinkCaffeModel(string(src->v), string(dst->v), *layersTypes);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_softNMSBoxes(vector_Rect* bboxes, vector_float* scores, vector_float* updated_scores, 
                                   float score_threshold, float nms_threshold, vector_int* indices, size_t top_k, float sigma, 
                                   dnn::SoftNMSMethod method)
{
try {
 
    cv::dnn::softNMSBoxes(*bboxes, *scores, *updated_scores, score_threshold, nms_threshold, *indices, top_k, sigma, method);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdnn_writeTextGraph(string_t* model, string_t* output)
{
try {
 
    cv::dnn::writeTextGraph(string(model->v), string(output->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawChessboardCorners(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   bool patternWasFound)
{
try {
 
    cv::drawChessboardCorners(*image->v, *patternSize->v, *corners->v, patternWasFound);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawChessboardCornersV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   bool patternWasFound)
{
try {
 
    cv::drawChessboardCorners(*image->v, *patternSize->v, *corners->v, patternWasFound);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawContours(Mat_t* image, vector_Mat* contours, int contourIdx, Scalar_t* color, 
                                   int thickness, int lineType, Mat_t* hierarchy, int maxLevel, Point_t* offset)
{
try {
 
    Point x9; if (offset == 0) { Point_t a9; x9 = Point(); a9.v = &x9; offset = &a9; };     
    cv::drawContours(*image->v, *contours, contourIdx, *color->v, thickness, lineType, inparrDefault(hierarchy), maxLevel, *offset->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawContoursV2(UMat_t* image, vector_UMat* contours, int contourIdx, Scalar_t* color, 
                                   int thickness, int lineType, UMat_t* hierarchy, int maxLevel, Point_t* offset)
{
try {
 
    Point x9; if (offset == 0) { Point_t a9; x9 = Point(); a9.v = &x9; offset = &a9; };     
    cv::drawContours(*image->v, *contours, contourIdx, *color->v, thickness, lineType, inparrDefault(hierarchy), maxLevel, *offset->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawFrameAxes(Mat_t* image, Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* rvec, 
                                   Mat_t* tvec, float length, int thickness)
{
try {
 
    cv::drawFrameAxes(*image->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, length, thickness);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawFrameAxesV2(UMat_t* image, UMat_t* cameraMatrix, UMat_t* distCoeffs, UMat_t* rvec, 
                                   UMat_t* tvec, float length, int thickness)
{
try {
 
    cv::drawFrameAxes(*image->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, length, thickness);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawKeypoints(Mat_t* image, vector_KeyPoint* keypoints, Mat_t* outImage, Scalar_t* color, 
                                   DrawMatchesFlags flags)
{
try {
 
    Scalar x4; if (color == 0) { Scalar_t a4; x4 = Scalar::all(-1); a4.v = &x4; color = &a4; };     
    cv::drawKeypoints(*image->v, *keypoints, *outImage->v, *color->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawKeypointsV2(UMat_t* image, vector_KeyPoint* keypoints, UMat_t* outImage, 
                                   Scalar_t* color, DrawMatchesFlags flags)
{
try {
 
    Scalar x4; if (color == 0) { Scalar_t a4; x4 = Scalar::all(-1); a4.v = &x4; color = &a4; };     
    cv::drawKeypoints(*image->v, *keypoints, *outImage->v, *color->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMarker(Mat_t* img, Point_t* position, Scalar_t* color, int markerType, int markerSize, 
                                   int thickness, int line_type)
{
try {
 
    cv::drawMarker(*img->v, *position->v, *color->v, markerType, markerSize, thickness, line_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMarkerV2(UMat_t* img, Point_t* position, Scalar_t* color, int markerType, 
                                   int markerSize, int thickness, int line_type)
{
try {
 
    cv::drawMarker(*img->v, *position->v, *color->v, markerType, markerSize, thickness, line_type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMatches(Mat_t* img1, vector_KeyPoint* keypoints1, Mat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, Mat_t* outImg, Scalar_t* matchColor, 
                                   Scalar_t* singlePointColor, vector_char* matchesMask, DrawMatchesFlags flags)
{
try {
 
    Scalar x7; if (matchColor == 0) { Scalar_t a7; x7 = Scalar::all(-1); a7.v = &x7; matchColor = &a7; };     
    Scalar x8; if (singlePointColor == 0) { Scalar_t a8; x8 = Scalar::all(-1); a8.v = &x8; singlePointColor = &a8; };     
    vector_char x9; if (matchesMask == 0) { x9 = std::vector<char>(); matchesMask = &x9; };       
    cv::drawMatches(*img1->v, *keypoints1, *img2->v, *keypoints2, *matches1to2, *outImg->v, *matchColor->v, *singlePointColor->v, *matchesMask, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMatchesV2(UMat_t* img1, vector_KeyPoint* keypoints1, UMat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, UMat_t* outImg, Scalar_t* matchColor, 
                                   Scalar_t* singlePointColor, vector_char* matchesMask, DrawMatchesFlags flags)
{
try {
 
    Scalar x7; if (matchColor == 0) { Scalar_t a7; x7 = Scalar::all(-1); a7.v = &x7; matchColor = &a7; };     
    Scalar x8; if (singlePointColor == 0) { Scalar_t a8; x8 = Scalar::all(-1); a8.v = &x8; singlePointColor = &a8; };     
    vector_char x9; if (matchesMask == 0) { x9 = std::vector<char>(); matchesMask = &x9; };       
    cv::drawMatches(*img1->v, *keypoints1, *img2->v, *keypoints2, *matches1to2, *outImg->v, *matchColor->v, *singlePointColor->v, *matchesMask, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMatchesV3(Mat_t* img1, vector_KeyPoint* keypoints1, Mat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, Mat_t* outImg, int matchesThickness, 
                                   Scalar_t* matchColor, Scalar_t* singlePointColor, vector_char* matchesMask, 
                                   DrawMatchesFlags flags)
{
try {
 
    Scalar x8; if (matchColor == 0) { Scalar_t a8; x8 = Scalar::all(-1); a8.v = &x8; matchColor = &a8; };     
    Scalar x9; if (singlePointColor == 0) { Scalar_t a9; x9 = Scalar::all(-1); a9.v = &x9; singlePointColor = &a9; };     
    vector_char x10; if (matchesMask == 0) { x10 = std::vector<char>(); matchesMask = &x10; };       
    cv::drawMatches(*img1->v, *keypoints1, *img2->v, *keypoints2, *matches1to2, *outImg->v, matchesThickness, *matchColor->v, *singlePointColor->v, *matchesMask, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMatchesV4(UMat_t* img1, vector_KeyPoint* keypoints1, UMat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_DMatch* matches1to2, UMat_t* outImg, int matchesThickness, 
                                   Scalar_t* matchColor, Scalar_t* singlePointColor, vector_char* matchesMask, 
                                   DrawMatchesFlags flags)
{
try {
 
    Scalar x8; if (matchColor == 0) { Scalar_t a8; x8 = Scalar::all(-1); a8.v = &x8; matchColor = &a8; };     
    Scalar x9; if (singlePointColor == 0) { Scalar_t a9; x9 = Scalar::all(-1); a9.v = &x9; singlePointColor = &a9; };     
    vector_char x10; if (matchesMask == 0) { x10 = std::vector<char>(); matchesMask = &x10; };       
    cv::drawMatches(*img1->v, *keypoints1, *img2->v, *keypoints2, *matches1to2, *outImg->v, matchesThickness, *matchColor->v, *singlePointColor->v, *matchesMask, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMatchesKnn(Mat_t* img1, vector_KeyPoint* keypoints1, Mat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_vector_DMatch* matches1to2, Mat_t* outImg, Scalar_t* matchColor, 
                                   Scalar_t* singlePointColor, vector_vector_char* matchesMask, DrawMatchesFlags flags)
{
try {
 
    Scalar x7; if (matchColor == 0) { Scalar_t a7; x7 = Scalar::all(-1); a7.v = &x7; matchColor = &a7; };     
    Scalar x8; if (singlePointColor == 0) { Scalar_t a8; x8 = Scalar::all(-1); a8.v = &x8; singlePointColor = &a8; };     
    vector_vector_char x9; if (matchesMask == 0) { x9 = std::vector<std::vector<char> >(); matchesMask = &x9; };       
    cv::drawMatches(*img1->v, *keypoints1, *img2->v, *keypoints2, *matches1to2, *outImg->v, *matchColor->v, *singlePointColor->v, *matchesMask, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvdrawMatchesKnnV2(UMat_t* img1, vector_KeyPoint* keypoints1, UMat_t* img2, 
                                   vector_KeyPoint* keypoints2, vector_vector_DMatch* matches1to2, UMat_t* outImg, Scalar_t* matchColor, 
                                   Scalar_t* singlePointColor, vector_vector_char* matchesMask, DrawMatchesFlags flags)
{
try {
 
    Scalar x7; if (matchColor == 0) { Scalar_t a7; x7 = Scalar::all(-1); a7.v = &x7; matchColor = &a7; };     
    Scalar x8; if (singlePointColor == 0) { Scalar_t a8; x8 = Scalar::all(-1); a8.v = &x8; singlePointColor = &a8; };     
    vector_vector_char x9; if (matchesMask == 0) { x9 = std::vector<std::vector<char> >(); matchesMask = &x9; };       
    cv::drawMatches(*img1->v, *keypoints1, *img2->v, *keypoints2, *matches1to2, *outImg->v, *matchColor->v, *singlePointColor->v, *matchesMask, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvedgePreservingFilter(Mat_t* src, Mat_t* dst, int flags, float sigma_s, float sigma_r)
{
try {
 
    cv::edgePreservingFilter(*src->v, *dst->v, flags, sigma_s, sigma_r);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvedgePreservingFilterV2(UMat_t* src, UMat_t* dst, int flags, float sigma_s, float sigma_r)
{
try {
 
    cv::edgePreservingFilter(*src->v, *dst->v, flags, sigma_s, sigma_r);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCveigen(Mat_t* src, Mat_t* eigenvalues, Mat_t* eigenvectors)
{
    bool retval;
try {
 
    retval = cv::eigen(*src->v, *eigenvalues->v, outarrDefault(eigenvectors));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCveigenV2(UMat_t* src, UMat_t* eigenvalues, UMat_t* eigenvectors)
{
    bool retval;
try {
 
    retval = cv::eigen(*src->v, *eigenvalues->v, outarrDefault(eigenvectors));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCveigenNonSymmetric(Mat_t* src, Mat_t* eigenvalues, Mat_t* eigenvectors)
{
try {
 
    cv::eigenNonSymmetric(*src->v, *eigenvalues->v, *eigenvectors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCveigenNonSymmetricV2(UMat_t* src, UMat_t* eigenvalues, UMat_t* eigenvectors)
{
try {
 
    cv::eigenNonSymmetric(*src->v, *eigenvalues->v, *eigenvectors->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvellipse(Mat_t* img, Point_t* center, Size_t* axes, double angle, double startAngle, 
                                   double endAngle, Scalar_t* color, int thickness, int lineType, int shift)
{
try {
 
    cv::ellipse(*img->v, *center->v, *axes->v, angle, startAngle, endAngle, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvellipseV2(UMat_t* img, Point_t* center, Size_t* axes, double angle, double startAngle, 
                                   double endAngle, Scalar_t* color, int thickness, int lineType, int shift)
{
try {
 
    cv::ellipse(*img->v, *center->v, *axes->v, angle, startAngle, endAngle, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvellipseV3(Mat_t* img, RotatedRect_t* box, Scalar_t* color, int thickness, int lineType)
{
try {
 
    cv::ellipse(*img->v, *box->v, *color->v, thickness, lineType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvellipseV4(UMat_t* img, RotatedRect_t* box, Scalar_t* color, int thickness, int lineType)
{
try {
 
    cv::ellipse(*img->v, *box->v, *color->v, thickness, lineType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvellipse2Poly(Point_t* center, Size_t* axes, int angle, int arcStart, int arcEnd, int delta, 
                                   vector_Point* pts)
{
try {
 
    cv::ellipse2Poly(*center->v, *axes->v, angle, arcStart, arcEnd, delta, *pts);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvequalizeHist(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::equalizeHist(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvequalizeHistV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::equalizeHist(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCverode(Mat_t* src, Mat_t* dst, Mat_t* kernel, Point_t* anchor, int iterations, 
                                   int borderType, Scalar_t* borderValue)
{
try {
 
    Point x4; if (anchor == 0) { Point_t a4; x4 = Point(-1,-1); a4.v = &x4; anchor = &a4; };     
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = morphologyDefaultBorderValue(); a7.v = &x7; borderValue = &a7; };     
    cv::erode(*src->v, *dst->v, *kernel->v, *anchor->v, iterations, borderType, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCverodeV2(UMat_t* src, UMat_t* dst, UMat_t* kernel, Point_t* anchor, int iterations, 
                                   int borderType, Scalar_t* borderValue)
{
try {
 
    Point x4; if (anchor == 0) { Point_t a4; x4 = Point(-1,-1); a4.v = &x4; anchor = &a4; };     
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = morphologyDefaultBorderValue(); a7.v = &x7; borderValue = &a7; };     
    cv::erode(*src->v, *dst->v, *kernel->v, *anchor->v, iterations, borderType, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvestimateAffine2D(Mat_t* from, Mat_t* _to, Mat_t* inliers, int method, 
                                   double ransacReprojThreshold, size_t maxIters, double confidence, size_t refineIters)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffine2D(*from->v, *_to->v, outarrDefault(inliers), method, ransacReprojThreshold, maxIters, confidence, refineIters);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffine2DV2(UMat_t* from, UMat_t* _to, UMat_t* inliers, int method, 
                                   double ransacReprojThreshold, size_t maxIters, double confidence, size_t refineIters)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffine2D(*from->v, *_to->v, outarrDefault(inliers), method, ransacReprojThreshold, maxIters, confidence, refineIters);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffine2DV3(Mat_t* pts1, Mat_t* pts2, Mat_t* inliers, UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffine2D(*pts1->v, *pts2->v, *inliers->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffine2DV4(UMat_t* pts1, UMat_t* pts2, UMat_t* inliers, UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffine2D(*pts1->v, *pts2->v, *inliers->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvestimateAffine3D(Mat_t* src, Mat_t* dst, Mat_t* _out, Mat_t* inliers, 
                                   double ransacThreshold, double confidence)
{
    int retval = 0;
try {
 
    retval = cv::estimateAffine3D(*src->v, *dst->v, *_out->v, *inliers->v, ransacThreshold, confidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvestimateAffine3DV2(UMat_t* src, UMat_t* dst, UMat_t* _out, UMat_t* inliers, 
                                   double ransacThreshold, double confidence)
{
    int retval = 0;
try {
 
    retval = cv::estimateAffine3D(*src->v, *dst->v, *_out->v, *inliers->v, ransacThreshold, confidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffine3DV3(Mat_t* src, Mat_t* dst, double* scale, bool force_rotation)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffine3D(*src->v, *dst->v, scale, force_rotation);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffine3DV4(UMat_t* src, UMat_t* dst, double* scale, bool force_rotation)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffine3D(*src->v, *dst->v, scale, force_rotation);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffinePartial2D(Mat_t* from, Mat_t* _to, Mat_t* inliers, int method, 
                                   double ransacReprojThreshold, size_t maxIters, double confidence, size_t refineIters)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffinePartial2D(*from->v, *_to->v, outarrDefault(inliers), method, ransacReprojThreshold, maxIters, confidence, refineIters);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvestimateAffinePartial2DV2(UMat_t* from, UMat_t* _to, UMat_t* inliers, int method, 
                                   double ransacReprojThreshold, size_t maxIters, double confidence, size_t refineIters)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::estimateAffinePartial2D(*from->v, *_to->v, outarrDefault(inliers), method, ransacReprojThreshold, maxIters, confidence, refineIters);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Scalar_t*)   pCvestimateChessboardSharpness(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   float rise_distance, bool vertical, Mat_t* sharpness)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::estimateChessboardSharpness(*image->v, *patternSize->v, *corners->v, rise_distance, vertical, outarrDefault(sharpness));
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Scalar_t*)   pCvestimateChessboardSharpnessV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   float rise_distance, bool vertical, UMat_t* sharpness)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::estimateChessboardSharpness(*image->v, *patternSize->v, *corners->v, rise_distance, vertical, outarrDefault(sharpness));
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvestimateTranslation3D(Mat_t* src, Mat_t* dst, Mat_t* _out, Mat_t* inliers, 
                                   double ransacThreshold, double confidence)
{
    int retval = 0;
try {
 
    retval = cv::estimateTranslation3D(*src->v, *dst->v, *_out->v, *inliers->v, ransacThreshold, confidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvestimateTranslation3DV2(UMat_t* src, UMat_t* dst, UMat_t* _out, UMat_t* inliers, 
                                   double ransacThreshold, double confidence)
{
    int retval = 0;
try {
 
    retval = cv::estimateTranslation3D(*src->v, *dst->v, *_out->v, *inliers->v, ransacThreshold, confidence);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvexp(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::exp(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvexpV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::exp(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvextractChannel(Mat_t* src, Mat_t* dst, int coi)
{
try {
 
    cv::extractChannel(*src->v, *dst->v, coi);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvextractChannelV2(UMat_t* src, UMat_t* dst, int coi)
{
try {
 
    cv::extractChannel(*src->v, *dst->v, coi);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvfastAtan2(float y, float x)
{
    float retval = 0;
try {
 
    retval = cv::fastAtan2(y, x);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvfastNlMeansDenoising(Mat_t* src, Mat_t* dst, float h, int templateWindowSize, 
                                   int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoising(*src->v, *dst->v, h, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingV2(UMat_t* src, UMat_t* dst, float h, int templateWindowSize, 
                                   int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoising(*src->v, *dst->v, h, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingV3(Mat_t* src, Mat_t* dst, vector_float* h, int templateWindowSize, 
                                   int searchWindowSize, int normType)
{
try {
 
    cv::fastNlMeansDenoising(*src->v, *dst->v, *h, templateWindowSize, searchWindowSize, normType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingV4(UMat_t* src, UMat_t* dst, vector_float* h, int templateWindowSize, 
                                   int searchWindowSize, int normType)
{
try {
 
    cv::fastNlMeansDenoising(*src->v, *dst->v, *h, templateWindowSize, searchWindowSize, normType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingColored(Mat_t* src, Mat_t* dst, float h, float hColor, 
                                   int templateWindowSize, int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoisingColored(*src->v, *dst->v, h, hColor, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingColoredV2(UMat_t* src, UMat_t* dst, float h, float hColor, 
                                   int templateWindowSize, int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoisingColored(*src->v, *dst->v, h, hColor, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingColoredMulti(vector_Mat* srcImgs, Mat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, float h, float hColor, int templateWindowSize, 
                                   int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoisingColoredMulti(*srcImgs, *dst->v, imgToDenoiseIndex, temporalWindowSize, h, hColor, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingColoredMultiV2(vector_UMat* srcImgs, UMat_t* dst, 
                                   int imgToDenoiseIndex, int temporalWindowSize, float h, float hColor, 
                                   int templateWindowSize, int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoisingColoredMulti(*srcImgs, *dst->v, imgToDenoiseIndex, temporalWindowSize, h, hColor, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingMulti(vector_Mat* srcImgs, Mat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, float h, int templateWindowSize, int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoisingMulti(*srcImgs, *dst->v, imgToDenoiseIndex, temporalWindowSize, h, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingMultiV2(vector_UMat* srcImgs, UMat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, float h, int templateWindowSize, int searchWindowSize)
{
try {
 
    cv::fastNlMeansDenoisingMulti(*srcImgs, *dst->v, imgToDenoiseIndex, temporalWindowSize, h, templateWindowSize, searchWindowSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingMultiV3(vector_Mat* srcImgs, Mat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, vector_float* h, int templateWindowSize, 
                                   int searchWindowSize, int normType)
{
try {
 
    cv::fastNlMeansDenoisingMulti(*srcImgs, *dst->v, imgToDenoiseIndex, temporalWindowSize, *h, templateWindowSize, searchWindowSize, normType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfastNlMeansDenoisingMultiV4(vector_UMat* srcImgs, UMat_t* dst, int imgToDenoiseIndex, 
                                   int temporalWindowSize, vector_float* h, int templateWindowSize, 
                                   int searchWindowSize, int normType)
{
try {
 
    cv::fastNlMeansDenoisingMulti(*srcImgs, *dst->v, imgToDenoiseIndex, temporalWindowSize, *h, templateWindowSize, searchWindowSize, normType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfillConvexPoly(Mat_t* img, Mat_t* points, Scalar_t* color, int lineType, int shift)
{
try {
 
    cv::fillConvexPoly(*img->v, *points->v, *color->v, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfillConvexPolyV2(UMat_t* img, UMat_t* points, Scalar_t* color, int lineType, int shift)
{
try {
 
    cv::fillConvexPoly(*img->v, *points->v, *color->v, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfillPoly(Mat_t* img, vector_Mat* pts, Scalar_t* color, int lineType, int shift, 
                                   Point_t* offset)
{
try {
 
    Point x6; if (offset == 0) { Point_t a6; x6 = Point(); a6.v = &x6; offset = &a6; };     
    cv::fillPoly(*img->v, *pts, *color->v, lineType, shift, *offset->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfillPolyV2(UMat_t* img, vector_UMat* pts, Scalar_t* color, int lineType, int shift, 
                                   Point_t* offset)
{
try {
 
    Point x6; if (offset == 0) { Point_t a6; x6 = Point(); a6.v = &x6; offset = &a6; };     
    cv::fillPoly(*img->v, *pts, *color->v, lineType, shift, *offset->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfilter2D(Mat_t* src, Mat_t* dst, int ddepth, Mat_t* kernel, Point_t* anchor, double delta, 
                                   int borderType)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1,-1); a5.v = &x5; anchor = &a5; };     
    cv::filter2D(*src->v, *dst->v, ddepth, *kernel->v, *anchor->v, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfilter2DV2(UMat_t* src, UMat_t* dst, int ddepth, UMat_t* kernel, Point_t* anchor, 
                                   double delta, int borderType)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1,-1); a5.v = &x5; anchor = &a5; };     
    cv::filter2D(*src->v, *dst->v, ddepth, *kernel->v, *anchor->v, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfilterHomographyDecompByVisibleRefpoints(vector_Mat* rotations, vector_Mat* normals, 
                                   Mat_t* beforePoints, Mat_t* afterPoints, Mat_t* possibleSolutions, 
                                   Mat_t* pointsMask)
{
try {
 
    cv::filterHomographyDecompByVisibleRefpoints(*rotations, *normals, *beforePoints->v, *afterPoints->v, *possibleSolutions->v, inparrDefault(pointsMask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfilterHomographyDecompByVisibleRefpointsV2(vector_UMat* rotations, vector_UMat* normals, 
                                   UMat_t* beforePoints, UMat_t* afterPoints, 
                                   UMat_t* possibleSolutions, UMat_t* pointsMask)
{
try {
 
    cv::filterHomographyDecompByVisibleRefpoints(*rotations, *normals, *beforePoints->v, *afterPoints->v, *possibleSolutions->v, inparrDefault(pointsMask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfilterSpeckles(Mat_t* img, double newVal, int maxSpeckleSize, double maxDiff, Mat_t* buf)
{
try {
 
    cv::filterSpeckles(*img->v, newVal, maxSpeckleSize, maxDiff, ioarrDefault(buf));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfilterSpecklesV2(UMat_t* img, double newVal, int maxSpeckleSize, double maxDiff, 
                                   UMat_t* buf)
{
try {
 
    cv::filterSpeckles(*img->v, newVal, maxSpeckleSize, maxDiff, ioarrDefault(buf));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvfind4QuadCornerSubpix(Mat_t* img, Mat_t* corners, Size_t* region_size)
{
    bool retval;
try {
 
    retval = cv::find4QuadCornerSubpix(*img->v, *corners->v, *region_size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfind4QuadCornerSubpixV2(UMat_t* img, UMat_t* corners, Size_t* region_size)
{
    bool retval;
try {
 
    retval = cv::find4QuadCornerSubpix(*img->v, *corners->v, *region_size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindChessboardCorners(Mat_t* image, Size_t* patternSize, Mat_t* corners, int flags)
{
    bool retval;
try {
 
    retval = cv::findChessboardCorners(*image->v, *patternSize->v, *corners->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindChessboardCornersV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, int flags)
{
    bool retval;
try {
 
    retval = cv::findChessboardCorners(*image->v, *patternSize->v, *corners->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindChessboardCornersSB(Mat_t* image, Size_t* patternSize, Mat_t* corners, int flags)
{
    bool retval;
try {
 
    retval = cv::findChessboardCornersSB(*image->v, *patternSize->v, *corners->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindChessboardCornersSBV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, int flags)
{
    bool retval;
try {
 
    retval = cv::findChessboardCornersSB(*image->v, *patternSize->v, *corners->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindChessboardCornersSBWithMeta(Mat_t* image, Size_t* patternSize, Mat_t* corners, 
                                   int flags, Mat_t* meta)
{
    bool retval;
try {
 
    retval = cv::findChessboardCornersSB(*image->v, *patternSize->v, *corners->v, flags, *meta->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindChessboardCornersSBWithMetaV2(UMat_t* image, Size_t* patternSize, UMat_t* corners, 
                                   int flags, UMat_t* meta)
{
    bool retval;
try {
 
    retval = cv::findChessboardCornersSB(*image->v, *patternSize->v, *corners->v, flags, *meta->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindCirclesGrid(Mat_t* image, Size_t* patternSize, Mat_t* centers, int flags, 
                                   Ptr_FeatureDetector* blobDetector, CirclesGridFinderParameters_t* parameters)
{
    bool retval;
try {
 
    retval = cv::findCirclesGrid(*image->v, *patternSize->v, *centers->v, flags, *blobDetector, *parameters->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindCirclesGridV2(UMat_t* image, Size_t* patternSize, UMat_t* centers, int flags, 
                                   Ptr_FeatureDetector* blobDetector, CirclesGridFinderParameters_t* parameters)
{
    bool retval;
try {
 
    retval = cv::findCirclesGrid(*image->v, *patternSize->v, *centers->v, flags, *blobDetector, *parameters->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindCirclesGridV3(Mat_t* image, Size_t* patternSize, Mat_t* centers, int flags, 
                                   Ptr_FeatureDetector* blobDetector)
{
    bool retval;
try {
 
    Ptr_FeatureDetector x5; if (blobDetector == 0) { x5 = SimpleBlobDetector::create(); blobDetector = &x5; };       
    retval = cv::findCirclesGrid(*image->v, *patternSize->v, *centers->v, flags, *blobDetector);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvfindCirclesGridV4(UMat_t* image, Size_t* patternSize, UMat_t* centers, int flags, 
                                   Ptr_FeatureDetector* blobDetector)
{
    bool retval;
try {
 
    Ptr_FeatureDetector x5; if (blobDetector == 0) { x5 = SimpleBlobDetector::create(); blobDetector = &x5; };       
    retval = cv::findCirclesGrid(*image->v, *patternSize->v, *centers->v, flags, *blobDetector);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvfindContours(Mat_t* image, vector_Mat* contours, Mat_t* hierarchy, int mode, int method, 
                                   Point_t* offset)
{
try {
 
    Point x6; if (offset == 0) { Point_t a6; x6 = Point(); a6.v = &x6; offset = &a6; };     
    cv::findContours(*image->v, *contours, *hierarchy->v, mode, method, *offset->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfindContoursV2(UMat_t* image, vector_UMat* contours, UMat_t* hierarchy, int mode, 
                                   int method, Point_t* offset)
{
try {
 
    Point x6; if (offset == 0) { Point_t a6; x6 = Point(); a6.v = &x6; offset = &a6; };     
    cv::findContours(*image->v, *contours, *hierarchy->v, mode, method, *offset->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvfindEssentialMat(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix, int method, 
                                   double prob, double threshold, int maxIters, Mat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, *cameraMatrix->v, method, prob, threshold, maxIters, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV2(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix, int method, 
                                   double prob, double threshold, int maxIters, UMat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, *cameraMatrix->v, method, prob, threshold, maxIters, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV3(Mat_t* points1, Mat_t* points2, double focal, Point2d_t* pp, int method, 
                                   double prob, double threshold, int maxIters, Mat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Point2d x4; if (pp == 0) { Point2d_t a4; x4 = Point2d(0, 0); a4.v = &x4; pp = &a4; };     
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, focal, *pp->v, method, prob, threshold, maxIters, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV4(UMat_t* points1, UMat_t* points2, double focal, Point2d_t* pp, 
                                   int method, double prob, double threshold, int maxIters, UMat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Point2d x4; if (pp == 0) { Point2d_t a4; x4 = Point2d(0, 0); a4.v = &x4; pp = &a4; };     
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, focal, *pp->v, method, prob, threshold, maxIters, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV5(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix1, 
                                   Mat_t* distCoeffs1, Mat_t* cameraMatrix2, Mat_t* distCoeffs2, int method, double prob, 
                                   double threshold, Mat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, method, prob, threshold, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV6(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix1, 
                                   UMat_t* distCoeffs1, UMat_t* cameraMatrix2, UMat_t* distCoeffs2, int method, double prob, 
                                   double threshold, UMat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, method, prob, threshold, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV7(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix1, 
                                   Mat_t* cameraMatrix2, Mat_t* dist_coeff1, Mat_t* dist_coeff2, Mat_t* mask, 
                                   UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, *cameraMatrix1->v, *cameraMatrix2->v, *dist_coeff1->v, *dist_coeff2->v, *mask->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindEssentialMatV8(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix1, 
                                   UMat_t* cameraMatrix2, UMat_t* dist_coeff1, UMat_t* dist_coeff2, UMat_t* mask, 
                                   UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findEssentialMat(*points1->v, *points2->v, *cameraMatrix1->v, *cameraMatrix2->v, *dist_coeff1->v, *dist_coeff2->v, *mask->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindFundamentalMat(Mat_t* points1, Mat_t* points2, int method, 
                                   double ransacReprojThreshold, double confidence, int maxIters, Mat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findFundamentalMat(*points1->v, *points2->v, method, ransacReprojThreshold, confidence, maxIters, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindFundamentalMatV2(UMat_t* points1, UMat_t* points2, int method, 
                                   double ransacReprojThreshold, double confidence, int maxIters, UMat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findFundamentalMat(*points1->v, *points2->v, method, ransacReprojThreshold, confidence, maxIters, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindFundamentalMatV3(Mat_t* points1, Mat_t* points2, int method, 
                                   double ransacReprojThreshold, double confidence, Mat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findFundamentalMat(*points1->v, *points2->v, method, ransacReprojThreshold, confidence, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindFundamentalMatV4(UMat_t* points1, UMat_t* points2, int method, 
                                   double ransacReprojThreshold, double confidence, UMat_t* mask)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findFundamentalMat(*points1->v, *points2->v, method, ransacReprojThreshold, confidence, outarrDefault(mask));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindFundamentalMatV5(Mat_t* points1, Mat_t* points2, Mat_t* mask, UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findFundamentalMat(*points1->v, *points2->v, *mask->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindFundamentalMatV6(UMat_t* points1, UMat_t* points2, UMat_t* mask, UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findFundamentalMat(*points1->v, *points2->v, *mask->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindHomography(Mat_t* srcPoints, Mat_t* dstPoints, int method, 
                                   double ransacReprojThreshold, Mat_t* mask, int maxIters, double confidence)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findHomography(*srcPoints->v, *dstPoints->v, method, ransacReprojThreshold, outarrDefault(mask), maxIters, confidence);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindHomographyV2(UMat_t* srcPoints, UMat_t* dstPoints, int method, 
                                   double ransacReprojThreshold, UMat_t* mask, int maxIters, double confidence)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findHomography(*srcPoints->v, *dstPoints->v, method, ransacReprojThreshold, outarrDefault(mask), maxIters, confidence);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindHomographyV3(Mat_t* srcPoints, Mat_t* dstPoints, Mat_t* mask, UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findHomography(*srcPoints->v, *dstPoints->v, *mask->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvfindHomographyV4(UMat_t* srcPoints, UMat_t* dstPoints, UMat_t* mask, UsacParams_t* params)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::findHomography(*srcPoints->v, *dstPoints->v, *mask->v, *params->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvfindNonZero(Mat_t* src, Mat_t* idx)
{
try {
 
    cv::findNonZero(*src->v, *idx->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfindNonZeroV2(UMat_t* src, UMat_t* idx)
{
try {
 
    cv::findNonZero(*src->v, *idx->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvfindTransformECC(Mat_t* templateImage, Mat_t* inputImage, Mat_t* warpMatrix, 
                                   int motionType, TermCriteria_t* criteria, Mat_t* inputMask, int gaussFiltSize)
{
    double retval = 0;
try {
 
    retval = cv::findTransformECC(*templateImage->v, *inputImage->v, *warpMatrix->v, motionType, *criteria->v, *inputMask->v, gaussFiltSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvfindTransformECCV2(UMat_t* templateImage, UMat_t* inputImage, UMat_t* warpMatrix, 
                                   int motionType, TermCriteria_t* criteria, UMat_t* inputMask, int gaussFiltSize)
{
    double retval = 0;
try {
 
    retval = cv::findTransformECC(*templateImage->v, *inputImage->v, *warpMatrix->v, motionType, *criteria->v, *inputMask->v, gaussFiltSize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvfindTransformECCV3(Mat_t* templateImage, Mat_t* inputImage, Mat_t* warpMatrix, 
                                   int motionType, TermCriteria_t* criteria, Mat_t* inputMask)
{
    double retval = 0;
try {
 
    TermCriteria x5; if (criteria == 0) { TermCriteria_t a5; x5 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001); a5.v = &x5; criteria = &a5; };     
    retval = cv::findTransformECC(*templateImage->v, *inputImage->v, *warpMatrix->v, motionType, *criteria->v, inparrDefault(inputMask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvfindTransformECCV4(UMat_t* templateImage, UMat_t* inputImage, UMat_t* warpMatrix, 
                                   int motionType, TermCriteria_t* criteria, UMat_t* inputMask)
{
    double retval = 0;
try {
 
    TermCriteria x5; if (criteria == 0) { TermCriteria_t a5; x5 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001); a5.v = &x5; criteria = &a5; };     
    retval = cv::findTransformECC(*templateImage->v, *inputImage->v, *warpMatrix->v, motionType, *criteria->v, inparrDefault(inputMask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvfisheye_calibrate(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* image_size, 
                                   Mat_t* K, Mat_t* D, vector_Mat* rvecs, vector_Mat* tvecs, int flags, 
                                   TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x9; if (criteria == 0) { TermCriteria_t a9; x9 = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON); a9.v = &x9; criteria = &a9; };     
    retval = cv::fisheye::calibrate(*objectPoints, *imagePoints, *image_size->v, *K->v, *D->v, *rvecs, *tvecs, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvfisheye_calibrateV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* image_size, UMat_t* K, UMat_t* D, vector_UMat* rvecs, vector_UMat* tvecs, 
                                   int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x9; if (criteria == 0) { TermCriteria_t a9; x9 = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON); a9.v = &x9; criteria = &a9; };     
    retval = cv::fisheye::calibrate(*objectPoints, *imagePoints, *image_size->v, *K->v, *D->v, *rvecs, *tvecs, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvfisheye_distortPoints(Mat_t* undistorted, Mat_t* distorted, Mat_t* K, Mat_t* D, 
                                   double alpha)
{
try {
 
    cv::fisheye::distortPoints(*undistorted->v, *distorted->v, *K->v, *D->v, alpha);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_distortPointsV2(UMat_t* undistorted, UMat_t* distorted, UMat_t* K, UMat_t* D, 
                                   double alpha)
{
try {
 
    cv::fisheye::distortPoints(*undistorted->v, *distorted->v, *K->v, *D->v, alpha);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_estimateNewCameraMatrixForUndistortRectify(Mat_t* K, Mat_t* D, Size_t* image_size, 
                                   Mat_t* R, Mat_t* P, double balance, 
                                   Size_t* new_size, double fov_scale)
{
try {
 
    Size x7; if (new_size == 0) { Size_t a7; x7 = Size(); a7.v = &x7; new_size = &a7; };     
    cv::fisheye::estimateNewCameraMatrixForUndistortRectify(*K->v, *D->v, *image_size->v, *R->v, *P->v, balance, *new_size->v, fov_scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_estimateNewCameraMatrixForUndistortRectifyV2(UMat_t* K, UMat_t* D, 
                                   Size_t* image_size, UMat_t* R, UMat_t* P, 
                                   double balance, Size_t* new_size, double fov_scale)
{
try {
 
    Size x7; if (new_size == 0) { Size_t a7; x7 = Size(); a7.v = &x7; new_size = &a7; };     
    cv::fisheye::estimateNewCameraMatrixForUndistortRectify(*K->v, *D->v, *image_size->v, *R->v, *P->v, balance, *new_size->v, fov_scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_initUndistortRectifyMap(Mat_t* K, Mat_t* D, Mat_t* R, Mat_t* P, Size_t* size, 
                                   int m1type, Mat_t* map1, Mat_t* map2)
{
try {
 
    cv::fisheye::initUndistortRectifyMap(*K->v, *D->v, *R->v, *P->v, *size->v, m1type, *map1->v, *map2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_initUndistortRectifyMapV2(UMat_t* K, UMat_t* D, UMat_t* R, UMat_t* P, Size_t* size, 
                                   int m1type, UMat_t* map1, UMat_t* map2)
{
try {
 
    cv::fisheye::initUndistortRectifyMap(*K->v, *D->v, *R->v, *P->v, *size->v, m1type, *map1->v, *map2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_projectPoints(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* rvec, Mat_t* tvec, 
                                   Mat_t* K, Mat_t* D, double alpha, Mat_t* jacobian)
{
try {
 
    cv::fisheye::projectPoints(*objectPoints->v, *imagePoints->v, *rvec->v, *tvec->v, *K->v, *D->v, alpha, outarrDefault(jacobian));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_projectPointsV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* rvec, 
                                   UMat_t* tvec, UMat_t* K, UMat_t* D, double alpha, UMat_t* jacobian)
{
try {
 
    cv::fisheye::projectPoints(*objectPoints->v, *imagePoints->v, *rvec->v, *tvec->v, *K->v, *D->v, alpha, outarrDefault(jacobian));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvfisheye_stereoCalibrate(vector_Mat* objectPoints, vector_Mat* imagePoints1, 
                                   vector_Mat* imagePoints2, Mat_t* K1, Mat_t* D1, Mat_t* K2, Mat_t* D2, Size_t* imageSize, 
                                   Mat_t* R, Mat_t* T, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x12; if (criteria == 0) { TermCriteria_t a12; x12 = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON); a12.v = &x12; criteria = &a12; };     
    retval = cv::fisheye::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *K1->v, *D1->v, *K2->v, *D2->v, *imageSize->v, *R->v, *T->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvfisheye_stereoCalibrateV2(vector_UMat* objectPoints, vector_UMat* imagePoints1, 
                                   vector_UMat* imagePoints2, UMat_t* K1, UMat_t* D1, UMat_t* K2, UMat_t* D2, 
                                   Size_t* imageSize, UMat_t* R, UMat_t* T, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x12; if (criteria == 0) { TermCriteria_t a12; x12 = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON); a12.v = &x12; criteria = &a12; };     
    retval = cv::fisheye::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *K1->v, *D1->v, *K2->v, *D2->v, *imageSize->v, *R->v, *T->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvfisheye_stereoRectify(Mat_t* K1, Mat_t* D1, Mat_t* K2, Mat_t* D2, Size_t* imageSize, 
                                   Mat_t* R, Mat_t* tvec, Mat_t* R1, Mat_t* R2, Mat_t* P1, Mat_t* P2, Mat_t* Q, 
                                   int flags, Size_t* newImageSize, double balance, double fov_scale)
{
try {
 
    Size x14; if (newImageSize == 0) { Size_t a14; x14 = Size(); a14.v = &x14; newImageSize = &a14; };     
    cv::fisheye::stereoRectify(*K1->v, *D1->v, *K2->v, *D2->v, *imageSize->v, *R->v, *tvec->v, *R1->v, *R2->v, *P1->v, *P2->v, *Q->v, flags, *newImageSize->v, balance, fov_scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_stereoRectifyV2(UMat_t* K1, UMat_t* D1, UMat_t* K2, UMat_t* D2, Size_t* imageSize, 
                                   UMat_t* R, UMat_t* tvec, UMat_t* R1, UMat_t* R2, UMat_t* P1, UMat_t* P2, 
                                   UMat_t* Q, int flags, Size_t* newImageSize, double balance, 
                                   double fov_scale)
{
try {
 
    Size x14; if (newImageSize == 0) { Size_t a14; x14 = Size(); a14.v = &x14; newImageSize = &a14; };     
    cv::fisheye::stereoRectify(*K1->v, *D1->v, *K2->v, *D2->v, *imageSize->v, *R->v, *tvec->v, *R1->v, *R2->v, *P1->v, *P2->v, *Q->v, flags, *newImageSize->v, balance, fov_scale);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_undistortImage(Mat_t* distorted, Mat_t* undistorted, Mat_t* K, Mat_t* D, 
                                   Mat_t* Knew, Size_t* new_size)
{
try {
 
    Size x6; if (new_size == 0) { Size_t a6; x6 = Size(); a6.v = &x6; new_size = &a6; };     
    cv::fisheye::undistortImage(*distorted->v, *undistorted->v, *K->v, *D->v, inparrDefault(Knew), *new_size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_undistortImageV2(UMat_t* distorted, UMat_t* undistorted, UMat_t* K, UMat_t* D, 
                                   UMat_t* Knew, Size_t* new_size)
{
try {
 
    Size x6; if (new_size == 0) { Size_t a6; x6 = Size(); a6.v = &x6; new_size = &a6; };     
    cv::fisheye::undistortImage(*distorted->v, *undistorted->v, *K->v, *D->v, inparrDefault(Knew), *new_size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_undistortPoints(Mat_t* distorted, Mat_t* undistorted, Mat_t* K, Mat_t* D, Mat_t* R, 
                                   Mat_t* P, TermCriteria_t* criteria)
{
try {
 
    TermCriteria x7; if (criteria == 0) { TermCriteria_t a7; x7 = TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 10, 1e-8); a7.v = &x7; criteria = &a7; };     
    cv::fisheye::undistortPoints(*distorted->v, *undistorted->v, *K->v, *D->v, inparrDefault(R), inparrDefault(P), *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfisheye_undistortPointsV2(UMat_t* distorted, UMat_t* undistorted, UMat_t* K, UMat_t* D, 
                                   UMat_t* R, UMat_t* P, TermCriteria_t* criteria)
{
try {
 
    TermCriteria x7; if (criteria == 0) { TermCriteria_t a7; x7 = TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 10, 1e-8); a7.v = &x7; criteria = &a7; };     
    cv::fisheye::undistortPoints(*distorted->v, *undistorted->v, *K->v, *D->v, inparrDefault(R), inparrDefault(P), *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(RotatedRect_t*)   pCvfitEllipse(Mat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::fitEllipse(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvfitEllipseV2(UMat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::fitEllipse(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvfitEllipseAMS(Mat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::fitEllipseAMS(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvfitEllipseAMSV2(UMat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::fitEllipseAMS(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvfitEllipseDirect(Mat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::fitEllipseDirect(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvfitEllipseDirectV2(UMat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::fitEllipseDirect(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvfitLine(Mat_t* points, Mat_t* line, int distType, double param, double reps, double aeps)
{
try {
 
    cv::fitLine(*points->v, *line->v, distType, param, reps, aeps);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvfitLineV2(UMat_t* points, UMat_t* line, int distType, double param, double reps, 
                                   double aeps)
{
try {
 
    cv::fitLine(*points->v, *line->v, distType, param, reps, aeps);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvflip(Mat_t* src, Mat_t* dst, int flipCode)
{
try {
 
    cv::flip(*src->v, *dst->v, flipCode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvflipV2(UMat_t* src, UMat_t* dst, int flipCode)
{
try {
 
    cv::flip(*src->v, *dst->v, flipCode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvfloodFill(Mat_t* image, Mat_t* mask, Point_t* seedPoint, Scalar_t* newVal, Rect_t* rect, 
                                   Scalar_t* loDiff, Scalar_t* upDiff, int flags)
{
    int retval = 0;
try {
 
    Rect* x5; if (rect == 0) { Rect_t a5; x5 = 0; a5.v = x5; rect = &a5; };     
    Scalar x6; if (loDiff == 0) { Scalar_t a6; x6 = Scalar(); a6.v = &x6; loDiff = &a6; };     
    Scalar x7; if (upDiff == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; upDiff = &a7; };     
    retval = cv::floodFill(*image->v, *mask->v, *seedPoint->v, *newVal->v, rect->v, *loDiff->v, *upDiff->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvfloodFillV2(UMat_t* image, UMat_t* mask, Point_t* seedPoint, Scalar_t* newVal, 
                                   Rect_t* rect, Scalar_t* loDiff, Scalar_t* upDiff, int flags)
{
    int retval = 0;
try {
 
    Rect* x5; if (rect == 0) { Rect_t a5; x5 = 0; a5.v = x5; rect = &a5; };     
    Scalar x6; if (loDiff == 0) { Scalar_t a6; x6 = Scalar(); a6.v = &x6; loDiff = &a6; };     
    Scalar x7; if (upDiff == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; upDiff = &a7; };     
    retval = cv::floodFill(*image->v, *mask->v, *seedPoint->v, *newVal->v, rect->v, *loDiff->v, *upDiff->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvgemm(Mat_t* src1, Mat_t* src2, double alpha, Mat_t* src3, double beta, Mat_t* dst, 
                                   int flags)
{
try {
 
    cv::gemm(*src1->v, *src2->v, alpha, *src3->v, beta, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgemmV2(UMat_t* src1, UMat_t* src2, double alpha, UMat_t* src3, double beta, UMat_t* dst, 
                                   int flags)
{
try {
 
    cv::gemm(*src1->v, *src2->v, alpha, *src3->v, beta, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvgetAffineTransform(Mat_t* src, Mat_t* dst)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getAffineTransform(*src->v, *dst->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetAffineTransformV2(UMat_t* src, UMat_t* dst)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getAffineTransform(*src->v, *dst->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvgetBuildInformation()
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::getBuildInformation();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvgetCPUFeaturesLine()
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::getCPUFeaturesLine();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvgetCPUTickCount()
{
    int64 retval = 0;
try {
 
    retval = cv::getCPUTickCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetDefaultNewCameraMatrix(Mat_t* cameraMatrix, Size_t* imgsize, bool centerPrincipalPoint)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x2; if (imgsize == 0) { Size_t a2; x2 = Size(); a2.v = &x2; imgsize = &a2; };     
    Mat tr = cv::getDefaultNewCameraMatrix(*cameraMatrix->v, *imgsize->v, centerPrincipalPoint);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetDefaultNewCameraMatrixV2(UMat_t* cameraMatrix, Size_t* imgsize, 
                                   bool centerPrincipalPoint)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x2; if (imgsize == 0) { Size_t a2; x2 = Size(); a2.v = &x2; imgsize = &a2; };     
    Mat tr = cv::getDefaultNewCameraMatrix(*cameraMatrix->v, *imgsize->v, centerPrincipalPoint);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvgetDerivKernels(Mat_t* kx, Mat_t* ky, int dx, int dy, int ksize, bool normalize, int ktype)
{
try {
 
    cv::getDerivKernels(*kx->v, *ky->v, dx, dy, ksize, normalize, ktype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgetDerivKernelsV2(UMat_t* kx, UMat_t* ky, int dx, int dy, int ksize, bool normalize, 
                                   int ktype)
{
try {
 
    cv::getDerivKernels(*kx->v, *ky->v, dx, dy, ksize, normalize, ktype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvgetFontScaleFromHeight(int fontFace, int pixelHeight, int thickness)
{
    double retval = 0;
try {
 
    retval = cv::getFontScaleFromHeight(fontFace, pixelHeight, thickness);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetGaborKernel(Size_t* ksize, double sigma, double theta, double lambd, double gamma, 
                                   double psi, int ktype)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getGaborKernel(*ksize->v, sigma, theta, lambd, gamma, psi, ktype);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetGaussianKernel(int ksize, double sigma, int ktype)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getGaussianKernel(ksize, sigma, ktype);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvgetHardwareFeatureName(int feature)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::getHardwareFeatureName(feature);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetLogLevel()
{
    int retval = 0;
try {
 
    retval = cv::getLogLevel();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetNumThreads()
{
    int retval = 0;
try {
 
    retval = cv::getNumThreads();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetNumberOfCPUs()
{
    int retval = 0;
try {
 
    retval = cv::getNumberOfCPUs();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetOptimalDFTSize(int vecsize)
{
    int retval = 0;
try {
 
    retval = cv::getOptimalDFTSize(vecsize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetOptimalNewCameraMatrix(Mat_t* cameraMatrix, Mat_t* distCoeffs, Size_t* imageSize, 
                                   double alpha, Size_t* newImgSize, Rect_t* validPixROI, 
                                   bool centerPrincipalPoint)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x5; if (newImgSize == 0) { Size_t a5; x5 = Size(); a5.v = &x5; newImgSize = &a5; };     
    Rect* x6; if (validPixROI == 0) { Rect_t a6; x6 = 0; a6.v = x6; validPixROI = &a6; };     
    Mat tr = cv::getOptimalNewCameraMatrix(*cameraMatrix->v, *distCoeffs->v, *imageSize->v, alpha, *newImgSize->v, validPixROI->v, centerPrincipalPoint);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetOptimalNewCameraMatrixV2(UMat_t* cameraMatrix, UMat_t* distCoeffs, Size_t* imageSize, 
                                   double alpha, Size_t* newImgSize, Rect_t* validPixROI, 
                                   bool centerPrincipalPoint)
{
    Mat_t*  retval = new Mat_t;
try { 
    Size x5; if (newImgSize == 0) { Size_t a5; x5 = Size(); a5.v = &x5; newImgSize = &a5; };     
    Rect* x6; if (validPixROI == 0) { Rect_t a6; x6 = 0; a6.v = x6; validPixROI = &a6; };     
    Mat tr = cv::getOptimalNewCameraMatrix(*cameraMatrix->v, *distCoeffs->v, *imageSize->v, alpha, *newImgSize->v, validPixROI->v, centerPrincipalPoint);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetPerspectiveTransform(Mat_t* src, Mat_t* dst, int solveMethod)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getPerspectiveTransform(*src->v, *dst->v, solveMethod);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetPerspectiveTransformV2(UMat_t* src, UMat_t* dst, int solveMethod)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getPerspectiveTransform(*src->v, *dst->v, solveMethod);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvgetRectSubPix(Mat_t* image, Size_t* patchSize, Point2f_t* center, Mat_t* patch, 
                                   int patchType)
{
try {
 
    cv::getRectSubPix(*image->v, *patchSize->v, *center->v, *patch->v, patchType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgetRectSubPixV2(UMat_t* image, Size_t* patchSize, Point2f_t* center, UMat_t* patch, 
                                   int patchType)
{
try {
 
    cv::getRectSubPix(*image->v, *patchSize->v, *center->v, *patch->v, patchType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvgetRotationMatrix2D(Point2f_t* center, double angle, double scale)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::getRotationMatrix2D(*center->v, angle, scale);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvgetStructuringElement(int shape, Size_t* ksize, Point_t* anchor)
{
    Mat_t*  retval = new Mat_t;
try { 
    Point x3; if (anchor == 0) { Point_t a3; x3 = Point(-1,-1); a3.v = &x3; anchor = &a3; };     
    Mat tr = cv::getStructuringElement(shape, *ksize->v, *anchor->v);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Size_t*)   pCvgetTextSize(string_t* text, int fontFace, double fontScale, int thickness, int* baseLine)
{
    Size_t*  retval = new Size_t;
try { 
    Size tr = cv::getTextSize(string(text->v), fontFace, fontScale, thickness, baseLine);
    Size*  t = new Size();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetThreadNum()
{
    int retval = 0;
try {
 
    retval = cv::getThreadNum();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int64)   pCvgetTickCount()
{
    int64 retval = 0;
try {
 
    retval = cv::getTickCount();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvgetTickFrequency()
{
    double retval = 0;
try {
 
    retval = cv::getTickFrequency();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetTrackbarPos(string_t* trackbarname, string_t* winname)
{
    int retval = 0;
try {
 
    retval = cv::getTrackbarPos(string(trackbarname->v), string(winname->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvgetValidDisparityROI(Rect_t* roi1, Rect_t* roi2, int minDisparity, int numberOfDisparities, 
                                   int blockSize)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::getValidDisparityROI(*roi1->v, *roi2->v, minDisparity, numberOfDisparities, blockSize);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetVersionMajor()
{
    int retval = 0;
try {
 
    retval = cv::getVersionMajor();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetVersionMinor()
{
    int retval = 0;
try {
 
    retval = cv::getVersionMinor();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvgetVersionRevision()
{
    int retval = 0;
try {
 
    retval = cv::getVersionRevision();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvgetVersionString()
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::getVersionString();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvgetWindowImageRect(string_t* winname)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::getWindowImageRect(string(winname->v));
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvgetWindowProperty(string_t* winname, int prop_id)
{
    double retval = 0;
try {
 
    retval = cv::getWindowProperty(string(winname->v), prop_id);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvgoodFeaturesToTrack(Mat_t* image, Mat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, Mat_t* mask, int blockSize, bool useHarrisDetector, double k)
{
try {
 
    cv::goodFeaturesToTrack(*image->v, *corners->v, maxCorners, qualityLevel, minDistance, inparrDefault(mask), blockSize, useHarrisDetector, k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgoodFeaturesToTrackV2(UMat_t* image, UMat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, UMat_t* mask, int blockSize, bool useHarrisDetector, double k)
{
try {
 
    cv::goodFeaturesToTrack(*image->v, *corners->v, maxCorners, qualityLevel, minDistance, inparrDefault(mask), blockSize, useHarrisDetector, k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgoodFeaturesToTrackV3(Mat_t* image, Mat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, Mat_t* mask, int blockSize, int gradientSize, 
                                   bool useHarrisDetector, double k)
{
try {
 
    cv::goodFeaturesToTrack(*image->v, *corners->v, maxCorners, qualityLevel, minDistance, *mask->v, blockSize, gradientSize, useHarrisDetector, k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgoodFeaturesToTrackV4(UMat_t* image, UMat_t* corners, int maxCorners, double qualityLevel, 
                                   double minDistance, UMat_t* mask, int blockSize, int gradientSize, 
                                   bool useHarrisDetector, double k)
{
try {
 
    cv::goodFeaturesToTrack(*image->v, *corners->v, maxCorners, qualityLevel, minDistance, *mask->v, blockSize, gradientSize, useHarrisDetector, k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgoodFeaturesToTrackWithQuality(Mat_t* image, Mat_t* corners, int maxCorners, 
                                   double qualityLevel, double minDistance, Mat_t* mask, Mat_t* cornersQuality, 
                                   int blockSize, int gradientSize, bool useHarrisDetector, double k)
{
try {
 
    cv::goodFeaturesToTrack(*image->v, *corners->v, maxCorners, qualityLevel, minDistance, *mask->v, *cornersQuality->v, blockSize, gradientSize, useHarrisDetector, k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgoodFeaturesToTrackWithQualityV2(UMat_t* image, UMat_t* corners, int maxCorners, 
                                   double qualityLevel, double minDistance, UMat_t* mask, 
                                   UMat_t* cornersQuality, int blockSize, int gradientSize, bool useHarrisDetector, 
                                   double k)
{
try {
 
    cv::goodFeaturesToTrack(*image->v, *corners->v, maxCorners, qualityLevel, minDistance, *mask->v, *cornersQuality->v, blockSize, gradientSize, useHarrisDetector, k);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgrabCut(Mat_t* img, Mat_t* mask, Rect_t* rect, Mat_t* bgdModel, Mat_t* fgdModel, 
                                   int iterCount, int mode)
{
try {
 
    cv::grabCut(*img->v, *mask->v, *rect->v, *bgdModel->v, *fgdModel->v, iterCount, mode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgrabCutV2(UMat_t* img, UMat_t* mask, Rect_t* rect, UMat_t* bgdModel, UMat_t* fgdModel, 
                                   int iterCount, int mode)
{
try {
 
    cv::grabCut(*img->v, *mask->v, *rect->v, *bgdModel->v, *fgdModel->v, iterCount, mode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvgroupRectangles(vector_Rect* rectList, vector_int* weights, int groupThreshold, double eps)
{
try {
 
    cv::groupRectangles(*rectList, *weights, groupThreshold, eps);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvhaveImageReader(string_t* filename)
{
    bool retval;
try {
 
    retval = cv::haveImageReader(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvhaveImageWriter(string_t* filename)
{
    bool retval;
try {
 
    retval = cv::haveImageWriter(string(filename->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvhconcat(vector_Mat* src, Mat_t* dst)
{
try {
 
    cv::hconcat(*src, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvhconcatV2(vector_UMat* src, UMat_t* dst)
{
try {
 
    cv::hconcat(*src, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvidct(Mat_t* src, Mat_t* dst, int flags)
{
try {
 
    cv::idct(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvidctV2(UMat_t* src, UMat_t* dst, int flags)
{
try {
 
    cv::idct(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvidft(Mat_t* src, Mat_t* dst, int flags, int nonzeroRows)
{
try {
 
    cv::idft(*src->v, *dst->v, flags, nonzeroRows);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvidftV2(UMat_t* src, UMat_t* dst, int flags, int nonzeroRows)
{
try {
 
    cv::idft(*src->v, *dst->v, flags, nonzeroRows);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvilluminationChange(Mat_t* src, Mat_t* mask, Mat_t* dst, float alpha, float beta)
{
try {
 
    cv::illuminationChange(*src->v, *mask->v, *dst->v, alpha, beta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvilluminationChangeV2(UMat_t* src, UMat_t* mask, UMat_t* dst, float alpha, float beta)
{
try {
 
    cv::illuminationChange(*src->v, *mask->v, *dst->v, alpha, beta);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(size_t)   pCvimcount(string_t* filename, int flags)
{
    size_t retval;
try {
 
    retval = cv::imcount(string(filename->v), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvimdecode(Mat_t* buf, int flags)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::imdecode(*buf->v, flags);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvimdecodeV2(UMat_t* buf, int flags)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::imdecode(*buf->v, flags);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimencode(string_t* ext, Mat_t* img, vector_uchar* buf, vector_int* params)
{
    bool retval;
try {
 
    vector_int x4; if (params == 0) { x4 = std::vector<int>(); params = &x4; };       
    retval = cv::imencode(string(ext->v), *img->v, *buf, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimencodeV2(string_t* ext, UMat_t* img, vector_uchar* buf, vector_int* params)
{
    bool retval;
try {
 
    vector_int x4; if (params == 0) { x4 = std::vector<int>(); params = &x4; };       
    retval = cv::imencode(string(ext->v), *img->v, *buf, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvimread(string_t* filename, int flags)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::imread(string(filename->v), flags);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimreadmulti(string_t* filename, vector_Mat* mats, int flags)
{
    bool retval;
try {
 
    retval = cv::imreadmulti(string(filename->v), *mats, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimreadmultiV2(string_t* filename, vector_Mat* mats, int start, int count, int flags)
{
    bool retval;
try {
 
    retval = cv::imreadmulti(string(filename->v), *mats, start, count, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvimshow(string_t* winname, Mat_t* mat)
{
try {
 
    cv::imshow(string(winname->v), *mat->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvimshowV2(string_t* winname, UMat_t* mat)
{
try {
 
    cv::imshow(string(winname->v), *mat->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvimwrite(string_t* filename, Mat_t* img, vector_int* params)
{
    bool retval;
try {
 
    vector_int x3; if (params == 0) { x3 = std::vector<int>(); params = &x3; };       
    retval = cv::imwrite(string(filename->v), *img->v, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimwriteV2(string_t* filename, UMat_t* img, vector_int* params)
{
    bool retval;
try {
 
    vector_int x3; if (params == 0) { x3 = std::vector<int>(); params = &x3; };       
    retval = cv::imwrite(string(filename->v), *img->v, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimwritemulti(string_t* filename, vector_Mat* img, vector_int* params)
{
    bool retval;
try {
 
    vector_int x3; if (params == 0) { x3 = std::vector<int>(); params = &x3; };       
    retval = cv::imwritemulti(string(filename->v), *img, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvimwritemultiV2(string_t* filename, vector_UMat* img, vector_int* params)
{
    bool retval;
try {
 
    vector_int x3; if (params == 0) { x3 = std::vector<int>(); params = &x3; };       
    retval = cv::imwritemulti(string(filename->v), *img, *params);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvinRange(Mat_t* src, Mat_t* lowerb, Mat_t* upperb, Mat_t* dst)
{
try {
 
    cv::inRange(*src->v, *lowerb->v, *upperb->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinRangeV2(UMat_t* src, UMat_t* lowerb, UMat_t* upperb, UMat_t* dst)
{
try {
 
    cv::inRange(*src->v, *lowerb->v, *upperb->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvinitCameraMatrix2D(vector_Mat* objectPoints, vector_Mat* imagePoints, Size_t* imageSize, 
                                   double aspectRatio)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::initCameraMatrix2D(*objectPoints, *imagePoints, *imageSize->v, aspectRatio);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Mat_t*)   pCvinitCameraMatrix2DV2(vector_UMat* objectPoints, vector_UMat* imagePoints, 
                                   Size_t* imageSize, double aspectRatio)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::initCameraMatrix2D(*objectPoints, *imagePoints, *imageSize->v, aspectRatio);
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvinitInverseRectificationMap(Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* R, 
                                   Mat_t* newCameraMatrix, Size_t* size, int m1type, Mat_t* map1, Mat_t* map2)
{
try {
 
    cv::initInverseRectificationMap(*cameraMatrix->v, *distCoeffs->v, *R->v, *newCameraMatrix->v, *size->v, m1type, *map1->v, *map2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinitInverseRectificationMapV2(UMat_t* cameraMatrix, UMat_t* distCoeffs, UMat_t* R, 
                                   UMat_t* newCameraMatrix, Size_t* size, int m1type, UMat_t* map1, UMat_t* map2)
{
try {
 
    cv::initInverseRectificationMap(*cameraMatrix->v, *distCoeffs->v, *R->v, *newCameraMatrix->v, *size->v, m1type, *map1->v, *map2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinitUndistortRectifyMap(Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* R, 
                                   Mat_t* newCameraMatrix, Size_t* size, int m1type, Mat_t* map1, Mat_t* map2)
{
try {
 
    cv::initUndistortRectifyMap(*cameraMatrix->v, *distCoeffs->v, *R->v, *newCameraMatrix->v, *size->v, m1type, *map1->v, *map2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinitUndistortRectifyMapV2(UMat_t* cameraMatrix, UMat_t* distCoeffs, UMat_t* R, 
                                   UMat_t* newCameraMatrix, Size_t* size, int m1type, UMat_t* map1, UMat_t* map2)
{
try {
 
    cv::initUndistortRectifyMap(*cameraMatrix->v, *distCoeffs->v, *R->v, *newCameraMatrix->v, *size->v, m1type, *map1->v, *map2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinpaint(Mat_t* src, Mat_t* inpaintMask, Mat_t* dst, double inpaintRadius, int flags)
{
try {
 
    cv::inpaint(*src->v, *inpaintMask->v, *dst->v, inpaintRadius, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinpaintV2(UMat_t* src, UMat_t* inpaintMask, UMat_t* dst, double inpaintRadius, int flags)
{
try {
 
    cv::inpaint(*src->v, *inpaintMask->v, *dst->v, inpaintRadius, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinsertChannel(Mat_t* src, Mat_t* dst, int coi)
{
try {
 
    cv::insertChannel(*src->v, *dst->v, coi);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinsertChannelV2(UMat_t* src, UMat_t* dst, int coi)
{
try {
 
    cv::insertChannel(*src->v, *dst->v, coi);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvintegral(Mat_t* src, Mat_t* sum, int sdepth)
{
try {
 
    cv::integral(*src->v, *sum->v, sdepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvintegralV2(UMat_t* src, UMat_t* sum, int sdepth)
{
try {
 
    cv::integral(*src->v, *sum->v, sdepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvintegral2(Mat_t* src, Mat_t* sum, Mat_t* sqsum, int sdepth, int sqdepth)
{
try {
 
    cv::integral(*src->v, *sum->v, *sqsum->v, sdepth, sqdepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvintegral2V2(UMat_t* src, UMat_t* sum, UMat_t* sqsum, int sdepth, int sqdepth)
{
try {
 
    cv::integral(*src->v, *sum->v, *sqsum->v, sdepth, sqdepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvintegral3(Mat_t* src, Mat_t* sum, Mat_t* sqsum, Mat_t* tilted, int sdepth, int sqdepth)
{
try {
 
    cv::integral(*src->v, *sum->v, *sqsum->v, *tilted->v, sdepth, sqdepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvintegral3V2(UMat_t* src, UMat_t* sum, UMat_t* sqsum, UMat_t* tilted, int sdepth, 
                                   int sqdepth)
{
try {
 
    cv::integral(*src->v, *sum->v, *sqsum->v, *tilted->v, sdepth, sqdepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvintersectConvexConvex(Mat_t* p1, Mat_t* p2, Mat_t* p12, bool handleNested)
{
    float retval = 0;
try {
 
    retval = cv::intersectConvexConvex(*p1->v, *p2->v, *p12->v, handleNested);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvintersectConvexConvexV2(UMat_t* p1, UMat_t* p2, UMat_t* p12, bool handleNested)
{
    float retval = 0;
try {
 
    retval = cv::intersectConvexConvex(*p1->v, *p2->v, *p12->v, handleNested);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvinvert(Mat_t* src, Mat_t* dst, int flags)
{
    double retval = 0;
try {
 
    retval = cv::invert(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvinvertV2(UMat_t* src, UMat_t* dst, int flags)
{
    double retval = 0;
try {
 
    retval = cv::invert(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvinvertAffineTransform(Mat_t* M, Mat_t* iM)
{
try {
 
    cv::invertAffineTransform(*M->v, *iM->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvinvertAffineTransformV2(UMat_t* M, UMat_t* iM)
{
try {
 
    cv::invertAffineTransform(*M->v, *iM->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvipp_getIppVersion()
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::ipp::getIppVersion();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvipp_setUseIPP(bool flag)
{
try {
 
    cv::ipp::setUseIPP(flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvipp_setUseIPP_NotExact(bool flag)
{
try {
 
    cv::ipp::setUseIPP_NotExact(flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvipp_useIPP()
{
    bool retval;
try {
 
    retval = cv::ipp::useIPP();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvipp_useIPP_NotExact()
{
    bool retval;
try {
 
    retval = cv::ipp::useIPP_NotExact();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvisContourConvex(Mat_t* contour)
{
    bool retval;
try {
 
    retval = cv::isContourConvex(*contour->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvisContourConvexV2(UMat_t* contour)
{
    bool retval;
try {
 
    retval = cv::isContourConvex(*contour->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvkmeans(Mat_t* data, int K, Mat_t* bestLabels, TermCriteria_t* criteria, int attempts, 
                                   int flags, Mat_t* centers)
{
    double retval = 0;
try {
 
    retval = cv::kmeans(*data->v, K, *bestLabels->v, *criteria->v, attempts, flags, outarrDefault(centers));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvkmeansV2(UMat_t* data, int K, UMat_t* bestLabels, TermCriteria_t* criteria, int attempts, 
                                   int flags, UMat_t* centers)
{
    double retval = 0;
try {
 
    retval = cv::kmeans(*data->v, K, *bestLabels->v, *criteria->v, attempts, flags, outarrDefault(centers));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvline(Mat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, int thickness, int lineType, 
                                   int shift)
{
try {
 
    cv::line(*img->v, *pt1->v, *pt2->v, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlineV2(UMat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::line(*img->v, *pt1->v, *pt2->v, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlinearPolar(Mat_t* src, Mat_t* dst, Point2f_t* center, double maxRadius, int flags)
{
try {
 
    cv::linearPolar(*src->v, *dst->v, *center->v, maxRadius, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlinearPolarV2(UMat_t* src, UMat_t* dst, Point2f_t* center, double maxRadius, int flags)
{
try {
 
    cv::linearPolar(*src->v, *dst->v, *center->v, maxRadius, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlog(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::log(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlogV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::log(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlogPolar(Mat_t* src, Mat_t* dst, Point2f_t* center, double M, int flags)
{
try {
 
    cv::logPolar(*src->v, *dst->v, *center->v, M, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvlogPolarV2(UMat_t* src, UMat_t* dst, Point2f_t* center, double M, int flags)
{
try {
 
    cv::logPolar(*src->v, *dst->v, *center->v, M, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmagnitude(Mat_t* x, Mat_t* y, Mat_t* magnitude)
{
try {
 
    cv::magnitude(*x->v, *y->v, *magnitude->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmagnitudeV2(UMat_t* x, UMat_t* y, UMat_t* magnitude)
{
try {
 
    cv::magnitude(*x->v, *y->v, *magnitude->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmatMulDeriv(Mat_t* A, Mat_t* B, Mat_t* dABdA, Mat_t* dABdB)
{
try {
 
    cv::matMulDeriv(*A->v, *B->v, *dABdA->v, *dABdB->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmatMulDerivV2(UMat_t* A, UMat_t* B, UMat_t* dABdA, UMat_t* dABdB)
{
try {
 
    cv::matMulDeriv(*A->v, *B->v, *dABdA->v, *dABdB->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvmatchShapes(Mat_t* contour1, Mat_t* contour2, int method, double parameter)
{
    double retval = 0;
try {
 
    retval = cv::matchShapes(*contour1->v, *contour2->v, method, parameter);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvmatchShapesV2(UMat_t* contour1, UMat_t* contour2, int method, double parameter)
{
    double retval = 0;
try {
 
    retval = cv::matchShapes(*contour1->v, *contour2->v, method, parameter);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvmatchTemplate(Mat_t* image, Mat_t* templ, Mat_t* _result, int method, Mat_t* mask)
{
try {
 
    cv::matchTemplate(*image->v, *templ->v, *_result->v, method, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmatchTemplateV2(UMat_t* image, UMat_t* templ, UMat_t* _result, int method, UMat_t* mask)
{
try {
 
    cv::matchTemplate(*image->v, *templ->v, *_result->v, method, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmax(Mat_t* src1, Mat_t* src2, Mat_t* dst)
{
try {
 
    cv::max(*src1->v, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmaxV2(UMat_t* src1, UMat_t* src2, UMat_t* dst)
{
try {
 
    cv::max(*src1->v, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Scalar_t*)   pCvmean(Mat_t* src, Mat_t* mask)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::mean(*src->v, inparrDefault(mask));
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Scalar_t*)   pCvmeanV2(UMat_t* src, UMat_t* mask)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::mean(*src->v, inparrDefault(mask));
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvmeanShift(Mat_t* probImage, Rect_t* window, TermCriteria_t* criteria)
{
    int retval = 0;
try {
 
    retval = cv::meanShift(*probImage->v, *window->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvmeanShiftV2(UMat_t* probImage, Rect_t* window, TermCriteria_t* criteria)
{
    int retval = 0;
try {
 
    retval = cv::meanShift(*probImage->v, *window->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvmeanStdDev(Mat_t* src, Mat_t* mean, Mat_t* stddev, Mat_t* mask)
{
try {
 
    cv::meanStdDev(*src->v, *mean->v, *stddev->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmeanStdDevV2(UMat_t* src, UMat_t* mean, UMat_t* stddev, UMat_t* mask)
{
try {
 
    cv::meanStdDev(*src->v, *mean->v, *stddev->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmedianBlur(Mat_t* src, Mat_t* dst, int ksize)
{
try {
 
    cv::medianBlur(*src->v, *dst->v, ksize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmedianBlurV2(UMat_t* src, UMat_t* dst, int ksize)
{
try {
 
    cv::medianBlur(*src->v, *dst->v, ksize);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmerge(vector_Mat* mv, Mat_t* dst)
{
try {
 
    cv::merge(*mv, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmergeV2(vector_UMat* mv, UMat_t* dst)
{
try {
 
    cv::merge(*mv, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmin(Mat_t* src1, Mat_t* src2, Mat_t* dst)
{
try {
 
    cv::min(*src1->v, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvminV2(UMat_t* src1, UMat_t* src2, UMat_t* dst)
{
try {
 
    cv::min(*src1->v, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(RotatedRect_t*)   pCvminAreaRect(Mat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::minAreaRect(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvminAreaRectV2(UMat_t* points)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::minAreaRect(*points->v);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvminEnclosingCircle(Mat_t* points, Point2f_t* center, float radius)
{
try {
 
    cv::minEnclosingCircle(*points->v, *center->v, radius);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvminEnclosingCircleV2(UMat_t* points, Point2f_t* center, float radius)
{
try {
 
    cv::minEnclosingCircle(*points->v, *center->v, radius);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvminEnclosingTriangle(Mat_t* points, Mat_t* triangle)
{
    double retval = 0;
try {
 
    retval = cv::minEnclosingTriangle(*points->v, *triangle->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvminEnclosingTriangleV2(UMat_t* points, UMat_t* triangle)
{
    double retval = 0;
try {
 
    retval = cv::minEnclosingTriangle(*points->v, *triangle->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvminMaxLoc(Mat_t* src, double* minVal, double* maxVal, Point_t* minLoc, Point_t* maxLoc, 
                                   Mat_t* mask)
{
try {
 
    Point* x4; if (minLoc == 0) { Point_t a4; x4 = 0; a4.v = x4; minLoc = &a4; };     
    Point* x5; if (maxLoc == 0) { Point_t a5; x5 = 0; a5.v = x5; maxLoc = &a5; };     
    cv::minMaxLoc(*src->v, minVal, maxVal, minLoc->v, maxLoc->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvminMaxLocV2(UMat_t* src, double* minVal, double* maxVal, Point_t* minLoc, Point_t* maxLoc, 
                                   UMat_t* mask)
{
try {
 
    Point* x4; if (minLoc == 0) { Point_t a4; x4 = 0; a4.v = x4; minLoc = &a4; };     
    Point* x5; if (maxLoc == 0) { Point_t a5; x5 = 0; a5.v = x5; maxLoc = &a5; };     
    cv::minMaxLoc(*src->v, minVal, maxVal, minLoc->v, maxLoc->v, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmixChannels(vector_Mat* src, vector_Mat* dst, vector_int* fromTo)
{
try {
 
    cv::mixChannels(*src, *dst, *fromTo);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmixChannelsV2(vector_UMat* src, vector_UMat* dst, vector_int* fromTo)
{
try {
 
    cv::mixChannels(*src, *dst, *fromTo);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Moments_t*)   pCvmoments(Mat_t* _array, bool binaryImage)
{
    Moments_t*  retval = new Moments_t;
try { 
    Moments tr = cv::moments(*_array->v, binaryImage);
    Moments*  t = new Moments();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Moments_t*)   pCvmomentsV2(UMat_t* _array, bool binaryImage)
{
    Moments_t*  retval = new Moments_t;
try { 
    Moments tr = cv::moments(*_array->v, binaryImage);
    Moments*  t = new Moments();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvmorphologyEx(Mat_t* src, Mat_t* dst, int op, Mat_t* kernel, Point_t* anchor, 
                                   int iterations, int borderType, Scalar_t* borderValue)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1,-1); a5.v = &x5; anchor = &a5; };     
    Scalar x8; if (borderValue == 0) { Scalar_t a8; x8 = morphologyDefaultBorderValue(); a8.v = &x8; borderValue = &a8; };     
    cv::morphologyEx(*src->v, *dst->v, op, *kernel->v, *anchor->v, iterations, borderType, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmorphologyExV2(UMat_t* src, UMat_t* dst, int op, UMat_t* kernel, Point_t* anchor, 
                                   int iterations, int borderType, Scalar_t* borderValue)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1,-1); a5.v = &x5; anchor = &a5; };     
    Scalar x8; if (borderValue == 0) { Scalar_t a8; x8 = morphologyDefaultBorderValue(); a8.v = &x8; borderValue = &a8; };     
    cv::morphologyEx(*src->v, *dst->v, op, *kernel->v, *anchor->v, iterations, borderType, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmoveWindow(string_t* winname, int x, int y)
{
try {
 
    cv::moveWindow(string(winname->v), x, y);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmulSpectrums(Mat_t* a, Mat_t* b, Mat_t* c, int flags, bool conjB)
{
try {
 
    cv::mulSpectrums(*a->v, *b->v, *c->v, flags, conjB);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmulSpectrumsV2(UMat_t* a, UMat_t* b, UMat_t* c, int flags, bool conjB)
{
try {
 
    cv::mulSpectrums(*a->v, *b->v, *c->v, flags, conjB);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmulTransposed(Mat_t* src, Mat_t* dst, bool aTa, Mat_t* delta, double scale, int dtype)
{
try {
 
    cv::mulTransposed(*src->v, *dst->v, aTa, inparrDefault(delta), scale, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmulTransposedV2(UMat_t* src, UMat_t* dst, bool aTa, UMat_t* delta, double scale, int dtype)
{
try {
 
    cv::mulTransposed(*src->v, *dst->v, aTa, inparrDefault(delta), scale, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmultiply(Mat_t* src1, Mat_t* src2, Mat_t* dst, double scale, int dtype)
{
try {
 
    cv::multiply(*src1->v, *src2->v, *dst->v, scale, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvmultiplyV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, double scale, int dtype)
{
try {
 
    cv::multiply(*src1->v, *src2->v, *dst->v, scale, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvnamedWindow(string_t* winname, int flags)
{
try {
 
    cv::namedWindow(string(winname->v), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvnorm(Mat_t* src1, int normType, Mat_t* mask)
{
    double retval = 0;
try {
 
    retval = cv::norm(*src1->v, normType, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvnormV2(UMat_t* src1, int normType, UMat_t* mask)
{
    double retval = 0;
try {
 
    retval = cv::norm(*src1->v, normType, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvnormV3(Mat_t* src1, Mat_t* src2, int normType, Mat_t* mask)
{
    double retval = 0;
try {
 
    retval = cv::norm(*src1->v, *src2->v, normType, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvnormV4(UMat_t* src1, UMat_t* src2, int normType, UMat_t* mask)
{
    double retval = 0;
try {
 
    retval = cv::norm(*src1->v, *src2->v, normType, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvnormalize(Mat_t* src, Mat_t* dst, double alpha, double beta, int norm_type, int dtype, 
                                   Mat_t* mask)
{
try {
 
    cv::normalize(*src->v, *dst->v, alpha, beta, norm_type, dtype, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvnormalizeV2(UMat_t* src, UMat_t* dst, double alpha, double beta, int norm_type, int dtype, 
                                   UMat_t* mask)
{
try {
 
    cv::normalize(*src->v, *dst->v, alpha, beta, norm_type, dtype, inparrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvocl_finish()
{
try {
 
    cv::ocl::finish();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvocl_haveAmdBlas()
{
    bool retval;
try {
 
    retval = cv::ocl::haveAmdBlas();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_haveAmdFft()
{
    bool retval;
try {
 
    retval = cv::ocl::haveAmdFft();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvocl_haveOpenCL()
{
    bool retval;
try {
 
    retval = cv::ocl::haveOpenCL();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvocl_setUseOpenCL(bool flag)
{
try {
 
    cv::ocl::setUseOpenCL(flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvocl_useOpenCL()
{
    bool retval;
try {
 
    retval = cv::ocl::useOpenCL();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvpatchNaNs(Mat_t* a, double _val)
{
try {
 
    cv::patchNaNs(*a->v, _val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpatchNaNsV2(UMat_t* a, double _val)
{
try {
 
    cv::patchNaNs(*a->v, _val);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpencilSketch(Mat_t* src, Mat_t* dst1, Mat_t* dst2, float sigma_s, float sigma_r, 
                                   float shade_factor)
{
try {
 
    cv::pencilSketch(*src->v, *dst1->v, *dst2->v, sigma_s, sigma_r, shade_factor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpencilSketchV2(UMat_t* src, UMat_t* dst1, UMat_t* dst2, float sigma_s, float sigma_r, 
                                   float shade_factor)
{
try {
 
    cv::pencilSketch(*src->v, *dst1->v, *dst2->v, sigma_s, sigma_r, shade_factor);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvperspectiveTransform(Mat_t* src, Mat_t* dst, Mat_t* m)
{
try {
 
    cv::perspectiveTransform(*src->v, *dst->v, *m->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvperspectiveTransformV2(UMat_t* src, UMat_t* dst, UMat_t* m)
{
try {
 
    cv::perspectiveTransform(*src->v, *dst->v, *m->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvphase(Mat_t* x, Mat_t* y, Mat_t* angle, bool angleInDegrees)
{
try {
 
    cv::phase(*x->v, *y->v, *angle->v, angleInDegrees);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvphaseV2(UMat_t* x, UMat_t* y, UMat_t* angle, bool angleInDegrees)
{
try {
 
    cv::phase(*x->v, *y->v, *angle->v, angleInDegrees);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Point2d_t*)   pCvphaseCorrelate(Mat_t* src1, Mat_t* src2, Mat_t* window, double* response)
{
    Point2d_t*  retval = new Point2d_t;
try { 
    Point2d tr = cv::phaseCorrelate(*src1->v, *src2->v, inparrDefault(window), response);
    Point2d*  t = new Point2d();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Point2d_t*)   pCvphaseCorrelateV2(UMat_t* src1, UMat_t* src2, UMat_t* window, double* response)
{
    Point2d_t*  retval = new Point2d_t;
try { 
    Point2d tr = cv::phaseCorrelate(*src1->v, *src2->v, inparrDefault(window), response);
    Point2d*  t = new Point2d();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvpointPolygonTest(Mat_t* contour, Point2f_t* pt, bool measureDist)
{
    double retval = 0;
try {
 
    retval = cv::pointPolygonTest(*contour->v, *pt->v, measureDist);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvpointPolygonTestV2(UMat_t* contour, Point2f_t* pt, bool measureDist)
{
    double retval = 0;
try {
 
    retval = cv::pointPolygonTest(*contour->v, *pt->v, measureDist);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvpolarToCart(Mat_t* magnitude, Mat_t* angle, Mat_t* x, Mat_t* y, bool angleInDegrees)
{
try {
 
    cv::polarToCart(*magnitude->v, *angle->v, *x->v, *y->v, angleInDegrees);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpolarToCartV2(UMat_t* magnitude, UMat_t* angle, UMat_t* x, UMat_t* y, bool angleInDegrees)
{
try {
 
    cv::polarToCart(*magnitude->v, *angle->v, *x->v, *y->v, angleInDegrees);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvpollKey()
{
    int retval = 0;
try {
 
    retval = cv::pollKey();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvpolylines(Mat_t* img, vector_Mat* pts, bool isClosed, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::polylines(*img->v, *pts, isClosed, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpolylinesV2(UMat_t* img, vector_UMat* pts, bool isClosed, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::polylines(*img->v, *pts, isClosed, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpow(Mat_t* src, double power, Mat_t* dst)
{
try {
 
    cv::pow(*src->v, power, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpowV2(UMat_t* src, double power, UMat_t* dst)
{
try {
 
    cv::pow(*src->v, power, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpreCornerDetect(Mat_t* src, Mat_t* dst, int ksize, int borderType)
{
try {
 
    cv::preCornerDetect(*src->v, *dst->v, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpreCornerDetectV2(UMat_t* src, UMat_t* dst, int ksize, int borderType)
{
try {
 
    cv::preCornerDetect(*src->v, *dst->v, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvprojectPoints(Mat_t* objectPoints, Mat_t* rvec, Mat_t* tvec, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* imagePoints, Mat_t* jacobian, double aspectRatio)
{
try {
 
    cv::projectPoints(*objectPoints->v, *rvec->v, *tvec->v, *cameraMatrix->v, *distCoeffs->v, *imagePoints->v, outarrDefault(jacobian), aspectRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvprojectPointsV2(UMat_t* objectPoints, UMat_t* rvec, UMat_t* tvec, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* imagePoints, UMat_t* jacobian, double aspectRatio)
{
try {
 
    cv::projectPoints(*objectPoints->v, *rvec->v, *tvec->v, *cameraMatrix->v, *distCoeffs->v, *imagePoints->v, outarrDefault(jacobian), aspectRatio);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvputText(Mat_t* img, string_t* text, Point_t* org, int fontFace, double fontScale, 
                                   Scalar_t* color, int thickness, int lineType, bool bottomLeftOrigin)
{
try {
 
    cv::putText(*img->v, string(text->v), *org->v, fontFace, fontScale, *color->v, thickness, lineType, bottomLeftOrigin);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvputTextV2(UMat_t* img, string_t* text, Point_t* org, int fontFace, double fontScale, 
                                   Scalar_t* color, int thickness, int lineType, bool bottomLeftOrigin)
{
try {
 
    cv::putText(*img->v, string(text->v), *org->v, fontFace, fontScale, *color->v, thickness, lineType, bottomLeftOrigin);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpyrDown(Mat_t* src, Mat_t* dst, Size_t* dstsize, int borderType)
{
try {
 
    Size x3; if (dstsize == 0) { Size_t a3; x3 = Size(); a3.v = &x3; dstsize = &a3; };     
    cv::pyrDown(*src->v, *dst->v, *dstsize->v, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpyrDownV2(UMat_t* src, UMat_t* dst, Size_t* dstsize, int borderType)
{
try {
 
    Size x3; if (dstsize == 0) { Size_t a3; x3 = Size(); a3.v = &x3; dstsize = &a3; };     
    cv::pyrDown(*src->v, *dst->v, *dstsize->v, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpyrMeanShiftFiltering(Mat_t* src, Mat_t* dst, double sp, double sr, int maxLevel, 
                                   TermCriteria_t* termcrit)
{
try {
 
    TermCriteria x6; if (termcrit == 0) { TermCriteria_t a6; x6 = TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5,1); a6.v = &x6; termcrit = &a6; };     
    cv::pyrMeanShiftFiltering(*src->v, *dst->v, sp, sr, maxLevel, *termcrit->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpyrMeanShiftFilteringV2(UMat_t* src, UMat_t* dst, double sp, double sr, int maxLevel, 
                                   TermCriteria_t* termcrit)
{
try {
 
    TermCriteria x6; if (termcrit == 0) { TermCriteria_t a6; x6 = TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5,1); a6.v = &x6; termcrit = &a6; };     
    cv::pyrMeanShiftFiltering(*src->v, *dst->v, sp, sr, maxLevel, *termcrit->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpyrUp(Mat_t* src, Mat_t* dst, Size_t* dstsize, int borderType)
{
try {
 
    Size x3; if (dstsize == 0) { Size_t a3; x3 = Size(); a3.v = &x3; dstsize = &a3; };     
    cv::pyrUp(*src->v, *dst->v, *dstsize->v, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvpyrUpV2(UMat_t* src, UMat_t* dst, Size_t* dstsize, int borderType)
{
try {
 
    Size x3; if (dstsize == 0) { Size_t a3; x3 = Size(); a3.v = &x3; dstsize = &a3; };     
    cv::pyrUp(*src->v, *dst->v, *dstsize->v, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrandShuffle(Mat_t* dst, double iterFactor, RNG_t* rng)
{
try {
 
    RNG* x3; if (rng == 0) { RNG_t a3; x3 = 0; a3.v = x3; rng = &a3; };     
    cv::randShuffle(*dst->v, iterFactor, rng->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrandShuffleV2(UMat_t* dst, double iterFactor, RNG_t* rng)
{
try {
 
    RNG* x3; if (rng == 0) { RNG_t a3; x3 = 0; a3.v = x3; rng = &a3; };     
    cv::randShuffle(*dst->v, iterFactor, rng->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrandn(Mat_t* dst, Mat_t* mean, Mat_t* stddev)
{
try {
 
    cv::randn(*dst->v, *mean->v, *stddev->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrandnV2(UMat_t* dst, UMat_t* mean, UMat_t* stddev)
{
try {
 
    cv::randn(*dst->v, *mean->v, *stddev->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrandu(Mat_t* dst, Mat_t* _low, Mat_t* _high)
{
try {
 
    cv::randu(*dst->v, *_low->v, *_high->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvranduV2(UMat_t* dst, UMat_t* _low, UMat_t* _high)
{
try {
 
    cv::randu(*dst->v, *_low->v, *_high->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Mat_t*)   pCvreadOpticalFlow(string_t* path)
{
    Mat_t*  retval = new Mat_t;
try { 
    Mat tr = cv::readOpticalFlow(string(path->v));
    Mat*  t = new Mat();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPose(Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix1, Mat_t* distCoeffs1, 
                                   Mat_t* cameraMatrix2, Mat_t* distCoeffs2, Mat_t* E, Mat_t* R, Mat_t* t, int method, double prob, 
                                   double threshold, Mat_t* mask)
{
    int retval = 0;
try {
 
    retval = cv::recoverPose(*points1->v, *points2->v, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *E->v, *R->v, *t->v, method, prob, threshold, ioarrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV2(UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix1, UMat_t* distCoeffs1, 
                                   UMat_t* cameraMatrix2, UMat_t* distCoeffs2, UMat_t* E, UMat_t* R, UMat_t* t, int method, 
                                   double prob, double threshold, UMat_t* mask)
{
    int retval = 0;
try {
 
    retval = cv::recoverPose(*points1->v, *points2->v, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *E->v, *R->v, *t->v, method, prob, threshold, ioarrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV3(Mat_t* E, Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix, Mat_t* R, 
                                   Mat_t* t, Mat_t* mask)
{
    int retval = 0;
try {
 
    retval = cv::recoverPose(*E->v, *points1->v, *points2->v, *cameraMatrix->v, *R->v, *t->v, ioarrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV4(UMat_t* E, UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix, UMat_t* R, 
                                   UMat_t* t, UMat_t* mask)
{
    int retval = 0;
try {
 
    retval = cv::recoverPose(*E->v, *points1->v, *points2->v, *cameraMatrix->v, *R->v, *t->v, ioarrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV5(Mat_t* E, Mat_t* points1, Mat_t* points2, Mat_t* R, Mat_t* t, double focal, 
                                   Point2d_t* pp, Mat_t* mask)
{
    int retval = 0;
try {
 
    Point2d x7; if (pp == 0) { Point2d_t a7; x7 = Point2d(0, 0); a7.v = &x7; pp = &a7; };     
    retval = cv::recoverPose(*E->v, *points1->v, *points2->v, *R->v, *t->v, focal, *pp->v, ioarrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV6(UMat_t* E, UMat_t* points1, UMat_t* points2, UMat_t* R, UMat_t* t, 
                                   double focal, Point2d_t* pp, UMat_t* mask)
{
    int retval = 0;
try {
 
    Point2d x7; if (pp == 0) { Point2d_t a7; x7 = Point2d(0, 0); a7.v = &x7; pp = &a7; };     
    retval = cv::recoverPose(*E->v, *points1->v, *points2->v, *R->v, *t->v, focal, *pp->v, ioarrDefault(mask));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV7(Mat_t* E, Mat_t* points1, Mat_t* points2, Mat_t* cameraMatrix, Mat_t* R, 
                                   Mat_t* t, double distanceThresh, Mat_t* mask, Mat_t* triangulatedPoints)
{
    int retval = 0;
try {
 
    retval = cv::recoverPose(*E->v, *points1->v, *points2->v, *cameraMatrix->v, *R->v, *t->v, distanceThresh, ioarrDefault(mask), outarrDefault(triangulatedPoints));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrecoverPoseV8(UMat_t* E, UMat_t* points1, UMat_t* points2, UMat_t* cameraMatrix, UMat_t* R, 
                                   UMat_t* t, double distanceThresh, UMat_t* mask, UMat_t* triangulatedPoints)
{
    int retval = 0;
try {
 
    retval = cv::recoverPose(*E->v, *points1->v, *points2->v, *cameraMatrix->v, *R->v, *t->v, distanceThresh, ioarrDefault(mask), outarrDefault(triangulatedPoints));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvrectangle(Mat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::rectangle(*img->v, *pt1->v, *pt2->v, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrectangleV2(UMat_t* img, Point_t* pt1, Point_t* pt2, Scalar_t* color, int thickness, 
                                   int lineType, int shift)
{
try {
 
    cv::rectangle(*img->v, *pt1->v, *pt2->v, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrectangleV3(Mat_t* img, Rect_t* rec, Scalar_t* color, int thickness, int lineType, 
                                   int shift)
{
try {
 
    cv::rectangle(*img->v, *rec->v, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrectangleV4(UMat_t* img, Rect_t* rec, Scalar_t* color, int thickness, int lineType, 
                                   int shift)
{
try {
 
    cv::rectangle(*img->v, *rec->v, *color->v, thickness, lineType, shift);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(float)   pCvrectify3Collinear(Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Mat_t* cameraMatrix3, Mat_t* distCoeffs3, vector_Mat* imgpt1, 
                                   vector_Mat* imgpt3, Size_t* imageSize, Mat_t* R12, Mat_t* T12, Mat_t* R13, Mat_t* T13, 
                                   Mat_t* R1, Mat_t* R2, Mat_t* R3, Mat_t* P1, Mat_t* P2, Mat_t* P3, Mat_t* Q, 
                                   double alpha, Size_t* newImgSize, Rect_t* roi1, Rect_t* roi2, int flags)
{
    float retval = 0;
try {
 
    retval = cv::rectify3Collinear(*cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *cameraMatrix3->v, *distCoeffs3->v, *imgpt1, *imgpt3, *imageSize->v, *R12->v, *T12->v, *R13->v, *T13->v, *R1->v, *R2->v, *R3->v, *P1->v, *P2->v, *P3->v, *Q->v, alpha, *newImgSize->v, roi1->v, roi2->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(float)   pCvrectify3CollinearV2(UMat_t* cameraMatrix1, UMat_t* distCoeffs1, UMat_t* cameraMatrix2, 
                                   UMat_t* distCoeffs2, UMat_t* cameraMatrix3, UMat_t* distCoeffs3, vector_UMat* imgpt1, 
                                   vector_UMat* imgpt3, Size_t* imageSize, UMat_t* R12, UMat_t* T12, UMat_t* R13, 
                                   UMat_t* T13, UMat_t* R1, UMat_t* R2, UMat_t* R3, UMat_t* P1, UMat_t* P2, 
                                   UMat_t* P3, UMat_t* Q, double alpha, Size_t* newImgSize, Rect_t* roi1, 
                                   Rect_t* roi2, int flags)
{
    float retval = 0;
try {
 
    retval = cv::rectify3Collinear(*cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *cameraMatrix3->v, *distCoeffs3->v, *imgpt1, *imgpt3, *imageSize->v, *R12->v, *T12->v, *R13->v, *T13->v, *R1->v, *R2->v, *R3->v, *P1->v, *P2->v, *P3->v, *Q->v, alpha, *newImgSize->v, roi1->v, roi2->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvreduce(Mat_t* src, Mat_t* dst, int dim, int rtype, int dtype)
{
try {
 
    cv::reduce(*src->v, *dst->v, dim, rtype, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreduceV2(UMat_t* src, UMat_t* dst, int dim, int rtype, int dtype)
{
try {
 
    cv::reduce(*src->v, *dst->v, dim, rtype, dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreduceArgMax(Mat_t* src, Mat_t* dst, int axis, bool lastIndex)
{
try {
 
    cv::reduceArgMax(*src->v, *dst->v, axis, lastIndex);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreduceArgMaxV2(UMat_t* src, UMat_t* dst, int axis, bool lastIndex)
{
try {
 
    cv::reduceArgMax(*src->v, *dst->v, axis, lastIndex);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreduceArgMin(Mat_t* src, Mat_t* dst, int axis, bool lastIndex)
{
try {
 
    cv::reduceArgMin(*src->v, *dst->v, axis, lastIndex);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreduceArgMinV2(UMat_t* src, UMat_t* dst, int axis, bool lastIndex)
{
try {
 
    cv::reduceArgMin(*src->v, *dst->v, axis, lastIndex);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvremap(Mat_t* src, Mat_t* dst, Mat_t* map1, Mat_t* map2, int interpolation, int borderMode, 
                                   Scalar_t* borderValue)
{
try {
 
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; borderValue = &a7; };     
    cv::remap(*src->v, *dst->v, *map1->v, *map2->v, interpolation, borderMode, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvremapV2(UMat_t* src, UMat_t* dst, UMat_t* map1, UMat_t* map2, int interpolation, 
                                   int borderMode, Scalar_t* borderValue)
{
try {
 
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; borderValue = &a7; };     
    cv::remap(*src->v, *dst->v, *map1->v, *map2->v, interpolation, borderMode, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrepeat(Mat_t* src, int ny, int nx, Mat_t* dst)
{
try {
 
    cv::repeat(*src->v, ny, nx, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrepeatV2(UMat_t* src, int ny, int nx, UMat_t* dst)
{
try {
 
    cv::repeat(*src->v, ny, nx, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreprojectImageTo3D(Mat_t* disparity, Mat_t* _3dImage, Mat_t* Q, bool handleMissingValues, 
                                   int ddepth)
{
try {
 
    cv::reprojectImageTo3D(*disparity->v, *_3dImage->v, *Q->v, handleMissingValues, ddepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvreprojectImageTo3DV2(UMat_t* disparity, UMat_t* _3dImage, UMat_t* Q, 
                                   bool handleMissingValues, int ddepth)
{
try {
 
    cv::reprojectImageTo3D(*disparity->v, *_3dImage->v, *Q->v, handleMissingValues, ddepth);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvresize(Mat_t* src, Mat_t* dst, Size_t* dsize, double fx, double fy, int interpolation)
{
try {
 
    cv::resize(*src->v, *dst->v, *dsize->v, fx, fy, interpolation);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvresizeV2(UMat_t* src, UMat_t* dst, Size_t* dsize, double fx, double fy, int interpolation)
{
try {
 
    cv::resize(*src->v, *dst->v, *dsize->v, fx, fy, interpolation);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvresizeWindow(string_t* winname, int width, int height)
{
try {
 
    cv::resizeWindow(string(winname->v), width, height);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvresizeWindowV2(string_t* winname, Size_t* size)
{
try {
 
    cv::resizeWindow(string(winname->v), *size->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrotate(Mat_t* src, Mat_t* dst, int rotateCode)
{
try {
 
    cv::rotate(*src->v, *dst->v, rotateCode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvrotateV2(UMat_t* src, UMat_t* dst, int rotateCode)
{
try {
 
    cv::rotate(*src->v, *dst->v, rotateCode);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvrotatedRectangleIntersection(RotatedRect_t* rect1, RotatedRect_t* rect2, 
                                   Mat_t* intersectingRegion)
{
    int retval = 0;
try {
 
    retval = cv::rotatedRectangleIntersection(*rect1->v, *rect2->v, *intersectingRegion->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvrotatedRectangleIntersectionV2(RotatedRect_t* rect1, RotatedRect_t* rect2, 
                                   UMat_t* intersectingRegion)
{
    int retval = 0;
try {
 
    retval = cv::rotatedRectangleIntersection(*rect1->v, *rect2->v, *intersectingRegion->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvsamples_addSamplesDataSearchPath(string_t* path)
{
try {
 
    cv::samples::addSamplesDataSearchPath(string(path->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsamples_addSamplesDataSearchSubDirectory(string_t* subdir)
{
try {
 
    cv::samples::addSamplesDataSearchSubDirectory(string(subdir->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvsamples_findFile(string_t* relative_path, bool required, bool silentMode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::samples::findFile(string(relative_path->v), required, silentMode);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvsamples_findFileOrKeep(string_t* relative_path, bool silentMode)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::samples::findFileOrKeep(string(relative_path->v), silentMode);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvsampsonDistance(Mat_t* pt1, Mat_t* pt2, Mat_t* F)
{
    double retval = 0;
try {
 
    retval = cv::sampsonDistance(*pt1->v, *pt2->v, *F->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvsampsonDistanceV2(UMat_t* pt1, UMat_t* pt2, UMat_t* F)
{
    double retval = 0;
try {
 
    retval = cv::sampsonDistance(*pt1->v, *pt2->v, *F->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvscaleAdd(Mat_t* src1, double alpha, Mat_t* src2, Mat_t* dst)
{
try {
 
    cv::scaleAdd(*src1->v, alpha, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvscaleAddV2(UMat_t* src1, double alpha, UMat_t* src2, UMat_t* dst)
{
try {
 
    cv::scaleAdd(*src1->v, alpha, *src2->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvseamlessClone(Mat_t* src, Mat_t* dst, Mat_t* mask, Point_t* p, Mat_t* blend, int flags)
{
try {
 
    cv::seamlessClone(*src->v, *dst->v, *mask->v, *p->v, *blend->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvseamlessCloneV2(UMat_t* src, UMat_t* dst, UMat_t* mask, Point_t* p, UMat_t* blend, 
                                   int flags)
{
try {
 
    cv::seamlessClone(*src->v, *dst->v, *mask->v, *p->v, *blend->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Rect_t*)   pCvselectROI(string_t* windowName, Mat_t* img, bool showCrosshair, bool fromCenter)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::selectROI(string(windowName->v), *img->v, showCrosshair, fromCenter);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvselectROIV2(string_t* windowName, UMat_t* img, bool showCrosshair, bool fromCenter)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::selectROI(string(windowName->v), *img->v, showCrosshair, fromCenter);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvselectROIV3(Mat_t* img, bool showCrosshair, bool fromCenter)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::selectROI(*img->v, showCrosshair, fromCenter);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Rect_t*)   pCvselectROIV4(UMat_t* img, bool showCrosshair, bool fromCenter)
{
    Rect_t*  retval = new Rect_t;
try { 
    Rect tr = cv::selectROI(*img->v, showCrosshair, fromCenter);
    Rect*  t = new Rect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvselectROIs(string_t* windowName, Mat_t* img, vector_Rect* boundingBoxes, 
                                   bool showCrosshair, bool fromCenter)
{
try {
 
    cv::selectROIs(string(windowName->v), *img->v, *boundingBoxes, showCrosshair, fromCenter);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvselectROIsV2(string_t* windowName, UMat_t* img, vector_Rect* boundingBoxes, 
                                   bool showCrosshair, bool fromCenter)
{
try {
 
    cv::selectROIs(string(windowName->v), *img->v, *boundingBoxes, showCrosshair, fromCenter);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsepFilter2D(Mat_t* src, Mat_t* dst, int ddepth, Mat_t* kernelX, Mat_t* kernelY, 
                                   Point_t* anchor, double delta, int borderType)
{
try {
 
    Point x6; if (anchor == 0) { Point_t a6; x6 = Point(-1,-1); a6.v = &x6; anchor = &a6; };     
    cv::sepFilter2D(*src->v, *dst->v, ddepth, *kernelX->v, *kernelY->v, *anchor->v, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsepFilter2DV2(UMat_t* src, UMat_t* dst, int ddepth, UMat_t* kernelX, UMat_t* kernelY, 
                                   Point_t* anchor, double delta, int borderType)
{
try {
 
    Point x6; if (anchor == 0) { Point_t a6; x6 = Point(-1,-1); a6.v = &x6; anchor = &a6; };     
    cv::sepFilter2D(*src->v, *dst->v, ddepth, *kernelX->v, *kernelY->v, *anchor->v, delta, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetIdentity(Mat_t* mtx, Scalar_t* s)
{
try {
 
    Scalar x2; if (s == 0) { Scalar_t a2; x2 = Scalar(1); a2.v = &x2; s = &a2; };     
    cv::setIdentity(*mtx->v, *s->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetIdentityV2(UMat_t* mtx, Scalar_t* s)
{
try {
 
    Scalar x2; if (s == 0) { Scalar_t a2; x2 = Scalar(1); a2.v = &x2; s = &a2; };     
    cv::setIdentity(*mtx->v, *s->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvsetLogLevel(int level)
{
    int retval = 0;
try {
 
    retval = cv::setLogLevel(level);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvsetNumThreads(int nthreads)
{
try {
 
    cv::setNumThreads(nthreads);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetRNGSeed(int seed)
{
try {
 
    cv::setRNGSeed(seed);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetTrackbarMax(string_t* trackbarname, string_t* winname, int maxval)
{
try {
 
    cv::setTrackbarMax(string(trackbarname->v), string(winname->v), maxval);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetTrackbarMin(string_t* trackbarname, string_t* winname, int minval)
{
try {
 
    cv::setTrackbarMin(string(trackbarname->v), string(winname->v), minval);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetTrackbarPos(string_t* trackbarname, string_t* winname, int _pos)
{
try {
 
    cv::setTrackbarPos(string(trackbarname->v), string(winname->v), _pos);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetUseOptimized(bool onoff)
{
try {
 
    cv::setUseOptimized(onoff);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetWindowProperty(string_t* winname, int prop_id, double prop_value)
{
try {
 
    cv::setWindowProperty(string(winname->v), prop_id, prop_value);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsetWindowTitle(string_t* winname, string_t* title)
{
try {
 
    cv::setWindowTitle(string(winname->v), string(title->v));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvsolve(Mat_t* src1, Mat_t* src2, Mat_t* dst, int flags)
{
    bool retval;
try {
 
    retval = cv::solve(*src1->v, *src2->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolveV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, int flags)
{
    bool retval;
try {
 
    retval = cv::solve(*src1->v, *src2->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvsolveCubic(Mat_t* coeffs, Mat_t* roots)
{
    int retval = 0;
try {
 
    retval = cv::solveCubic(*coeffs->v, *roots->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvsolveCubicV2(UMat_t* coeffs, UMat_t* roots)
{
    int retval = 0;
try {
 
    retval = cv::solveCubic(*coeffs->v, *roots->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvsolveP3P(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   vector_Mat* rvecs, vector_Mat* tvecs, int flags)
{
    int retval = 0;
try {
 
    retval = cv::solveP3P(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvsolveP3PV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, vector_UMat* rvecs, vector_UMat* tvecs, int flags)
{
    int retval = 0;
try {
 
    retval = cv::solveP3P(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolvePnP(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* rvec, Mat_t* tvec, bool useExtrinsicGuess, int flags)
{
    bool retval;
try {
 
    retval = cv::solvePnP(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, useExtrinsicGuess, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolvePnPV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, bool useExtrinsicGuess, int flags)
{
    bool retval;
try {
 
    retval = cv::solvePnP(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, useExtrinsicGuess, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvsolvePnPGeneric(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, vector_Mat* rvecs, vector_Mat* tvecs, bool useExtrinsicGuess, 
                                   SolvePnPMethod flags, Mat_t* rvec, Mat_t* tvec, Mat_t* reprojectionError)
{
    int retval = 0;
try {
 
    retval = cv::solvePnPGeneric(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, useExtrinsicGuess, flags, inparrDefault(rvec), inparrDefault(tvec), outarrDefault(reprojectionError));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvsolvePnPGenericV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, vector_UMat* rvecs, vector_UMat* tvecs, bool useExtrinsicGuess, 
                                   SolvePnPMethod flags, UMat_t* rvec, UMat_t* tvec, UMat_t* reprojectionError)
{
    int retval = 0;
try {
 
    retval = cv::solvePnPGeneric(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvecs, *tvecs, useExtrinsicGuess, flags, inparrDefault(rvec), inparrDefault(tvec), outarrDefault(reprojectionError));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolvePnPRansac(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, bool useExtrinsicGuess, int iterationsCount, 
                                   float reprojectionError, double confidence, Mat_t* inliers, int flags)
{
    bool retval;
try {
 
    retval = cv::solvePnPRansac(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, useExtrinsicGuess, iterationsCount, reprojectionError, confidence, outarrDefault(inliers), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolvePnPRansacV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, bool useExtrinsicGuess, int iterationsCount, 
                                   float reprojectionError, double confidence, UMat_t* inliers, int flags)
{
    bool retval;
try {
 
    retval = cv::solvePnPRansac(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, useExtrinsicGuess, iterationsCount, reprojectionError, confidence, outarrDefault(inliers), flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolvePnPRansacV3(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, Mat_t* inliers, UsacParams_t* params)
{
    bool retval;
try {
 
    UsacParams x8; if (params == 0) { UsacParams_t a8; x8 = UsacParams(); a8.v = &x8; params = &a8; };     
    retval = cv::solvePnPRansac(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, *inliers->v, *params->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvsolvePnPRansacV4(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, UMat_t* inliers, UsacParams_t* params)
{
    bool retval;
try {
 
    UsacParams x8; if (params == 0) { UsacParams_t a8; x8 = UsacParams(); a8.v = &x8; params = &a8; };     
    retval = cv::solvePnPRansac(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, *inliers->v, *params->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvsolvePnPRefineLM(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, TermCriteria_t* criteria)
{
try {
 
    TermCriteria x7; if (criteria == 0) { TermCriteria_t a7; x7 = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON); a7.v = &x7; criteria = &a7; };     
    cv::solvePnPRefineLM(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsolvePnPRefineLMV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, TermCriteria_t* criteria)
{
try {
 
    TermCriteria x7; if (criteria == 0) { TermCriteria_t a7; x7 = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON); a7.v = &x7; criteria = &a7; };     
    cv::solvePnPRefineLM(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsolvePnPRefineVVS(Mat_t* objectPoints, Mat_t* imagePoints, Mat_t* cameraMatrix, 
                                   Mat_t* distCoeffs, Mat_t* rvec, Mat_t* tvec, TermCriteria_t* criteria, double VVSlambda)
{
try {
 
    TermCriteria x7; if (criteria == 0) { TermCriteria_t a7; x7 = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON); a7.v = &x7; criteria = &a7; };     
    cv::solvePnPRefineVVS(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, *criteria->v, VVSlambda);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsolvePnPRefineVVSV2(UMat_t* objectPoints, UMat_t* imagePoints, UMat_t* cameraMatrix, 
                                   UMat_t* distCoeffs, UMat_t* rvec, UMat_t* tvec, TermCriteria_t* criteria, 
                                   double VVSlambda)
{
try {
 
    TermCriteria x7; if (criteria == 0) { TermCriteria_t a7; x7 = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON); a7.v = &x7; criteria = &a7; };     
    cv::solvePnPRefineVVS(*objectPoints->v, *imagePoints->v, *cameraMatrix->v, *distCoeffs->v, *rvec->v, *tvec->v, *criteria->v, VVSlambda);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvsolvePoly(Mat_t* coeffs, Mat_t* roots, int maxIters)
{
    double retval = 0;
try {
 
    retval = cv::solvePoly(*coeffs->v, *roots->v, maxIters);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvsolvePolyV2(UMat_t* coeffs, UMat_t* roots, int maxIters)
{
    double retval = 0;
try {
 
    retval = cv::solvePoly(*coeffs->v, *roots->v, maxIters);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvsort(Mat_t* src, Mat_t* dst, int flags)
{
try {
 
    cv::sort(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsortV2(UMat_t* src, UMat_t* dst, int flags)
{
try {
 
    cv::sort(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsortIdx(Mat_t* src, Mat_t* dst, int flags)
{
try {
 
    cv::sortIdx(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsortIdxV2(UMat_t* src, UMat_t* dst, int flags)
{
try {
 
    cv::sortIdx(*src->v, *dst->v, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvspatialGradient(Mat_t* src, Mat_t* dx, Mat_t* dy, int ksize, int borderType)
{
try {
 
    cv::spatialGradient(*src->v, *dx->v, *dy->v, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvspatialGradientV2(UMat_t* src, UMat_t* dx, UMat_t* dy, int ksize, int borderType)
{
try {
 
    cv::spatialGradient(*src->v, *dx->v, *dy->v, ksize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsplit(Mat_t* m, vector_Mat* mv)
{
try {
 
    cv::split(*m->v, *mv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsplitV2(UMat_t* m, vector_UMat* mv)
{
try {
 
    cv::split(*m->v, *mv);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsqrBoxFilter(Mat_t* src, Mat_t* dst, int ddepth, Size_t* ksize, Point_t* anchor, 
                                   bool normalize, int borderType)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1, -1); a5.v = &x5; anchor = &a5; };     
    cv::sqrBoxFilter(*src->v, *dst->v, ddepth, *ksize->v, *anchor->v, normalize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsqrBoxFilterV2(UMat_t* src, UMat_t* dst, int ddepth, Size_t* ksize, Point_t* anchor, 
                                   bool normalize, int borderType)
{
try {
 
    Point x5; if (anchor == 0) { Point_t a5; x5 = Point(-1, -1); a5.v = &x5; anchor = &a5; };     
    cv::sqrBoxFilter(*src->v, *dst->v, ddepth, *ksize->v, *anchor->v, normalize, borderType);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsqrt(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::sqrt(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsqrtV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::sqrt(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvstartWindowThread()
{
    int retval = 0;
try {
 
    retval = cv::startWindowThread();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvstereoCalibrate(vector_Mat* objectPoints, vector_Mat* imagePoints1, 
                                   vector_Mat* imagePoints2, Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Size_t* imageSize, Mat_t* R, Mat_t* T, Mat_t* E, Mat_t* F, int flags, 
                                   TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x14; if (criteria == 0) { TermCriteria_t a14; x14 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6); a14.v = &x14; criteria = &a14; };     
    retval = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *imageSize->v, *R->v, *T->v, *E->v, *F->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvstereoCalibrateV2(vector_UMat* objectPoints, vector_UMat* imagePoints1, 
                                   vector_UMat* imagePoints2, UMat_t* cameraMatrix1, UMat_t* distCoeffs1, UMat_t* cameraMatrix2, 
                                   UMat_t* distCoeffs2, Size_t* imageSize, UMat_t* R, UMat_t* T, UMat_t* E, UMat_t* F, 
                                   int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x14; if (criteria == 0) { TermCriteria_t a14; x14 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6); a14.v = &x14; criteria = &a14; };     
    retval = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *imageSize->v, *R->v, *T->v, *E->v, *F->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvstereoCalibrateExtended(vector_Mat* objectPoints, vector_Mat* imagePoints1, 
                                   vector_Mat* imagePoints2, Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Size_t* imageSize, Mat_t* R, Mat_t* T, Mat_t* E, Mat_t* F, 
                                   Mat_t* perViewErrors, int flags, TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x15; if (criteria == 0) { TermCriteria_t a15; x15 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6); a15.v = &x15; criteria = &a15; };     
    retval = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *imageSize->v, *R->v, *T->v, *E->v, *F->v, *perViewErrors->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvstereoCalibrateExtendedV2(vector_UMat* objectPoints, vector_UMat* imagePoints1, 
                                   vector_UMat* imagePoints2, UMat_t* cameraMatrix1, UMat_t* distCoeffs1, 
                                   UMat_t* cameraMatrix2, UMat_t* distCoeffs2, Size_t* imageSize, UMat_t* R, UMat_t* T, 
                                   UMat_t* E, UMat_t* F, UMat_t* perViewErrors, int flags, 
                                   TermCriteria_t* criteria)
{
    double retval = 0;
try {
 
    TermCriteria x15; if (criteria == 0) { TermCriteria_t a15; x15 = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6); a15.v = &x15; criteria = &a15; };     
    retval = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *imageSize->v, *R->v, *T->v, *E->v, *F->v, *perViewErrors->v, flags, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvstereoRectify(Mat_t* cameraMatrix1, Mat_t* distCoeffs1, Mat_t* cameraMatrix2, 
                                   Mat_t* distCoeffs2, Size_t* imageSize, Mat_t* R, Mat_t* T, Mat_t* R1, Mat_t* R2, Mat_t* P1, 
                                   Mat_t* P2, Mat_t* Q, int flags, double alpha, Size_t* newImageSize, 
                                   Rect_t* validPixROI1, Rect_t* validPixROI2)
{
try {
 
    Size x15; if (newImageSize == 0) { Size_t a15; x15 = Size(); a15.v = &x15; newImageSize = &a15; };     
    Rect* x16; if (validPixROI1 == 0) { Rect_t a16; x16 = 0; a16.v = x16; validPixROI1 = &a16; };     
    Rect* x17; if (validPixROI2 == 0) { Rect_t a17; x17 = 0; a17.v = x17; validPixROI2 = &a17; };     
    cv::stereoRectify(*cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *imageSize->v, *R->v, *T->v, *R1->v, *R2->v, *P1->v, *P2->v, *Q->v, flags, alpha, *newImageSize->v, validPixROI1->v, validPixROI2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvstereoRectifyV2(UMat_t* cameraMatrix1, UMat_t* distCoeffs1, UMat_t* cameraMatrix2, 
                                   UMat_t* distCoeffs2, Size_t* imageSize, UMat_t* R, UMat_t* T, UMat_t* R1, UMat_t* R2, 
                                   UMat_t* P1, UMat_t* P2, UMat_t* Q, int flags, double alpha, Size_t* newImageSize, 
                                   Rect_t* validPixROI1, Rect_t* validPixROI2)
{
try {
 
    Size x15; if (newImageSize == 0) { Size_t a15; x15 = Size(); a15.v = &x15; newImageSize = &a15; };     
    Rect* x16; if (validPixROI1 == 0) { Rect_t a16; x16 = 0; a16.v = x16; validPixROI1 = &a16; };     
    Rect* x17; if (validPixROI2 == 0) { Rect_t a17; x17 = 0; a17.v = x17; validPixROI2 = &a17; };     
    cv::stereoRectify(*cameraMatrix1->v, *distCoeffs1->v, *cameraMatrix2->v, *distCoeffs2->v, *imageSize->v, *R->v, *T->v, *R1->v, *R2->v, *P1->v, *P2->v, *Q->v, flags, alpha, *newImageSize->v, validPixROI1->v, validPixROI2->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvstereoRectifyUncalibrated(Mat_t* points1, Mat_t* points2, Mat_t* F, Size_t* imgSize, 
                                   Mat_t* H1, Mat_t* H2, double threshold)
{
    bool retval;
try {
 
    retval = cv::stereoRectifyUncalibrated(*points1->v, *points2->v, *F->v, *imgSize->v, *H1->v, *H2->v, threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvstereoRectifyUncalibratedV2(UMat_t* points1, UMat_t* points2, UMat_t* F, Size_t* imgSize, 
                                   UMat_t* H1, UMat_t* H2, double threshold)
{
    bool retval;
try {
 
    retval = cv::stereoRectifyUncalibrated(*points1->v, *points2->v, *F->v, *imgSize->v, *H1->v, *H2->v, threshold);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvstylization(Mat_t* src, Mat_t* dst, float sigma_s, float sigma_r)
{
try {
 
    cv::stylization(*src->v, *dst->v, sigma_s, sigma_r);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvstylizationV2(UMat_t* src, UMat_t* dst, float sigma_s, float sigma_r)
{
try {
 
    cv::stylization(*src->v, *dst->v, sigma_s, sigma_r);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsubtract(Mat_t* src1, Mat_t* src2, Mat_t* dst, Mat_t* mask, int dtype)
{
try {
 
    cv::subtract(*src1->v, *src2->v, *dst->v, inparrDefault(mask), dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvsubtractV2(UMat_t* src1, UMat_t* src2, UMat_t* dst, UMat_t* mask, int dtype)
{
try {
 
    cv::subtract(*src1->v, *src2->v, *dst->v, inparrDefault(mask), dtype);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(Scalar_t*)   pCvsumElems(Mat_t* src)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::sum(*src->v);
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Scalar_t*)   pCvsumElemsV2(UMat_t* src)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::sum(*src->v);
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvtextureFlattening(Mat_t* src, Mat_t* mask, Mat_t* dst, float low_threshold, 
                                   float high_threshold, int kernel_size)
{
try {
 
    cv::textureFlattening(*src->v, *mask->v, *dst->v, low_threshold, high_threshold, kernel_size);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtextureFlatteningV2(UMat_t* src, UMat_t* mask, UMat_t* dst, float low_threshold, 
                                   float high_threshold, int kernel_size)
{
try {
 
    cv::textureFlattening(*src->v, *mask->v, *dst->v, low_threshold, high_threshold, kernel_size);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(double)   pCvthreshold(Mat_t* src, Mat_t* dst, double thresh, double maxval, int _type)
{
    double retval = 0;
try {
 
    retval = cv::threshold(*src->v, *dst->v, thresh, maxval, _type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(double)   pCvthresholdV2(UMat_t* src, UMat_t* dst, double thresh, double maxval, int _type)
{
    double retval = 0;
try {
 
    retval = cv::threshold(*src->v, *dst->v, thresh, maxval, _type);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Scalar_t*)   pCvtrace(Mat_t* mtx)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::trace(*mtx->v);
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(Scalar_t*)   pCvtraceV2(UMat_t* mtx)
{
    Scalar_t*  retval = new Scalar_t;
try { 
    Scalar tr = cv::trace(*mtx->v);
    Scalar*  t = new Scalar();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvtransform(Mat_t* src, Mat_t* dst, Mat_t* m)
{
try {
 
    cv::transform(*src->v, *dst->v, *m->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtransformV2(UMat_t* src, UMat_t* dst, UMat_t* m)
{
try {
 
    cv::transform(*src->v, *dst->v, *m->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtranspose(Mat_t* src, Mat_t* dst)
{
try {
 
    cv::transpose(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtransposeV2(UMat_t* src, UMat_t* dst)
{
try {
 
    cv::transpose(*src->v, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtransposeND(Mat_t* src, vector_int* order, Mat_t* dst)
{
try {
 
    cv::transposeND(*src->v, *order, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtransposeNDV2(UMat_t* src, vector_int* order, UMat_t* dst)
{
try {
 
    cv::transposeND(*src->v, *order, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtriangulatePoints(Mat_t* projMatr1, Mat_t* projMatr2, Mat_t* projPoints1, 
                                   Mat_t* projPoints2, Mat_t* points4D)
{
try {
 
    cv::triangulatePoints(*projMatr1->v, *projMatr2->v, *projPoints1->v, *projPoints2->v, *points4D->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvtriangulatePointsV2(UMat_t* projMatr1, UMat_t* projMatr2, UMat_t* projPoints1, 
                                   UMat_t* projPoints2, UMat_t* points4D)
{
try {
 
    cv::triangulatePoints(*projMatr1->v, *projMatr2->v, *projPoints1->v, *projPoints2->v, *points4D->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistort(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* newCameraMatrix)
{
try {
 
    cv::undistort(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, inparrDefault(newCameraMatrix));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   UMat_t* newCameraMatrix)
{
try {
 
    cv::undistort(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, inparrDefault(newCameraMatrix));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortImagePoints(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   TermCriteria_t* arg1)
{
try {
 
    TermCriteria x5; if (arg1 == 0) { TermCriteria_t a5; x5 = TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 5, 0.01); a5.v = &x5; arg1 = &a5; };     
    cv::undistortImagePoints(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, *arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortImagePointsV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   TermCriteria_t* arg1)
{
try {
 
    TermCriteria x5; if (arg1 == 0) { TermCriteria_t a5; x5 = TermCriteria(TermCriteria::MAX_ITER + TermCriteria::EPS, 5, 0.01); a5.v = &x5; arg1 = &a5; };     
    cv::undistortImagePoints(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, *arg1->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortPoints(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, Mat_t* R, 
                                   Mat_t* P)
{
try {
 
    cv::undistortPoints(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, inparrDefault(R), inparrDefault(P));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortPointsV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   UMat_t* R, UMat_t* P)
{
try {
 
    cv::undistortPoints(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, inparrDefault(R), inparrDefault(P));
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortPointsIter(Mat_t* src, Mat_t* dst, Mat_t* cameraMatrix, Mat_t* distCoeffs, 
                                   Mat_t* R, Mat_t* P, TermCriteria_t* criteria)
{
try {
 
    cv::undistortPoints(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, *R->v, *P->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvundistortPointsIterV2(UMat_t* src, UMat_t* dst, UMat_t* cameraMatrix, UMat_t* distCoeffs, 
                                   UMat_t* R, UMat_t* P, TermCriteria_t* criteria)
{
try {
 
    cv::undistortPoints(*src->v, *dst->v, *cameraMatrix->v, *distCoeffs->v, *R->v, *P->v, *criteria->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvuseOptimized()
{
    bool retval;
try {
 
    retval = cv::useOptimized();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpBool(bool argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpBool(argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpCString(c_string argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpCString(argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpDouble(double argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpDouble(argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpFloat(float argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpFloat(argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputArray(Mat_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputArray(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputArrayV2(UMat_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputArray(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputArrayOfArrays(vector_Mat* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputArrayOfArrays(*argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputArrayOfArraysV2(vector_UMat* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputArrayOfArrays(*argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputOutputArray(Mat_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputOutputArray(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputOutputArrayV2(UMat_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputOutputArray(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputOutputArrayOfArrays(vector_Mat* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputOutputArrayOfArrays(*argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInputOutputArrayOfArraysV2(vector_UMat* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInputOutputArrayOfArrays(*argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpInt(int argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpInt(argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpRange(Range_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpRange(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpRect(Rect_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpRect(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpRotatedRect(RotatedRect_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpRotatedRect(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpSizeT(size_t argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpSizeT(argument);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpString(string_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpString(string(argument->v));
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpTermCriteria(TermCriteria_t* argument)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpTermCriteria(*argument->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpVectorOfDouble(vector_double* vec)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpVectorOfDouble(*vec);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpVectorOfInt(vector_int* vec)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpVectorOfInt(*vec);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_dumpVectorOfRect(vector_Rect* vec)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::dumpVectorOfRect(*vec);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_fs_getCacheDirectoryForDownloads()
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::fs::getCacheDirectoryForDownloads();
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvutils_generateVectorOfInt(size_t len, vector_int* vec)
{
try {
 
    cv::utils::generateVectorOfInt(len, *vec);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvutils_generateVectorOfMat(size_t len, int rows, int cols, int dtype, vector_Mat* vec)
{
try {
 
    cv::utils::generateVectorOfMat(len, rows, cols, dtype, *vec);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvutils_generateVectorOfRect(size_t len, vector_Rect* vec)
{
try {
 
    cv::utils::generateVectorOfRect(len, *vec);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvutils_nested_testEchoBooleanFunction(bool flag)
{
    bool retval;
try {
 
    retval = cv::utils::nested::testEchoBooleanFunction(flag);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(AsyncArray_t*)   pCvutils_testAsyncArray(Mat_t* argument)
{
    AsyncArray_t*  retval = new AsyncArray_t;
try { 
    AsyncArray tr = cv::utils::testAsyncArray(*argument->v);
    AsyncArray*  t = new AsyncArray();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(AsyncArray_t*)   pCvutils_testAsyncArrayV2(UMat_t* argument)
{
    AsyncArray_t*  retval = new AsyncArray_t;
try { 
    AsyncArray tr = cv::utils::testAsyncArray(*argument->v);
    AsyncArray*  t = new AsyncArray();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(AsyncArray_t*)   pCvutils_testAsyncException()
{
    AsyncArray_t*  retval = new AsyncArray_t;
try { 
    AsyncArray tr = cv::utils::testAsyncException();
    AsyncArray*  t = new AsyncArray();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_testOverloadResolution(int value, Point_t* point)
{
    string_t* retval = new string_t;
 try {
 
    Point x2; if (point == 0) { Point_t a2; x2 = Point(42, 24); a2.v = &x2; point = &a2; };     
    string  sr = cv::utils::testOverloadResolution(value, *point->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(string_t*)   pCvutils_testOverloadResolutionV2(Rect_t* rect)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::testOverloadResolution(*rect->v);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvutils_testOverwriteNativeMethod(int argument)
{
    int retval = 0;
try {
 
    retval = cv::utils::testOverwriteNativeMethod(argument);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvutils_testRaiseGeneralException()
{
try {
 
    cv::utils::testRaiseGeneralException();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(string_t*)   pCvutils_testReservedKeywordConversion(int positional_argument, int lambda, int from)
{
    string_t* retval = new string_t;
 try {
 
    string  sr = cv::utils::testReservedKeywordConversion(positional_argument, lambda, from);
    make_result_string(retval, sr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(RotatedRect_t*)   pCvutils_testRotatedRect(float x, float y, float w, float h, float angle)
{
    RotatedRect_t*  retval = new RotatedRect_t;
try { 
    RotatedRect tr = cv::utils::testRotatedRect(x, y, w, h, angle);
    RotatedRect*  t = new RotatedRect();
    retval->v = t;
    class_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(vector_RotatedRect*)   pCvutils_testRotatedRectVector(float x, float y, float w, float h, float angle)
{
vector_RotatedRect* retval = new vector_RotatedRect();
try {
 
    vector_RotatedRect tr = cv::utils::testRotatedRectVector(x, y, w, h, angle);
    vector_RotatedRect_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvvalidateDisparity(Mat_t* disparity, Mat_t* cost, int minDisparity, int numberOfDisparities, 
                                   int disp12MaxDisp)
{
try {
 
    cv::validateDisparity(*disparity->v, *cost->v, minDisparity, numberOfDisparities, disp12MaxDisp);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvvalidateDisparityV2(UMat_t* disparity, UMat_t* cost, int minDisparity, 
                                   int numberOfDisparities, int disp12MaxDisp)
{
try {
 
    cv::validateDisparity(*disparity->v, *cost->v, minDisparity, numberOfDisparities, disp12MaxDisp);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvvconcat(vector_Mat* src, Mat_t* dst)
{
try {
 
    cv::vconcat(*src, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvvconcatV2(vector_UMat* src, UMat_t* dst)
{
try {
 
    cv::vconcat(*src, *dst->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(int)   pCvwaitKey(int delay)
{
    int retval = 0;
try {
 
    retval = cv::waitKey(delay);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(int)   pCvwaitKeyEx(int delay)
{
    int retval = 0;
try {
 
    retval = cv::waitKeyEx(delay);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(void)   pCvwarpAffine(Mat_t* src, Mat_t* dst, Mat_t* M, Size_t* dsize, int flags, int borderMode, 
                                   Scalar_t* borderValue)
{
try {
 
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; borderValue = &a7; };     
    cv::warpAffine(*src->v, *dst->v, *M->v, *dsize->v, flags, borderMode, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwarpAffineV2(UMat_t* src, UMat_t* dst, UMat_t* M, Size_t* dsize, int flags, int borderMode, 
                                   Scalar_t* borderValue)
{
try {
 
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; borderValue = &a7; };     
    cv::warpAffine(*src->v, *dst->v, *M->v, *dsize->v, flags, borderMode, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwarpPerspective(Mat_t* src, Mat_t* dst, Mat_t* M, Size_t* dsize, int flags, int borderMode, 
                                   Scalar_t* borderValue)
{
try {
 
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; borderValue = &a7; };     
    cv::warpPerspective(*src->v, *dst->v, *M->v, *dsize->v, flags, borderMode, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwarpPerspectiveV2(UMat_t* src, UMat_t* dst, UMat_t* M, Size_t* dsize, int flags, 
                                   int borderMode, Scalar_t* borderValue)
{
try {
 
    Scalar x7; if (borderValue == 0) { Scalar_t a7; x7 = Scalar(); a7.v = &x7; borderValue = &a7; };     
    cv::warpPerspective(*src->v, *dst->v, *M->v, *dsize->v, flags, borderMode, *borderValue->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwarpPolar(Mat_t* src, Mat_t* dst, Size_t* dsize, Point2f_t* center, double maxRadius, 
                                   int flags)
{
try {
 
    cv::warpPolar(*src->v, *dst->v, *dsize->v, *center->v, maxRadius, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwarpPolarV2(UMat_t* src, UMat_t* dst, Size_t* dsize, Point2f_t* center, double maxRadius, 
                                   int flags)
{
try {
 
    cv::warpPolar(*src->v, *dst->v, *dsize->v, *center->v, maxRadius, flags);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwatershed(Mat_t* image, Mat_t* markers)
{
try {
 
    cv::watershed(*image->v, *markers->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(void)   pCvwatershedV2(UMat_t* image, UMat_t* markers)
{
try {
 
    cv::watershed(*image->v, *markers->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return;

}
CVAPI(bool)   pCvwriteOpticalFlow(string_t* path, Mat_t* flow)
{
    bool retval;
try {
 
    retval = cv::writeOpticalFlow(string(path->v), *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}
CVAPI(bool)   pCvwriteOpticalFlowV2(string_t* path, UMat_t* flow)
{
    bool retval;
try {
 
    retval = cv::writeOpticalFlow(string(path->v), *flow->v);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};

    return (retval);

}

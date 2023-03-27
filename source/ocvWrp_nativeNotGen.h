/* ocvWrapper: wrapper for C++ API  Opencv interface 

  Copyright (C) 2023 Giandomenico De Sanctis gidesay@yahoo.com

  This source is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This code is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  A copy of the GNU General Public License is available on the World Wide Web
  at <http://www.gnu.org/copyleft/gpl.html>. You can also obtain it by writing
  to the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1335, USA.
*/
#pragma once

template <typename T>
static Ptr<T> *Ptr_cpy(const Ptr<T> &ptr)
{
	return new Ptr<T>(ptr);
}

template<class T1, class T2>
void class_cpy(T1 dest, const T2 src) {
	*dest->v = src;
}

// copy functions for vector elements
void DMatch_cpy(DMatch_t* dest, const DMatch src) {
	*dest->v = src;
}

void KeyPoint_cpy(KeyPoint_t* dest, const KeyPoint src) {
	*dest->v = src;
}

void detail_CameraParams_cpy(detail_CameraParams_t* dest, const detail::CameraParams src) {
	*dest->v = src;
}

void detail_ImageFeatures_cpy(detail_ImageFeatures_t* dest, const detail::ImageFeatures src) {
	*dest->v = src;
}


void detail_MatchesInfo_cpy(detail_MatchesInfo_t* dest, const detail::MatchesInfo src) {
	*dest->v = src;
}

void Range_cpy(Range_t* dest, const Range src) {
	*dest->v = src;
}

void  Rect_cpy(Rect_t* dest, const  Rect src) {
	*dest->v = src;
}

void Rect2d_cpy(Rect2d_t* dest, const Rect2d src) {
	*dest->v = src;
}

void  RotatedRect_cpy(RotatedRect_t* dest, const  RotatedRect src) {
	*dest->v = src;
}

void Size_cpy(Size_t* dest, const Size src) {
	*dest->v = src;
}

void UMat_cpy(UMat_t* dest, const UMat src) {
	*dest->v = src;
}

void  Vec4f_cpy(Vec4f_t* dest, const  Vec4f src) {
	*dest->v = src;
}


void  Vec6f_cpy(Vec6f_t* dest, const  Vec6f src) {
	*dest->v = src;
}

void Point_cpy(Point_t* dest, const Point src) {
	*dest->v = src;
}

void Point2f_cpy(Point2f_t* dest, const Point2f src) {
	*dest->v = src;
}

void dnn_Target_cpy(dnn_Target_t* dest, const dnn::Target src) {
	*dest->v = src;
}

// Functions for Mat default values  
static cv::_OutputArray  outarrDefault(Mat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::noArray();
}

static cv::_InputOutputArray  ioarrDefault(Mat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::noArray();
}

static cv::_InputArray  inparrDefault(Mat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::noArray();
}


static const cv::Mat  inparrConstDefault(Mat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::Mat();
}

static cv::_OutputArray  outarrDefault(UMat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::noArray();
}

static cv::_InputOutputArray  ioarrDefault(UMat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::noArray();
}

static cv::_InputArray  inparrDefault(UMat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::noArray();
}


static const cv::UMat  inparrConstDefault(UMat_t* parm)
{
	return (parm != 0) ? *parm->v : cv::UMat();
}

// Function to prepare a string class return value as a C string
void make_result_string(string_t* retval, string  sr) {
	int len = sr.length() + 1;
	retval->v = (char*)cvAlloc(len * sizeof(char));
	retval->nrchar = len;
	strcpy(retval->v, &sr[0]);
}



//**************************************************************************************
// ---------------------- string class wrapper ---------------------------------

CVAPI(string_t*)   pCvstringCreate(const int nrchar)
{
	string_t* wrapper = new string_t();

try {
	wrapper->v = (char*)cvAlloc((nrchar + 1) * sizeof(char));
	wrapper->nrchar = nrchar;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
	return (wrapper);
}

CVAPI(void)   pCvstringDelete(string_t* wrapper)
{
	assert(wrapper);
	cvFree_((void*)wrapper->v);
	delete wrapper;
	wrapper = 0;
}


// ---------------------- String class wrapper, same as string  ---------------------------------

CVAPI(string_t*)   pCvStringCreate(const int nrchar)
{
	return pCvstringCreate(nrchar);
}

CVAPI(void)   pCvStringDelete(string_t* wrapper)
{
	pCvstringDelete(wrapper);
}


// ---------------------- Mat class wrapper ---------------------------------
void Mat_cpy(Mat_t* dest, Mat src) {
	src.copyTo(*dest->v);
}

CVAPI(struct  Mat_t*)   pCvMatCreate(int ndims, const int* dims, int mtype, uint64 dataptr)
{
	struct Mat_t* wrapper = 0;
try {
		wrapper = new Mat_t();
		if (dataptr == 0) {
			wrapper->v = new cv::Mat(ndims, dims, mtype, 0.0f);
		} else {
			wrapper->v = new cv::Mat(ndims, dims, mtype, (void*)dataptr);
		};

}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
};

	return (wrapper);
}

CVAPI(struct  Mat_t*)   pCvMatCreateEmpty()
{
	struct Mat_t* wrapper = 0;
try {
	wrapper = new Mat_t();
	wrapper->v = new cv::Mat();
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};

	return (wrapper);
}

CVAPI(struct  Mat_t*)   pCvMat2dCreate(int cols, int rows, int mtype)
{
	struct Mat_t* wrapper = 0;
try {
	wrapper = new Mat_t();
	wrapper->v = new cv::Mat(cols, rows, mtype, 0.0f);
}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
};

	return (wrapper);
}

CVAPI(struct  Mat_t*)   pCvMatImageCreate(int width, int height, int mtype)
{
	struct Mat_t* wrapper = 0;
try {
		wrapper = new Mat_t();
		wrapper->v = new cv::Mat(Size(width, height), mtype, Scalar(0.0f));
}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
};

		return (wrapper);
}

CVAPI(struct  Mat_t*)   pCvMatROI(Mat_t* src, CvRectS* roi)
{
	struct Mat_t* wrapper = 0;
try {
	wrapper = new Mat_t();  
	wrapper->v = new cv::Mat();
	*wrapper->v =  (*src->v)(cv::Rect(roi->x, roi->y, roi->width, roi->height) );
}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
};

	return (wrapper);
}

CVAPI(void)   pCvMatDelete(struct Mat_t* wrapper)
{
	assert(wrapper);
	delete wrapper->v;
	delete wrapper;
	wrapper = 0;
}

CVAPI(void)   pCvMatFill(struct Mat_t* wrapper, struct Scalar_t* val, Mat_t* mask)
{
try {
	wrapper->v->setTo(*val->v, inparrDefault(mask));
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};

}


CVAPI(void)   pCvMatScalarOp(struct Mat_t* wrapper, char op, double val)
{
	try {
		switch (op) {
		case '+': (*wrapper->v) += val; break;
		case '-': (*wrapper->v) -= val; break;
		case '*': (*wrapper->v) *= val; break;
		case '/': (*wrapper->v) /= val; break;
		default: exceptionDisplay((string)__func__ + ": " + "Op code can be only '+','-','*','/'");
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ + ": " + e.what());
	};

}



CVAPI(void)   pCvMatCopy(struct Mat_t* src, struct Mat_t* dst)
{
try {
	(src->v)->copyTo(*dst->v);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};

}

CVAPI(struct Mat_t*)   pCvMatClone(struct Mat_t* src)
{
	struct Mat_t* wrapper = 0;
	try {
		wrapper = new Mat_t();
		wrapper->v = new cv::Mat();
		*wrapper->v = (*src->v).clone();
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return (wrapper);
}


CVAPI(void)   pCvMatConvertTo(struct Mat_t* src, struct Mat_t* dst, int outtype, double alpha, double beta)
{
	try {
		(*src->v).convertTo(*dst->v, outtype, alpha, beta);
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ + ": " + e.what());
	};
	return ;
}


CVAPI(void)   pCvMatExtractChannel(struct Mat_t* src, struct Mat_t* dst, int channelId)
{
	try {
		extractChannel(*src->v, *dst->v, channelId);
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ + ": " + e.what());
	};
	return;
}

CVAPI(void)   pCvMatCopyToUmat(struct Mat_t* src, struct UMat_t* dst)
{
	try {
		(src->v)->copyTo(*dst->v);
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};

}

CVAPI(struct UMat_t*)  pCvMatToUmat(struct Mat_t* src )
{
	UMat_t* retval = 0;
	try {
		retval = new UMat_t();
		retval->v = new cv::UMat();
		*retval->v = src->v->getUMat(ACCESS_RW);
		delete src->v;
		delete src;
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return (retval);
}

CVAPI(struct Mat_t*) pCvMatFromUmat(struct UMat_t* src)
{
	Mat_t* retval = 0;
	try {
		retval = new Mat_t();
		retval->v = new cv::Mat();
		*retval->v = src->v->getMat(ACCESS_RW);
		delete src->v;
		delete src;
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return (retval);
}

CVAPI(unsigned char)   pCvMatGetByte(struct Mat_t* wrapper, int rowind, int colind) {
	uchar retval = 0;
try {
	retval = wrapper->v->at<unsigned char>(rowind, colind);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};

	return retval;
}

CVAPI(int)   pCvMatGetInt(struct Mat_t* wrapper, int rowind, int colind) {
	int retval = 0;
try {
	retval = wrapper->v->at<int>(rowind, colind);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};

	return retval;
}

CVAPI(float)   pCvMatGetFloat(struct Mat_t* wrapper, int rowind, int colind) {
	float retval = 0;
try {
	retval = wrapper->v->at<float>(rowind, colind);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return retval;
}

CVAPI(float)   pCvMatGetFloatMultidim(struct Mat_t* wrapper, int* indexes) {
	float retval = 0;
try {
	retval = wrapper->v->at<float>(indexes);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return retval;
}

CVAPI(double)   pCvMatGetDouble(struct Mat_t* wrapper, int rowind, int colind) {
	double retval = 0;
try {
		retval = wrapper->v->at<double>(rowind, colind);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return retval;
}


CVAPI(Vec3b_t*)   pCvMatGetPixelC3(struct Mat_t* wrapper, int rowind, int colind) {
	Vec3b_t* retval = 0;
try {
	retval = new Vec3b_t;
	Vec3b* pr = new Vec3b();
	retval->v = pr;
	Vec3b p = wrapper->v->at<Vec3b>(rowind, colind);
//	Vec3b_cpy(retval, p);
	class_cpy(retval, p);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}


CVAPI(unsigned char)   pCvMatSetByte(struct Mat_t* wrapper, int rowind, int colind, unsigned char value) {
try {
	wrapper->v->at<unsigned char>(rowind, colind) = value;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (value);
}

CVAPI(int)   pCvMatSetInt(struct Mat_t* wrapper, int rowind, int colind, int value) {
try {
	wrapper->v->at<int>(rowind, colind) = value;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (value);
}

CVAPI(float)   pCvMatSetFloat(struct Mat_t* wrapper, int rowind, int colind, float value) {
try {
	wrapper->v->at<float>(rowind, colind) = value;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (value);
}

CVAPI(float)   pCvMatSetFloatMultidim(struct Mat_t* wrapper, int* indexes, float value) {
try {
	wrapper->v->at<float>(indexes) = value;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (value);
}


CVAPI(double)   pCvMatSetDouble(struct Mat_t* wrapper, int rowind, int colind, double value) {
try {
	wrapper->v->at<double>(rowind, colind) = value;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (value);
}


CVAPI(Vec3b_t*)   pCvMatSetPixelC3(struct Mat_t* wrapper, int rowind, int colind, Vec3b_t* value) {
try {
	wrapper->v->at<Vec3b>(rowind, colind) = *value->v;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (value);
}

CVAPI(int)   pCvMatGetWidth(struct Mat_t* wrapper) {
	int retval = 0;
try {
	retval = wrapper->v->cols;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (retval);
}

CVAPI(int)   pCvMatGetHeight(struct Mat_t* wrapper) {
	int retval = 0;
try {
		retval = wrapper->v->rows;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(int)   pCvMatGetChannels(struct Mat_t* wrapper) {
	int retval = 0;
try {
		retval = wrapper->v->channels();
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(int)   pCvMatGetType(struct Mat_t* wrapper) {
	int retval = 0;
try {
		retval = wrapper->v->type();
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(int)   pCvMatGetDimsNum(struct Mat_t* wrapper) {
	int retval = 0;
try {
		retval = wrapper->v->dims;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
return (retval);
}

CVAPI(void)   pCvMatGetDims(struct Mat_t* wrapper, int* dim) {
	try {
		for (int i = 0; i < wrapper->v->dims; i++) {
			dim[i] = (wrapper->v->size)[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ + ": " + e.what());
	};
	return ;
}

CVAPI(uint64)   pCvMatGetData(struct Mat_t* wrapper) {
	uint64 retval = 0;
try {
		retval = (uint64)wrapper->v->data;
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(uint64)   pCvMatGetDimPtr(struct Mat_t* wrapper, int i1, int i2) {
	uint64 retval = 0;
	try {
		retval = (uint64)wrapper->v->ptr(i1, i2);
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ + ": " + e.what());
	};
	return (retval);
}


CVAPI(int)   pCvMatGetDepth(struct Mat_t* wrapper) {
	int retval = 0;
try {
		retval = wrapper->v->depth();
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}

CVAPI(struct Mat_t*)   pCvMatGetRow(struct Mat_t* wrapper, int nrow) {
	Mat_t*  retval = 0;
try {
	Mat tr = (*wrapper->v).row(nrow);
	Mat*  t = new Mat();
	retval = new Mat_t();
	retval->v = t;
	Mat_cpy(retval, tr);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
	return (retval);
}

CVAPI(IplImage*)  pCvMatToIplimage(Mat_t* srcmat)
{
	IplImage* pipl = 0;
try {
	pipl = new IplImage;
	CV_Assert(srcmat->v->dims <= 2);
	CvSize sz = { srcmat->v->cols, srcmat->v->rows };
    cvInitImageHeader(pipl, sz, cvIplDepth(srcmat->v->flags), srcmat->v->channels());
	cvSetData(pipl, srcmat->v->data, (int)srcmat->v->step[0]);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
	return pipl;

}

CVAPI(void)   pCvIplImageDelete(IplImage* pipl)
{
	assert(pipl);
	delete pipl;
}

CVAPI(void) pCvIplImageToMat(IplImage* pipl, Mat_t* outmat) {
try {
	*outmat->v = cv::cvarrToMat(pipl, true);
}
catch (std::exception &e) {
	exceptionDisplay((string)__func__ +  ": " + e.what());
};
}

//**************************************************************************************
//**************************************************************************************

// Copy functions for vectors of vectors 
// used in get element function

void  vector_Mat_cpy(vector_Mat* dest, vector_Mat src) {
       *dest = src;
}

void  vector_DMatch_cpy(vector_DMatch* dest, vector_DMatch src) {
	*dest = src;
}

void  vector_KeyPoint_cpy(vector_KeyPoint* dest, vector_KeyPoint src) {
	*dest = src;
}

void  vector_Point2f_cpy(vector_Point2f* dest, vector_Point2f src) {
	*dest = src;
}


void  vector_RotatedRect_cpy(vector_RotatedRect* dest, vector_RotatedRect src) {
	*dest = src;
}


void  vector_String_cpy(vector_String* dest, vector_String src) {
	*dest = src;
}

void  vector_Target_cpy(vector_Target* dest, vector_Target src) {
	*dest = src;
}


void  vector_float_cpy(vector_float* dest, vector_float src) {
	*dest = src;
}


void  vector_int_cpy(vector_int* dest, vector_int src) {
	*dest = src;
}


void  vector_string_cpy(vector_string* dest, vector_string src) {
	*dest = src;
}


void  vector_uchar_cpy(vector_uchar* dest, vector_uchar src) {
	*dest = src;
}

void  vector_char_cpy(vector_char* dest, vector_char src) {
	*dest = src;
}

void  vector_Point_cpy(vector_Point* dest, vector_Point src) {
	*dest = src;
}


void  vector_MatShape_cpy(vector_MatShape* dest, vector_MatShape src) {
	*dest = src;
}

void  MatShape_cpy(MatShape* dest, MatShape src) {
	*dest = src;
}

//*****************************************************************************************************************


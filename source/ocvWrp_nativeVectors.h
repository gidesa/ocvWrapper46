
// ---------------------- MatShape wrapper ---------------------------------
CVAPI(MatShape*)   pCvMatShapeCreate(int n)
{
     MatShape* wrapper = 0;
try {
     wrapper = new MatShape(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvMatShapeDelete(MatShape* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvMatShapeLength(MatShape* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(int)   pCvMatShapeGet(MatShape* wrapper, int index)
{
     assert(wrapper);
     int retval  = (*wrapper).at(index);
     return (retval);
}


CVAPI(int)   pCvMatShapeSet(MatShape* wrapper, int index, int value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvMatShapeToArray(MatShape* wrapper, int* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
                  outstructs[i] =  (*wrapper).at(i);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvMatShapeFromArray(MatShape* wrapper, int* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
			(*wrapper).at(i) = inpstructs[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_CameraParams wrapper ---------------------------------
CVAPI(vector_CameraParams*)   pCvVectordetail_CameraParamsCreate(int n)
{
     vector_CameraParams* wrapper = 0;
try {
     wrapper = new vector_CameraParams(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectordetail_CameraParamsDelete(vector_CameraParams* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectordetail_CameraParamsLength(vector_CameraParams* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(detail_CameraParams_t*)   pCvVectordetail_CameraParamsGet(vector_CameraParams* wrapper, int index)
{

     detail_CameraParams_t* retval = 0;
try {
     assert(wrapper);
     detail::CameraParams tr  = (*wrapper).at(index);
     retval = new detail_CameraParams_t;
     detail::CameraParams* t = new detail::CameraParams();
     retval->v = t;
     detail_CameraParams_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(detail_CameraParams_t*)   pCvVectordetail_CameraParamsSet(vector_CameraParams* wrapper, int index, detail_CameraParams_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_DMatch wrapper ---------------------------------
CVAPI(vector_DMatch*)   pCvVectorDMatchCreate(int n)
{
     vector_DMatch* wrapper = 0;
try {
     wrapper = new vector_DMatch(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorDMatchDelete(vector_DMatch* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorDMatchLength(vector_DMatch* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(DMatch_t*)   pCvVectorDMatchGet(vector_DMatch* wrapper, int index)
{

     DMatch_t* retval = 0;
try {
     assert(wrapper);
     DMatch tr  = (*wrapper).at(index);
     retval = new DMatch_t;
     DMatch* t = new DMatch();
     retval->v = t;
     DMatch_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(DMatch_t*)   pCvVectorDMatchSet(vector_DMatch* wrapper, int index, DMatch_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_ImageFeatures wrapper ---------------------------------
CVAPI(vector_ImageFeatures*)   pCvVectordetail_ImageFeaturesCreate(int n)
{
     vector_ImageFeatures* wrapper = 0;
try {
     wrapper = new vector_ImageFeatures(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectordetail_ImageFeaturesDelete(vector_ImageFeatures* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectordetail_ImageFeaturesLength(vector_ImageFeatures* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(detail_ImageFeatures_t*)   pCvVectordetail_ImageFeaturesGet(vector_ImageFeatures* wrapper, int index)
{

     detail_ImageFeatures_t* retval = 0;
try {
     assert(wrapper);
     detail::ImageFeatures tr  = (*wrapper).at(index);
     retval = new detail_ImageFeatures_t;
     detail::ImageFeatures* t = new detail::ImageFeatures();
     retval->v = t;
     detail_ImageFeatures_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(detail_ImageFeatures_t*)   pCvVectordetail_ImageFeaturesSet(vector_ImageFeatures* wrapper, int index, detail_ImageFeatures_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_KeyPoint wrapper ---------------------------------
CVAPI(vector_KeyPoint*)   pCvVectorKeyPointCreate(int n)
{
     vector_KeyPoint* wrapper = 0;
try {
     wrapper = new vector_KeyPoint(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorKeyPointDelete(vector_KeyPoint* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorKeyPointLength(vector_KeyPoint* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(KeyPoint_t*)   pCvVectorKeyPointGet(vector_KeyPoint* wrapper, int index)
{

     KeyPoint_t* retval = 0;
try {
     assert(wrapper);
     KeyPoint tr  = (*wrapper).at(index);
     retval = new KeyPoint_t;
     KeyPoint* t = new KeyPoint();
     retval->v = t;
     KeyPoint_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(KeyPoint_t*)   pCvVectorKeyPointSet(vector_KeyPoint* wrapper, int index, KeyPoint_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_Mat wrapper ---------------------------------
CVAPI(vector_Mat*)   pCvVectorMatCreate(int n)
{
     vector_Mat* wrapper = 0;
try {
     wrapper = new vector_Mat(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorMatDelete(vector_Mat* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorMatLength(vector_Mat* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Mat_t*)   pCvVectorMatGet(vector_Mat* wrapper, int index)
{

     Mat_t* retval = 0;
try {
     assert(wrapper);
     Mat tr  = (*wrapper).at(index);
     retval = new Mat_t;
     Mat* t = new Mat();
     retval->v = t;
     Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Mat_t*)   pCvVectorMatSet(vector_Mat* wrapper, int index, Mat_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_MatShape wrapper ---------------------------------
CVAPI(vector_MatShape*)   pCvVectorMatShapeCreate(int n)
{
     vector_MatShape* wrapper = 0;
try {
     wrapper = new vector_MatShape(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorMatShapeDelete(vector_MatShape* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorMatShapeLength(vector_MatShape* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(MatShape*)   pCvVectorMatShapeGet(vector_MatShape* wrapper, int index)
{
     MatShape* retval = 0;
try {
     assert(wrapper);
     MatShape tr  = (*wrapper).at(index);
     retval = new MatShape();
     MatShape_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(MatShape*)   pCvVectorMatShapeSet(vector_MatShape* wrapper, int index, MatShape* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_MatchesInfo wrapper ---------------------------------
CVAPI(vector_MatchesInfo*)   pCvVectordetail_MatchesInfoCreate(int n)
{
     vector_MatchesInfo* wrapper = 0;
try {
     wrapper = new vector_MatchesInfo(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectordetail_MatchesInfoDelete(vector_MatchesInfo* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectordetail_MatchesInfoLength(vector_MatchesInfo* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(detail_MatchesInfo_t*)   pCvVectordetail_MatchesInfoGet(vector_MatchesInfo* wrapper, int index)
{

     detail_MatchesInfo_t* retval = 0;
try {
     assert(wrapper);
     detail::MatchesInfo tr  = (*wrapper).at(index);
     retval = new detail_MatchesInfo_t;
     detail::MatchesInfo* t = new detail::MatchesInfo();
     retval->v = t;
     detail_MatchesInfo_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(detail_MatchesInfo_t*)   pCvVectordetail_MatchesInfoSet(vector_MatchesInfo* wrapper, int index, detail_MatchesInfo_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_Point wrapper ---------------------------------
CVAPI(vector_Point*)   pCvVectorPointCreate(int n)
{
     vector_Point* wrapper = 0;
try {
     wrapper = new vector_Point(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorPointDelete(vector_Point* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorPointLength(vector_Point* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Point_t*)   pCvVectorPointGet(vector_Point* wrapper, int index)
{

     Point_t* retval = 0;
try {
     assert(wrapper);
     Point tr  = (*wrapper).at(index);
     retval = new Point_t;
     Point* t = new Point();
     retval->v = t;
     Point_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Point_t*)   pCvVectorPointSet(vector_Point* wrapper, int index, Point_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorPointToArray(vector_Point* wrapper, CvPointS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Point_t wr;
		for (int i = 0; i < l; i++) {
			Point tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvPointToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorPointFromArray(vector_Point* wrapper, CvPointS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Point_t wr;
		for (int i = 0; i < l; i++) {
			Point tr;
			wr.v = &tr;
		    pCvPointFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_Point2f wrapper ---------------------------------
CVAPI(vector_Point2f*)   pCvVectorPoint2fCreate(int n)
{
     vector_Point2f* wrapper = 0;
try {
     wrapper = new vector_Point2f(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorPoint2fDelete(vector_Point2f* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorPoint2fLength(vector_Point2f* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Point2f_t*)   pCvVectorPoint2fGet(vector_Point2f* wrapper, int index)
{

     Point2f_t* retval = 0;
try {
     assert(wrapper);
     Point2f tr  = (*wrapper).at(index);
     retval = new Point2f_t;
     Point2f* t = new Point2f();
     retval->v = t;
     Point2f_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Point2f_t*)   pCvVectorPoint2fSet(vector_Point2f* wrapper, int index, Point2f_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorPoint2fToArray(vector_Point2f* wrapper, CvPoint2fS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Point2f_t wr;
		for (int i = 0; i < l; i++) {
			Point2f tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvPoint2fToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorPoint2fFromArray(vector_Point2f* wrapper, CvPoint2fS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Point2f_t wr;
		for (int i = 0; i < l; i++) {
			Point2f tr;
			wr.v = &tr;
		    pCvPoint2fFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_Range wrapper ---------------------------------
CVAPI(vector_Range*)   pCvVectorRangeCreate(int n)
{
     vector_Range* wrapper = 0;
try {
     wrapper = new vector_Range(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorRangeDelete(vector_Range* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorRangeLength(vector_Range* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Range_t*)   pCvVectorRangeGet(vector_Range* wrapper, int index)
{

     Range_t* retval = 0;
try {
     assert(wrapper);
     Range tr  = (*wrapper).at(index);
     retval = new Range_t;
     Range* t = new Range();
     retval->v = t;
     Range_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Range_t*)   pCvVectorRangeSet(vector_Range* wrapper, int index, Range_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorRangeToArray(vector_Range* wrapper, CvRangeS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Range_t wr;
		for (int i = 0; i < l; i++) {
			Range tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvRangeToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorRangeFromArray(vector_Range* wrapper, CvRangeS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Range_t wr;
		for (int i = 0; i < l; i++) {
			Range tr;
			wr.v = &tr;
		    pCvRangeFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_Rect wrapper ---------------------------------
CVAPI(vector_Rect*)   pCvVectorRectCreate(int n)
{
     vector_Rect* wrapper = 0;
try {
     wrapper = new vector_Rect(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorRectDelete(vector_Rect* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorRectLength(vector_Rect* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Rect_t*)   pCvVectorRectGet(vector_Rect* wrapper, int index)
{

     Rect_t* retval = 0;
try {
     assert(wrapper);
     Rect tr  = (*wrapper).at(index);
     retval = new Rect_t;
     Rect* t = new Rect();
     retval->v = t;
     Rect_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Rect_t*)   pCvVectorRectSet(vector_Rect* wrapper, int index, Rect_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorRectToArray(vector_Rect* wrapper, CvRectS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Rect_t wr;
		for (int i = 0; i < l; i++) {
			Rect tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvRectToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorRectFromArray(vector_Rect* wrapper, CvRectS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Rect_t wr;
		for (int i = 0; i < l; i++) {
			Rect tr;
			wr.v = &tr;
		    pCvRectFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_Rect2d wrapper ---------------------------------
CVAPI(vector_Rect2d*)   pCvVectorRect2dCreate(int n)
{
     vector_Rect2d* wrapper = 0;
try {
     wrapper = new vector_Rect2d(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorRect2dDelete(vector_Rect2d* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorRect2dLength(vector_Rect2d* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Rect2d_t*)   pCvVectorRect2dGet(vector_Rect2d* wrapper, int index)
{

     Rect2d_t* retval = 0;
try {
     assert(wrapper);
     Rect2d tr  = (*wrapper).at(index);
     retval = new Rect2d_t;
     Rect2d* t = new Rect2d();
     retval->v = t;
     Rect2d_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Rect2d_t*)   pCvVectorRect2dSet(vector_Rect2d* wrapper, int index, Rect2d_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorRect2dToArray(vector_Rect2d* wrapper, CvRect2dS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Rect2d_t wr;
		for (int i = 0; i < l; i++) {
			Rect2d tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvRect2dToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorRect2dFromArray(vector_Rect2d* wrapper, CvRect2dS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Rect2d_t wr;
		for (int i = 0; i < l; i++) {
			Rect2d tr;
			wr.v = &tr;
		    pCvRect2dFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_RotatedRect wrapper ---------------------------------
CVAPI(vector_RotatedRect*)   pCvVectorRotatedRectCreate(int n)
{
     vector_RotatedRect* wrapper = 0;
try {
     wrapper = new vector_RotatedRect(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorRotatedRectDelete(vector_RotatedRect* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorRotatedRectLength(vector_RotatedRect* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(RotatedRect_t*)   pCvVectorRotatedRectGet(vector_RotatedRect* wrapper, int index)
{

     RotatedRect_t* retval = 0;
try {
     assert(wrapper);
     RotatedRect tr  = (*wrapper).at(index);
     retval = new RotatedRect_t;
     RotatedRect* t = new RotatedRect();
     retval->v = t;
     RotatedRect_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(RotatedRect_t*)   pCvVectorRotatedRectSet(vector_RotatedRect* wrapper, int index, RotatedRect_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorRotatedRectToArray(vector_RotatedRect* wrapper, CvRotatedRectS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    RotatedRect_t wr;
		for (int i = 0; i < l; i++) {
			RotatedRect tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvRotatedRectToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorRotatedRectFromArray(vector_RotatedRect* wrapper, CvRotatedRectS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		RotatedRect_t wr;
		for (int i = 0; i < l; i++) {
			RotatedRect tr;
			wr.v = &tr;
		    pCvRotatedRectFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_Size wrapper ---------------------------------
CVAPI(vector_Size*)   pCvVectorSizeCreate(int n)
{
     vector_Size* wrapper = 0;
try {
     wrapper = new vector_Size(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorSizeDelete(vector_Size* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorSizeLength(vector_Size* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Size_t*)   pCvVectorSizeGet(vector_Size* wrapper, int index)
{

     Size_t* retval = 0;
try {
     assert(wrapper);
     Size tr  = (*wrapper).at(index);
     retval = new Size_t;
     Size* t = new Size();
     retval->v = t;
     Size_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Size_t*)   pCvVectorSizeSet(vector_Size* wrapper, int index, Size_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorSizeToArray(vector_Size* wrapper, CvSizeS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Size_t wr;
		for (int i = 0; i < l; i++) {
			Size tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvSizeToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorSizeFromArray(vector_Size* wrapper, CvSizeS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Size_t wr;
		for (int i = 0; i < l; i++) {
			Size tr;
			wr.v = &tr;
		    pCvSizeFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_String wrapper ---------------------------------
CVAPI(vector_String*)   pCvVectorStringCreate(int n)
{
     vector_String* wrapper = 0;
try {
     wrapper = new vector_String(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorStringDelete(vector_String* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorStringLength(vector_String* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(string_t*)   pCvVectorStringGet(vector_String* wrapper, int index)
{
   string_t* retval = 0;
try {
    assert(wrapper);
    int l = (*wrapper).at(index).length();
    retval = pCvstringCreate(l);
    strcpy(retval->v, (*wrapper).at(index).c_str());
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}


CVAPI(string_t*)   pCvVectorStringSet(vector_String* wrapper, int index, string_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_Target wrapper ---------------------------------
CVAPI(vector_Target*)   pCvVectordnn_TargetCreate(int n)
{
     vector_Target* wrapper = 0;
try {
     wrapper = new vector_Target(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectordnn_TargetDelete(vector_Target* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectordnn_TargetLength(vector_Target* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(dnn_Target_t*)   pCvVectordnn_TargetGet(vector_Target* wrapper, int index)
{

     dnn_Target_t* retval = 0;
try {
     assert(wrapper);
     dnn::Target tr  = (*wrapper).at(index);
     retval = new dnn_Target_t;
     dnn::Target* t = new dnn::Target();
     retval->v = t;
     dnn_Target_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(dnn_Target_t*)   pCvVectordnn_TargetSet(vector_Target* wrapper, int index, dnn_Target_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_UMat wrapper ---------------------------------
CVAPI(vector_UMat*)   pCvVectorUMatCreate(int n)
{
     vector_UMat* wrapper = 0;
try {
     wrapper = new vector_UMat(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorUMatDelete(vector_UMat* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorUMatLength(vector_UMat* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(UMat_t*)   pCvVectorUMatGet(vector_UMat* wrapper, int index)
{

     UMat_t* retval = 0;
try {
     assert(wrapper);
     UMat tr  = (*wrapper).at(index);
     retval = new UMat_t;
     UMat* t = new UMat();
     retval->v = t;
     UMat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(UMat_t*)   pCvVectorUMatSet(vector_UMat* wrapper, int index, UMat_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_Vec4f wrapper ---------------------------------
CVAPI(vector_Vec4f*)   pCvVectorVec4fCreate(int n)
{
     vector_Vec4f* wrapper = 0;
try {
     wrapper = new vector_Vec4f(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorVec4fDelete(vector_Vec4f* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorVec4fLength(vector_Vec4f* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Vec4f_t*)   pCvVectorVec4fGet(vector_Vec4f* wrapper, int index)
{

     Vec4f_t* retval = 0;
try {
     assert(wrapper);
     Vec4f tr  = (*wrapper).at(index);
     retval = new Vec4f_t;
     Vec4f* t = new Vec4f();
     retval->v = t;
     Vec4f_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Vec4f_t*)   pCvVectorVec4fSet(vector_Vec4f* wrapper, int index, Vec4f_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorVec4fToArray(vector_Vec4f* wrapper, CvVec4fS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Vec4f_t wr;
		for (int i = 0; i < l; i++) {
			Vec4f tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvVec4fToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorVec4fFromArray(vector_Vec4f* wrapper, CvVec4fS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Vec4f_t wr;
		for (int i = 0; i < l; i++) {
			Vec4f tr;
			wr.v = &tr;
		    pCvVec4fFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_Vec6f wrapper ---------------------------------
CVAPI(vector_Vec6f*)   pCvVectorVec6fCreate(int n)
{
     vector_Vec6f* wrapper = 0;
try {
     wrapper = new vector_Vec6f(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorVec6fDelete(vector_Vec6f* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorVec6fLength(vector_Vec6f* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(Vec6f_t*)   pCvVectorVec6fGet(vector_Vec6f* wrapper, int index)
{

     Vec6f_t* retval = 0;
try {
     assert(wrapper);
     Vec6f tr  = (*wrapper).at(index);
     retval = new Vec6f_t;
     Vec6f* t = new Vec6f();
     retval->v = t;
     Vec6f_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(Vec6f_t*)   pCvVectorVec6fSet(vector_Vec6f* wrapper, int index, Vec6f_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorVec6fToArray(vector_Vec6f* wrapper, CvVec6fS* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
 	    Vec6f_t wr;
		for (int i = 0; i < l; i++) {
			Vec6f tr = (*wrapper).at(i);
			wr.v = &tr;
		    pCvVec6fToStruct(&wr,  &outstructs[i]);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorVec6fFromArray(vector_Vec6f* wrapper, CvVec6fS* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		Vec6f_t wr;
		for (int i = 0; i < l; i++) {
			Vec6f tr;
			wr.v = &tr;
		    pCvVec6fFromStruct(&wr,  &inpstructs[i]);
			(*wrapper).at(i) = tr;
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_char wrapper ---------------------------------
CVAPI(vector_char*)   pCvVectorcharCreate(int n)
{
     vector_char* wrapper = 0;
try {
     wrapper = new vector_char(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorcharDelete(vector_char* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorcharLength(vector_char* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(char)   pCvVectorcharGet(vector_char* wrapper, int index)
{
     assert(wrapper);
     char retval  = (*wrapper).at(index);
     return (retval);
}


CVAPI(char)   pCvVectorcharSet(vector_char* wrapper, int index, char value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorcharToArray(vector_char* wrapper, char* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
                  outstructs[i] =  (*wrapper).at(i);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorcharFromArray(vector_char* wrapper, char* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
			(*wrapper).at(i) = inpstructs[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_double wrapper ---------------------------------
CVAPI(vector_double*)   pCvVectordoubleCreate(int n)
{
     vector_double* wrapper = 0;
try {
     wrapper = new vector_double(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectordoubleDelete(vector_double* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectordoubleLength(vector_double* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(double)   pCvVectordoubleGet(vector_double* wrapper, int index)
{
     assert(wrapper);
     double retval  = (*wrapper).at(index);
     return (retval);
}


CVAPI(double)   pCvVectordoubleSet(vector_double* wrapper, int index, double value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectordoubleToArray(vector_double* wrapper, double* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
                  outstructs[i] =  (*wrapper).at(i);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectordoubleFromArray(vector_double* wrapper, double* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
			(*wrapper).at(i) = inpstructs[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_float wrapper ---------------------------------
CVAPI(vector_float*)   pCvVectorfloatCreate(int n)
{
     vector_float* wrapper = 0;
try {
     wrapper = new vector_float(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorfloatDelete(vector_float* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorfloatLength(vector_float* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(float)   pCvVectorfloatGet(vector_float* wrapper, int index)
{
     assert(wrapper);
     float retval  = (*wrapper).at(index);
     return (retval);
}


CVAPI(float)   pCvVectorfloatSet(vector_float* wrapper, int index, float value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorfloatToArray(vector_float* wrapper, float* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
                  outstructs[i] =  (*wrapper).at(i);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorfloatFromArray(vector_float* wrapper, float* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
			(*wrapper).at(i) = inpstructs[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_int wrapper ---------------------------------
CVAPI(vector_int*)   pCvVectorintCreate(int n)
{
     vector_int* wrapper = 0;
try {
     wrapper = new vector_int(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorintDelete(vector_int* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorintLength(vector_int* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(int)   pCvVectorintGet(vector_int* wrapper, int index)
{
     assert(wrapper);
     int retval  = (*wrapper).at(index);
     return (retval);
}


CVAPI(int)   pCvVectorintSet(vector_int* wrapper, int index, int value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorintToArray(vector_int* wrapper, int* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
                  outstructs[i] =  (*wrapper).at(i);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorintFromArray(vector_int* wrapper, int* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
			(*wrapper).at(i) = inpstructs[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_string wrapper ---------------------------------
CVAPI(vector_string*)   pCvVector_stringCreate(int n)
{
     vector_string* wrapper = 0;
try {
     wrapper = new vector_string(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVector_stringDelete(vector_string* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVector_stringLength(vector_string* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(string_t*)   pCvVector_stringGet(vector_string* wrapper, int index)
{
   string_t* retval = 0;
try {
    assert(wrapper);
    int l = (*wrapper).at(index).length();
    retval = pCvstringCreate(l);
    strcpy(retval->v, (*wrapper).at(index).c_str());
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (retval);
}


CVAPI(string_t*)   pCvVector_stringSet(vector_string* wrapper, int index, string_t* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value->v;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_uchar wrapper ---------------------------------
CVAPI(vector_uchar*)   pCvVectorucharCreate(int n)
{
     vector_uchar* wrapper = 0;
try {
     wrapper = new vector_uchar(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorucharDelete(vector_uchar* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorucharLength(vector_uchar* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(uchar)   pCvVectorucharGet(vector_uchar* wrapper, int index)
{
     assert(wrapper);
     uchar retval  = (*wrapper).at(index);
     return (retval);
}


CVAPI(uchar)   pCvVectorucharSet(vector_uchar* wrapper, int index, uchar value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

CVAPI(void)   pCvVectorucharToArray(vector_uchar* wrapper, uchar* outstructs )
{
	try {
		assert(wrapper);
		assert(outstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
                  outstructs[i] =  (*wrapper).at(i);
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
CVAPI(void)   pCvVectorucharFromArray(vector_uchar* wrapper, uchar* inpstructs )
{
	try {
		assert(wrapper);
		assert(inpstructs);
		int l = (*wrapper).size();
		for (int i = 0; i < l; i++) {
			(*wrapper).at(i) = inpstructs[i];
		};
	}
	catch (std::exception &e) {
		exceptionDisplay((string)__func__ +  ": " + e.what());
	};
	return;
}
// ---------------------- vector_vector_DMatch wrapper ---------------------------------
CVAPI(vector_vector_DMatch*)   pCvVectorvector_DMatchCreate(int n)
{
     vector_vector_DMatch* wrapper = 0;
try {
     wrapper = new vector_vector_DMatch(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_DMatchDelete(vector_vector_DMatch* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_DMatchLength(vector_vector_DMatch* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_DMatch*)   pCvVectorvector_DMatchGet(vector_vector_DMatch* wrapper, int index)
{
     vector_DMatch* retval = 0;
try {
     assert(wrapper);
     vector_DMatch tr  = (*wrapper).at(index);
     retval = new vector_DMatch();
     vector_DMatch_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_DMatch*)   pCvVectorvector_DMatchSet(vector_vector_DMatch* wrapper, int index, vector_DMatch* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_vector_KeyPoint wrapper ---------------------------------
CVAPI(vector_vector_KeyPoint*)   pCvVectorvector_KeyPointCreate(int n)
{
     vector_vector_KeyPoint* wrapper = 0;
try {
     wrapper = new vector_vector_KeyPoint(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_KeyPointDelete(vector_vector_KeyPoint* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_KeyPointLength(vector_vector_KeyPoint* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_KeyPoint*)   pCvVectorvector_KeyPointGet(vector_vector_KeyPoint* wrapper, int index)
{
     vector_KeyPoint* retval = 0;
try {
     assert(wrapper);
     vector_KeyPoint tr  = (*wrapper).at(index);
     retval = new vector_KeyPoint();
     vector_KeyPoint_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_KeyPoint*)   pCvVectorvector_KeyPointSet(vector_vector_KeyPoint* wrapper, int index, vector_KeyPoint* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_vector_Mat wrapper ---------------------------------
CVAPI(vector_vector_Mat*)   pCvVectorvector_MatCreate(int n)
{
     vector_vector_Mat* wrapper = 0;
try {
     wrapper = new vector_vector_Mat(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_MatDelete(vector_vector_Mat* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_MatLength(vector_vector_Mat* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_Mat*)   pCvVectorvector_MatGet(vector_vector_Mat* wrapper, int index)
{
     vector_Mat* retval = 0;
try {
     assert(wrapper);
     vector_Mat tr  = (*wrapper).at(index);
     retval = new vector_Mat();
     vector_Mat_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_Mat*)   pCvVectorvector_MatSet(vector_vector_Mat* wrapper, int index, vector_Mat* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_vector_MatShape wrapper ---------------------------------
CVAPI(vector_vector_MatShape*)   pCvVectorvector_MatShapeCreate(int n)
{
     vector_vector_MatShape* wrapper = 0;
try {
     wrapper = new vector_vector_MatShape(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_MatShapeDelete(vector_vector_MatShape* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_MatShapeLength(vector_vector_MatShape* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_MatShape*)   pCvVectorvector_MatShapeGet(vector_vector_MatShape* wrapper, int index)
{
     vector_MatShape* retval = 0;
try {
     assert(wrapper);
     vector_MatShape tr  = (*wrapper).at(index);
     retval = new vector_MatShape();
     vector_MatShape_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_MatShape*)   pCvVectorvector_MatShapeSet(vector_vector_MatShape* wrapper, int index, vector_MatShape* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_vector_Point wrapper ---------------------------------
CVAPI(vector_vector_Point*)   pCvVectorvector_PointCreate(int n)
{
     vector_vector_Point* wrapper = 0;
try {
     wrapper = new vector_vector_Point(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_PointDelete(vector_vector_Point* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_PointLength(vector_vector_Point* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_Point*)   pCvVectorvector_PointGet(vector_vector_Point* wrapper, int index)
{
     vector_Point* retval = 0;
try {
     assert(wrapper);
     vector_Point tr  = (*wrapper).at(index);
     retval = new vector_Point();
     vector_Point_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_Point*)   pCvVectorvector_PointSet(vector_vector_Point* wrapper, int index, vector_Point* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_vector_Point2f wrapper ---------------------------------
CVAPI(vector_vector_Point2f*)   pCvVectorvector_Point2fCreate(int n)
{
     vector_vector_Point2f* wrapper = 0;
try {
     wrapper = new vector_vector_Point2f(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_Point2fDelete(vector_vector_Point2f* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_Point2fLength(vector_vector_Point2f* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_Point2f*)   pCvVectorvector_Point2fGet(vector_vector_Point2f* wrapper, int index)
{
     vector_Point2f* retval = 0;
try {
     assert(wrapper);
     vector_Point2f tr  = (*wrapper).at(index);
     retval = new vector_Point2f();
     vector_Point2f_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_Point2f*)   pCvVectorvector_Point2fSet(vector_vector_Point2f* wrapper, int index, vector_Point2f* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

// ---------------------- vector_vector_char wrapper ---------------------------------
CVAPI(vector_vector_char*)   pCvVectorvector_charCreate(int n)
{
     vector_vector_char* wrapper = 0;
try {
     wrapper = new vector_vector_char(n);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (wrapper);
}

CVAPI(void)   pCvVectorvector_charDelete(vector_vector_char* wrapper)
{
     assert(wrapper);
     delete wrapper;
     wrapper = 0;
}

CVAPI(int)   pCvVectorvector_charLength(vector_vector_char* wrapper)
{
     int retval = 0;
try {
     retval = (*wrapper).size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}

CVAPI(vector_char*)   pCvVectorvector_charGet(vector_vector_char* wrapper, int index)
{
     vector_char* retval = 0;
try {
     assert(wrapper);
     vector_char tr  = (*wrapper).at(index);
     retval = new vector_char();
     vector_char_cpy(retval, tr);
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return (retval);
}


CVAPI(vector_char*)   pCvVectorvector_charSet(vector_vector_char* wrapper, int index, vector_char* value)
{
try {
     assert(wrapper);
     (*wrapper).at(index) = *value;
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
     return value;
}

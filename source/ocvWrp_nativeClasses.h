
// ---------------------- Size class wrapper ---------------------------------
CVAPI(Size_t*)   pCvSizeCreate()
{
    Size_t* wrapper = new  Size_t();
try {
    wrapper->v = new  Size();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvSizeDelete( Size_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvSizeToStruct( Size_t* wrapper, CvSizeS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->width  = wrapper->v->width;
    dest->height  = wrapper->v->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvSizeFromStruct( Size_t* wrapper, CvSizeS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->width = src->width;
    wrapper->v->height = src->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Rect class wrapper ---------------------------------
CVAPI(Rect_t*)   pCvRectCreate()
{
    Rect_t* wrapper = new  Rect_t();
try {
    wrapper->v = new  Rect();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvRectDelete( Rect_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvRectToStruct( Rect_t* wrapper, CvRectS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->x  = wrapper->v->x;
    dest->y  = wrapper->v->y;
    dest->width  = wrapper->v->width;
    dest->height  = wrapper->v->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvRectFromStruct( Rect_t* wrapper, CvRectS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->x = src->x;
    wrapper->v->y = src->y;
    wrapper->v->width = src->width;
    wrapper->v->height = src->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Range class wrapper ---------------------------------
CVAPI(Range_t*)   pCvRangeCreate()
{
    Range_t* wrapper = new  Range_t();
try {
    wrapper->v = new  Range();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvRangeDelete( Range_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvRangeToStruct( Range_t* wrapper, CvRangeS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->start  = wrapper->v->start;
    dest->end  = wrapper->v->end;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvRangeFromStruct( Range_t* wrapper, CvRangeS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->start = src->start;
    wrapper->v->end = src->end;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- CvSlice class wrapper ---------------------------------
CVAPI(CvSlice_t*)   pCvCvSliceCreate()
{
    CvSlice_t* wrapper = new  CvSlice_t();
try {
    wrapper->v = new  CvSlice();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvCvSliceDelete( CvSlice_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvCvSliceToStruct( CvSlice_t* wrapper, CvSliceS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->start  = wrapper->v->start_index;
    dest->end  = wrapper->v->end_index;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvCvSliceFromStruct( CvSlice_t* wrapper, CvSliceS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->start_index = src->start;
    wrapper->v->end_index = src->end;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Point class wrapper ---------------------------------
CVAPI(Point_t*)   pCvPointCreate()
{
    Point_t* wrapper = new  Point_t();
try {
    wrapper->v = new  Point();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvPointDelete( Point_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvPointToStruct( Point_t* wrapper, CvPointS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->x  = wrapper->v->x;
    dest->y  = wrapper->v->y;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvPointFromStruct( Point_t* wrapper, CvPointS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->x = src->x;
    wrapper->v->y = src->y;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Point2f class wrapper ---------------------------------
CVAPI(Point2f_t*)   pCvPoint2fCreate()
{
    Point2f_t* wrapper = new  Point2f_t();
try {
    wrapper->v = new  Point2f();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvPoint2fDelete( Point2f_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvPoint2fToStruct( Point2f_t* wrapper, CvPoint2fS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->x  = wrapper->v->x;
    dest->y  = wrapper->v->y;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvPoint2fFromStruct( Point2f_t* wrapper, CvPoint2fS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->x = src->x;
    wrapper->v->y = src->y;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Point2d class wrapper ---------------------------------
CVAPI(Point2d_t*)   pCvPoint2dCreate()
{
    Point2d_t* wrapper = new  Point2d_t();
try {
    wrapper->v = new  Point2d();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvPoint2dDelete( Point2d_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvPoint2dToStruct( Point2d_t* wrapper, CvPoint2dS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->x  = wrapper->v->x;
    dest->y  = wrapper->v->y;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvPoint2dFromStruct( Point2d_t* wrapper, CvPoint2dS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->x = src->x;
    wrapper->v->y = src->y;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec2d class wrapper ---------------------------------
CVAPI(Vec2d_t*)   pCvVec2dCreate()
{
    Vec2d_t* wrapper = new  Vec2d_t();
try {
    wrapper->v = new  Vec2d();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec2dDelete( Vec2d_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec2dToStruct( Vec2d_t* wrapper, CvVec2dS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec2dFromStruct( Vec2d_t* wrapper, CvVec2dS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec3d class wrapper ---------------------------------
CVAPI(Vec3d_t*)   pCvVec3dCreate()
{
    Vec3d_t* wrapper = new  Vec3d_t();
try {
    wrapper->v = new  Vec3d();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec3dDelete( Vec3d_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec3dToStruct( Vec3d_t* wrapper, CvVec3dS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];
    dest->v2  = wrapper->v->val[2];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec3dFromStruct( Vec3d_t* wrapper, CvVec3dS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;
    wrapper->v->val[2] = src->v2;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec3b class wrapper ---------------------------------
CVAPI(Vec3b_t*)   pCvVec3bCreate()
{
    Vec3b_t* wrapper = new  Vec3b_t();
try {
    wrapper->v = new  Vec3b();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec3bDelete( Vec3b_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec3bToStruct( Vec3b_t* wrapper, CvVec3bS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];
    dest->v2  = wrapper->v->val[2];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec3bFromStruct( Vec3b_t* wrapper, CvVec3bS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;
    wrapper->v->val[2] = src->v2;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec4f class wrapper ---------------------------------
CVAPI(Vec4f_t*)   pCvVec4fCreate()
{
    Vec4f_t* wrapper = new  Vec4f_t();
try {
    wrapper->v = new  Vec4f();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec4fDelete( Vec4f_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec4fToStruct( Vec4f_t* wrapper, CvVec4fS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];
    dest->v2  = wrapper->v->val[2];
    dest->v3  = wrapper->v->val[3];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec4fFromStruct( Vec4f_t* wrapper, CvVec4fS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;
    wrapper->v->val[2] = src->v2;
    wrapper->v->val[3] = src->v3;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec6f class wrapper ---------------------------------
CVAPI(Vec6f_t*)   pCvVec6fCreate()
{
    Vec6f_t* wrapper = new  Vec6f_t();
try {
    wrapper->v = new  Vec6f();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec6fDelete( Vec6f_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec6fToStruct( Vec6f_t* wrapper, CvVec6fS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];
    dest->v2  = wrapper->v->val[2];
    dest->v3  = wrapper->v->val[3];
    dest->v4  = wrapper->v->val[4];
    dest->v5  = wrapper->v->val[5];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec6fFromStruct( Vec6f_t* wrapper, CvVec6fS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;
    wrapper->v->val[2] = src->v2;
    wrapper->v->val[3] = src->v3;
    wrapper->v->val[4] = src->v4;
    wrapper->v->val[5] = src->v5;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Scalar class wrapper ---------------------------------
CVAPI(Scalar_t*)   pCvScalarCreate()
{
    Scalar_t* wrapper = new  Scalar_t();
try {
    wrapper->v = new  Scalar();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvScalarDelete( Scalar_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvScalarToStruct( Scalar_t* wrapper, CvScalarS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];
    dest->v2  = wrapper->v->val[2];
    dest->v3  = wrapper->v->val[3];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvScalarFromStruct( Scalar_t* wrapper, CvScalarS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;
    wrapper->v->val[2] = src->v2;
    wrapper->v->val[3] = src->v3;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- RotatedRect class wrapper ---------------------------------
CVAPI(RotatedRect_t*)   pCvRotatedRectCreate()
{
    RotatedRect_t* wrapper = new  RotatedRect_t();
try {
    wrapper->v = new  RotatedRect();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvRotatedRectDelete( RotatedRect_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvRotatedRectToStruct( RotatedRect_t* wrapper, CvRotatedRectS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->center.x  = wrapper->v->center.x;
    dest->center.y  = wrapper->v->center.y;
    dest->size.height  = wrapper->v->size.height;
    dest->size.width  = wrapper->v->size.width;
    dest->angle  = wrapper->v->angle;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvRotatedRectFromStruct( RotatedRect_t* wrapper, CvRotatedRectS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->center.x = src->center.x;
    wrapper->v->center.y = src->center.y;
    wrapper->v->size.height = src->size.height;
    wrapper->v->size.width = src->size.width;
    wrapper->v->angle = src->angle;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- TermCriteria class wrapper ---------------------------------
CVAPI(TermCriteria_t*)   pCvTermCriteriaCreate()
{
    TermCriteria_t* wrapper = new  TermCriteria_t();
try {
    wrapper->v = new  TermCriteria();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvTermCriteriaDelete( TermCriteria_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvTermCriteriaToStruct( TermCriteria_t* wrapper, CvTermCriteriaS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->type  = wrapper->v->type;
    dest->max_iter  = wrapper->v->maxCount;
    dest->epsilon  = wrapper->v->epsilon;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvTermCriteriaFromStruct( TermCriteria_t* wrapper, CvTermCriteriaS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->type = src->type;
    wrapper->v->maxCount = src->max_iter;
    wrapper->v->epsilon = src->epsilon;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- CvTermCriteria class wrapper ---------------------------------
CVAPI(CvTermCriteria_t*)   pCvCvTermCriteriaCreate()
{
    CvTermCriteria_t* wrapper = new  CvTermCriteria_t();
try {
    wrapper->v = new  CvTermCriteria();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvCvTermCriteriaDelete( CvTermCriteria_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvCvTermCriteriaToStruct( CvTermCriteria_t* wrapper, CvTermCriteriaS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->type  = wrapper->v->type;
    dest->max_iter  = wrapper->v->max_iter;
    dest->epsilon  = wrapper->v->epsilon;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvCvTermCriteriaFromStruct( CvTermCriteria_t* wrapper, CvTermCriteriaS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->type = src->type;
    wrapper->v->max_iter = src->max_iter;
    wrapper->v->epsilon = src->epsilon;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Moments class wrapper ---------------------------------
CVAPI(Moments_t*)   pCvMomentsCreate()
{
    Moments_t* wrapper = new  Moments_t();
try {
    wrapper->v = new  Moments();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvMomentsDelete( Moments_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvMomentsToStruct( Moments_t* wrapper, CvMomentsS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->m00  = wrapper->v->m00;
    dest->m10  = wrapper->v->m10;
    dest->m01  = wrapper->v->m01;
    dest->m20  = wrapper->v->m20;
    dest->m11  = wrapper->v->m11;
    dest->m30  = wrapper->v->m30;
    dest->m21  = wrapper->v->m21;
    dest->m12  = wrapper->v->m12;
    dest->m03  = wrapper->v->m03;
    dest->mu20  = wrapper->v->mu20;
    dest->mu11  = wrapper->v->mu11;
    dest->mu02  = wrapper->v->mu02;
    dest->mu30  = wrapper->v->mu30;
    dest->mu21  = wrapper->v->mu21;
    dest->mu12  = wrapper->v->mu12;
    dest->mu03  = wrapper->v->mu03;
    dest->nu20  = wrapper->v->nu20;
    dest->nu11  = wrapper->v->nu11;
    dest->nu02  = wrapper->v->nu02;
    dest->nu30  = wrapper->v->nu30;
    dest->nu21  = wrapper->v->nu21;
    dest->nu12  = wrapper->v->nu12;
    dest->nu03  = wrapper->v->nu03;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvMomentsFromStruct( Moments_t* wrapper, CvMomentsS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->m00 = src->m00;
    wrapper->v->m10 = src->m10;
    wrapper->v->m01 = src->m01;
    wrapper->v->m20 = src->m20;
    wrapper->v->m11 = src->m11;
    wrapper->v->m30 = src->m30;
    wrapper->v->m21 = src->m21;
    wrapper->v->m12 = src->m12;
    wrapper->v->m03 = src->m03;
    wrapper->v->mu20 = src->mu20;
    wrapper->v->mu11 = src->mu11;
    wrapper->v->mu02 = src->mu02;
    wrapper->v->mu30 = src->mu30;
    wrapper->v->mu21 = src->mu21;
    wrapper->v->mu12 = src->mu12;
    wrapper->v->mu03 = src->mu03;
    wrapper->v->nu20 = src->nu20;
    wrapper->v->nu11 = src->nu11;
    wrapper->v->nu02 = src->nu02;
    wrapper->v->nu30 = src->nu30;
    wrapper->v->nu21 = src->nu21;
    wrapper->v->nu12 = src->nu12;
    wrapper->v->nu03 = src->nu03;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- IndexParams class wrapper ---------------------------------
CVAPI(IndexParams_t*)   pCvIndexParamsCreate()
{
    IndexParams_t* wrapper = new  IndexParams_t();
try {
    wrapper->v = new  flann::IndexParams();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvIndexParamsDelete( IndexParams_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}

// ---------------------- SearchParams class wrapper ---------------------------------
CVAPI(SearchParams_t*)   pCvSearchParamsCreate()
{
    SearchParams_t* wrapper = new  SearchParams_t();
try {
    wrapper->v = new  flann::SearchParams();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvSearchParamsDelete( SearchParams_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}

// ---------------------- LayerId class wrapper ---------------------------------
CVAPI(LayerId_t*)   pCvLayerIdCreate()
{
    LayerId_t* wrapper = new  LayerId_t();
try {
    wrapper->v = new  dnn::Net::LayerId();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvLayerIdDelete( LayerId_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}

// ---------------------- RNG class wrapper ---------------------------------
CVAPI(RNG_t*)   pCvRNGCreate()
{
    RNG_t* wrapper = new  RNG_t();
try {
    wrapper->v = new  RNG();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvRNGDelete( RNG_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}

// ---------------------- Size2f class wrapper ---------------------------------
CVAPI(Size2f_t*)   pCvSize2fCreate()
{
    Size2f_t* wrapper = new  Size2f_t();
try {
    wrapper->v = new  Size2f();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvSize2fDelete( Size2f_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvSize2fToStruct( Size2f_t* wrapper, CvSize2fS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->width  = wrapper->v->width;
    dest->height  = wrapper->v->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvSize2fFromStruct( Size2f_t* wrapper, CvSize2fS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->width = src->width;
    wrapper->v->height = src->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec2i class wrapper ---------------------------------
CVAPI(Vec2i_t*)   pCvVec2iCreate()
{
    Vec2i_t* wrapper = new  Vec2i_t();
try {
    wrapper->v = new  Vec2i();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec2iDelete( Vec2i_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec2iToStruct( Vec2i_t* wrapper, CvVec2iS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec2iFromStruct( Vec2i_t* wrapper, CvVec2iS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Vec3i class wrapper ---------------------------------
CVAPI(Vec3i_t*)   pCvVec3iCreate()
{
    Vec3i_t* wrapper = new  Vec3i_t();
try {
    wrapper->v = new  Vec3i();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvVec3iDelete( Vec3i_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvVec3iToStruct( Vec3i_t* wrapper, CvVec3iS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->v0  = wrapper->v->val[0];
    dest->v1  = wrapper->v->val[1];
    dest->v2  = wrapper->v->val[2];

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvVec3iFromStruct( Vec3i_t* wrapper, CvVec3iS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->val[0] = src->v0;
    wrapper->v->val[1] = src->v1;
    wrapper->v->val[2] = src->v2;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
// ---------------------- Rect2d class wrapper ---------------------------------
CVAPI(Rect2d_t*)   pCvRect2dCreate()
{
    Rect2d_t* wrapper = new  Rect2d_t();
try {
    wrapper->v = new  Rect2d();
} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
    return (wrapper);
}

CVAPI(void)   pCvRect2dDelete( Rect2d_t* wrapper)
{
    assert(wrapper);
    delete wrapper->v;
    delete wrapper;
    wrapper = 0;
}
CVAPI(void)   pCvRect2dToStruct( Rect2d_t* wrapper, CvRect2dS* dest)
{
try {
    assert(wrapper);
    assert(dest);
    dest->x  = wrapper->v->x;
    dest->y  = wrapper->v->y;
    dest->width  = wrapper->v->width;
    dest->height  = wrapper->v->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}CVAPI(void)   pCvRect2dFromStruct( Rect2d_t* wrapper, CvRect2dS* src)
{
try {
    assert(wrapper);
    assert(src);
    wrapper->v->x = src->x;
    wrapper->v->y = src->y;
    wrapper->v->width = src->width;
    wrapper->v->height = src->height;

} catch (std::exception &e) {
      exceptionDisplay((string)__func__ +  ": " + e.what());
};
}
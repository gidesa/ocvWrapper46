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

#ifdef __cplusplus
extern "C" {
#endif

struct  Mat_t*    pCvMat2dCreate(int cols, int rows, int mtype);
struct  Mat_t*    pCvMatCreate(int ndims, const int* dims, int mtype, int mtype, uint64 dataptr = 0);
struct  Mat_t*    pCvMatCreateEmpty();
struct  Mat_t*    pCvMatImageCreate(int width, int height, int mtype);
void              pCvMatDelete(struct Mat_t* wrapper);
Vec3b_t*          pCvMatGetPixelC3(struct Mat_t* wrapper, int rowind, int colind);
Vec3b_t*          pCvMatSetPixelC3(struct Mat_t* wrapper, int rowind, int colind, Vec3b_t* value); 
double            pCvMatGetDouble(struct Mat_t* wrapper, int rowind, int colind, int channel = 0);
double            pCvMatSetDouble(struct Mat_t* wrapper, int rowind, int colind, double value, int channel = 0); 
float             pCvMatGetFloat(struct Mat_t* wrapper, int rowind, int colind, int channel = 0);
float             pCvMatGetFloatMultidim(struct Mat_t* wrapper, int* indexes); 
float             pCvMatSetFloat(struct Mat_t* wrapper, int rowind, int colind, float value, int channel = 0); 
float             pCvMatSetFloatMultidim(struct Mat_t* wrapper, int* indexes, float value); 
int               pCvMatGetChannels(struct Mat_t* wrapper); 
int               pCvMatGetData(struct Mat_t* wrapper); 
int               pCvMatGetDepth(struct Mat_t* wrapper); 
int               pCvMatGetDimsNum(struct Mat_t* wrapper);
void              pCvMatGetDims(struct Mat_t* wrapper, int* dim); 
uint64            pCvMatGetDimPtr(struct Mat_t* wrapper, int i1, int i2);
int               pCvMatGetHeight(struct Mat_t* wrapper); 
int               pCvMatGetInt(struct Mat_t* wrapper, int rowind, int colind, int channel = 0);
int               pCvMatGetType(struct Mat_t* wrapper); 
int               pCvMatGetWidth(struct Mat_t* wrapper); 
int               pCvMatSetInt(struct Mat_t* wrapper, int rowind, int colind, int value, int channel = 0); 
struct Mat_t*     pCvMatROI(Mat_t* src, CvRectS* roi);
struct Mat_t*     pCvMatClone(struct Mat_t* src);
struct Mat_t*     pCvMatFromUmat(struct UMat_t* src);
struct UMat_t*    pCvMatToUmat(struct Mat_t* src);
struct Mat_t*     pCvMatGetRow(struct Mat_t* wrapper, int nrow);
unsigned char     pCvMatGetByte(struct Mat_t* wrapper, int rowind, int colind, int channel = 0); 
unsigned char     pCvMatSetByte(struct Mat_t* wrapper, int rowind, int colind, unsigned char value, int channel = 0);
void              pCvMatCopy(struct Mat_t* src, struct Mat_t* dst, struct Mat_t* mask);
void              pCvMatCopyToUmat(struct Mat_t* src, struct UMat_t* dst);
void              pCvMatConvertTo(struct Mat_t* src, struct Mat_t* dst, int outtype, double alpha=1.0, double beta=0.0);
void              pCvMatExtractChannel(struct Mat_t* src, struct Mat_t* dst, int channelId);
void              pCvMatFill(struct Mat_t* wrapper, struct Scalar_t* val, struct Mat_t* mask = 0);
void              pCvMatScalarOp(struct Mat_t* wrapper, char op,  double val);

IplImage*         pCvMatToIplimage(Mat_t* srcmat);
void              pCvIplImageDelete(IplImage* pipl);
void              pCvIplImageToMat(IplImage* pipl, Mat_t* outmat); 

string_t*         pCvStringCreate(const int nrchar);
void              pCvStringDelete(string_t* wrapper);
string_t*         pCvstringCreate(const int nrchar);
void              pCvstringDelete(string_t* wrapper);

#ifdef __cplusplus
}
#endif


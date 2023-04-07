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

/* NOTE: to compile in Visual Studio C++, in project options:
 - in preprocessor options define the symbol _CRT_SECURE_NO_WARNINGS 
 - in C/C++ /command line/additional options  add option /bigobj 
 */

#ifdef _USRDLL
#define CVAPI_EXPORTS  1
#else
#undef  CVAPI_EXPORTS
#endif

#pragma warning(disable: 4251  4267 4996)



#include     "opencv2/calib3d.hpp"             
#include     "opencv2/core.hpp"                
#include     "opencv2/core/async.hpp"               
#include     "opencv2/core/bindings_utils.hpp"      
//#include     "opencv2/core/cuda.hpp"       // Cuda not supported         
#include     "opencv2/core/ocl.hpp"                 
#include     "opencv2/core/persistence.hpp"         
#include     "opencv2/core/types.hpp"               
#include     "opencv2/core/utility.hpp"             
#include     "opencv2/dnn/dict.hpp"                
#include     "opencv2/dnn/dnn.hpp"                 
#include     "opencv2/features2d.hpp"          
#include     "opencv2/flann/miniflann.hpp"           
#include     "opencv2/highgui.hpp"           
#include     "opencv2/imgcodecs.hpp"           
#include     "opencv2/imgproc.hpp"             
#include     "opencv2/imgproc/bindings.hpp"            
#include     "opencv2/imgproc/segmentation.hpp"        
#include     "opencv2/ml.hpp"                  
#ifdef _WIN32 
#include     "kdtree.hpp"
#else
#include     "opencv2/kdtree.hpp"
#endif
#include     "opencv2/objdetect.hpp"           
#include     "opencv2/objdetect/face.hpp"                
#include     "opencv2/photo.hpp"               
#include     "opencv2/stitching.hpp"           
#include     "opencv2/stitching/detail/blenders.hpp"            
#include     "opencv2/stitching/detail/camera.hpp"              
#include     "opencv2/stitching/detail/exposure_compensate.hpp" 
#include     "opencv2/stitching/detail/matchers.hpp"            
#include     "opencv2/stitching/detail/motion_estimators.hpp"   
#include     "opencv2/stitching/detail/seam_finders.hpp"        
#include     "opencv2/stitching/detail/timelapsers.hpp"         
#include     "opencv2/stitching/detail/warpers.hpp"             
#include     "opencv2/stitching/warpers.hpp"             
#include     "opencv2/video/background_segm.hpp"     
#include     "opencv2/video/tracking.hpp"            
#include     "opencv2/videoio.hpp"             



using namespace cv;    // OpenCV API is in the C++ "cv" namespace

#include <cstdio>
using namespace std;

#include "ocvWrp_nativeTypes.h"
#include "ocvWrp_c_generated_types.h"


void(*customException) (string_t*) = NULL;

char  emptyString[1] = "";
char* pEmptyString = &emptyString[0];


CVAPI(bool) pCvRedirectException(void * func) {
	if (func != NULL) { customException = (void(*) (string_t*)) (func); return true; }
	else { return false; }
}

void exceptionDisplay(const string msg) {
	if (customException != NULL) {
		string_t* wrapper = new string_t();
		int l = msg.length() + 1;
		wrapper->v = (char*)cvAlloc(l * sizeof(char));
		wrapper->nrchar = l;
		strcpy(wrapper->v, &msg[0]);

		customException(wrapper);
		cvFree_((void*)wrapper->v);
		delete wrapper;
	}
	else {
		cout << msg;  
		throw;
	};
}

#include "ocvWrp_nativeNotGen.h"
#include "ocvWrp_nativeClasses.h"
#include "ocvWrp_nativePtr.h"
#include "ocvWrp_nativeVectors.h"
#include "ocvWrp_c_generated_classes.h"
#include "ocvWrp_c_generated_global_funcs.h"
#include "ocvWrp_c_user_functions.h"



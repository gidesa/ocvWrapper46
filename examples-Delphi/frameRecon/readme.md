# frameRecon demo program
  
This demo program shows the remapping (homography) of an image to a different plane.   
Typical use could be remap the image on the horizontal plane (floor), obtaining so called
"bird eye" view.   

The program try to find a square frame with four vertexes and sides inside the image,
applying the Canny contour extraction and then the findContour algorithm. Only contours having
a minimum area are considered.    
Then apply the approxPolyDP algorithm, this transforms (approximate) the contour in another one having 
less vertexes and sides.   
Only if the new contour has exactly four vertexes, its internal contours are
scanned with  same steps, trying to find an internal frame aligned with the external one.   
If the search succeeded, in next step the program can calculate the projection matrix (homography)
between the image and an horizontal plane, where lies a reference square frame.   
Last step is the remap (warp) of original image on the horizontal plane.   
The projection matrixes and the warped image can be saved.   
Some parameters can be changed/tuned in form. The square frame side to real square side  has influence on the scale
of projection. For example, if square side = 200 pixel, and real side = 200 mm, then 1 pixel = 1 mm, so you can
measure a length in remapped image in pixels and it will be same measure in mm .   

The program requires the so called intrinsics and distortion matrixes of the camera/lens. They can be created
using calibration functions from OpencV, for example using the C++ program calibration.cpp.   

Then print the frame (frame-20cm.pdf is an example containing a square frame of 20 cm side), set it on floor and take
the image with camera. Open the image with frameRecon, and it will recognize the frame and remap the image.
If the frame is not recognized, try to change a bit Canny parameters.   

In this directory there are:
  * example intrinsics and distortion matrixes for fish eye camera  
  * pic1.png image containing the frame  
  * pic1-remapped.png containing the image remapped to floor  
 


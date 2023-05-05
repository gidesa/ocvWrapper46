![OCV46COMPONENTS](ocv46-lazcomponents.png)


# Lazarus components for Opencv 4.6

In this directory there is the package pkpkocvWrapComp.lpk with four components:  
  *  two as image source, TOcvVideoSource and TOcvImageDirectory;   
  *  two as image processors, TOCVProcObjectDetector and TOcvProcFaceDetector   
     (this one can also work as face recognizer)  


There is also a program, createFacesDB, that creates and save on disk a lightweight
    database of faces "signatures". This is needed from the face recognizer class.  

# Installation

 * open package  pkpkocvWrapComp.lpk  
 * compile and install package 
 * recompile and restart Lazarus IDE as required; a new Opencv palette will be added to components palette  
 * IMPORTANT: IDE has to find the ocvCPPWrapper46X64.dll/.so and corresponding Opencv 4.6 64 bit binaries  
   (in Windows, also Visual C++ DLL required). So all these libraries have to be in the path.  
 * open the Project1 demo project  

 IMPORTANT: the object detector and face detector/recognizer components require  
 some neural network files, that have to be downloaded and accessible to components. These are:  

 *  Object detection: different neural networks can be used. One is Yolo V4 lite, download from:  
    binary:  
      https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights  
    config:  
      https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg  
    classes:  
      https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/coco.names  
  
 *  Face Detection: Download face_detection_yunet_2022mar.onnx from  
    https://github.com/opencv/opencv_zoo/tree/master/models/face_detection_yunet  
  
 *  Face Recognition: Download face_recognition_sface_2021dec.onnx from  
    https://github.com/opencv/opencv_zoo/tree/master/models/face_recognition_sface  
  
# How to create a face recognition database

 * prepare a directory with some face images; better if the images are a close-up of face,  
   as passport photo, where the face is easily recognized from algorithm  

 * the image files can be of every type recognized from Opencv, as JPG, BMP, PNG

 * you can add more images for the same man/woman  

 * prepare a index text file, every line has to be a pair <file name>=<subject name>, for example:   
   jon1.jpg=John  
   jon2.jpg=John1  
   jen3.jpg=Jenny  

   Note that every subject name must unique in the file.  

 * execute the generator program in cmd window createFacesDB.exe, with this parameters:  

   createFacesDB <models directory> <faces images directory> <faces names list file> <saved faces db name>  

 * if all is ok, program will save a json file in Opencv format, containing the "signatures" of every faces;   
   they are an array of 128 float numbers
  


#  ocvWrapper46 makefile for Linux

CC          = gcc
CXX         = g++
CFLAGS      = 
CXXFLAGS    = -std=c++11 -lstdc++ -shared -fPIC -Wall
HOME        = _HOMEDIRECTORY_
PROJDIR     = _WRAPPERDIRECTORY_
OCVLIB      = /usr/local/lib
OCVINC      = /usr/local/include/opencv4
SRC         = $(PROJDIR)/source
BUILD       = $(PROJDIR)/bin
INCLUDEDIR  = -I$(SRC) -I$(OCVINC)

LIBDIR      = -L$(OCVLIB)
LIBMOD      = -lopencv_core -lopencv_imgproc  -lopencv_ml  -lopencv_flann           \
	      -lopencv_photo  -lopencv_video  -lopencv_highgui  -lopencv_objdetect      \
	      -lopencv_features2d  -lopencv_calib3d  -lopencv_dnn -lopencv_imgcodecs    \
	      -lopencv_videoio -lopencv_stitching

sharedlib= libocvCPPWrapper46.so
sources = $(SRC)/wrapper.cpp

all:  
	@echo ********************** Compilation
	$(CXX) $(CFLAGS)  $(CXXFLAGS) $(LIBDIR) $(INCLUDEDIR) $(sources) $(LIBMOD)  -o $(sharedlib)
	@echo ********************** Compilation finished

clean:
	rm $(SRC)/$(sharedlib)

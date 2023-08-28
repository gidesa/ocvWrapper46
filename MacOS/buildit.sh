#!/bin/sh

# copy required files
sudo cp ../../opencv-4.6.0/modules/ml/src/kdtree.hpp /usr/local/include/opencv4/opencv2
sudo cp ../../opencv-4.6.0/modules/ml/src/precomp.hpp /usr/local/include/opencv4/opencv2

# alter the precomp file
sudo sed -i -e 's_#include "opencv2/core/private.hpp"_//#include "opencv2/core/private.hpp"_g' /usr/local/include/opencv4/opencv2/precomp.hpp

case "$1" in
mac64)
	cd ../source
	cp ../macOS/Makefile_x86_64 ./Makefile
	make
	cp ./libocvCPPWrapper46.dylib /usr/local/share/x86_64-w64-mingw32/lib/
	cd ../macOS
    ;;
mac64arm)
	cd ../source
	cp ../macOS/Makefile_arm64 ./Makefile
	make
	cp ./libocvCPPWrapper46.dylib /usr/local/lib/
	cd ../macOS
    ;;
*)
	echo "Usage: $0 {mac64|mac64arm}"
	exit 1
	;;
esac

#!/bin/bash
# In your home, download ocvWrapper46 repository 
# Now, you should have folder ocvWrapper46 inside home 
echo "Installing ocvWrapper46"
# Define home directory
HOME=/home/gds
# and Opencv sources directory
OCV=$HOME/Scaricati/opencv-4.6.0
# and ocvWrapper46 repository root folder
WRAP=$HOME/ocvWrapper46

echo "Directories:"
echo "HOME          " $HOME
echo "Opencv        " $OCV
echo "ocvWrapper46  " $WRAP


# Now there is a opencv-4.6.0 directory with Opencv sources
# Create build directory in the opencv directory
cd $OCV 
mkdir -p build && cd build
# copy build_min.sh in build folder and change mode
cp $WRAP/linux/build_min.sh  build_min.sh
chmod a+x build_min.sh
#Launch cmake configured for min compilation
echo "Building Opencv....."
./build_min.sh
# or cmake alternatively with standard options
# cmake  ..
# cmake --build .

# Then, compile Opencv and  install
sudo make install

echo "Done"
# from Opencv build return home
cd $HOME

# copy the header precomp.hpp to home
cp $OCV/modules/ml/src/precomp.hpp   precomp.hpp
# edit precomp.hpp, at line 49:
#   #include "opencv2/core/private.hpp"
# comment to:
#   //#include "opencv2/core/private.hpp"
#
sed -i 's_#include "opencv2/core/private.hpp"_//#include "opencv2/core/private.hpp"_g' precomp.hpp

 
#copy some header files in the installed opencv include
sudo cp $OCV/modules/ml/src/kdtree.hpp    /usr/local/include/opencv4/opencv2
sudo cp precomp.hpp /usr/local/include/opencv4/opencv2
#======================================
# Copy linux/Makefile in source folder 
cp $WRAP/linux/Makefile   $WRAP/source/Makefile


# cd in the source folder 
cd $WRAP/source
# modify the HOME variable in the linux/Makefile with your HOME
SEDCMD1='s|_HOMEDIRECTORY_|'$HOME'|g'
SEDCMD2='s|_WRAPPERDIRECTORY_|'$WRAP'|g'
sed -i -e $SEDCMD1 -e $SEDCMD2 Makefile
# build wrapper
echo "Building wrapper...."
make
echo "Done"

# if it is OK, copy the so file in the /usr/lib to have
# global access:  
sudo cp libocvCPPWrapper46.so  /usr/lib
sudo ldconfig

echo "Install ended without errors"

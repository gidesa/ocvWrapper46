
  Installing ocvWrapper46 on Linux
  ================================

  Tested with:
  * Ubuntu 20
  * Xubuntu 22

  1) Install minimal prerequisites (Ubuntu 20.04 as reference)
     sudo apt update && sudo apt install -y cmake g++ wget unzip
  2) Download and unpack Opencv 4.6 sources in your home directory
     wget -O opencv.zip https://github.com/opencv/opencv/archive/4.6.0.zip
     unzip opencv.zip
  3) Download ocvWrapper46 repository from github in your home   
  4) in install.sh set your home folder, Opencv source folder
     and ocvWrapper folder
  5) change install.sh permission to executable:
     chmod a+x install.sh
  6) run install.sh:
     ./install.sh

  At end you will have Opencv libraries and libocvWrapper46.so installed in
  /usr/lib



# PIV with C++
C++ implementation of OpenPIV using Ubuntu 16.04 LTS

 * This is a C++ implementation of particle image velocimetry (PIV).

 * The original source code for openpiv-c--qt can be found at the following URL (I changed a few things according to pull requests found on the github page): https://github.com/OpenPIV/openpiv-c--qt

 * URL for instructions to install OpenCV (I used 'Option 2'): http://milq.github.io/install-opencv-ubuntu-debian/

 * background_segmentation contains code that creates threshold images from a video my friend took of beer brewing (this video was taken with a smartphone). Those generated images can then be used with the Qt gui to generate vector maps.

 ![alt text](https://github.com/timhills/_piv_/tree/master/openpiv-c--qt/share/images/1.png)

 ![alt text](https://github.com/timhills/_piv_/tree/master/openpiv-c--qt/share/images/1_th.png)

 ![alt text](https://github.com/timhills/_piv_/tree/master/openpiv-c--qt/share/images/openpiv_c++_qt_gui.png)

 ![alt text](https://github.com/timhills/_piv_/tree/master/openpiv-c--qt/share/images/vec_field_102_103.png)

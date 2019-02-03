#include <iostream>
#include <sstream>
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/video/background_segm.hpp>

using namespace std;
using namespace cv;

const string DIR_TO_FLW_VID = "/home/tim/Dropbox/CS3060/openpiv/openpiv-c--qt/" \
                                  "share/images/brewing_video.mp4";

const string SAVE_DIR = "/home/tim/Dropbox/CS3060/piv_images";

std::vector<Mat> images(VideoCapture vid_obj) {
  // Create vector containing images from specified video (vid_obj)
  vector<Mat> img_vector;

  while(1){
    Mat frame;
    vid_obj >> frame;
    img_vector.push_back(frame);

    if(frame.empty()){
      vid_obj.release();
      return img_vector;

    }
  }
}

int is_it_open(VideoCapture vid) {
  // Check to see if video is already open
  if(!vid.isOpened()){
    cout << "Error opening video!" << '\n';
    return -1;
  }
  return 0;
}

int check_vid( std::vector<Mat> img_vec ) {
  // Pass image vector generated from images() func to check
  // if it was generated correctly
  int vec_pos = 0;
  while(!img_vec.empty()){
    imshow("Frame", img_vec[vec_pos]);
    waitKey( 100 ) >= 0;
    vec_pos++;
  }
  return 0;
}

string int_2_str(int num) {
  // Convert an integer to a string using stringstream
  std::stringstream ss;
  ss << num;

  return ss.str();
}

int save_threshold_images(Ptr<BackgroundSubtractor> pMOG2, \
              Mat fgMaskMOG2, std::vector<Mat> img_vec) {
  int vec_pos = 0;
  while(!img_vec.empty()){
    pMOG2 -> apply(img_vec[vec_pos], fgMaskMOG2);
    imwrite(SAVE_DIR + "/" + int_2_str( vec_pos ) + ".png", fgMaskMOG2);
    vec_pos++;
  }

  return 0;
}

int main(int argc, char const *argv[]) {

  std::vector<Mat> img_vec;
  Mat fgMaskMOG2;
  Ptr<BackgroundSubtractor> pMOG2;

  // Create vid object
  VideoCapture vid(DIR_TO_FLW_VID);

  // Check to see if video is already open
  is_it_open(vid);

  // Pass vid object to images function to return vector of images
  img_vec = images(vid);

  // Check if img_vec was generated correctly
  //check_vid(img_vec);

  pMOG2 = cv::createBackgroundSubtractorMOG2();

  save_threshold_images(pMOG2, fgMaskMOG2, img_vec);

  return 0;
}

#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char const *argv[]) {

  cv::Mat image;
  image = cv::imread("L71_0042.jpg", CV_LOAD_IMAGE_COLOR);

  if(! image.data){
    std::cout << "Could not find or open image" << '\n';
    return -1;
  }

  cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
  cv::imshow("Display Window", image);

  cv::waitKey(0);

  return 0;
}

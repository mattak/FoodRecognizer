#include <sstream>
#include <string>
#include <opencv/cv.h>

std::string mat2string(cv::Mat mat){
  std::string s;
  std::stringstream ss;
  for(int i=0;i<mat.cols;i++){
    ss << mat.at<float>(i,0);
    for(int j=1;j<mat.rows;j++){
      ss << " " << mat.at<float>(i,j);
    }
    ss << " \n";
  }
  s = ss.str();
  return s;
}


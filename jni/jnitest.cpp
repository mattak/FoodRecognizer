#include <jni.h>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdio.h>
#include <opencv/cv.h>
#include "util.h"

extern "C"
jstring
Java_ylab_froyo_jnitest_JniTest_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
    std::string s = "Hello from JNI !!";
    char buf[256];
    cv::Mat mat = cv::Mat::zeros(2,2,CV_32F);
    /*for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
        mat.at<float>(i,j) = i*j;
        os << mat.at<float>(i,j) << " ";
      }
      }
    sprintf(buf,"%lf",mat.at<float>(1,1));*/
    mat.at<float>(0,0) = 24.0f;
    std::string ss = mat2string(mat);
    s = s + ss;
    return env->NewStringUTF(s.c_str());
    //return env->NewStringUTF(os.str().c_str());
}

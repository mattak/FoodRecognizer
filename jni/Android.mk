LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CPP_EXTENSION := cpp
LOCAL_MODULE := jnitest
LOCAL_SRC_FILES := jnitest.cpp util.cpp
LOCAL_LDLIBS := -lm -llog
#LOCAL_CFLAGS += -D__ANDROID__ -isystem $(SYSROOT)/usr/include

PATH_TO_OPENCV_ANDROID_BUILD := ~/src/OpenCV-2.2.0/android/build
include $(PATH_TO_OPENCV_ANDROID_BUILD)/android-opencv.mk

LOCAL_LDLIBS += $(OPENCV_LIBS)
LOCAL_C_INCLUDES += $(OPENCV_INCLUDES)

include $(BUILD_SHARED_LIBRARY)
#include $(BUILD_EXECUTABLE)


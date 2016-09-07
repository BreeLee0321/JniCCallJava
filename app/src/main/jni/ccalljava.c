#include<jni.h>
#include <android/log.h>

#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)





void  Java_bree_com_jniccalljava_MainActivity_javaCallc
  (JNIEnv *env, jobject obj){
  LOGI("我是C代码");
  //1.找到类
  jclass clz=(*env)->FindClass(env,"bree/com/jniccalljava/MainActivity");
  jmethodID  mehtodID=(*env)->GetMethodID(env,clz,"cCallJava1","()V");
  //3.调用class里面的这个方法。
  (*env)->CallVoidMethod(env,obj,mehtodID);
  }
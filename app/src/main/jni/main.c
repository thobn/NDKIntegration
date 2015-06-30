#include "com_tutorial_ndkintegration_MainActivity.h"

/*
 * Class:     com_tutorial_ndkintegration_MainActivity
 * Method:    callNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tutorial_ndkintegration_MainActivity_callNative
  (JNIEnv *env, jobject obj) {

   return (*env)->NewStringUTF(env, "Hello the world");

}
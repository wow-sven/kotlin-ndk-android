//
// Created by tan on 16/5/13.
//

#ifndef ANDROID_TOMATO_HELLO_H
#define ANDROID_TOMATO_HELLO_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
        Java_we2009_kotlin_ndk_simple_MainActivity_helloKotlinJni(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif

#endif //ANDROID_TOMATO_HELLO_H

//
// Created by tan on 16/5/13.
//

#include "Hello.h"
#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native-activity", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "native-activity", __VA_ARGS__))

JNIEXPORT jstring JNICALL
        Java_we2009_kotlin_ndk_simple_MainActivity_helloKotlinJni(JNIEnv* env, jobject jo) {

            auto jc = env->FindClass("we2009/kotlin/ndk/simple/MainActivity");

            auto methodId = env->GetMethodID(jc, "jniCallKotlin", "()Ljava/lang/String;");

            return (jstring)env->CallObjectMethod(jo, methodId);
        }
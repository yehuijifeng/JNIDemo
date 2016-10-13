//
// Created by LuHao on 2016/10/10.
//

#include <com_lh_jni_JniKit.h>

JNIEXPORT jint JNICALL Java_com_lh_jni_JniKit_calculate(JNIEnv *env, jclass cls, jint num) {
    return num * num;
}

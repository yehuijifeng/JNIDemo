//
// Created by LuHao on 2016/10/10.
//

#include <net_qiujuer_ndkdemo_jni_MathKit.h>

JNIEXPORT jint JNICALL Java_com_lh_jni_JniKit_calculate(JNIEnv *env, jclass cls, jint num){
        return num*num;
}
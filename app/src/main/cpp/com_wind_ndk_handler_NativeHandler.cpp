

//
// Created by wind on 2023/5/6.
//
#include "com_wind_ndk_handler_NativeHandler.h"
#include "test/handler_thread_test.h"

HandlerThreadTest *thread=0;
JNIEXPORT void JNICALL
Java_com_wind_ndk_handler_NativeHandler_nativeInit(JNIEnv *env, jobject thiz) {
    thread=new HandlerThreadTest;

}



JNIEXPORT void JNICALL
Java_com_wind_ndk_handler_NativeHandler_nativeSendMessage(JNIEnv *env, jobject thiz, jint what,
                                                          jint arg1, jint arg2, jobject obj) {
    if (thread!= nullptr){
        thread->sendMessage(new Message(what,arg1,arg2,obj));
    }
}

JNIEXPORT void JNICALL
Java_com_wind_ndk_handler_NativeHandler_nativeQuit(JNIEnv *env, jobject thiz) {
    if (thread!= nullptr){
        thread->quit();
    }
}
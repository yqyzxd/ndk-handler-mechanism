package com.wind.ndk.handler

/**
 * Copyright (C), 2015-2022, 杭州迈优文化创意有限公司
 * FileName: NativeHandler
 * Author: wind
 * Date: 2023/5/6 13:30
 * Description: 描述该类的作用
 * Path: 路径
 * History:
 *  <author> <time> <version> <desc>
 *
 */
class NativeHandler {

    init {
      nativeInit()
    }

    fun sendMessage(what:Int,arg1:Int,arg2:Int,obj:Any?){
        nativeSendMessage(what,arg1,arg2,obj)
    }



    fun quit(){
        nativeQuit()
    }

    private external fun nativeInit()
    private external fun nativeQuit()
    private external fun nativeSendMessage(what: Int, arg1: Int, arg2: Int, obj: Any?)

    companion object{
        init {
            System.loadLibrary("handler")
        }
    }
}
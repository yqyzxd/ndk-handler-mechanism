package com.wind.ndk.handler

import org.junit.Assert.*

import org.junit.After
import org.junit.Before
import org.junit.Test

/**
 * Copyright (C), 2015-2022, 杭州迈优文化创意有限公司
 * FileName: NativeHandlerTest
 * Author: wind
 * Date: 2023/5/6 14:13
 * Description: 描述该类的作用
 * Path: 路径
 * History:
 * <author> <time> <version> <desc>
 *
</desc></version></time></author> */
class NativeHandlerTest {
    private var mHandler:NativeHandler?=null

    @Before
    fun setUp() {
        mHandler=NativeHandler()
    }

    @After
    fun tearDown() {
    }

    @Test
    fun sendMessage() {
        mHandler?.sendMessage(1,1,1,null)
    }

    @Test
    fun quit() {
        mHandler?.quit()
    }
}
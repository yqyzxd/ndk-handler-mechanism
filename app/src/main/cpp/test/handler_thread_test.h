//
// Created by wind on 2023/5/6.
//

#ifndef NDK_HANDLER_HANDLER_THREAD_TEST_H
#define NDK_HANDLER_HANDLER_THREAD_TEST_H


#include "../handler/handler.h"
#include "../handler/loop_thread.h"
#include "../util/log.h"
#define LOG_TAG "MockHandler"
class HandlerThreadTest: public LoopThread {
public:
    HandlerThreadTest();
    virtual ~HandlerThreadTest();


   void sendEmptyMessage(int what);
   void sendMessage(Message* message);


private:
    Handler* mHandler;

};

class MockHandler :public Handler{
public:
    MockHandler(Looper* looper): Handler(looper){

    }
    void handleMessage(Message *message) override{
        LOGI("what:%d,arg1:%d,arg2:%d",message->what,message->arg1,message->arg2);
    }
};


#endif //NDK_HANDLER_HANDLER_THREAD_TEST_H

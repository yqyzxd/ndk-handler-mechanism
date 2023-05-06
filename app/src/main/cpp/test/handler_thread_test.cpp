//
// Created by wind on 2023/5/6.
//

#include "handler_thread_test.h"
HandlerThreadTest::HandlerThreadTest(): LoopThread() {
    mHandler=new MockHandler(getLooper());
    start();
}
HandlerThreadTest::~HandlerThreadTest() {

}
void HandlerThreadTest::sendEmptyMessage(int what) {
    mHandler->sendMessage(new Message(what));
}
void HandlerThreadTest::sendMessage(Message *message) {
    mHandler->sendMessage(message);
}



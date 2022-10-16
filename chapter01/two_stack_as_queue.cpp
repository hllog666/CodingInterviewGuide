/********************************************************************************
* @author: hllog
* @date: 2022/10/8 2:55
********************************************************************************/


#include <stdexcept>
#include "two_stack_as_queue.h"

void TwoStackAsQueue::PushToPop() {
    if (stackPop_.empty()) {
        while (!stackPush_.empty()) {
            stackPop_.push(stackPush_.top());
            stackPush_.pop();
        }
    }
}

void TwoStackAsQueue::Add(int pushInt) {
    stackPush_.push(pushInt);
    PushToPop();
}

int TwoStackAsQueue::Poll() {
    if (stackPop_.empty() && stackPush_.empty()) {
        throw std::runtime_error("Queue is empty!");
    }
    PushToPop();
    int value = stackPop_.top();
    stackPop_.pop();
    return value;
}

int TwoStackAsQueue::Peek() {
    if (stackPop_.empty() && stackPush_.empty()) {
        throw std::runtime_error("Queue is empty!");
    }
    PushToPop();
    return stackPop_.top();
}
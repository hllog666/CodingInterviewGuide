/********************************************************************************
* @author: hllog
* @date: 2022/10/8 1:41
********************************************************************************/

#include <iostream>
#include <stdexcept>
#include "get_min_stack.h"


void GetMinStack::Push(int newNum) {
    if (stackMin_.empty() || newNum <= GetMin()) {
        stackMin_.push(newNum);
        stackMin_.push(newNum);
    }
    stackData_.push(newNum);
}

int GetMinStack::Pop() {
    if (stackData_.empty()) {
        throw std::runtime_error("Your stack is empty.");
    }
    int value = stackData_.top();
    stackData_.pop();
    if (value == GetMin()) {
        stackMin_.pop();
    }
    return value;
}

int GetMinStack::GetMin() {
    if (stackMin_.empty()) {
        throw std::runtime_error("Your stack is empty.");
    }
    return stackMin_.top();
}

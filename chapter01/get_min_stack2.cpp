/********************************************************************************
* @author: hllog
* @date: 2022/10/8 2:46
********************************************************************************/

#include <stdexcept>
#include "get_min_stack2.h"

void GetMinStack2::Push(int newNum) {
    if (stackMin_.empty() || newNum < GetMin()) {
        stackMin_.push(newNum);
    } else {
        int newMin = stackMin_.top();
        stackMin_.push(newMin);
    }
    stackData_.push(newNum);
}

int GetMinStack2::Pop() {
    if (stackData_.empty()) {
        throw std::runtime_error("Your stack is empty");
    }
    stackMin_.pop();
    int value = stackData_.top();
    stackData_.pop();
    return value;
}

int GetMinStack2::GetMin() {
    if (stackMin_.empty()) {
        throw std::runtime_error("Your stack is empty");
    }
    return stackMin_.top();
}
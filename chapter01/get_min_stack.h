/********************************************************************************
* @author: hllog
* @date: 2022/10/8 1:41
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_GET_MIN_STACK_H
#define CODINGINTERVIEWGUIDE_GET_MIN_STACK_H

#include <stack>

class GetMinStack {
public:
    void Push(int newNum);
    int Pop();
    int GetMin();

private:
    std::stack<int> stackData_;
    std::stack<int> stackMin_;
};


#endif //CODINGINTERVIEWGUIDE_GET_MIN_STACK_H

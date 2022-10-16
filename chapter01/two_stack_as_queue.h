/********************************************************************************
* @author: hllog
* @date: 2022/10/8 2:55
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_TWO_STACK_AS_QUEUE_H
#define CODINGINTERVIEWGUIDE_TWO_STACK_AS_QUEUE_H

#include <stack>


class TwoStackAsQueue {
public:
    void PushToPop();

    void Add(int pushInt);

    int Poll();

    int Peek();

private:
    std::stack<int> stackPush_;
    std::stack<int> stackPop_;
};


#endif //CODINGINTERVIEWGUIDE_TWO_STACK_AS_QUEUE_H

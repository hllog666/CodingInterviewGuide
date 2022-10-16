/********************************************************************************
* @author: hllog
* @date: 2022/10/8 2:46
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_GET_MIN_STACK2_H
#define CODINGINTERVIEWGUIDE_GET_MIN_STACK2_H

#include <stack>

class GetMinStack2 {
public:
    void Push(int newNum);
    int Pop();
    int GetMin();

private:
    std::stack<int> stackData_;
    std::stack<int> stackMin_;
};


#endif //CODINGINTERVIEWGUIDE_GET_MIN_STACK2_H

/********************************************************************************
* @author: hllog
* @date: 2022/10/8 3:11
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_REVERSE_STACK_H
#define CODINGINTERVIEWGUIDE_REVERSE_STACK_H

#include <stack>

class ReverseStack {
public:
    static int GetAndRemoveLastElement(std::stack<int> &st);
    static void Reverse(std::stack<int> &st);
};


#endif //CODINGINTERVIEWGUIDE_REVERSE_STACK_H

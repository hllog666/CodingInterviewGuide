/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:28
********************************************************************************/


#include "hanoi2.h"
#include <iostream>
#include <climits>

int Hanoi2::HanoiProblem(int num, const std::string &left, const std::string &mid, const std::string &right) {
    std::stack<int> leftStack;
    std::stack<int> midStack;
    std::stack<int> rightStack;
    leftStack.push(INT_MAX);
    midStack.push(INT_MAX);
    rightStack.push(INT_MAX);
    for (int i = num; i > 0; i--) {
        leftStack.push(i);
    }
    Action record[] = {No};
    int step = 0;
    while (rightStack.size() != num + 1) {
        step += FromStackToToStack(record, MToL, LToM, leftStack, midStack, left, mid);
        step += FromStackToToStack(record, LToM, MToL, midStack, leftStack, mid, left);
        step += FromStackToToStack(record, RToM, MToR, midStack, rightStack, mid, right);
        step += FromStackToToStack(record, MToR, RToM, rightStack, midStack, right, mid);
    }
    return step;
}

int Hanoi2::FromStackToToStack(Action record[],
                               Action preNoAct,
                               Action nowAct,
                               std::stack<int> &fStack,
                               std::stack<int> &tStack,
                               const std::string &from,
                               const std::string &to) {
    if (record[0] != preNoAct && fStack.top() < tStack.top()) {
        tStack.push(fStack.top());
        fStack.pop();
        std::cout << "Move " << tStack.top() << " from " << from << " to " << to << std::endl;
        record[0] = nowAct;
        return 1;
    }
    return 0;
}
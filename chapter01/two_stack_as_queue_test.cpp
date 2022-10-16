/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:33
********************************************************************************/


#include <iostream>
#include <stack>
#include "two_stack_as_queue.h"

void TwoStackAsQueueTest() {
    std::cout << "TwoStackAsQueueTest start..." << std::endl;
    TwoStackAsQueue que;
    que.Add(1);
    que.Add(2);
    que.Add(3);
    que.Add(4);
    que.Add(5);
    std::cout << que.Peek() << std::endl;
    que.Poll();
    std::cout << que.Peek() << std::endl;
    que.Poll();
    std::cout << que.Peek() << std::endl;
    std::cout << "TwoStackAsQueueTest end..." << std::endl;
}

int main() {
    TwoStackAsQueueTest();
    return 0;
}
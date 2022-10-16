/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:45
********************************************************************************/


#include <iostream>
#include "hanoi2.h"

void HanoiProblemTest() {
    std::cout << "HanoiProblemTest start..." << std::endl;
    std::stack<int> st;
    Hanoi2::HanoiProblem(2, "A", "B", "C");
    std::cout << "HanoiProblemTest end..." << std::endl;
}

int main() {
    HanoiProblemTest();
    return 0;
}
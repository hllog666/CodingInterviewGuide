/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:23
********************************************************************************/


#include <iostream>
#include "hanoi.h"

void HanoiProblemTest() {
    std::cout << "HanoiProblemTest start..." << std::endl;
    Hanoi::HanoiProblem(2, "A", "B", "C");
    std::cout << "HanoiProblemTest end..." << std::endl;
}

int main() {
    HanoiProblemTest();
    return 0;
}
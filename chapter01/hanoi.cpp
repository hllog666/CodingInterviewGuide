/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:08
********************************************************************************/


#include <iostream>
#include "hanoi.h"

int Hanoi::HanoiProblem(int num, const std::string &left, const std::string &mid, const std::string &right) {
    if (num < 1) {
        return 0;
    }
    return Process(num, left, mid, right, left, right);
}

int Hanoi::Process(int num,
                   const std::string &left,
                   const std::string &mid,
                   const std::string &right,
                   const std::string &from,
                   const std::string &to) {
    if (num == 1) {
        if (from == "mid" || to == "mid") {
            std::cout << "Move 1 from " << from << " to " << to << std::endl;
            return 1;
        } else {
            std::cout << "Move 1 from " << from << " to " << mid << std::endl;
            std::cout << "Move 1 from " << mid << " to " << to << std::endl;
            return 2;
        }
    }
    if (from == "mid" || to == "mid") {
        std::string another = (from == left || to == left) ? right : left;
        int part1 = Process(num - 1, left, mid, right, from, another);
        int part2 = 1;
        std::cout << "Move " << num << " from " << from << " to " << to << std::endl;
        int part3 = Process(num - 1, left, mid, right, another, to);
        return part1 + part2 + part3;
    } else {
        int part1 = Process(num - 1, left, mid, right, from, to);
        int part2 = 1;
        std::cout << "Move " << num << " from " << from << " to " << mid << std::endl;
        int part3 = Process(num - 1, left, mid, right, to, from);
        int part4 = 1;
        std::cout << "Move " << num << " from " << mid << " to " << to << std::endl;
        int part5 = Process(num - 1, left, mid, right, from, to);
        return part1 + part2 + part3 + part4 + part5;
    }
}
/********************************************************************************
* @author: hllog
* @date: 2022/10/9 20:48
********************************************************************************/


#include <iostream>
#include "monotonic_stack.h"

void RightWayTest() {
    std::cout << "RightWayTest start..." << std::endl;
    int arr[] = {3, 4, 1, 5, 6, 2, 7};
    int len = sizeof(arr) / sizeof(int);
    int **ans = MonotonicStack::RightWay(arr, len);
    for (int i = 0; i < len; i++) {
        std::cout << ans[i][0] << " " << ans[i][1] << std::endl;
    }
    std::cout << "RightWayTest end..." << std::endl;
}

void GetNearLessNoRepeatTest() {
    std::cout << "GetNearLessNoRepeatTest start..." << std::endl;
    int arr[] = {3, 4, 1, 5, 6, 2, 7};
    int len = sizeof(arr) / sizeof(int);
    int **ans = MonotonicStack::GetNearLessNoRepeat(arr, len);
    for (int i = 0; i < len; i++) {
        std::cout << ans[i][0] << " " << ans[i][1] << std::endl;
    }
    std::cout << "GetNearLessNoRepeatTest end..." << std::endl;
}

void GetNearLessTest() {
    std::cout << "GetNearLessTest start..." << std::endl;
    int arr[] = {3, 4, 1, 5, 6, 2, 7};
    int len = sizeof(arr) / sizeof(int);
    int **ans = MonotonicStack::GetNearLess(arr, len);
    for (int i = 0; i < len; i++) {
        std::cout << ans[i][0] << " " << ans[i][1] << std::endl;
    }
    std::cout << "GetNearLessTest end..." << std::endl;
}

int main() {
    RightWayTest();
    GetNearLessNoRepeatTest();
    GetNearLessTest();
    return 0;
}
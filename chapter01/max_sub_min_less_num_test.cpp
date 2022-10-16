/********************************************************************************
* @author: hllog
* @date: 2022/10/10 22:34
********************************************************************************/


#include <iostream>
#include "max_sub_min_less_num.h"

void GetNumTest() {
    std::cout << "GetNumTest start..." << std::endl;
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ans = MaxSubMinLessNum::GetNum(arr, len, 2);
    std::cout << ans << std::endl;
    std::cout << "GetNumTest end..." << std::endl;
}

int main() {
    GetNumTest();
    return 0;
}
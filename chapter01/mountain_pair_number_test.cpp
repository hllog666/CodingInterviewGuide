/********************************************************************************
* @author: hllog
* @date: 2022/10/12 0:41
********************************************************************************/

#include <iostream>
#include "mountain_pair_number.h"

void GetVisibleNumTest() {
    std::cout << "GetVisibleNumTest start..." << std::endl;
    int arr[] = {3, 1, 2, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ans = MountainPairNumber::GetVisibleNum(arr, len);
    std::cout << ans << std::endl;
    std::cout << "GetVisibleNumTest end..." << std::endl;
}

int main() {
    GetVisibleNumTest();
    return 0;
}
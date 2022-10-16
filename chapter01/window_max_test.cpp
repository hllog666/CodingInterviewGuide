/********************************************************************************
* @author: hllog
* @date: 2022/10/9 3:05
********************************************************************************/


#include <iostream>
#include "window_max.h"

void GetMaxWindowTest() {
    std::cout << "GetMaxWindowTest start..." << std::endl;
    int arr[] = {4, 3, 5, 4, 3, 3, 6, 7};
    int w = 3;
    int *p = WindowMax::GetMaxWindow(arr, sizeof(arr) / sizeof(arr[0]), w);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - w + 1; i++) {
        std::cout << *(p + i) << std::endl;
    }
    std::cout << "GetMaxWindowTest end..." << std::endl;
}

int main() {
    GetMaxWindowTest();
    return 0;
}
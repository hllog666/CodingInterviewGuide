/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:50
********************************************************************************/


#include "window_max.h"
#include <list>

int *WindowMax::GetMaxWindow(const int arr[], int size, int w) {
    if (arr == nullptr || w < 1 || size < w) {
        return nullptr;
    }
    std::list<int> qMax;
    int *ans = new int[size - w + 1];
    int index = 0;
    for (int i = 0; i < size; i++) {
        while (!qMax.empty() && arr[qMax.back()] <= arr[i]) {
            qMax.pop_back();
        }
        qMax.emplace_back(i);
        if (qMax.front() == i - w) {
            qMax.pop_front();
        }
        if (i >= w - 1) {
            ans[index++] = arr[qMax.front()];
        }
    }
    return ans;
}
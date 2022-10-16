/********************************************************************************
* @author: hllog
* @date: 2022/10/10 22:23
********************************************************************************/


#include <list>
#include "max_sub_min_less_num.h"

int MaxSubMinLessNum::GetNum(const int arr[], int len, int num) {
    if (arr == nullptr || len == 0 || num < 0) {
        return 0;
    }
    std::list<int> qMin;
    std::list<int> qMax;
    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < len) {
        while (j < len) {
            if (qMin.empty() || qMin.back() != j) {
                while (!qMin.empty() && arr[qMin.back()] >= arr[j]) {
                    qMin.pop_back();
                }
                qMin.push_back(j);
                while (!qMax.empty() && arr[qMax.back()] <= arr[j]) {
                    qMax.pop_back();
                }
                qMax.push_back(j);
            }
            if (arr[qMax.front()] - arr[qMin.front()] > num) {
                break;
            }
            j++;
        }
        ans += j - i;
        if (qMin.front() == i) {
            qMin.pop_front();
        }
        if (qMax.front() == i) {
            qMax.pop_front();
        }
        i++;
    }
    return ans;
}
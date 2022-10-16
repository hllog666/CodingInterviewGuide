/********************************************************************************
* @author: hllog
* @date: 2022/10/12 0:27
********************************************************************************/


#include "mountain_pair_number.h"
#include <stack>

Record::Record(int value) {
    this->value_ = value;
    this->times_ = 1;
}

int MountainPairNumber::GetVisibleNum(int arr[], int len) {
    if (arr == nullptr || len < 2) {
        return 0;
    }
    int maxIndex = 0;
    for (int i = 0; i < len; i++) {
        maxIndex = arr[maxIndex] < arr[i] ? i : maxIndex;
    }
    std::stack<Record> st;
    st.push(*(new Record(arr[maxIndex])));
    int index = NextIndex(maxIndex, len);
    int ans = 0;
    while (index != maxIndex) {
        while (st.top().value_ < arr[maxIndex]) {
            int k = st.top().times_;
            st.pop();
            ans += GetInternalSum(k) + 2 * k;
        }
        if (st.top().value_ == arr[index]) {
            st.top().times_++;
        } else {
            st.push(*(new Record(arr[index])));
        }
        index = NextIndex(index, len);
    }
    while (st.size() > 2) {
        int times = st.top().times_;
        st.pop();
        ans += GetInternalSum(times) + 2 * times;
    }
    if (st.size() == 2) {
        int times = st.top().times_;
        ans += GetInternalSum(times) + (st.top().times_ == 1 ? times : 2 * times);
    }
    ans += GetInternalSum(st.top().times_);
    return ans;
}

int MountainPairNumber::GetInternalSum(int k) {
    return k == 1 ? 0 : (k * (k - 1) / 2);
}

int MountainPairNumber::NextIndex(int i, int size) {
    return i < (size - 1) ? (i + 1) : 0;
}
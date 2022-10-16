/********************************************************************************
* @author: hllog
* @date: 2022/10/9 20:41
********************************************************************************/


#include "monotonic_stack.h"
#include <stack>
#include <vector>

int **MonotonicStack::RightWay(const int arr[], int len) {
    int **ans = new int *[len];
    for (int i = 0; i < len; i++) {
        ans[i] = new int[2];
    }
    for (int i = 0; i < len; i++) {
        int leftLessIndex = -1;
        int rightLessIndex = -1;
        int cur = i - 1;
        while (cur >= 0) {
            if (arr[cur] < arr[i]) {
                leftLessIndex = cur;
                break;
            }
            cur--;
        }
        cur = i + 1;
        while (cur < len) {
            if (arr[cur] < arr[i]) {
                rightLessIndex = cur;
                break;
            }
            cur++;
        }
        ans[i][0] = leftLessIndex;
        ans[i][1] = rightLessIndex;
    }
    return ans;
}

int **MonotonicStack::GetNearLessNoRepeat(const int arr[], int len) {
    int **ans = new int *[len];
    for (int i = 0; i < len; i++) {
        ans[i] = new int[2];
    }
    std::stack<int> st;
    for (int i = 0; i < len; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            int popIndex = st.top();
            st.pop();
            int leftLessIndex = st.empty() ? -1 : st.top();
            ans[popIndex][0] = leftLessIndex;
            ans[popIndex][1] = i;
        }
        st.push(i);
    }
    while (!st.empty()) {
        int popIndex = st.top();
        st.pop();
        int leftLessIndex = st.empty() ? -1 : st.top();
        ans[popIndex][0] = leftLessIndex;
        ans[popIndex][1] = -1;
    }
    return ans;
}

int **MonotonicStack::GetNearLess(const int arr[], int len) {
    int **ans = new int *[len];
    for (int i = 0; i < len; i++) {
        ans[i] = new int[2];
    }
    std::stack<std::vector<int>> st;
    for (int i = 0; i < len; i++) {
        while (!st.empty() && arr[st.top()[0]] > arr[i]) {
            std::vector<int> popIs = st.top();
            st.pop();
            int leftLessIndex = st.empty() ? -1 : st.top()[st.top().size() - 1];
            for (int popi:popIs) {
                ans[popi][0] = leftLessIndex;
                ans[popi][1] = i;
            }
        }
        if (!st.empty() && arr[st.top()[0]] == arr[i]) {
            st.top().push_back(i);
        } else {
            std::vector<int> vec;
            vec.push_back(i);
            st.push(vec);
        }
    }
    while (!st.empty()) {
        std::vector<int> popIs = st.top();
        st.pop();
        int leftLessIndex = st.empty() ? -1 : st.top()[st.top().size() - 1];
        for (int popi:popIs) {
            ans[popi][0] = leftLessIndex;
            ans[popi][1] = -1;
        }
    }
    return ans;
}
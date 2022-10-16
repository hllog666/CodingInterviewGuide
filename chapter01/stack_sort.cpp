/********************************************************************************
* @author: hllog
* @date: 2022/10/9 1:57
********************************************************************************/


#include "stack_sort.h"

void StackSort::SortStackByStack(std::stack<int> &st) {
    std::stack<int> help;
    while (!st.empty()) {
        int cur = st.top();
        st.pop();
        while (!help.empty() && help.top() < cur) {
            st.push(help.top());
            help.pop();
        }
        help.push(cur);
    }
    while (!help.empty()) {
        st.push(help.top());
        help.pop();
    }
}
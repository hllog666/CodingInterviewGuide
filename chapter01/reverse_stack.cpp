/********************************************************************************
* @author: hllog
* @date: 2022/10/8 3:11
********************************************************************************/


#include "reverse_stack.h"

int ReverseStack::GetAndRemoveLastElement(std::stack<int> &st) {
    int result = st.top();
    st.pop();
    if (st.empty()) {
        return result;
    } else {
        int last = GetAndRemoveLastElement(st);
        st.push(result);
        return last;
    }
}

void ReverseStack::Reverse(std::stack<int> &st) {
    if (st.empty()) {
        return;
    }
    int i = GetAndRemoveLastElement(st);
    Reverse(st);
    st.push(i);
}
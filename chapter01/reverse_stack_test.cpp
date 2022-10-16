/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:35
********************************************************************************/


#include <iostream>
#include <stack>
#include "reverse_stack.h"

void GetAndRemoveLastElementTest() {
    std::cout << "GetAndRemoveLastElementTest start..." << std::endl;
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    ReverseStack::Reverse(st);
    while (!st.empty()) {
        std::cout << st.top() << std::endl;
        st.pop();
    }
    std::cout << "GetAndRemoveLastElementTest end..." << std::endl;
}

int main() {
    GetAndRemoveLastElementTest();
    return 0;
}
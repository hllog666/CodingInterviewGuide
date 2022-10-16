/********************************************************************************
* @author: hllog
* @date: 2022/10/9 1:57
********************************************************************************/


#include <stack>
#include <iostream>
#include "stack_sort.h"

void SortStackByStackTest() {
    std::cout << "SortStackByStackTest start..." << std::endl;
    std::stack<int> st;
    st.push(2);
    st.push(5);
    st.push(4);
    st.push(7);
    st.push(6);
    st.push(9);
    st.push(1);
    st.push(8);

    StackSort::SortStackByStack(st);
    while (!st.empty()) {
        std::cout << st.top() << std::endl;
        st.pop();
    }
    std::cout << "SortStackByStackTest end..." << std::endl;
}

int main() {
    SortStackByStackTest();
    return 0;
}
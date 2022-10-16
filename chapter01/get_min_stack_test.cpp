/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:27
********************************************************************************/


#include <iostream>
#include "get_min_stack.h"

void GetMinStackTest() {
    std::cout << "GetMinStackTest start..." << std::endl;
    GetMinStack st;
    st.Push(2);
    st.Push(1);
    st.Push(2);
    st.Push(4);
    st.Push(3);
    try {
        std::cout << st.GetMin() << std::endl;
        st.Pop();
        std::cout << st.GetMin() << std::endl;
        st.Pop();
        std::cout << st.GetMin() << std::endl;
        st.Pop();
        std::cout << st.GetMin() << std::endl;
        st.Pop();
        std::cout << st.GetMin() << std::endl;
        st.Pop();
        std::cout << st.GetMin() << std::endl;
    } catch (const char *e) {
        std::cout << e << std::endl;
    }
    std::cout << "GetMinStackTest end..." << std::endl;
}

int main() {
    GetMinStackTest();
    return 0;
}
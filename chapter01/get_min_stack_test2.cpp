/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:31
********************************************************************************/


#include <iostream>
#include "get_min_stack2.h"

void GetMinStack2Test() {
    std::cout << "GetMinStack2Test start..." << std::endl;
    GetMinStack2 st;
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
    std::cout << "GetMinStack2Test end..." << std::endl;
}

int main() {
    GetMinStack2Test();
    return 0;
}
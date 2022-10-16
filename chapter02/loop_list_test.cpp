/********************************************************************************
* @author: hllog
* @date: 2022/10/15 4:06
********************************************************************************/

#include <iostream>
#include "loop_list.h"

void GetIntersectNodeTest() {
    std::cout << "GetIntersectNodeTest start..." << std::endl;
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    n1->next_ = n2;
    n2->next_ = n3;
    n3->next_ = n4;
    n4->next_ = n5;
    n5->next_ = n3;
    n6->next_ = n4;
    Node *ans = LoopList::GetIntersectNode(n1, n6);
    if (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
    } else {
        std::cout << "不相交" << std::endl;
    }
    std::cout << "GetIntersectNodeTest end..." << std::endl;
}

int main() {
    GetIntersectNodeTest();
    return 0;
}

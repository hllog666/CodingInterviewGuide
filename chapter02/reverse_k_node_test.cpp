/********************************************************************************
* @author: hllog
* @date: 2022/10/15 11:33
********************************************************************************/

#include <iostream>
#include "reverse_k_node.h"

void ReverseKNodesTest() {
    std::cout << "ReverseKNodesTest start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    for (int i = 2; i < 9; i++) {
        tmp->next_ = new Node(i);
        tmp = tmp->next_;
    }
    tmp->next_ = nullptr;
    Node *ans = ReverseKNode::ReverseKNodes(head, 3);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "ReverseKNodesTest end..." << std::endl;
}

void ReverseKNodes2Test() {
    std::cout << "ReverseKNodes2Test start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    for (int i = 2; i < 9; i++) {
        tmp->next_ = new Node(i);
        tmp = tmp->next_;
    }
    tmp->next_ = nullptr;
    Node *ans = ReverseKNode::ReverseKNodes2(head, 3);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "ReverseKNodes2Test end..." << std::endl;
}

int main() {
    ReverseKNodesTest();
    ReverseKNodes2Test();
    return 0;
}
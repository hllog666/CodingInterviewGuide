/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:28
********************************************************************************/

#include <iostream>
#include "last_k_node.h"

void RemoveLastKthNodeTest() {
    std::cout << "RemoveLastKthNodeTest start..." << std::endl;
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = nullptr;
    head = LastKNode::RemoveLastKthNode(head, 2);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "RemoveLastKthNodeTest end..." << std::endl;
}

int main() {
    RemoveLastKthNodeTest();
    return 0;
}
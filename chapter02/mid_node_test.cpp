/********************************************************************************
* @author: hllog
* @date: 2022/10/12 2:03
********************************************************************************/

#include <iostream>
#include "mid_node.h"

void MidNodeTest() {
    std::cout << "MidNodeTest start..." << std::endl;
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 0; i < 7; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = nullptr;

    head = MidNode::RemoveMidNode(head);

    temp = head;
    while (temp != nullptr) {
        std::cout << temp->value_ << std::endl;
        temp = temp->next_;
    }

    head = MidNode::RemoveByRatio(head, 1, 5);

    temp = head;
    while (temp != nullptr) {
        std::cout << temp->value_ << std::endl;
        temp = temp->next_;
    }

    std::cout << "MidNodeTest end..." << std::endl;
}

int main() {
    MidNodeTest();
    return 0;
}
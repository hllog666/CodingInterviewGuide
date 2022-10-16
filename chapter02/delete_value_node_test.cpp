/********************************************************************************
* @author: hllog
* @date: 2022/10/15 12:34
********************************************************************************/

#include <iostream>
#include "delete_value_node.h"

void RemoveValueTest() {
    std::cout << "RemoveValueTest start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    for (int i = 2; i < 5; i++) {
        tmp->next_ = new Node(i);
        tmp = tmp->next_;
    }
    tmp->next_ = nullptr;
    Node *ans = DeleteValueNode::RemoveValue(head, 3);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "RemoveValueTest end..." << std::endl;
}

void RemoveValue2Test() {
    std::cout << "RemoveValue2Test start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    for (int i = 2; i < 5; i++) {
        tmp->next_ = new Node(i);
        tmp = tmp->next_;
    }
    tmp->next_ = nullptr;
    Node *ans = DeleteValueNode::RemoveValue2(head, 3);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "RemoveValue2Test end..." << std::endl;
}

int main() {
    RemoveValueTest();
    RemoveValue2Test();
    return 0;
}
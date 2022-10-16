/********************************************************************************
* @author: hllog
* @date: 2022/10/15 11:56
********************************************************************************/

#include <iostream>
#include "delete_repeat_node.h"

void RemoveRepeatTest() {
    std::cout << "RemoveRepeatTest start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(1);
    tmp = tmp->next_;
    tmp->next_ = new Node(1);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    DeleteRepeatNode::RemoveRepeat(head);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "RemoveRepeatTest end..." << std::endl;
}

void RemoveRepeat2Test() {
    std::cout << "RemoveRepeat2Test start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(1);
    tmp = tmp->next_;
    tmp->next_ = new Node(1);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    DeleteRepeatNode::RemoveRepeat2(head);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "RemoveRepeat2Test end..." << std::endl;
}

int main() {
    RemoveRepeatTest();
    RemoveRepeat2Test();
    return 0;
}
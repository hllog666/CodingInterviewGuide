/********************************************************************************
* @author: hllog
* @date: 2022/10/12 21:24
********************************************************************************/

#include <iostream>
#include "reverse_list.h"

void ReverseLinkedListTest() {
    std::cout << "ReverseListTest start..." << std::endl;
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = nullptr;
    head = ReverseList::ReverseLinkedList(head);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "ReverseListTest end..." << std::endl;
}

void ReverseDoubleLinkedListTest() {
    std::cout << "ReverseDoubleLinkedList start..." << std::endl;
    DoubleNode *head = new DoubleNode(1);
    head->last_ = nullptr;
    DoubleNode *temp = head;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new DoubleNode(i + 2);
        temp->next_->last_ = temp;
        temp = temp->next_;
    }
    temp->next_ = nullptr;
    head = ReverseList::ReverseDoubleLinkedList(head);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "ReverseDoubleLinkedList end..." << std::endl;
}

int main() {
    ReverseLinkedListTest();
    ReverseDoubleLinkedListTest();
    return 0;
}
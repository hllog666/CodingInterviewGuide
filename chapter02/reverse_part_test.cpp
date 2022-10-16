/********************************************************************************
* @author: hllog
* @date: 2022/10/12 22:11
********************************************************************************/

#include <iostream>
#include "reverse_part.h"

void ReversePartFromToTest() {
    std::cout << "ReversePartFromToTest start..." << std::endl;
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = nullptr;
    head = ReversePart::ReversePartFromTo(head, 2, 4);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "ReversePartFromToTest end..." << std::endl;
}

int main() {
    ReversePartFromToTest();
    return 0;
}
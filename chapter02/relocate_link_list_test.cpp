/********************************************************************************
* @author: hllog
* @date: 2022/10/15 16:20
********************************************************************************/

#include <iostream>
#include "relocate_link_list.h"

void RelocateTest() {
    std::cout << "RelocateTest start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    for (int i = 2; i < 7; i++) {
        tmp->next_ = new Node(i);
        tmp = tmp->next_;
    }
    tmp->next_ = nullptr;
    RelocateLinkList::Relocate(head);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "RelocateTest end..." << std::endl;
}

int main() {
    RelocateTest();
    return 0;
}
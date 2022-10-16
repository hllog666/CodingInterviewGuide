/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:27
********************************************************************************/

#include <iostream>
#include "insert_sorted_loop_list.h"

void InsertNumberTest() {
    std::cout << "InsertNumberTest start..." << std::endl;
    Node *head = new Node(1);
    head->next_ = new Node(3);
    head->next_->next_ = new Node(5);
    head->next_->next_->next_ = new Node(6);
    head->next_->next_->next_->next_ = head;
    head = InsertSortedLoopList::InsertNumber(head, 2);
    head = InsertSortedLoopList::InsertNumber(head, 2);
    head = InsertSortedLoopList::InsertNumber(head, 4);
    std::cout << head->value_ << std::endl;
    Node *tmp = head->next_;
    while (tmp != head) {
        std::cout << tmp->value_ << std::endl;
        tmp = tmp->next_;
    }
    std::cout << "InsertNumberTest end..." << std::endl;
}

int main() {
    InsertNumberTest();
    return 0;
}
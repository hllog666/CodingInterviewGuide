/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:20
********************************************************************************/

#include <iostream>
#include "delete_node_pointer.h"

void RemoveNodeWiredTest() {
    std::cout << "RemoveNodeWiredTest start..." << std::endl;
    Node *head = new Node(4);
    head->next_ = new Node(2);
    head->next_->next_ = new Node(5);
    head->next_->next_->next_ = new Node(1);
    head->next_->next_->next_->next_ = new Node(3);
    head->next_->next_->next_->next_->next_ = nullptr;
    DeleteNodePointer::RemoveNodeWired(head->next_->next_);
    while (head != nullptr) {
        std::cout << head->value_ << std::endl;
        head = head->next_;
    }
    std::cout << "RemoveNodeWiredTest end..." << std::endl;
}

int main() {
    RemoveNodeWiredTest();
    return 0;
}
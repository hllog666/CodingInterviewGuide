/********************************************************************************
* @author: hllog
* @date: 2022/10/13 23:16
********************************************************************************/

#include <vector>
#include <iostream>
#include "partition_list.h"

void ListPartitionTest() {
    std::cout << "ListPartitionTest start..." << std::endl;
    Node *head = new Node(4);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(1);
    tmp = tmp->next_;
    tmp->next_ = new Node(6);
    tmp = tmp->next_;
    tmp->next_ = new Node(5);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(7);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    Node *ans = PartitionList::ListPartition(head, 4);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "ListPartitionTest start..." << std::endl;
}

void ListPartition2Test() {
    std::cout << "ListPartition2Test start..." << std::endl;
    Node *head = new Node(4);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(1);
    tmp = tmp->next_;
    tmp->next_ = new Node(6);
    tmp = tmp->next_;
    tmp->next_ = new Node(5);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(7);
    tmp = tmp->next_;
    tmp->next_ = new Node(4);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    Node *ans = PartitionList::ListPartition2(head, 4);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "ListPartition2Test start..." << std::endl;
}

int main() {
    ListPartitionTest();
    ListPartition2Test();
    return 0;
}
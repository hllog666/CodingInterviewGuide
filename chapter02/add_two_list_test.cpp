/********************************************************************************
* @author: hllog
* @date: 2022/10/14 23:12
********************************************************************************/

#include <iostream>
#include "add_two_list.h"

void AddListsTest() {
    std::cout << "AddListsTest start..." << std::endl;
    Node *head1 = new Node(9);
    Node *tmp = head1;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = new Node(7);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    Node *head2 = new Node(6);
    tmp = head2;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    Node *ans = AddTwoList::AddLists(head1, head2);

    while (head1 != nullptr) {
        std::cout << head1->value_ << std::endl;
        head1 = head1->next_;
    }
    std::cout << std::endl;

    while (head2 != nullptr) {
        std::cout << head2->value_ << std::endl;
        head2 = head2->next_;
    }
    std::cout << std::endl;

    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "AddListsTest end..." << std::endl;
}

void AddLists2Test() {
    std::cout << "AddLists2Test start..." << std::endl;
    Node *head1 = new Node(9);
    Node *tmp = head1;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = new Node(7);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    Node *head2 = new Node(6);
    tmp = head2;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    Node *ans = AddTwoList::AddLists2(head1, head2);

    while (head1 != nullptr) {
        std::cout << head1->value_ << std::endl;
        head1 = head1->next_;
    }
    std::cout << std::endl;

    while (head2 != nullptr) {
        std::cout << head2->value_ << std::endl;
        head2 = head2->next_;
    }
    std::cout << std::endl;

    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "AddLists2Test end..." << std::endl;
}

int main() {
    AddListsTest();
    AddLists2Test();
    return 0;
}
/********************************************************************************
* @author: hllog
* @date: 2022/10/14 0:23
********************************************************************************/

#include <iostream>
#include "copy_rand_pointer_list.h"

void CopyListWithRandomTest() {
    std::cout << "CopyListWithRandomTest start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    head->rand_ = head->next_->next_;
    head->next_->rand_ = head;
    head->next_->next_->rand_ = head->next_;
    Node *ans = CopyRandPointerList::CopyListWithRandom(head);
    while (ans != nullptr) {
        std::cout << "ans->rand_ = " << ans->rand_->value_ << std::endl;
        std::cout << "ans = " << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "CopyListWithRandomTest end..." << std::endl;
}

void CopyListWithRandom2Test() {
    std::cout << "CopyListWithRandom2Test start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp = tmp->next_;
    tmp->next_ = new Node(3);
    tmp = tmp->next_;
    tmp->next_ = nullptr;
    head->rand_ = head->next_->next_;
    head->next_->rand_ = head;
    head->next_->next_->rand_ = head->next_;
    Node *ans = CopyRandPointerList::CopyListWithRandom2(head);
    while (ans != nullptr) {
        std::cout << "ans->rand_ = " << ans->rand_->value_ << std::endl;
        std::cout << "ans = " << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "CopyListWithRandom2Test end..." << std::endl;
}

int main() {
    CopyListWithRandomTest();
    CopyListWithRandom2Test();
    return 0;
}
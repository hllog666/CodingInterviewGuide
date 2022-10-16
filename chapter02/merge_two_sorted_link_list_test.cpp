/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:45
********************************************************************************/

#include <iostream>
#include "merge_two_sorted_link_list.h"

void MergeTest() {
    std::cout << "MergeTest start..." << std::endl;
    Node *head1 = new Node(0);
    head1->next_ = new Node(2);
    head1->next_->next_ = new Node(3);
    head1->next_->next_->next_ = new Node(7);
    head1->next_->next_->next_->next_ = nullptr;
    Node *head2 = new Node(1);
    head2->next_ = new Node(3);
    head2->next_->next_ = new Node(5);
    head2->next_->next_->next_ = new Node(7);
    head2->next_->next_->next_->next_ = new Node(9);
    head2->next_->next_->next_->next_->next_ = nullptr;
    Node *ans = MergeTwoSortedLinkList::Merge(head1, head2);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "MergeTest end..." << std::endl;
}

int main() {
    MergeTest();
    return 0;
}
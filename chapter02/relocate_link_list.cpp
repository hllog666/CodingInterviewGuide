/********************************************************************************
* @author: hllog
* @date: 2022/10/15 16:15
********************************************************************************/


#include "relocate_link_list.h"

void RelocateLinkList::Relocate(Node *head) {
    if (head == nullptr || head->next_ == nullptr) {
        return;
    }
    Node *mid = head;
    Node *right = head->next_;
    while (right->next_ != nullptr && right->next_->next_ != nullptr) {
        mid = mid->next_;
        right = right->next_->next_;
    }
    right = mid->next_;
    mid->next_ = nullptr;
    MergeLR(head, right);
}

void RelocateLinkList::MergeLR(Node *left, Node *right) {
    Node *next = nullptr;
    while (left->next_ != nullptr) {
        next = right->next_;
        right->next_ = left->next_;
        left->next_ = right;
        left = right->next_;
        right = next;
    }
    left->next_ = right;
}
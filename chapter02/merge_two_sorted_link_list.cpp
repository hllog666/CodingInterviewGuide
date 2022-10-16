/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:44
********************************************************************************/


#include "merge_two_sorted_link_list.h"

Node *MergeTwoSortedLinkList::Merge(Node *head1, Node *head2) {
    if (head1 == nullptr || head2 == nullptr) {
        return head1 != nullptr ? head1 : head2;
    }
    Node *head = head1->value_ < head2->value_ ? head1 : head2;
    Node *cur1 = head == head1 ? head1 : head2;
    Node *cur2 = head == head1 ? head2 : head1;
    Node *pre = nullptr;
    Node *next = nullptr;
    while (cur1 != nullptr && cur2 != nullptr) {
        if (cur1->value_ <= cur2->value_) {
            pre = cur1;
            cur1 = cur1->next_;
        } else {
            next = cur2->next_;
            pre->next_ = cur2;
            cur2->next_ = cur1;
            pre = cur2;
            cur2 = next;
        }
    }
    pre->next_ = cur1 == nullptr ? cur2 : cur1;
    return head;
}
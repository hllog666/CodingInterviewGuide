/********************************************************************************
* @author: hllog
* @date: 2022/10/15 11:56
********************************************************************************/

#include <set>
#include "delete_repeat_node.h"

void DeleteRepeatNode::RemoveRepeat(Node *head) {
    if (head == nullptr) {
        return;
    }
    std::set<int> s;
    Node *pre = head;
    Node *cur = head->next_;
    s.insert(head->value_);
    while (cur != nullptr) {
        if (s.count(cur->value_) > 0) {
            pre->next_ = cur->next_;
        } else {
            s.insert(cur->value_);
            pre = cur;
        }
        cur = cur->next_;
    }
}

void DeleteRepeatNode::RemoveRepeat2(Node *head) {
    Node *cur = head;
    Node *pre = nullptr;
    Node *next = nullptr;
    while (cur != nullptr) {
        pre = cur;
        next = cur->next_;
        while (next != nullptr) {
            if (cur->value_ == next->value_) {
                pre->next_ = next->next_;
            } else {
                pre = next;
            }
            next = next->next_;
        }
        cur = cur->next_;
    }
}
/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:58
********************************************************************************/


#include "mid_node.h"

Node *MidNode::RemoveMidNode(Node *head) {
    if (head == nullptr || head->next_ == nullptr) {
        return head;
    }
    if (head->next_->next_ == nullptr) {
        return head->next_;
    }
    Node *pre = head;
    Node *cur = head->next_->next_;
    while (cur->next_ != nullptr && cur->next_->next_ != nullptr) {
        pre = pre->next_;
        cur = cur->next_->next_;
    }
    pre->next_ = pre->next_->next_;
    return head;
}

Node *MidNode::RemoveByRatio(Node *head, int a, int b) {
    if (a < 1 || a > b) {
        return head;
    }
    int n = 0;
    Node *cur = head;
    while (cur != nullptr) {
        n++;
        cur = cur->next_;
    }
    n = a * n / b + 1;
    if (n == 1) {
        head = head->next_;
    }
    if (n > 1) {
        cur = head;
        while (--n != 1) {
            cur = cur->next_;
        }
        cur->next_ = cur->next_->next_;
    }
    return head;
}
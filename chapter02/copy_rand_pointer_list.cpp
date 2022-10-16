/********************************************************************************
* @author: hllog
* @date: 2022/10/14 0:13
********************************************************************************/

#include <map>
#include "copy_rand_pointer_list.h"

Node *CopyRandPointerList::CopyListWithRandom(Node *head) {
    std::map<Node *, Node *> m;
    Node *cur = head;
    while (cur != nullptr) {
        m.insert(std::make_pair(cur, new Node(cur->value_)));
        cur = cur->next_;
    }
    cur = head;
    while (cur != nullptr) {
        m[cur]->next_ = m[cur->next_];
        m[cur]->rand_ = m[cur->rand_];
        cur = cur->next_;
    }
    return m[head];
}

Node *CopyRandPointerList::CopyListWithRandom2(Node *head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node *cur = head;
    Node *next = nullptr;
    while (cur != nullptr) {
        next = cur->next_;
        cur->next_ = new Node(cur->value_);
        cur->next_->next_ = next;
        cur = next;
    }
    cur = head;
    Node *curCopy = nullptr;
    while (cur != nullptr) {
        next = cur->next_->next_;
        curCopy = cur->next_;
        curCopy->rand_ = cur->rand_ != nullptr ? cur->rand_->next_ : nullptr;
        cur = next;
    }
    Node *ans = head->next_;
    cur = head;
    while (cur != nullptr) {
        next = cur->next_->next_;
        curCopy = cur->next_;
        cur->next_ = next;
        curCopy->next_ = next != nullptr ? next->next_ : nullptr;
        cur = next;
    }
    return ans;
}
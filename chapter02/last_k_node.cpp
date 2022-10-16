/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:21
********************************************************************************/


#include "last_k_node.h"

Node *LastKNode::RemoveLastKthNode(Node *head, int lastKth) {
    if (head == nullptr || lastKth < 1) {
        return head;
    }
    Node *cur = head;
    while (cur != nullptr) {
        lastKth--;
        cur = cur->next_;
    }
    if (lastKth == 0) {
        head = head->next_;
    }
    if (lastKth < 0) {
        cur = head;
        while (++lastKth != 0) {
            cur = cur->next_;
        }
        cur->next_ = cur->next_->next_;
    }
    return head;
}
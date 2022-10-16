/********************************************************************************
* @author: hllog
* @date: 2022/10/15 4:02
********************************************************************************/

#include <cstdlib>
#include "loop_list.h"

Node *LoopList::GetLoopNode(Node *head) {
    if (head == nullptr || head->next_ == nullptr || head->next_->next_ == nullptr) {
        return nullptr;
    }
    Node *n1 = head->next_;
    Node *n2 = head->next_->next_;
    while (n1 != n2) {
        if (n2->next_ == nullptr || n2->next_->next_ == nullptr) {
            return nullptr;
        }
        n2 = n2->next_->next_;
        n1 = n1->next_;
    }
    n2 = head;
    while (n1 != n2) {
        n1 = n1->next_;
        n2 = n2->next_;
    }
    return n1;
}

Node *LoopList::NoLoop(Node *head1, Node *head2) {
    if (head1 == nullptr || head2 == nullptr) {
        return nullptr;
    }
    Node *cur1 = head1;
    Node *cur2 = head2;
    int n = 0;
    while (cur1->next_ != nullptr) {
        n++;
        cur1 = cur1->next_;
    }
    while (cur2->next_ != nullptr) {
        n--;
        cur2 = cur2->next_;
    }
    if (cur1 != cur2) {
        return nullptr;
    }
    cur1 = n > 0 ? head1 : head2;
    cur1 = cur1 == head1 ? head2 : head1;
    n = std::abs(n);
    while (n != 0) {
        n--;
        cur1 = cur1->next_;
    }
    while (cur1 != cur2) {
        cur1 = cur1->next_;
        cur2 = cur2->next_;
    }
    return cur1;
}

Node *LoopList::BothLoop(Node *head1, Node *loop1, Node *head2, Node *loop2) {
    Node *cur1 = nullptr;
    Node *cur2 = nullptr;
    if (loop1 == loop2) {
        cur1 = head1;
        cur2 = head2;
        int n = 0;
        while (cur1 != loop1) {
            n++;
            cur1 = cur1->next_;
        }
        while (cur2 != loop2) {
            n--;
            cur2 = cur2->next_;
        }
        cur1 = n > 0 ? head1 : head2;
        cur1 = cur1 == head1 ? head2 : head1;
        n = std::abs(n);
        while (n != 0) {
            n--;
            cur1 = cur1->next_;
        }
        while (cur1 != cur2) {
            cur1 = cur1->next_;
            cur2 = cur2->next_;
        }
        return cur1;
    } else {
        cur1 = loop1->next_;
        while (cur1 != loop1) {
            if (cur1 == loop2) {
                return loop1;
            }
            cur1 = cur1->next_;
        }
        return nullptr;
    }
}

Node *LoopList::GetIntersectNode(Node *head1, Node *head2) {
    if (head1 == nullptr || head2 == nullptr) {
        return nullptr;
    }
    Node *loop1 = GetLoopNode(head1);
    Node *loop2 = GetLoopNode(head2);
    if (loop1 == nullptr && loop2 == nullptr) {
        return NoLoop(head1, head2);
    }
    if (loop1 != nullptr && loop2 != nullptr) {
        return BothLoop(head1, loop1, head2, loop2);
    }
    return nullptr;
}
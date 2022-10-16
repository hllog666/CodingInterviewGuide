/********************************************************************************
* @author: hllog
* @date: 2022/10/12 22:23
********************************************************************************/


#include "josephus.h"

Node *Josephus::JosephusKill(Node *head, int m) {
    if (head == nullptr || head->next_ == nullptr || m < 1) {
        return head;
    }
    Node *last = head;
    while (last->next_ != head) {
        last = last->next_;
    }
    int count = 0;
    while (head != last) {
        if (++count == m) {
            last->next_ = head->next_;
            count = 0;
        } else {
            last = last->next_;
        }
        head = last->next_;
    }
    return head;
}

Node *Josephus::JosephusKill2(Node *head, int m) {
    if (head == nullptr || head->next_ == nullptr || m < 1) {
        return head;
    }
    Node *cur = head->next_;
    int tmp = 1;
    while (cur != head) {
        tmp++;
        cur = cur->next_;
    }
    tmp = GetLive(tmp, m);
    while (--tmp != 0) {
        head = head->next_;
    }
    head->next_ = head;
    return head;
}

int Josephus::GetLive(int i, int m) {
    if (i == 1) {
        return 1;
    }
    return (GetLive(i - 1, m) + m - 1) % i + 1;
}
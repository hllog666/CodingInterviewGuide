/********************************************************************************
* @author: hllog
* @date: 2022/10/12 21:21
********************************************************************************/


#include "reverse_list.h"

Node *ReverseList::ReverseLinkedList(Node *head) {
    Node *pre = nullptr;
    Node *next = nullptr;
    while (head != nullptr) {
        next = head->next_;
        head->next_ = pre;
        pre = head;
        head = next;
    }
    return pre;
}

DoubleNode *ReverseList::ReverseDoubleLinkedList(DoubleNode *head) {
    DoubleNode *pre = nullptr;
    DoubleNode *next = nullptr;
    while (head != nullptr) {
        next = head->next_;
        head->next_ = pre;
        head->last_ = next;
        pre = head;
        head = next;
    }
    return pre;
}
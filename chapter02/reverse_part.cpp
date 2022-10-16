/********************************************************************************
* @author: hllog
* @date: 2022/10/12 22:04
********************************************************************************/


#include "reverse_part.h"

Node *ReversePart::ReversePartFromTo(Node *head, int from, int to) {
    int len = 0;
    Node *node1 = head;
    Node *fPre = nullptr;
    Node *tPos = nullptr;
    while (node1 != nullptr) {
        len++;
        fPre = len == from - 1 ? node1 : fPre;
        tPos = len == to + 1 ? node1 : tPos;
        node1 = node1->next_;
    }
    if (from > to || from < 1 || to > len) {
        return head;
    }
    node1 = fPre == nullptr ? head : fPre->next_;
    Node *node2 = node1->next_;
    node1->next_ = tPos;
    Node *next = nullptr;
    while (node2 != tPos) {
        next = node2->next_;
        node2->next_ = node1;
        node1 = node2;
        node2 = next;
    }
    if (fPre != nullptr) {
        fPre->next_ = node1;
        return head;
    }
    return node1;
}
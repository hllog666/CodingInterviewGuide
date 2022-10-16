/********************************************************************************
* @author: hllog
* @date: 2022/10/15 14:59
********************************************************************************/


#include "link_list_selection_sort.h"

Node *LinkListSelectionSort::SelectionSort(Node *head) {
    Node *tail = nullptr;
    Node *cur = head;
    Node *smallPre = nullptr;
    Node *small = nullptr;
    while (cur != nullptr) {
        small = cur;
        smallPre = GetSmallestPreNode(cur);
        if (smallPre != nullptr) {
            small = smallPre->next_;
            smallPre->next_ = small->next_;
        }
        cur = cur == small ? cur->next_ : cur;
        if (tail == nullptr) {
            head = small;
        } else {
            tail->next_ = small;
        }
        tail = small;
    }
    return head;
}

Node *LinkListSelectionSort::GetSmallestPreNode(Node *head) {
    Node *smallPre = nullptr;
    Node *small = head;
    Node *pre = head;
    Node *cur = head->next_;
    while (cur != nullptr) {
        if (cur->value_ < small->value_) {
            smallPre = pre;
            small = cur;
        }
        pre = cur;
        cur = cur->next_;
    }
    return smallPre;
}
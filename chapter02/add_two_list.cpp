/********************************************************************************
* @author: hllog
* @date: 2022/10/14 23:12
********************************************************************************/


#include "add_two_list.h"

Node *AddTwoList::AddLists(Node *head1, Node *head2) {
    std::stack<int> s1;
    std::stack<int> s2;
    while (head1 != nullptr) {
        s1.push(head1->value_);
        head1 = head1->next_;
    }
    while (head2 != nullptr) {
        s2.push(head2->value_);
        head2 = head2->next_;
    }
    int ca = 0;
    int n1 = 0;
    int n2 = 0;
    int n = 0;
    Node *node = nullptr;
    Node *pre = nullptr;
    while (!s1.empty() || !s2.empty()) {
        if (s1.empty()) {
            n1 = 0;
        } else {
            n1 = s1.top();
            s1.pop();
        }
        if (s2.empty()) {
            n2 = 0;
        } else {
            n2 = s2.top();
            s2.pop();
        }
        n = n1 + n2 + ca;
        pre = node;
        node = new Node(n % 10);
        node->next_ = pre;
        ca = n / 10;
    }
    if (ca == 1) {
        pre = node;
        node = new Node(1);
        node->next_ = pre;
    }
    return node;
}

Node *AddTwoList::AddLists2(Node *head1, Node *head2) {
    head1 = ReverseList(head1);
    head2 = ReverseList(head2);
    int ca = 0;
    int n1 = 0;
    int n2 = 0;
    int n = 0;
    Node *c1 = head1;
    Node *c2 = head2;
    Node *pre = nullptr;
    Node *node = nullptr;
    while (c1 != nullptr || c2 != nullptr) {
        n1 = c1 != nullptr ? c1->value_ : 0;
        n2 = c2 != nullptr ? c2->value_ : 0;
        n = n1 + n2 + ca;
        pre = node;
        node = new Node(n % 10);
        node->next_ = pre;
        ca = n / 10;
        c1 = c1 != nullptr ? c1->next_ : nullptr;
        c2 = c2 != nullptr ? c2->next_ : nullptr;
    }
    if (ca == 1) {
        pre = node;
        node = new Node(1);
        node->next_ = pre;
    }
    ReverseList(head1);
    ReverseList(head2);
    return node;
}

Node *AddTwoList::ReverseList(Node *head) {
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
/********************************************************************************
* @author: hllog
* @date: 2022/10/15 11:33
********************************************************************************/


#include "reverse_k_node.h"

Node *ReverseKNode::ReverseKNodes(Node *head, int k) {
    if (k < 2) {
        return head;
    }
    std::stack<Node *> st;
    Node *newHead = head;
    Node *cur = head;
    Node *pre = nullptr;
    Node *next = nullptr;
    while (cur != nullptr) {
        next = cur->next_;
        st.push(cur);
        if (st.size() == k) {
            pre = Resign(st, pre, next);
            newHead = newHead == head ? cur : newHead;
        }
        cur = next;
    }
    return newHead;
}

Node *ReverseKNode::Resign(std::stack<Node *> &st, Node *left, Node *right) {
    Node *cur = st.top();
    st.pop();
    if (left != nullptr) {
        left->next_ = cur;
    }
    Node *next = nullptr;
    while (!st.empty()) {
        next = st.top();
        st.pop();
        cur->next_ = next;
        cur = next;
    }
    cur->next_ = right;
    return cur;
}

Node *ReverseKNode::ReverseKNodes2(Node *head, int k) {
    if (k < 2) {
        return head;
    }
    Node *cur = head;
    Node *start = nullptr;
    Node *pre = nullptr;
    Node *next = nullptr;
    int count = 1;
    while (cur != nullptr) {
        next = cur->next_;
        if (count == k) {
            start = pre == nullptr ? head : pre->next_;
            head = pre == nullptr ? cur : head;
            Resign2(pre, start, cur, next);
            pre = start;
            count = 0;
        }
        count++;
        cur = next;
    }
    return head;
}

void ReverseKNode::Resign2(Node *left, Node *start, Node *end, Node *right) {
    Node *pre = start;
    Node *cur = start->next_;
    Node *next = nullptr;
    while (cur != right) {
        next = cur->next_;
        cur->next_ = pre;
        pre = cur;
        cur = next;
    }
    if (left != nullptr) {
        left->next_ = end;
    }
    start->next_ = right;
}
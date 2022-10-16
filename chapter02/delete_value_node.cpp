/********************************************************************************
* @author: hllog
* @date: 2022/10/15 12:30
********************************************************************************/

#include <stack>
#include "delete_value_node.h"

Node *DeleteValueNode::RemoveValue(Node *head, int number) {
    std::stack<Node *> st;
    while (head != nullptr) {
        if (head->value_ != number) {
            st.push(head);
        }
        head = head->next_;
    }
    while (!st.empty()) {
        st.top()->next_ = head;
        head = st.top();
        st.pop();
    }
    return head;
}

Node *DeleteValueNode::RemoveValue2(Node *head, int number) {
    while (head != nullptr) {
        if (head->value_ != number) {
            break;
        }
        head = head->next_;
    }
    Node *pre = head;
    Node *cur = head;
    while (cur != nullptr) {
        if (cur->value_ == number) {
            pre->next_ = cur->next_;
        } else {
            pre = cur;
        }
        cur = cur->next_;
    }
    return head;
}
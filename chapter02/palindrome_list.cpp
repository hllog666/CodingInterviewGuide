/********************************************************************************
* @author: hllog
* @date: 2022/10/13 22:54
********************************************************************************/

#include <stack>
#include "palindrome_list.h"

bool PalindromeList::IsPalindrome(Node *head) {
    std::stack<Node *> st;
    Node *cur = head;
    while (cur != nullptr) {
        st.push(cur);
        cur = cur->next_;
    }
    while (head != nullptr) {
        if (head->value_ != st.top()->value_) {
            return false;
        }
        st.pop();
        head = head->next_;
    }
    return true;
}

bool PalindromeList::IsPalindrome2(Node *head) {
    if (head == nullptr || head->next_ == nullptr) {
        return true;
    }
    Node *right = head->next_;
    Node *cur = head;
    while (cur->next_ != nullptr && cur->next_->next_ != nullptr) {
        right = right->next_;
        cur = cur->next_->next_;
    }
    std::stack<Node *> st;
    while (right != nullptr) {
        st.push(right);
        right = right->next_;
    }
    while (!st.empty()) {
        if (head->value_ != st.top()->value_) {
            return false;
        }
        st.pop();
        head = head->next_;
    }
    return true;
}

bool PalindromeList::IsPalindrome3(Node *head) {
    if (head == nullptr || head->next_ == nullptr) {
        return true;
    }
    Node *n1 = head;
    Node *n2 = head;
    while (n2->next_ != nullptr && n1->next_->next_ != nullptr) {
        n1 = n1->next_;
        n2 = n2->next_->next_;
    }
    n2 = n1->next_;
    n1->next_ = nullptr;
    Node *n3 = nullptr;
    while (n2 != nullptr) {
        n3 = n2->next_;
        n2->next_ = n1;
        n1 = n2;
        n2 = n3;
    }
    n3 = n1;
    n2 = head;
    bool ans = true;
    while (n1 != nullptr && n2 != nullptr) {
        if (n1->value_ != n2->value_) {
            ans = false;
            break;
        }
        n1 = n1->next_;
        n2 = n2->next_;
    }
    n1 = n3->next_;
    n3->next_ = nullptr;
    while (n1 != nullptr) {
        n2 = n1->next_;
        n1->next_ = n3;
        n3 = n1;
        n1 = n2;
    }
    return ans;
}
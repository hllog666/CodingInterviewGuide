/********************************************************************************
* @author: hllog
* @date: 2022/10/16 0:34
********************************************************************************/

#include <stack>
#include <iostream>
#include "traverse_binary_tree.h"

void TraverseBinaryTree::PreOrderRecur(Node *head) {
    if (head == nullptr) {
        return;
    }
    std::cout << head->value_ << " ";
    PreOrderRecur(head->left_);
    PreOrderRecur(head->right_);
}

void TraverseBinaryTree::InOrderRecur(Node *head) {
    if (head == nullptr) {
        return;
    }
    InOrderRecur(head->left_);
    std::cout << head->value_ << " ";
    InOrderRecur(head->right_);
}

void TraverseBinaryTree::PostOrderRecur(Node *head) {
    if (head == nullptr) {
        return;
    }
    PostOrderRecur(head->left_);
    PostOrderRecur(head->right_);
    std::cout << head->value_ << " ";
}

void TraverseBinaryTree::PreOrderUnRecur(Node *head) {
    std::cout << "pre-orderP: ";
    if (head != nullptr) {
        std::stack<Node *> st;
        st.push(head);
        while (!st.empty()) {
            head = st.top();
            st.pop();
            std::cout << head->value_ << " ";
            if (head->right_ != nullptr) {
                st.push(head->right_);
            }
            if (head->left_ != nullptr) {
                st.push(head->left_);
            }
        }
    }
    std::cout << std::endl;
}

void TraverseBinaryTree::InOrderUnRecur(Node *head) {
    std::cout << "in-order: ";
    if (head != nullptr) {
        std::stack<Node *> st;
        while (!st.empty() || head != nullptr) {
            if (head != nullptr) {
                st.push(head);
                head = head->left_;
            } else {
                head = st.top();
                st.pop();
                std::cout << head->value_ << " ";
                head = head->right_;
            }
        }
    }
    std::cout << std::endl;
}

void TraverseBinaryTree::PostOrderUnRecur(Node *head) {
    std::cout << "post-order: ";
    if (head != nullptr) {
        std::stack<Node *> s1;
        std::stack<Node *> s2;
        s1.push(head);
        while (!s1.empty()) {
            head = s1.top();
            s1.pop();
            s2.push(head);
            if (head->left_ != nullptr) {
                s1.push(head->left_);
            }
            if (head->right_ != nullptr) {
                s1.push(head->right_);
            }
        }
        while (!s2.empty()) {
            std::cout << s2.top()->value_ << " ";
            s2.pop();
        }
    }
    std::cout << std::endl;
}

void TraverseBinaryTree::PostOrderUnRecur2(Node *head) {
    std::cout << "post-order: ";
    if (head != nullptr) {
        std::stack<Node *> st;
        st.push(head);
        Node *c = nullptr;
        while (!st.empty()) {
            c = st.top();
            if (c->left_ != nullptr && head != c->left_ && head != c->right_) {
                st.push(c->left_);
            } else if (c->right_ != nullptr && head != c->right_) {
                st.push(c->right_);
            } else {
                std::cout << st.top()->value_ << " ";
                st.pop();
                head = c;
            }
        }
    }
    std::cout << std::endl;
}

void TraverseBinaryTree::Morris(Node *head) {
    if (head == nullptr) {
        return;
    }
    Node *cur = head;
    Node *mostRight = nullptr;
    while (cur != nullptr) {
        mostRight = cur->left_;
        if (mostRight != nullptr) {
            while (mostRight->right_ != nullptr && mostRight->right_ != cur) {
                mostRight = mostRight->right_;
            }
            if (mostRight->right_ == nullptr) {
                mostRight->right_ = cur;
                cur = cur->left_;
                continue;
            } else {
                mostRight->right_ = nullptr;
            }
        }
        cur = cur->right_;
    }
}

void TraverseBinaryTree::MorrisPre(Node *head) {
    if (head == nullptr) {
        return;
    }
    Node *cur = head;
    Node *mostRight = nullptr;
    while (cur != nullptr) {
        mostRight = cur->left_;
        if (mostRight != nullptr) {
            while (mostRight->right_ != nullptr && mostRight->right_ != cur) {
                mostRight = mostRight->right_;
            }
            if (mostRight->right_ == nullptr) {
                mostRight->right_ = cur;
                std::cout << cur->value_ << " ";
                cur = cur->left_;
                continue;
            } else {
                mostRight->right_ = nullptr;
            }
        } else {
            std::cout << cur->value_ << " ";
        }
        cur = cur->right_;
    }
    std::cout << std::endl;
}

void TraverseBinaryTree::MorrisIn(Node *head) {
    if (head == nullptr) {
        return;
    }
    Node *cur = head;
    Node *mostRight = nullptr;
    while (cur != nullptr) {
        mostRight = cur->left_;
        if (mostRight != nullptr) {
            while (mostRight->right_ != nullptr && mostRight->right_ != cur) {
                mostRight = mostRight->right_;
            }
            if (mostRight->right_ == nullptr) {
                mostRight->right_ = cur;
                cur = cur->left_;
                continue;
            } else {
                mostRight->right_ = nullptr;
            }
        }
        std::cout << cur->value_ << " ";
        cur = cur->right_;
    }
    std::cout << std::endl;
}

void TraverseBinaryTree::MorrisPost(Node *head) {
    if (head == nullptr) {
        return;
    }
    Node *cur = head;
    Node *mostRight = nullptr;
    while (cur != nullptr) {
        mostRight = cur->left_;
        if (mostRight != nullptr) {
            while (mostRight->right_ != nullptr && mostRight->right_ != cur) {
                mostRight = mostRight->right_;
            }
            if (mostRight->right_ == nullptr) {
                mostRight->right_ = cur;
                cur = cur->left_;
                continue;
            } else {
                mostRight->right_ = nullptr;
                PrintEdge(cur->left_);
            }
        }
        cur = cur->right_;
    }
    PrintEdge(head);
    std::cout << std::endl;
}

Node *TraverseBinaryTree::ReverseEdge(Node *from) {
    Node *pre = nullptr;
    Node *next = nullptr;
    while (from != nullptr) {
        next = from->right_;
        from->right_ = pre;
        pre = from;
        from = next;
    }
    return pre;
}

void TraverseBinaryTree::PrintEdge(Node *head) {
    Node *tail = ReverseEdge(head);
    Node *cur = tail;
    while (cur != nullptr) {
        std::cout << cur->value_ << " ";
        cur = cur->right_;
    }
    ReverseEdge(tail);
}
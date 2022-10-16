/********************************************************************************
* @author: hllog
* @date: 2022/10/15 12:43
********************************************************************************/


#include "binary_search_tree_double_list.h"

Node *BinarySearchTreeDoubleList::Convert(Node *head) {
    std::queue<Node *> que;
    InOrderToQueue(head, que);
    if (que.empty()) {
        return head;
    }
    head = que.front();
    que.pop();
    Node *pre = head;
    pre->left_ = nullptr;
    Node *cur = nullptr;
    while (!que.empty()) {
        cur = que.front();
        que.pop();
        pre->right_ = cur;
        cur->left_ = pre;
        pre = cur;
    }
    pre->right_ = nullptr;
    return head;
}

void BinarySearchTreeDoubleList::InOrderToQueue(Node *head, std::queue<Node *> &que) {
    if (head == nullptr) {
        return;
    }
    InOrderToQueue(head->left_, que);
    que.push(head);
    InOrderToQueue(head->right_, que);
}

Node *BinarySearchTreeDoubleList::Convert2(Node *head) {
    if (head == nullptr) {
        return nullptr;
    }
    return Process(head)->start_;
}

ReturnType *BinarySearchTreeDoubleList::Process(Node *head) {
    if (head == nullptr) {
        return new ReturnType(nullptr, nullptr);
    }
    ReturnType *leftList = Process(head->left_);
    ReturnType *rightList = Process(head->right_);
    if (leftList->end_ != nullptr) {
        leftList->end_->right_ = head;
    }
    head->left_ = leftList->end_;
    head->right_ = rightList->start_;
    if (rightList->start_ != nullptr) {
        rightList->start_->left_ = head;
    }
    return new ReturnType(leftList->start_ != nullptr ? leftList->start_ : head,
                          rightList->end_ != nullptr ? rightList->end_ : head);
}
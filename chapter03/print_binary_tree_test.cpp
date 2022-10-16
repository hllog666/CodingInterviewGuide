/********************************************************************************
* @author: hllog
* @date: 2022/10/16 12:22
********************************************************************************/

#include <iostream>
#include "print_binary_tree.h"

Node *CreateBinaryTree() {
    Node *head = new Node(1);

    head->left_ = new Node(2);
    head->right_ = new Node(3);

    head->left_->left_ = new Node(4);
    head->left_->right_ = nullptr;
    head->right_->left_ = new Node(5);
    head->right_->right_ = new Node(6);

    head->left_->left_->left_ = nullptr;
    head->left_->left_->right_ = new Node(7);
    head->right_->left_->left_ = nullptr;
    head->right_->left_->right_ = nullptr;
    head->right_->right_->left_ = nullptr;
    head->right_->right_->right_ = nullptr;

    head->left_->left_->right_->left_ = nullptr;
    head->left_->left_->right_->right_ = nullptr;
    return head;
}

void PrintTreeTest() {
    std::cout << "PrintTreeTest start..." << std::endl;
    PrintBinaryTree::PrintTree(CreateBinaryTree());
    std::cout << "PrintTreeTest end..." << std::endl;
}

int main() {
    PrintTreeTest();
    return 0;
}
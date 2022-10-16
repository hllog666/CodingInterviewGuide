/********************************************************************************
* @author: hllog
* @date: 2022/10/16 12:56
********************************************************************************/

#include <vector>
#include <iostream>
#include "binary_tree_serialization.h"
#include "traverse_binary_tree.h"

Node *CreateTree() {
    Node *head = new Node(1);

    head->left_ = new Node(2);
    head->right_ = new Node(3);

    head->left_->left_ = new Node(4);
    head->left_->right_ = nullptr;
    head->right_->left_ = nullptr;
    head->right_->right_ = new Node(5);

    head->left_->left_->left_ = nullptr;
    head->left_->left_->right_ = nullptr;
    head->right_->right_->left_ = nullptr;
    head->right_->right_->right_ = nullptr;

    return head;
}

void SerialByPreTest() {
    std::cout << "SerialByPreTest start..." << std::endl;
    std::string ans = BinaryTreeSerialization::SerialByPre(CreateTree());
    std::cout << ans << std::endl;
    std::cout << "SerialByPreTest end..." << std::endl;
}

void ReconByPreStringTest() {
    std::cout << "ReconByPreStringTest start..." << std::endl;
    Node *ans = BinaryTreeSerialization::ReconByPreString("1!2!4!#!#!#!3!#!5!#!#!");
    TraverseBinaryTree::PreOrderRecur(ans);
    std::cout << "ReconByPreStringTest end..." << std::endl;
}

void SplitTest() {
    std::cout << "SplitTest start..." << std::endl;
    std::vector<std::string> ans = BinaryTreeSerialization::Split("1!2!4!#!#!#!3!#!5!#!#!", "!");
    for (auto &an : ans) {
        std::cout << an << std::endl;
    }
    std::cout << "SplitTest end..." << std::endl;
}

void SerialByLevelTest() {
    std::cout << "SerialByLevelTest start..." << std::endl;
    std::string ans = BinaryTreeSerialization::SerialByLevel(CreateTree());
    std::cout << ans << std::endl;
    std::cout << "SerialByLevelTest end..." << std::endl;
}

void ReconByLevelStringTest() {
    std::cout << "ReconByLevelStringTest start..." << std::endl;
    Node *ans = BinaryTreeSerialization::ReconByLevelString("1!2!3!4!#!#!5!#!#!#!#!");
    TraverseBinaryTree::PreOrderRecur(ans);
    std::cout << "ReconByLevelStringTest end..." << std::endl;
}

int main() {
    SerialByPreTest();
    ReconByPreStringTest();
    SplitTest();
    SerialByLevelTest();
    ReconByLevelStringTest();
    return 0;
}
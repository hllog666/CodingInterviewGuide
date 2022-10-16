/********************************************************************************
* @author: hllog
* @date: 2022/10/16 0:40
********************************************************************************/

#include <iostream>
#include "traverse_binary_tree.h"

Node *CreateTree() {
    Node *head = new Node(1);
    head->left_ = new Node(2);
    head->right_ = new Node(3);
    head->left_->left_ = new Node(4);
    head->left_->right_ = new Node(5);
    head->right_->left_ = new Node(6);
    head->right_->right_ = new Node(7);
    head->left_->left_->left_ = nullptr;
    head->left_->left_->right_ = nullptr;
    head->left_->right_->left_ = nullptr;
    head->left_->right_->right_ = nullptr;
    head->right_->left_->left_ = nullptr;
    head->right_->left_->right_ = nullptr;
    head->right_->right_->left_ = nullptr;
    head->right_->right_->right_ = nullptr;
    return head;
}

void PreOrderRecurTest() {
    std::cout << "PreOrderRecurTest start..." << std::endl;
    TraverseBinaryTree::PreOrderRecur(CreateTree());
    std::cout << "PreOrderRecurTest end..." << std::endl;
}

void InOrderRecurTest() {
    std::cout << "InOrderRecurTest start..." << std::endl;
    TraverseBinaryTree::InOrderRecur(CreateTree());
    std::cout << "InOrderRecurTest end..." << std::endl;
}

void PostOrderRecurTest() {
    std::cout << "PostOrderRecurTest start..." << std::endl;
    TraverseBinaryTree::PostOrderRecur(CreateTree());
    std::cout << "PostOrderRecurTest end..." << std::endl;
}

void PreOrderUnRecurTest() {
    std::cout << "PreOrderUnRecurTest start..." << std::endl;
    TraverseBinaryTree::PreOrderUnRecur(CreateTree());
    std::cout << "PreOrderUnRecurTest end..." << std::endl;
}

void InOrderUnRecurTest() {
    std::cout << "InOrderUnRecurTest start..." << std::endl;
    TraverseBinaryTree::InOrderUnRecur(CreateTree());
    std::cout << "InOrderUnRecurTest end..." << std::endl;
}

void PostOrderUnRecurTest() {
    std::cout << "PostOrderUnRecurTest start..." << std::endl;
    TraverseBinaryTree::PostOrderUnRecur(CreateTree());
    std::cout << "PostOrderUnRecurTest end..." << std::endl;
}

void PostOrderUnRecur2Test() {
    std::cout << "PostOrderUnRecur2Test start..." << std::endl;
    TraverseBinaryTree::PostOrderUnRecur2(CreateTree());
    std::cout << "PostOrderUnRecur2Test end..." << std::endl;
}

void MorrisPreTest() {
    std::cout << "MorrisPreTest start..." << std::endl;
    TraverseBinaryTree::MorrisPre(CreateTree());
    std::cout << "MorrisPreTest end..." << std::endl;
}

void MorrisInTest() {
    std::cout << "MorrisInTest start..." << std::endl;
    TraverseBinaryTree::MorrisIn(CreateTree());
    std::cout << "MorrisInTest end..." << std::endl;
}

void MorrisPostTest() {
    std::cout << "MorrisPostTest start..." << std::endl;
    TraverseBinaryTree::MorrisPost(CreateTree());
    std::cout << "MorrisPostTest end..." << std::endl;
}

int main() {
    PreOrderRecurTest();
    InOrderRecurTest();
    PostOrderRecurTest();
    PreOrderUnRecurTest();
    InOrderUnRecurTest();
    PostOrderUnRecurTest();
    PostOrderUnRecur2Test();
    MorrisPreTest();
    MorrisInTest();
    MorrisPostTest();
    return 0;
}
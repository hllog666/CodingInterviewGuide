/********************************************************************************
* @author: hllog
* @date: 2022/10/16 3:25
********************************************************************************/

#include <iostream>
#include "print_edge_node.h"

Node *CreateTree() {
    Node *head = new Node(1);

    head->left_ = new Node(2);
    head->right_ = new Node(3);

    head->left_->left_ = nullptr;
    head->left_->right_ = new Node(4);
    head->right_->left_ = new Node(5);
    head->right_->right_ = new Node(6);

    head->left_->right_->left_ = new Node(7);
    head->left_->right_->right_ = new Node(8);
    head->right_->left_->left_ = new Node(9);
    head->right_->left_->right_ = new Node(10);
    head->right_->right_->left_ = nullptr;
    head->right_->right_->right_ = nullptr;

    head->left_->right_->left_->left_ = nullptr;
    head->left_->right_->left_->right_ = nullptr;
    head->left_->right_->right_->left_ = nullptr;
    head->left_->right_->right_->right_ = new Node(11);
    head->right_->left_->left_->left_ = new Node(12);
    head->right_->left_->left_->right_ = nullptr;
    head->right_->left_->right_->left_ = nullptr;
    head->right_->left_->right_->right_ = nullptr;

    head->left_->right_->right_->right_->left_ = new Node(13);
    head->left_->right_->right_->right_->right_ = new Node(14);
    head->right_->left_->left_->left_->left_ = new Node(15);
    head->right_->left_->left_->left_->right_ = new Node(16);

    head->left_->right_->right_->right_->left_->left_ = nullptr;
    head->left_->right_->right_->right_->left_->right_ = nullptr;
    head->left_->right_->right_->right_->right_->left_ = nullptr;
    head->left_->right_->right_->right_->right_->right_ = nullptr;
    head->right_->left_->left_->left_->left_->left_ = nullptr;
    head->right_->left_->left_->left_->left_->right_ = nullptr;
    head->right_->left_->left_->left_->right_->left_ = nullptr;
    head->right_->left_->left_->left_->right_->right_ = nullptr;
    return head;
}

void PrintEdgeTest() {
    std::cout << "PrintEdgeTest start..." << std::endl;
    // 1，2，4，7，11，13，14，15，16，12，10，6，3
    PrintEdgeNode::PrintEdge(CreateTree());
    std::cout << "PrintEdgeTest end..." << std::endl;
}

void PrintEdge2Test() {
    std::cout << "PrintEdge2Test start..." << std::endl;
    // 1，2，4，7，13，14，15，16，10，6，3
    PrintEdgeNode::PrintEdge2(CreateTree());
    std::cout << "PrintEdge2Test end..." << std::endl;
}

int main() {
    PrintEdgeTest();
    PrintEdge2Test();
    return 0;
}
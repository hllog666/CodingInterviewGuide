/********************************************************************************
* @author: hllog
* @date: 2022/10/15 12:44
********************************************************************************/

#include <iostream>
#include "binary_search_tree_double_list.h"

void ConvertTest() {
    std::cout << "ConvertTest start..." << std::endl;
    Node *head = new Node(6);
    head->left_ = new Node(4);
    head->right_ = new Node(7);
    head->left_->left_ = new Node(2);
    head->left_->right_ = new Node(5);
    head->left_->left_->left_ = new Node(1);
    head->left_->left_->right_ = new Node(3);
    head->right_->right_ = new Node(9);
    head->right_->right_->left_ = new Node(8);
    head->left_->left_->left_->left_ = nullptr;
    head->left_->left_->left_->right_ = nullptr;
    head->left_->left_->right_->left_ = nullptr;
    head->left_->left_->right_->right_ = nullptr;
    head->left_->right_->left_ = nullptr;
    head->left_->right_->right_ = nullptr;
    head->right_->left_ = nullptr;
    head->right_->right_->right_ = nullptr;
    head->right_->right_->left_->left_ = nullptr;
    head->right_->right_->left_->right_ = nullptr;
    Node *ans = BinarySearchTreeDoubleList::Convert(head);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->right_;
    }
    std::cout << "ConvertTest end..." << std::endl;
}

void Convert2Test() {
    std::cout << "Convert2Test start..." << std::endl;
    Node *head = new Node(6);
    head->left_ = new Node(4);
    head->right_ = new Node(7);
    head->left_->left_ = new Node(2);
    head->left_->right_ = new Node(5);
    head->left_->left_->left_ = new Node(1);
    head->left_->left_->right_ = new Node(3);
    head->right_->right_ = new Node(9);
    head->right_->right_->left_ = new Node(8);
    head->left_->left_->left_->left_ = nullptr;
    head->left_->left_->left_->right_ = nullptr;
    head->left_->left_->right_->left_ = nullptr;
    head->left_->left_->right_->right_ = nullptr;
    head->left_->right_->left_ = nullptr;
    head->left_->right_->right_ = nullptr;
    head->right_->left_ = nullptr;
    head->right_->right_->right_ = nullptr;
    head->right_->right_->left_->left_ = nullptr;
    head->right_->right_->left_->right_ = nullptr;
    Node *ans = BinarySearchTreeDoubleList::Convert2(head);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->right_;
    }
    std::cout << "Convert2Test end..." << std::endl;
}

int main() {
    ConvertTest();
    Convert2Test();
    return 0;
}
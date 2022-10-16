/********************************************************************************
* @author: hllog
* @date: 2022/10/16 12:13
********************************************************************************/

#include <iostream>
#include "print_binary_tree.h"

void PrintBinaryTree::PrintTree(Node *head) {
    std::cout << "Binary Tree:" << std::endl;
    PrintInOrder(head, 0, "H", 17);
    std::cout << std::endl;
}

void PrintBinaryTree::PrintInOrder(Node *head, int height, const std::string &to, int len) {
    if (head == nullptr) {
        return;
    }
    PrintInOrder(head->right_, height + 1, "v", len);
    std::string val = to + std::to_string(head->value_) + to;
    int lenM = val.size();
    int lenL = (len - lenM) / 2;
    int lenR = len - lenM - lenL;
    val = GetSpace(lenL) + val + GetSpace(lenR);
    std::cout << GetSpace(height * len) << val << std::endl;
    PrintInOrder(head->left_, height + 1, "^", len);
}

std::string PrintBinaryTree::GetSpace(int number) {
    std::string space = " ";
    std::string buf;
    for (int i = 0; i < number; i++) {
        buf += space;
    }
    return buf;
}
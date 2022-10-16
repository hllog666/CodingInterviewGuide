/********************************************************************************
* @author: hllog
* @date: 2022/10/16 12:13
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_PRINT_BINARY_TREE_H
#define CODINGINTERVIEWGUIDE_PRINT_BINARY_TREE_H

#include <string>
#include "node.h"

class PrintBinaryTree {
public:
    static void PrintTree(Node *head);

    static void PrintInOrder(Node *head, int height, const std::string &to, int len);

    static std::string GetSpace(int number);
};


#endif //CODINGINTERVIEWGUIDE_PRINT_BINARY_TREE_H

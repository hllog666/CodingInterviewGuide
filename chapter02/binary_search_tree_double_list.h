/********************************************************************************
* @author: hllog
* @date: 2022/10/15 12:43
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_BINARY_SEARCH_TREE_DOUBLE_LIST_H
#define CODINGINTERVIEWGUIDE_BINARY_SEARCH_TREE_DOUBLE_LIST_H

#include <queue>

class Node {
public:
    explicit Node(int data) {
        value_ = data;
    }

    int value_;
    Node *left_;
    Node *right_;
};

class ReturnType {
public:
    explicit ReturnType(Node *start, Node *end) {
        start_ = start;
        end_ = end;
    }

    Node *start_;
    Node *end_;
};

class BinarySearchTreeDoubleList {
public:
    static Node *Convert(Node *head);

    static void InOrderToQueue(Node *head, std::queue<Node *> &que);

    static Node *Convert2(Node *head);

    static ReturnType *Process(Node *head);
};


#endif //CODINGINTERVIEWGUIDE_BINARY_SEARCH_TREE_DOUBLE_LIST_H

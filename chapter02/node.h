/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:22
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_NODE_H
#define CODINGINTERVIEWGUIDE_NODE_H

class Node {
public:
    explicit Node(int data);

    int value_;
    Node *next_;
};

class DoubleNode {
public:
    explicit DoubleNode(double data);

    int value_;
    DoubleNode *next_;
    DoubleNode *last_;
};

#endif //CODINGINTERVIEWGUIDE_NODE_H

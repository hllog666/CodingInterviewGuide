/********************************************************************************
* @author: hllog
* @date: 2022/10/16 0:34
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_NODE_H
#define CODINGINTERVIEWGUIDE_NODE_H

class Node {
public:
    explicit Node(int data) {
        value_ = data;
    }

    int value_;
    Node *left_;
    Node *right_;
};

#endif //CODINGINTERVIEWGUIDE_NODE_H

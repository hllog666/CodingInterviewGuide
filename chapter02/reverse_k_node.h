/********************************************************************************
* @author: hllog
* @date: 2022/10/15 11:33
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_REVERSE_K_NODE_H
#define CODINGINTERVIEWGUIDE_REVERSE_K_NODE_H

#include<stack>
#include "node.h"

class ReverseKNode {
public:
    static Node *ReverseKNodes(Node *head, int k);

    static Node *Resign(std::stack<Node *> &st, Node *left, Node *right);

    static Node *ReverseKNodes2(Node *head, int k);

    static void Resign2(Node *left, Node *start, Node *end, Node *right);
};


#endif //CODINGINTERVIEWGUIDE_REVERSE_K_NODE_H

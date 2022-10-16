/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:58
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_MID_NODE_H
#define CODINGINTERVIEWGUIDE_MID_NODE_H

#include "node.h"

class MidNode {
public:
    static Node *RemoveMidNode(Node *head);

    static Node *RemoveByRatio(Node *head, int a, int b);
};


#endif //CODINGINTERVIEWGUIDE_MID_NODE_H

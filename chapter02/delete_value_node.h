/********************************************************************************
* @author: hllog
* @date: 2022/10/15 12:30
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_DELETE_VALUE_NODE_H
#define CODINGINTERVIEWGUIDE_DELETE_VALUE_NODE_H

#include "node.h"

class DeleteValueNode {
public:
    static Node *RemoveValue(Node *head, int number);

    static Node *RemoveValue2(Node *head, int number);
};


#endif //CODINGINTERVIEWGUIDE_DELETE_VALUE_NODE_H

/********************************************************************************
* @author: hllog
* @date: 2022/10/15 4:02
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_LOOP_LIST_H
#define CODINGINTERVIEWGUIDE_LOOP_LIST_H

#include "node.h"

class LoopList {
public:
    static Node *GetLoopNode(Node *head);

    static Node *NoLoop(Node *head1, Node *head2);

    static Node *BothLoop(Node *head1, Node *loop1, Node *head2, Node *loop2);

    static Node *GetIntersectNode(Node *head1, Node *head2);
};


#endif //CODINGINTERVIEWGUIDE_LOOP_LIST_H

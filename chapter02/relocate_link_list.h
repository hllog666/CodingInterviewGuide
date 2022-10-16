/********************************************************************************
* @author: hllog
* @date: 2022/10/15 16:15
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_RELOCATE_LINK_LIST_H
#define CODINGINTERVIEWGUIDE_RELOCATE_LINK_LIST_H

#include "node.h"

class RelocateLinkList {
public:
    static void Relocate(Node *head);

    static void MergeLR(Node *left, Node *right);
};


#endif //CODINGINTERVIEWGUIDE_RELOCATE_LINK_LIST_H

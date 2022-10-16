/********************************************************************************
* @author: hllog
* @date: 2022/10/15 14:59
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_LINK_LIST_SELECTION_SORT_H
#define CODINGINTERVIEWGUIDE_LINK_LIST_SELECTION_SORT_H

#include "node.h"

class LinkListSelectionSort {
public:
    static Node *SelectionSort(Node *head);

    static Node *GetSmallestPreNode(Node *head);
};


#endif //CODINGINTERVIEWGUIDE_LINK_LIST_SELECTION_SORT_H

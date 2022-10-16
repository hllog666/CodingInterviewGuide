/********************************************************************************
* @author: hllog
* @date: 2022/10/13 23:16
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_PARTITION_LIST_H
#define CODINGINTERVIEWGUIDE_PARTITION_LIST_H

#include <vector>
#include "node.h"

class PartitionList {
public:
    static Node *ListPartition(Node *head, int pivot);

    static void ArrPartition(std::vector<Node *> &nodeArr, int pivot);

    static void Swap(std::vector<Node *> &nodeArr, int a, int b);

    static Node *ListPartition2(Node *head, int pivot);
};


#endif //CODINGINTERVIEWGUIDE_PARTITION_LIST_H

/********************************************************************************
* @author: hllog
* @date: 2022/10/13 23:16
********************************************************************************/


#include "partition_list.h"

Node *PartitionList::ListPartition(Node *head, int pivot) {
    if (head == nullptr) {
        return head;
    }
    Node *cur = head;
    int i = 0;
    while (cur != nullptr) {
        i++;
        cur = cur->next_;
    }
    std::vector<Node *> nodeArr(i);
    i = 0;
    cur = head;
    for (i = 0; i != nodeArr.size(); i++) {
        nodeArr[i] = cur;
        cur = cur->next_;
    }
    ArrPartition(nodeArr, pivot);
    for (i = 1; i != nodeArr.size(); i++) {
        nodeArr[i - 1]->next_ = nodeArr[i];
    }
    nodeArr[i - 1]->next_ = nullptr;
    return nodeArr[0];
}

void PartitionList::ArrPartition(std::vector<Node *> &nodeArr, int pivot) {
    int small = -1;
    int big = nodeArr.size();
    int index = 0;
    while (index != big) {
        if (nodeArr[index]->value_ < pivot) {
            Swap(nodeArr, ++small, index++);
        } else if (nodeArr[index]->value_ == pivot) {
            index++;
        } else {
            Swap(nodeArr, --big, index);
        }
    }
}

void PartitionList::Swap(std::vector<Node *> &nodeArr, int a, int b) {
    Node *tmp = nodeArr[a];
    nodeArr[a] = nodeArr[b];
    nodeArr[b] = tmp;
}

Node *PartitionList::ListPartition2(Node *head, int pivot) {
    Node *sH = nullptr;
    Node *sT = nullptr;
    Node *eH = nullptr;
    Node *eT = nullptr;
    Node *bH = nullptr;
    Node *bT = nullptr;
    Node *next = nullptr;
    while (head != nullptr) {
        next = head->next_;
        head->next_ = nullptr;
        if (head->value_ < pivot) {
            if (sH == nullptr) {
                sH = head;
                sT = head;
            } else {
                sT->next_ = head;
                sT = head;
            }
        } else if (head->value_ == pivot) {
            if (eH == nullptr) {
                eH = head;
                eT = head;
            } else {
                eT->next_ = head;
                eT = head;
            }
        } else {
            if (bH == nullptr) {
                bH = head;
                bT = head;
            } else {
                bT->next_ = head;
                bT = head;
            }
        }
        head = next;
    }
    if (sT != nullptr) {
        sT->next_ = eH;
        eT = eT == nullptr ? sT : eT;
    }
    if (eT != nullptr) {
        eT->next_ = bH;
    }
    return sH != nullptr ? sH : eH != nullptr ? eH : bH;
}
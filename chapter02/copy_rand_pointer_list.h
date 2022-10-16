/********************************************************************************
* @author: hllog
* @date: 2022/10/14 0:13
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_COPY_RAND_POINTER_LIST_H
#define CODINGINTERVIEWGUIDE_COPY_RAND_POINTER_LIST_H

class Node {
public:
    explicit Node(int data) {
        value_ = data;
    }

    int value_;
    Node *next_;
    Node *rand_;
};

class CopyRandPointerList {
public:
    static Node *CopyListWithRandom(Node *head);

    static Node *CopyListWithRandom2(Node *head);
};


#endif //CODINGINTERVIEWGUIDE_COPY_RAND_POINTER_LIST_H

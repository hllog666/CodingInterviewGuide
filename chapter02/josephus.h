/********************************************************************************
* @author: hllog
* @date: 2022/10/12 22:23
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_JOSEPHUS_H
#define CODINGINTERVIEWGUIDE_JOSEPHUS_H

#include "node.h"

class Josephus {
public:
    static Node *JosephusKill(Node *head, int m);

    static Node *JosephusKill2(Node *head, int m);

    static int GetLive(int i, int m);
};


#endif //CODINGINTERVIEWGUIDE_JOSEPHUS_H

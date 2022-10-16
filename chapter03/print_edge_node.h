/********************************************************************************
* @author: hllog
* @date: 2022/10/16 3:24
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_PRINT_EDGE_NODE_H
#define CODINGINTERVIEWGUIDE_PRINT_EDGE_NODE_H

#include <vector>
#include "node.h"

class PrintEdgeNode {
public:
    static void PrintEdge(Node *head);

    static int GetHeight(Node *head, int length);

    static void SetEdgeMap(Node *head, int length, std::vector<std::vector<Node *>> &edgeMap);

    static void PrintLeafNotInMap(Node *head, int length, std::vector<std::vector<Node *>> &edgeMap);

    static void PrintEdge2(Node *head);

    static void PrintLeftEdge(Node *head, bool print);

    static void PrintRightEdge(Node *head, bool print);
};


#endif //CODINGINTERVIEWGUIDE_PRINT_EDGE_NODE_H

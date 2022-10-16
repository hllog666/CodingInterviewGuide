/********************************************************************************
* @author: hllog
* @date: 2022/10/16 0:34
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_TRAVERSE_BINARY_TREE_H
#define CODINGINTERVIEWGUIDE_TRAVERSE_BINARY_TREE_H

#include "node.h"

class TraverseBinaryTree {
public:
    static void PreOrderRecur(Node *head);

    static void InOrderRecur(Node *head);

    static void PostOrderRecur(Node *head);

    static void PreOrderUnRecur(Node *head);

    static void InOrderUnRecur(Node *head);

    static void PostOrderUnRecur(Node *head);

    static void PostOrderUnRecur2(Node *head);

    static void Morris(Node *head);

    static void MorrisPre(Node *head);

    static void MorrisIn(Node *head);

    static void MorrisPost(Node *head);

    static Node *ReverseEdge(Node *from);

    static void PrintEdge(Node *head);
};


#endif //CODINGINTERVIEWGUIDE_TRAVERSE_BINARY_TREE_H

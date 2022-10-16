/********************************************************************************
* @author: hllog
* @date: 2022/10/16 3:24
********************************************************************************/

#include <iostream>
#include "print_edge_node.h"

void PrintEdgeNode::PrintEdge(Node *head) {
    if (head == nullptr) {
        return;
    }
    int height = GetHeight(head, 0);
    std::cout << "height = " << height << std::endl;
    std::vector<std::vector<Node *>> edgeMap(height, std::vector<Node *>(2));
    SetEdgeMap(head, 0, edgeMap);
    for (int i = 0; i != edgeMap.size(); i++) {
        std::cout << edgeMap[i][0]->value_ << " ";
    }
    PrintLeafNotInMap(head, 0, edgeMap);
    for (int i = edgeMap.size() - 1; i != -1; i--) {
        if (edgeMap[i][0] != edgeMap[i][1]) {
            std::cout << edgeMap[i][1]->value_ << " ";
        }
    }
    std::cout << std::endl;
}

int PrintEdgeNode::GetHeight(Node *head, int length) {
    if (head == nullptr) {
        return length;
    }
    return std::max(GetHeight(head->left_, length + 1), GetHeight(head->right_, length + 1));
}

void PrintEdgeNode::SetEdgeMap(Node *head, int length, std::vector<std::vector<Node *>> &edgeMap) {
    if (head == nullptr) {
        return;
    }
    edgeMap[length][0] = edgeMap[length][0] == nullptr ? head : edgeMap[length][0];
    edgeMap[length][1] = head;
    SetEdgeMap(head->left_, length + 1, edgeMap);
    SetEdgeMap(head->right_, length + 1, edgeMap);
}

void PrintEdgeNode::PrintLeafNotInMap(Node *head, int length, std::vector<std::vector<Node *>> &edgeMap) {
    if (head == nullptr) {
        return;
    }
    if (head->left_ == nullptr && head->right_ == nullptr &&
        head != edgeMap[length][0] && head != edgeMap[length][1]) {
        std::cout << head->value_ << " ";
    }
    PrintLeafNotInMap(head->left_, length + 1, edgeMap);
    PrintLeafNotInMap(head->right_, length + 1, edgeMap);
}

void PrintEdgeNode::PrintEdge2(Node *head) {
    if (head == nullptr) {
        return;
    }
    std::cout << head->value_ << " ";
    if (head->left_ != nullptr && head->right_ != nullptr) {
        PrintLeftEdge(head->left_, true);
        PrintRightEdge(head->right_, true);
    } else {
        PrintEdge2(head->left_ != nullptr ? head->left_ : head->right_);
    }
    std::cout << std::endl;
}

void PrintEdgeNode::PrintLeftEdge(Node *head, bool print) {
    if (head == nullptr) {
        return;
    }
    if (print || (head->left_ == nullptr && head->right_ == nullptr)) {
        std::cout << head->value_ << " ";
    }
    PrintLeftEdge(head->left_, print);
    PrintLeftEdge(head->right_, print && head->left_ == nullptr);
}

void PrintEdgeNode::PrintRightEdge(Node *head, bool print) {
    if (head == nullptr) {
        return;
    }
    PrintRightEdge(head->left_, print && head->right_ == nullptr);
    PrintRightEdge(head->right_, print);
    if (print || (head->left_ == nullptr && head->right_ == nullptr)) {
        std::cout << head->value_ << " ";
    }
}
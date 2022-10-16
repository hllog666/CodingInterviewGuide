/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:16
********************************************************************************/

#include <stdexcept>
#include "delete_node_pointer.h"

void DeleteNodePointer::RemoveNodeWired(Node *node) {
    if (node == nullptr) {
        return;
    }
    Node *next = node->next_;
    if (next == nullptr) {
        throw std::runtime_error("can not remove last node.");
    }
    node->value_ = next->value_;
    node->next_ = next->next_;
}
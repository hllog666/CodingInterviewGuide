/********************************************************************************
* @author: hllog
* @date: 2022/10/16 12:55
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_BINARY_TREE_SERIALIZATION_H
#define CODINGINTERVIEWGUIDE_BINARY_TREE_SERIALIZATION_H

#include <queue>
#include <string>
#include "node.h"

class BinaryTreeSerialization {
public:
    static std::string SerialByPre(Node *head);

    static Node *ReconByPreString(const std::string &preString);

    static Node *ReconPreOrder(std::queue<std::string> &que);

    static std::vector<std::string> Split(const std::string &str, const std::string &pattern);

    static std::string SerialByLevel(Node *head);

    static Node *ReconByLevelString(const std::string& levelStr);

    static Node *GenerateNodeByString(const std::string& val);
};


#endif //CODINGINTERVIEWGUIDE_BINARY_TREE_SERIALIZATION_H

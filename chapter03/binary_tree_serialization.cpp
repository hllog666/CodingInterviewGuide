/********************************************************************************
* @author: hllog
* @date: 2022/10/16 12:55
********************************************************************************/

#include <vector>
#include "binary_tree_serialization.h"

std::string BinaryTreeSerialization::SerialByPre(Node *head) {
    if (head == nullptr) {
        return "#!";
    }
    std::string ans = std::to_string(head->value_) + "!";
    ans += SerialByPre(head->left_);
    ans += SerialByPre(head->right_);
    return ans;
}

Node *BinaryTreeSerialization::ReconByPreString(const std::string &preStr) {
    std::vector<std::string> values = Split(preStr, "!");
    std::queue<std::string> que;
    for (int i = 0; i != values.size(); i++) {
        que.push(values[i]);
    }
    return ReconPreOrder(que);
}

Node *BinaryTreeSerialization::ReconPreOrder(std::queue<std::string> &que) {
    std::string value = que.front();
    que.pop();
    if (value == "#") {
        return nullptr;
    }
    Node *head = new Node(std::stoi(value));
    head->left_ = ReconPreOrder(que);
    head->right_ = ReconPreOrder(que);
    return head;
}

std::vector<std::string> BinaryTreeSerialization::Split(const std::string &str, const std::string &pattern) {
    std::vector<std::string> res;
    if (str.empty())
        return res;
    //在字符串末尾也加入分隔符，方便截取最后一段
    std::string strs = str + pattern;
    size_t pos = strs.find(pattern);

    while (pos != std::string::npos) {
        std::string temp = strs.substr(0, pos);
        res.push_back(temp);
        //去掉已分割的字符串,在剩下的字符串中进行分割
        strs = strs.substr(pos + 1, strs.size());
        pos = strs.find(pattern);
    }

    return res;
}

std::string BinaryTreeSerialization::SerialByLevel(Node *head) {
    if (head == nullptr) {
        return "#!";
    }
    std::string ans = std::to_string(head->value_) + "!";
    std::queue<Node *> que;
    que.push(head);
    while (!que.empty()) {
        head = que.front();
        que.pop();
        if (head->left_ != nullptr) {
            ans += std::to_string(head->left_->value_) + "!";
            que.push(head->left_);
        } else {
            ans += "#!";
        }
        if (head->right_ != nullptr) {
            ans += std::to_string(head->right_->value_) + "!";
            que.push(head->right_);
        } else {
            ans += "#!";
        }
    }
    return ans;
}

Node *BinaryTreeSerialization::ReconByLevelString(const std::string& levelStr) {
    std::vector<std::string> values = Split(levelStr, "!");
    int index = 0;
    Node *head = GenerateNodeByString(values[index++]);
    std::queue<Node *> que;
    if (head != nullptr) {
        que.push(head);
    }
    Node *node = nullptr;
    while (!que.empty()) {
        node = que.front();
        que.pop();
        node->left_ = GenerateNodeByString(values[index++]);
        node->right_ = GenerateNodeByString(values[index++]);
        if (node->left_ != nullptr) {
            que.push(node->left_);
        }
        if (node->right_ != nullptr) {
            que.push(node->right_);
        }
    }
    return head;
}

Node *BinaryTreeSerialization::GenerateNodeByString(const std::string& val) {
    if (val == "#") {
        return nullptr;
    }
    return new Node(std::stoi(val));
}
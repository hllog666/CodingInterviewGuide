/********************************************************************************
* @author: hllog
* @date: 2022/10/12 22:28
********************************************************************************/

#include <iostream>
#include "josephus.h"

void JosephusKillTest() {
    std::cout << "JosephusKillTest start..." << std::endl;
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = head;
    Node *ans = Josephus::JosephusKill(head, 3);
    std::cout << ans->value_ << std::endl;
    std::cout << "JosephusKillTest end..." << std::endl;
}

void JosephusKill2Test() {
    std::cout << "JosephusKill2Test start..." << std::endl;
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = head;
    Node *ans = Josephus::JosephusKill2(head, 3);
    std::cout << ans->value_ << std::endl;
    std::cout << "JosephusKill2Test end..." << std::endl;
}

int main() {
    JosephusKillTest();
    JosephusKill2Test();
    return 0;
}
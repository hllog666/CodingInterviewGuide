/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:09
********************************************************************************/

#include <iostream>
#include "common_part_ordered_list.h"

void PrintCommonPartTest() {
    std::cout << "PrintCommonPartTest start..." << std::endl;
    Node *head1 = new Node(1);
    Node *temp = head1;
    for (int i = 0; i < 4; i++) {
        temp->next_ = new Node(i + 2);
        temp = temp->next_;
    }
    temp->next_ = nullptr;
    Node *head2 = new Node(3);
    temp = head2;
    for (int i = 0; i < 5; i++) {
        temp->next_ = new Node(i + 4);
        temp = temp->next_;
    }
    temp->next_ = nullptr;
    CommonPartOrderedList::PrintCommonPart(head1, head2);
    std::cout << "PrintCommonPartTest end..." << std::endl;
}

int main() {
    PrintCommonPartTest();
    return 0;
}
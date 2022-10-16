/********************************************************************************
* @author: hllog
* @date: 2022/10/12 1:03
********************************************************************************/

#include <iostream>
#include "common_part_ordered_list.h"

void CommonPartOrderedList::PrintCommonPart(Node *head1, Node *head2) {
    std::cout << "Common Part: " << std::endl;
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->value_ < head2->value_) {
            head1 = head1->next_;
        } else if (head1->value_ > head2->value_) {
            head2 = head2->next_;
        } else {
            std::cout << head1->value_ << " ";
            head1 = head1->next_;
            head2 = head2->next_;
        }
    }
    std::cout << std::endl;
}
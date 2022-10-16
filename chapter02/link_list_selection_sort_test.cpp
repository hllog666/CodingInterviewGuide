/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:06
********************************************************************************/

#include <iostream>
#include "link_list_selection_sort.h"

void SelectionSortTest() {
    std::cout << "SelectionSortTest start..." << std::endl;
    Node *head = new Node(4);
    head->next_ = new Node(2);
    head->next_->next_ = new Node(5);
    head->next_->next_->next_ = new Node(1);
    head->next_->next_->next_->next_ = new Node(3);
    head->next_->next_->next_->next_->next_ = nullptr;
    Node *ans = LinkListSelectionSort::SelectionSort(head);
    while (ans != nullptr) {
        std::cout << ans->value_ << std::endl;
        ans = ans->next_;
    }
    std::cout << "SelectionSortTest end..." << std::endl;
}

int main() {
    SelectionSortTest();
    return 0;
}
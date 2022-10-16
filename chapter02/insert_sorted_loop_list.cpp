/********************************************************************************
* @author: hllog
* @date: 2022/10/15 15:26
********************************************************************************/


#include "insert_sorted_loop_list.h"

Node *InsertSortedLoopList::InsertNumber(Node *head, int number) {
    Node *node = new Node(number);
    if (head == nullptr) {
        node->next_ = node;
        return node;
    }
    Node *pre = head;
    Node *cur = head->next_;
    while (cur != head) {
        if (pre->value_ <= number && cur->value_ >= number) {
            break;
        }
        pre = cur;
        cur = cur->next_;
    }
    pre->next_ = node;
    node->next_ = cur;
    return head->value_ < number ? head : node;
}
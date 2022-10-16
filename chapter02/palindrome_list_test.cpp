/********************************************************************************
* @author: hllog
* @date: 2022/10/13 22:57
********************************************************************************/

#include <iostream>
#include "palindrome_list.h"

void IsPalindromeTest() {
    std::cout << "IsPalindromeTest start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp->next_ = new Node(2);
    tmp->next_ = new Node(1);
    tmp->next_ = nullptr;
    bool ans = PalindromeList::IsPalindrome(head);
    std::cout << ans << std::endl;
    std::cout << "IsPalindromeTest end..." << std::endl;
}

void IsPalindrome2Test() {
    std::cout << "IsPalindrome2Test start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp->next_ = new Node(2);
    tmp->next_ = new Node(1);
    tmp->next_ = nullptr;
    bool ans = PalindromeList::IsPalindrome2(head);
    std::cout << ans << std::endl;
    std::cout << "IsPalindrome2Test end..." << std::endl;
}

void IsPalindrome3Test() {
    std::cout << "IsPalindrome3Test start..." << std::endl;
    Node *head = new Node(1);
    Node *tmp = head;
    tmp->next_ = new Node(2);
    tmp->next_ = new Node(2);
    tmp->next_ = new Node(1);
    tmp->next_ = nullptr;
    bool ans = PalindromeList::IsPalindrome3(head);
    std::cout << ans << std::endl;
    std::cout << "IsPalindrome3Test end..." << std::endl;
}

int main() {
    IsPalindromeTest();
    IsPalindrome2Test();
    IsPalindrome3Test();
    return 0;
}
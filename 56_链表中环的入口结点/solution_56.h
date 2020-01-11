#ifndef CODING_INTERVIEW_56_SOLUTION_H
#define CODING_INTERVIEW_56_SOLUTION_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

struct ListNode {
  int val;
  struct ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode() {}
};

class Solution56 {
 public:
  ListNode* EntryNodeOfLoop(ListNode* pHead) {
    if (pHead == nullptr || pHead->next == nullptr) {
      return nullptr;
    }
    ListNode* pre = pHead;
    ListNode* curr = pHead->next;
    
    while (curr != nullptr) {
      pre->next = nullptr;
      pre = curr;
      curr = curr->next;
    }
    return pre;
  }
};

#endif

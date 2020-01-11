#ifndef CODING_INTERVIEW_05_SOLUTION_H
#define CODING_INTERVIEW_05_SOLUTION_H

#include <iostream>
#include <stack>
#include <vector>

using std::cout;
using std::endl;
using std::stack;
using std::vector;

struct ListNode {
  int val;
  struct ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution05 {
 public:
  vector<int> printListFromTailToHead1(ListNode* head) {
    stack<int> st;
    int count = 0;
    while (head != nullptr) {
      st.push(head->val);
      head = head->next;
      ++count;
    }
    vector<int> res(count);
    for (int i = 0; i < count && !st.empty(); ++i) {
      res[i] = st.top();
      st.pop();
    }
    return res;
  }

  vector<int> printListFromTailToHead2(ListNode* head) {
    vector<int> res;
    printListFromTailToHead2(head, res);
    return res;
  }
  void printListFromTailToHead2(ListNode* head, vector<int>& res) {
    if (head != nullptr) {
      printListFromTailToHead2(head->next, res);
      res.push_back(head->val);
    }
  }
};

#endif

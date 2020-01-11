#include "solution_05.h"

int main() {
  Solution05 solution05;
  ListNode *list = new ListNode(1);
  list->next = new ListNode(2);
  list->next->next = new ListNode(3);
  for (auto item : solution05.printListFromTailToHead2(list)) {
    cout << item << " ";
  }
}
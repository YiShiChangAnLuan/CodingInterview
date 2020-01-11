#include "solution_56.h"

int main() {
  Solution56 solution56;

  ListNode *list1 = new ListNode(1);
  ListNode *list2 = new ListNode(2);
  ListNode *list3 = new ListNode(3);
  ListNode *list4 = new ListNode(4);
  ListNode *list5 = new ListNode(5);
  ListNode *list6 = new ListNode(6);
  list1->next = list2;
  list2->next = list3;
  list3->next = list4;
  list4->next = list5;
  list5->next = list6;
  list6->next = list2;
  cout << solution56.EntryNodeOfLoop(list1)->val;
}
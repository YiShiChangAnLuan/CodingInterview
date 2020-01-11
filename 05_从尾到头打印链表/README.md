# Link
> 牛客OJ: [从尾到头打印链表](https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&tqId=11156&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)  

# 题目
#### 题目描述
> 输入一个链表，按链表从尾到头的顺序返回一个ArrayList。

#### 输入描述
> 输入链表头

#### 输出描述
> 返回vector

# 题解  
#### 利用栈先进后出来打印
```
vector<int> printListFromTailToHead(ListNode* head) {
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
```
#### 利用递归
```
vector<int> printListFromTailToHead(ListNode* head) {
  vector<int> res;
  printListFromTailToHead(head, res);
  return res;
}
void printListFromTailToHead(ListNode* head, vector<int>& res) {
  if (head != nullptr) {
    printListFromTailToHead(head->next, res);
    res.push_back(head->val);
  }
}
```
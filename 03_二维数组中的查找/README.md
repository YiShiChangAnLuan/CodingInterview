# Link
> 牛客OJ: [二维数组中的查找](https://www.nowcoder.com/practice/abc3fe2ce8e146608e868a70efebf62e?tpId=13&tqId=11154&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)  

# 题目
#### 题目描述
> 在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

#### 输入描述
> array: 按题意排序待查找的二维数组  
target: 查找的数字

#### 输出描述
> 查找到返回true，否则返回false

# 题解  
#### 暴力破解法
```
bool Find1(int target, const vector<vector<int> > &array) {
  for (const auto &row : array) {
    for (const auto &col : row) {
      if (col == target) {
        return true;
      }
    }
  }
  return false;
}
```
#ifndef CODING_INTERVIEW_03_SOLUTION_H
#define CODING_INTERVIEW_03_SOLUTION_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution03 {
 public:
  /**
   * 暴力遍历解法
   * @param target 查找的数字
   * @param array 按题意排序待查找的二维数组
   * @return 查找到返回true，否则返回false
   */
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
};

#endif

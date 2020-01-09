//
// Created by Yscal on 2020/1/8.
//

#ifndef CODING_INTERVIEW_03_SOLUTION_H
#define CODING_INTERVIEW_03_SOLUTION_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution03 {
 public:
  /* 暴力遍历法 */
  static bool Find1(int target, const vector<vector<int> >& array) {
    for (const auto &row : array) {
      for (const auto &col : row){
        if (col == target) {
          return true;
        }
      }
    }
    return false;
  }
};

#endif //CODING_INTERVIEW_03_二维数组中的查找_SOLUTION03_H_

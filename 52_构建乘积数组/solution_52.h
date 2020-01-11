#ifndef CODING_INTERVIEW_52_SOLUTION_H
#define CODING_INTERVIEW_52_SOLUTION_H

#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::sort;
using std::vector;

/**
 *  给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
 * 其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。
 * 不能使用除法。
 */

class Solution52 {
 public:
  vector<int> multiply(const vector<int>& A) {
    vector<int> res(A.size());
    /* res[i] = A[0] * A[1] * ... * A[i - 1] */
    for (int i = 0, tmp = 1; i < A.size(); ++i) {
      res[i] = tmp;
      tmp *= A[i];
    }
    /* res[i] = A[i + 1] * ... * A[n - 1] */
    for (int i = A.size() - 1, tmp = 1; i >= 0; --i) {
      res[i] *= tmp;
      tmp *= A[i];
    }
    return res;
  }
};

#endif
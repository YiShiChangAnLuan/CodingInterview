#ifndef CODING_INTERVIEW_51_SOLUTION_H
#define CODING_INTERVIEW_51_SOLUTION_H

#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::sort;
using std::vector;

/**
 * 在一个长度为n的数组里的所有数字都在0到n-1的范围内。
 * 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。
 * 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。
 */

class Solution51 {
 public:
  bool duplicate(int numbers[], int length, int* duplication) {
    /* 检查输入是否合法 (所有数字都在0到n-1的范围内)*/
    if (length <= 0 || numbers == nullptr) {
      return false;
    }
    for (auto i = 0; i < length; ++i) {
      if (numbers[i] < 0 || numbers[i] > length - 1) {
        return false;
      }
    }

    *duplication = -1;
    sort(numbers, numbers + length);

    for (auto i = 0; i < length - 1; ++i) {
      if (numbers[i] == numbers[i + 1]) {
        *duplication = numbers[i];
        return true;
      }
    }
    return false;
  }
};

#endif
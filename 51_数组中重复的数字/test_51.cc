#include "solution_51.h"

int main() {
  Solution51 solution51;
  int numbers[] = {2, 3, 1, 0, 2, 5, 3};
  int length = 7;
  int *duplication;
  if (solution51.duplicate(numbers, length, duplication)) {
    cout << "true, 重复数字为: " << *duplication << endl;
  } else {
    cout << "false" << endl;
  }
}
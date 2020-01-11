#include "solution_03.h"

int main() {
  Solution03 solution03;
  int target = 111;
  vector<vector<int> > array = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
  if (solution03.Find1(target, array)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}
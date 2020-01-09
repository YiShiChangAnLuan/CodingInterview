#include "solution03.h"

int main() {
  int target = 111;
  vector<vector<int> > array = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
  if (Solution03::Find1(target, array)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  cout << "sa" << endl;
}
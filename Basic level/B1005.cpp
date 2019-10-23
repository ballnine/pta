#include <iostream>

using namespace std;

int main() {
  int k,num;
  int flag[11000] = {0};
  cin >> k;
  for (int i = 0;i < k;i++) {
    cin >> num;
    flag[num] = 1;
  }
  for (int i = 1;i < 101;i++) {
    if (flag[i] == 1) {
      int index = i;
      while(index != 1) {
        if (index % 2 == 0) {
          index = index / 2;
          flag[index] = 0;
        } else {
          index = (3*index+1)/2;
          flag[index] = 0;
        }
      }
    }
  }
  int index = 100;
  while(flag[index] != 1 && index > 0) {
    index--;
  }
  cout << index;
  for (int i = index-1;i > 0;i--) {
    if (flag[i] == 1) {
      cout << " " << i;
    }
  }
  return 0;
}
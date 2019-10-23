#include <iostream>
#include <math.h>

using namespace std;

bool issu(int n) {
  for (int i = 2;i <= sqrt(n);i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n,index = 0,count = 0;
  int su[10000];
  cin >> n;
  for (int i = 2;i <= n;i++) {
    if(issu(i)) {
      su[index++] = i;
    }
  }
  for (int i = 0;i < index-1;i++) {
    if (su[i+1] - su[i] == 2)
      count++;
  }
  cout << count << endl;
  return 0;
}
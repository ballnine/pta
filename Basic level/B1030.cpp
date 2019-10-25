#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  long long p;
  int num[100010];
  cin >> n >> p;
  for (int i = 0;i < n;i++) {
    cin >> num[i];
  }
  sort(num,num+n);
  int result = 0;
  for (int i = 0;i < n;i++) {
    for (int j = i+result;j < n;j++) {
      long long temp = num[j] - num[i] * p;
      if (temp <= 0) {
        int length = j - i + 1;
        if (length > result) {
          result = length;
        }
      } else {
        break;
      }
    }
  }
  cout << result;
  return 0;
}
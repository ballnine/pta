#include <iostream>

using namespace std;

int main() {
  int n,m;
  int num[110];
  cin >> n >> m;
  for (int i = 0;i < n;i++) {
    cin >> num[i];
  }
  m = m % n;
  for (int i = n-m;i < n;i++) {
    cout << num[i] << " ";
  }
  for (int i = 0;i < n-m-1;i++) {
    cout << num[i] <<" ";
  }
  cout << num[n-m-1];
  return 0;
}
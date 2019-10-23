#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int MAXNUM = 110;
const string china[11] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main() {
  char num[MAXNUM];
  string result[4];
  cin >> num;
  int count = 0,len = 0;
  for (int i = 0;i < strlen(num);i++) {
    count += num[i] - '0';
  }
  while(count / 10 != 0) {
    int temp = count % 10;
    count = count / 10;
    result[len] = china[temp];
    len++;
  }
  result[len] = china[count];
  for (int i = len;i > 0;i--) {
    cout << result[i] << " ";
  }
  cout << result[0];
  return 0;
}
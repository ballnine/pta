#include <iostream>
#include <string>

using namespace std;

int main() {
  string num;
  cin >> num;
  int times[10] = {0};
  int number;
  for (int i = 0;i < num.length();i++) {
    number = num[i] - '0';
    times[number]++;
  }
  for (int i = 0;i < 10;i++) {
    if (times[i] != 0) {
      cout << i << ":" << times[i] << endl;
    }
  }
  return 0;
}

/*
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[1001];
  int num[10] = {0}, temp = 0;
  cin >> str;
  int len = strlen(str);
  for (int i = 0;i < len;i++) {
    temp = str[i] - '0';
    num[temp]++;
  }
  for (int i = 0;i < 10;i++) {
    if (num[i] != 0) {
      cout << i << ":" << num[i] << endl;
    }
  }
  return 0;
}*/
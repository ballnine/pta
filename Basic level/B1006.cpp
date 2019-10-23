#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
  string num;
  cin >> num;
  int index = 0,flag = 0;
  if (num.length() == 3) {
    int hund = num[index] - '0';
    for (int i = 0;i < hund;i++) {
      cout << "B";
    }
    index++;
    flag = 1;
  }
  if (num.length() == 2 || flag == 1) {
    int ten = num[index] - '0';
    for (int i = 0;i < ten;i++) {
      cout << "S";
    }
    index++;
  }
  int single = num[index] - '0';
  for (int i = 1;i <= single;i++) {
    cout << i;
  }
  return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
  int n, hund =0, ten = 0, single = 0;
  cin >> n;
  hund = n / 100;
  ten = (n / 10) % 10;
  single = n % 10;
  for (int i = 0; i < hund;i++) {
    cout << "B";
  }
  for (int i = 0; i < ten;i++) {
    cout << "S";
  }
  for (int i = 1;i <= single;i++) {
    cout << i;
  }
  return 0;
}*/
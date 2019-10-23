#include <iostream>
#include <string>

using namespace std;

int main() {
  string a,result = "";
  int b,temp = 0,flag = 0;
  cin >> a >> b;
  char num = a[0];
  for (int i = 0;i < a.length();i++) {
    num = (((a[i] - '0') + temp * 10) / b) + '0';
    temp = ((a[i] - '0') + temp * 10) % b;
    if (flag == 0 && num != '0') {
      flag = 1;
    }
    if (flag == 1) {
      result = result + num;
    }
  }
  if (flag == 0) {
    cout << "0";
  } else {
    cout << result;
  }
  cout << " " << temp;
  return 0;
}

/*
#include <iostream>
#include <cstring>

using namespace std;

const int MAXNUM = 1010;

struct bign {
  int num[MAXNUM];
  int len;
  bign() {
    memset(num, 0, sizeof(num));
    len = 0;
  }
};

void change(char str[MAXNUM], bign& number) {
  number.len = strlen(str);
  int len = strlen(str);
  for (int i = 0;i < len;i++) {
    number.num[i] = str[len-i-1] - '0';
  }
}

bign divide_big(bign number, int b, int& r) {
  bign c;
  c.len = number.len;
  for (int i = c.len - 1;i >= 0;i--) {
    r = r * 10 + number.num[i];
    if (r / b != 0) {
      c.num[i] = r / b;
      r = r%b;
    } else {
      c.num[i] = 0;
    }
  }
  while (c.len-1 > 1 && c.num[c.len-1] == 0) {
    c.len--;
  }
  return c;
}

int main() {
  bign number;
  int b, r = 0;
  char str[MAXNUM];
  cin >> str >> b;
  change(str, number);
  bign result = divide_big(number, b, r);
  if (result.len == 0) {
    cout << 0;
  }
  for (int i = result.len-1;i >= 0;i--) {
    cout << result.num[i];
  }
  cout << " " << r;
  return 0;
}*/
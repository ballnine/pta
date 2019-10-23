#include <iostream>

using namespace std;

int main() {
  int n;
  char str;
  cin >> n >> str;
  int count = 1,num = 1;
  while(count <= n) {
    num++;
    count = 2*num*num-1;
  }
  num--;
  int last = 2 * num - 1;
  for(int i = last;i >= 1;i -= 2) {
    int temp = (last - i)/2;
    for (int j = 0;j < temp;j++) {
      cout << " ";
    }
    for (int j = 0;j < i;j++) {
      cout << str;
    }
    cout << endl;
  }
  for (int i = 3;i <= last;i += 2) {
    int temp = (last - i)/2;
    for (int j = 0;j < temp;j++) {
      cout << " ";
    }
    for (int j = 0;j < i;j++) {
      cout << str;
    }
    cout << endl;
  }
  cout << n-(2*num*num-1);
  return 0;
}

/*
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n, line = -1, index = 0,count = 1, temp;
  char c;
  cin >> n >> c;
  temp = n;
  if (n < 7) {
    cout << c << endl;
    cout << n - 1 << endl;
    return 0;
  }
  n--;
  while(n >= 0) {
    line += 2;
    index ++;
    count += 2; 
    n = n - 2 * count;
  }
  count -= 2;
  for (int i = 0; i < line;i++) {
    int cur = 1 + 2 * (abs(index) - 1);
    for (int j = 0;j < (count - cur) / 2; j++) {
      cout << " ";
    }
    for (int j = 0; j < cur; j++) {
      cout << c;
    }
    cout << endl;
    index--;
    if (index == 0) {
      index -= 2;
    }
  }
  cout << temp - (1 + 2 * (3 * (line/2) + (line/2) * (line/2 - 1))) << endl;
  return 0;
}*/
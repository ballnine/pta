#include <iostream>

using namespace std;

int main() {
  int a,b,d;
  cin >> a >> b >> d;
  int c = a + b;
  int temp = c % d;
  string result = "";
  while(c != 0) {
    result += temp + '0';
    c = c / d;
    temp = c % d;
  }
  if (result.length() == 0) {
    result = "0";
  }
  for (int i = result.length() - 1;i >= 0;i--) {
    cout << result[i];
  }
  return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
  int a,b, count = 0;
  int d;
  cin >> a >> b >> d;
  a = a + b;
  int num[33] = {0};
  do {
    num[count++] = a % d;
    a /= d;
  } while( a != 0);
  for (int i = count - 1;i >= 0;i--) {
    cout << num[i];
  }
  cout << endl;
  return 0;
}*/
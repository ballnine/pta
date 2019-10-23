#include <iostream>
#include <string>

using namespace std;

int main() {
  string str,temp;
  getline(cin,str);
  string s[80];
  int index = 0;
  for (int i = 0;i < str.length();i++) {
    temp = "";
    while(str[i] != ' ' && i < str.length()){
      temp = temp + str[i];
      i++;
    }
    s[index++] = temp;
  }
  for (int i = index-1;i >= 1;i--) {
    cout << s[i] << " ";
  }
  cout << s[0];
  return 0;
}

/*
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[81], sub[81];
  cin.getline(str, 81);
  int len = strlen(str) - 1, index = 0;
  while(len >= 0) {
    if (str[len] != ' ') {
      sub[index++] = str[len--];
    } else {
      for (int i = index - 1;i >= 0;i--) {
        cout << sub[i];
      }
      cout << " ";
      len -= 1;
      index = 0;
    }
  }
  for (int i = index - 1;i >= 0;i--) {
      cout << sub[i];
  }
  return 0;
}*/
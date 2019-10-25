#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  string keyboard,str,result = "";
  int flag = 0;
  getline(cin,keyboard);
  cin >> str;
  map<char,int> badkey;
  for (int i = 0;i < keyboard.length();i++) {
    if ((keyboard[i] >= 'a' && keyboard[i] <= 'z') || (keyboard[i] >= 'A' && keyboard[i] <= 'Z')) {
      badkey[toupper(keyboard[i])] = 1;
      badkey[tolower(keyboard[i])] = 1;
    } else if (keyboard[i] == '+'){
      flag = 1;
    } else {
      badkey[keyboard[i]] = 1;
    }
  }
  for (int i = 0;i < str.length();i++) {
    if (badkey[str[i]] == 1) {
      continue;
    } else if(flag == 1 && str[i] >= 'A' && str[i] <= 'Z') {
      continue;
    } else {
      result += str[i];
    }
  }
  cout << result;
  return 0;
}
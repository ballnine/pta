#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0;i < n;i++) {
    string str;
    cin >> str;
    map<char,int>m;
    int p,t;
    for (int j = 0;j < str.length();j++) {
      m[str[j]]++;
      if (str[j] == 'P')
        p = j;
      if (str[j] == 'T')
        t = j;
    }
    if (m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && m.size() == 3 && t-p>1 && p*(t-p-1)==(str.length()-t-1)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
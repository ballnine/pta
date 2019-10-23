#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(char a,char b) {
  return a > b;
}

int main() {
  string num,a,b;
  int result;
  cin >> num;
  num.insert(0, 4 - num.length(), '0');
  do {
    a = num;
    b = num;
    sort(a.begin(),a.end(),cmp);
    sort(b.begin(),b.end());
    result = stoi(a) - stoi(b);
    num = to_string(result);
    num.insert(0, 4 - num.length(), '0');
    cout << a << " - " << b << " = " << num << endl;
  } while(num != "6174" && num != "0000");
  return 0;
}

/*
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(char a, char b) {return a > b;}
int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');
    do {
        string a = s, b = s;
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end());
        int result = stoi(a) - stoi(b);
        s = to_string(result);
        s.insert(0, 4 - s.length(), '0');
        cout << a << " - " << b << " = " << s << endl;
    } while (s != "6174" && s != "0000");
    return 0;
}*/

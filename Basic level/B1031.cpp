#include <iostream>
#include <string>

using namespace std;

int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char rights[11] = {'1','0','X','9','8','7','6','5','4','3','2'};

int main() {
  int n,flag = 0,sum = 0,result = 0;
  string str[110];
  cin >> n;
  for (int i= 0;i < n;i++) {
    sum = 0;
    flag = 0;
    cin >> str[i];
    for (int j = 0;j < str[i].length() - 1;j++) {
      if (str[i][j] >= '0' && str[i][j] <= '9') {
        sum += weight[j] * (str[i][j] - '0');
      } else {
        flag = 1;
        result = 1;
      }
    }
    sum = sum % 11;
    if (rights[sum] != str[i][17]) {
      flag = 1;
      result = 1;
    }
    if (flag == 1) {
      cout << str[i] << endl;
    }
  }
  if (result == 0) {
    cout << "All passed";
  }
  return 0;
}

/*
#include <iostream>
#include <cstring>

using namespace std;

int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};

int main() {
  int n, flag = 0;
  cin >> n;
  while(n--) {
    char id[19];
    int count = 0, mod = 0;
    cin >> id;
    for (int i = 0;i < 17;i++) {
      if (id[i] < '0' || id[i] > '9') {
        cout << id << endl;
        flag = 1;
        break;
      }
      int num = id[i] - '0';
      count += num * weight[i];
    }
    mod = count % 11;
    if (M[mod] != id[17]) {
      cout << id << endl;
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << "All passed" << endl;
  }
  return 0;
}*/
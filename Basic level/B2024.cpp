#include <iostream>
#include <string>
#include <math.h>
#include <cstring>

using namespace std;

int main() {
  string num;
  cin >> num;
  string front;
  int back,index = 0;
  while(num[index] != 'E') {
    index++;
  }
  front = num.substr(1,index-1);
  back = stoi(num.substr(index+1));
  if(num[0] == '-') {
    cout << "-";
  }
  if(back < 0) {
    cout << "0.";
    for (int i = 0;i < fabs(back)-1;i++) {
      cout << "0";
    }
    for (int i = 0;i < front.length();i++) {
      if (front[i] != '.'){
        cout << front[i];
      }
    }
  } else {
    cout << front[0];
    int index = 1;
    int temp = 0;
    while(index < front.length() && index <= fabs(back)+1) {
      if (front[index] != '.') {
        cout << front[index];
      }
      temp++;
      index++;
    }
    if(index != front.length()) {
      cout << ".";
      while(index < front.length()) {
        if (front[index] != '.') {
          cout << front[index];
        }
        index++;
      }
    } else {
      while(temp <= fabs(back)) {
        cout << "0";
        temp++;
      }
    }
  }
  return 0;
}

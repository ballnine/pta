#include <iostream>
#include <string>

using namespace std;

const string week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

int change(char hour) {
  if (hour >= '0' && hour <= '9') {
    return hour -'0';
  } else {
    return 10 + (hour - 'A');
  }
}

int main() {
  string a,b,c,d;
  cin >> a >> b >> c >> d;
  int minute,hour,day;
  int flag = 0;
  for (int i = 0;i < a.length();i++) {
    if (flag == 0 && a[i] >= 'A' && a[i] <= 'G') {
      if (a[i] == b[i]) {
        flag = 1;
        day = a[i] - 'A';
        continue;
      }
    }
    if (flag == 1 && ((a[i] >= '0' && a[i] <= '9')||(a[i] >= 'A' && a[i] <= 'N'))) {
      if (a[i] == b[i]) {
        hour = change(a[i]);
        break;
      }
    }
  }
  for (int i = 0;i < c.length();i++) {
    if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')) {
      if (c[i] == d[i]) {
        minute = i;
      }
    }
  }
  cout << week[day] << " ";
  if (hour < 10) {
    cout << "0";
  }
  cout << hour << ":";
  if (minute < 10) {
    cout << "0";
  }
  cout << minute;
  return 0;
}

/*
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

string day[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
char eng[24] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};

char toupper(char tmp) {
  if (tmp >= 'a' && tmp <= 'z') {
    tmp = tmp + ('A' - 'a');
  }
  return tmp;
}

bool isday(char tmp) {
  if ((tmp >= 'A') && (tmp <= 'G')) {
    return true;
  }
  return false;
}

bool istrue(char tmp) {
  if ((tmp >= '0') && (tmp <= '9')) {
    return true;
  }
  if ((tmp >= 'A') && (tmp <= 'N')) {
    return true;
  }
  return false;
}

int main () {
  char str1[61], str2[61],day1[61],day2[61];
  cin >> str1 >> str2 >> day1 >> day2;
  int len = min(strlen(str1), strlen(str2)), flag = 0;
  for (int i = 0; i < len;i++) {
    if (flag == 2) {
      break;
    }
    if ((str1[i] == str2[i])) {
      if (flag == 0) {
        if (isday(str1[i])) {
          int index = str1[i] - 'A';
          cout << day[index] << " ";
          flag++; 
        }
      } else {
        if (istrue(str1[i])) {
          for (int j = 0;j < 24;j++) {
            if (eng[j] == str1[i]) {
              int time = j;
              if (time < 10) {
                cout << "0";
              }
              cout << time << ":";
              flag++;
            }
          }
        }
      } 
    }
  }
  len = min(strlen(day1), strlen(day2));
  for (int i = 0;i < len;i++) {
    if ((day1[i] == day2[i])) {
      char tmp = toupper(day1[i]);
      if ((tmp >= 'A') && (tmp <= 'Z')) {  
        int index = i;
        if (i < 10) {
          cout << "0";
        } 
        cout << index;
        break;
      }
    }
  }
  return 0;
} */
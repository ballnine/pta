#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n,avail = 0;
  cin >> n;
  string name,day,max_name,min_name,max_day = "1813/09/05",min_day = "2014/09/07";
  for (int i = 0;i < n;i++) {
    cin >> name >> day;
    if (day <= "2014/09/06" && day >= "1814/09/06") {
      avail++;
      if (day > max_day) {
        max_name = name;
        max_day = day;
      }
      if (day < min_day) {
        min_name = name;
        min_day = day;
      }
    }
  }
  cout << avail;
  if (avail != 0) {
    cout << " " << min_name << " " << max_name << endl;
  }
  return 0;
}

/*
#include <iostream>
#include <string>

using namespace std;

long long avail(char birth[11]) {
  int year = 0, month = 0, day = 0;
  for (int i = 0; i < 4; i++) {
    year = year * 10 + (birth[i] - '0');
  }
  for (int i = 5; i < 7;i++) {
    month = month * 10 + (birth[i] - '0');
  }
  for (int i = 8; i < 10; i++) {
    day = day * 10 + (birth[i] - '0');
  }
  long long time = year * 10000 + month * 100 + day;
  if ((time > 20140906) || (time < 18140906)) {
    return -1;
  }
  return time;
}

int main() {
  int n, count = 0, time;
  long long min_day = 18140905, max_day = 20140907;
  char birth[11];
  string name, max_name, min_name;
  cin >> n;
  while(n--) {
    cin >> name;
    cin >> birth;
    time = avail(birth);
    if (time != -1) {
      count++;
    } else{
      continue;
    }
    if (time > min_day) {
      min_day = time;
      min_name = name;
    }
    if (time < max_day) {
      max_day = time;
      max_name = name;
    }
  }
  if (count == 0) {
    cout << count << endl;
  } else {
    cout << count << " " << max_name << " " << min_name << endl;
  }
  return 0;
}*/
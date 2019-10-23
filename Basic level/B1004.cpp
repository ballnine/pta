#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct student {
  string name;
  string sid;
  int grade;
} stus[110];

bool compare(student a,student b) {
  return a.grade < b.grade;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> stus[i].name >> stus[i].sid >> stus[i].grade;
  }
  sort(stus,stus+n,compare);
  cout << stus[n-1].name << " " << stus[n-1].sid << endl;
  cout << stus[0].name << " " << stus[0].sid;
  return 0;
}
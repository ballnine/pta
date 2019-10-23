#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct student {
  string id;
  int morel;
  int intell;
  int level;
} stus[100010];

bool cmp(student a,student b) {
  if (a.level != b.level) {
    return a.level < b.level;
  } else {
    if ((a.morel+a.intell) != (b.morel+b.intell)) {
      return (a.morel+a.intell) > (b.morel+b.intell);
    } 
    if (a.morel != b.morel){
      return a.morel > b.morel;
    }
    return a.id < b.id;
  }
}

int main() {
  int n,l,h,count = 0;
  cin >> n >> l >> h;
  for (int i = 0;i < n;i++) {
    cin >> stus[i].id >> stus[i].morel >> stus[i].intell;
    if (stus[i].morel >= l && stus[i].intell >= l) {
      count++;
      if (stus[i].morel >= h && stus[i].intell >= h) {
        stus[i].level = 1;
      } else if (stus[i].morel >= stus[i].intell) {
        if (stus[i].morel >= h) {
          stus[i].level = 2;
        } else {
          stus[i].level = 3;
        }
      } else {
        stus[i].level = 4;
      }
    } else {
      stus[i].level = 5;
    }
  }
  sort(stus,stus+n,cmp);
  cout << count << endl;
  for (int i = 0;i < count;i++) {
    cout << stus[i].id << " " << stus[i].morel << " " << stus[i].intell << endl;
  }
  return 0;
}

/*
#include <iostream>
#include <algorithm>

using namespace std;

struct student {
  int id;
  int moral;
  int intelligence;
  int flag;
} students[100000];

//1.德才均优，总分；总分相等按德，德相等按id；
//2.德优才不优，总分；
//3.德才均不优,德不低于才，总分排
//4.及格，总分排
bool cmp(student a, student b) {
  if (a.flag != b.flag) {
    return a.flag < b.flag;
  }
  int count_a = a.intelligence + a.moral;
  int count_b = b.intelligence + b.moral;
  if (count_a != count_b) {
    return count_a > count_b;
  } else if (a.moral != b.moral) {
    return a.moral > b.moral;
  } else {
    return a.id < b.id;
  }
}

int main() {
  int n,l,h,m = 0,ids,morals,intelligences;     //m及格人数
  scanf("%d%d%d", &n,&l,&h);
  for (int i = 0;i < n;i++) {
    scanf("%d%d%d", &ids,&morals,&intelligences);
    if ((morals < l) || (intelligences < l)) {
      continue;
    }
    students[m].id = ids;
    students[m].moral = morals;
    students[m].intelligence = intelligences;
    if(students[m].moral >= h) {
      if (students[m].intelligence >= h) {
        students[m].flag = 1;
      } else {
        students[m].flag = 2;
      }
    } else if(students[m].moral >= students[m].intelligence) {   //??？？
      students[m].flag = 3;
    } else {
      students[m].flag = 4;
    }
    m++;
  }
  sort(students, students + m,cmp);
  printf("%d\n", m);
  for (int i = 0; i < m;i++) {
    printf("%d %d %d\n",students[i].id,students[i].moral,students[i].intelligence);
  }
  return 0;
} */
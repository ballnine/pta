#include <iostream>
#include <algorithm>

using namespace std;

const int MAXKIND = 1010;

struct good {
  double single;
  int index;
} goods[MAXKIND];

bool cmp(good a,good b) {
  return a.single > b.single;
}

int main() {
  int kind;
  double need;
  cin >> kind >> need;
  double rest[MAXKIND],price[MAXKIND];
  for (int i = 0;i < kind;i++) {
    cin >> rest[i];
  }
  for (int i = 0;i < kind;i++) {
    cin >> price[i];
    goods[i].index = i;
    goods[i].single = price[i] * 1.0 / rest[i];
  }
  sort(goods,goods+kind,cmp);
  int indexs = 0;
  double result = 0.0;
  while(need > 0 && indexs < kind) {
    if (rest[goods[indexs].index] <= need) {
      result += price[goods[indexs].index];
      need -= rest[goods[indexs].index];
      indexs++;
    } else {
      result += goods[indexs].single * need;
      need = 0;
    }
  }
  printf("%.2f",result);
  return 0;
}

/*
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const int MAX_MOON = 1010;
int n;
struct good {
  double remain;
  double sell;
  double aver;
} goods[MAX_MOON];

bool compare(good a, good b){
  return a.aver > b.aver;
}

double calAvail(int require, int index) {
  if (index == n) {
    return 0.0;
  }
  if (require >= goods[index].remain) {
    return calAvail(require - goods[index].remain, index + 1) + goods[index].sell;
  } else {
    return require * goods[index].aver;
  }
}

int main() {
  int d;
  double max_sell = 0.0;
  cin >> n >> d;
  for (int i = 0;i < n;i++) {
    cin >> goods[i].remain;
  }
  for (int i = 0;i < n;i++) {
    cin >> goods[i].sell;
    goods[i].aver = goods[i].sell / goods[i].remain;
  }
  sort(goods, goods + n,compare);
  //max_sell = calAvail(d, 0);
  for (int i = 0;i < n;i++) {
    if (d > goods[i].remain) {
      d -= goods[i].remain;
      max_sell += goods[i].sell;
    } else {
      max_sell += d * goods[i].aver;
      break;
    }
  }
  cout << fixed << setprecision(2) << max_sell << endl;
  return 0;
}*/
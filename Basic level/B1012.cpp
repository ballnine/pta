#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n,index = 0;
  cin >> n;
  int num;
  double count[5] = {0.0};
  double countd = 0.0,sumd = 0.0,flagb = 1;
  int flag[5] = {0};
  for (int i = 0;i < n;i++) {
    cin >> num;
    if (num % 5 == 0) {
      if (num % 2 == 0) {
        count[0] += num;
        flag[0] = 1;
      }
    } else if (num % 5 == 1){
      count[1] += flagb * num;
      flagb = -flagb;
      flag[1] = 1;
    } else if (num % 5 == 2) {
      count[2]++;
      flag[2] = 1;
    } else if (num % 5 == 3) {
      count[3]++;
      sumd += num;
      flag[3] = 1;
    } else if (num % 5 == 4) {
      if (num > count[4]) {
        count[4] = num;
        flag[4] = 1;
      }
    }
  }
  if (flag[3] != 0) {
    count[3] = sumd / count[3];
  }
  for (int i = 0;i < 5;i++) {
    if (flag[i] == 0) {
      cout << "N";
    } else {
      if (i != 3) {
        cout << count[i];
      } else {
        cout << setprecision(2) << count[i];
      }
    }
    if (i != 4) {
      cout << " ";
    }
  }
  return 0;
}

#include<iostream>
using namespace std;
int main() {
	int n;
	int a[1005];
	int count[5] = {0};
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int flag = 1;
	int yu3 = 0;
	count[4] = 0;
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 10 == 0)
			count[0] += a[i];
		if (a[i] % 5 == 1) {
			count[1] += a[i] * flag;
			flag = flag*(-1);
			t++;
		}
		if (a[i] % 5 == 2)
			count[2]++;
		if (a[i] % 5 == 3) {
			yu3++;
			count[3] += a[i];
		}
		if (a[i] % 5 == 4) {
			if (a[i] > count[4])
				count[4] = a[i];
		}
	}
	if (count[0] == 0)cout << "N ";
	else printf("%d ", count[0]);
	if (t == 0)cout << "N ";
	else printf("%d ", count[1]);
	if (count[2] == 0)cout << "N ";
	else printf("%d ", count[2]);
	if (count[3] == 0)cout << "N ";
	else printf("%.1f ", count[3] * 1.0 / yu3);
	if (count[4] == 0)cout << "N";
	else printf("%d", count[4]);
	return 0;
}
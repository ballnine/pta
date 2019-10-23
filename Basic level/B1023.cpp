#include <iostream>

using namespace std;

int main() {
  int num[10];
  for (int i = 0;i < 10;i++) {
    cin >> num[i];
  }
  if (num[0] != 0) {
    for (int i = 1;i < 10;i++) {
      if (num[i] != 0) {
        cout << i;
        num[i]--;
        break;
      }
    }
  }
  for (int i = 0;i < 10;i++) {
    for (int j = 0;j < num[i];j++) {
      cout << i;
    }
  }
  return 0;
}

/*
#include <iostream>

using namespace std;

char number[55];
int count_num, num[10] = {0};

void calMin(int index) {
  if (index == count_num + 1) {
    return;
  }
  for (int i = 0;i < 10;i++) {
    if ((index == 1) && (i == 0)) {
      continue;
    }
    if (num[i] != 0) {
      num[i]--;
      number[index] = i + '0';
      break;
    }
  }
  calMin(index + 1);
  return;
}

int main() {
  count_num = 0;
  for (int i = 0;i < 10;i++) {
    cin >> num[i];
    count_num += num[i];
  }
  calMin(1);
  for (int i = 1;i < count_num + 1;i++) {
    cout << number[i];
  }
  return 0;
}*/
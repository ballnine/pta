#include <iostream>

using namespace std;

int main() {
  int n,index,score,maxScore = -1,maxIndex = 0;
  int count[100010] = {0};
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> index;
    cin >> score;
    count[index] += score;
    if (count[index] > maxScore) {
      maxScore = count[index];
      maxIndex = index;
    }
  }
  cout << maxIndex << " " << maxScore;
  return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int score [100010] = {0};
  int index, num, count = 0,n = N;
  while(n--) {
    cin >> index >> num;
    score[index] += num;
    count++;
  }
  num = 0;
  for (int i = 1;i <= N;i++) {
    if (score[i] > num) {
      num = score[i];
      index = i;
    }
  }
  cout << index << " " << num;

  return 0;
}*/
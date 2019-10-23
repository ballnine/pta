#include <iostream>
#include <math.h>

using namespace std;

const int MAXNUM = 100050;

bool isprime(int x) {
  for (int i = 2;i <= sqrt(x);i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int prime[MAXNUM],index = 1;
  int n,m;
  cin >> n >> m;
  prime[0] = 2;
  for (int i = 3;i <= 10000000;i++) {
    if (index < m) {
      if(isprime(i)) {
        prime[index++] = i;
      }
    } else {
      break;
    }
  }
  int line = 0;
  for (int i = n;i <= m;i++) {
    if (line == 9) {
      cout << prime[i-1] << endl;
      line = 0;
      continue;
    }
    cout << prime[i-1];
    if (i != m) {
      cout << " ";
    }
    line++;
  }
  return 0;
}

/*
#include <iostream>
#include <math.h>

using namespace std;

const int NUMMAX = 1000001;

bool isPrime(int i) {
  for (int j = 2;j <= (int)sqrt(1.0 * i);j++) {
    if (i % j == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int m,n, prime[10010] = {2}, primeNum = 1;
  cin >> m >> n;
  for (int i = 3;i < NUMMAX;i++) {
    if (primeNum == n) {
      break;
    }
    if(isPrime(i)) {
      prime[primeNum++] = i;
    }
  }
  int num = 1;
  for (int i = m-1;i < n;i++) {
    if (num % 11 == 0) {
      cout << endl;
      num = 1;
    }
    if (num == 1) {
      cout << prime[i];
      num++;
      continue;
    }
    num++;
    cout << " " << prime[i];
  }
  return 0;
}*/
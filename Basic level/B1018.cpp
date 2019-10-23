#include <iostream>
#include <map>

using namespace std;

int iswin(char j,char y) {
  if (j == y) {
    return 0;
  }
  if (j == 'C') {
    if (y == 'B') {
      return 2;
    }
  } else if (j == 'B') {
    if (y == 'J') {
      return 2;
    }
  } else {
    if (y == 'C') {
      return 2;
    }
  }
  return 1;
}

int main() {
  int n,win = 0,lose = 0;
  map<char,int> jia,yi;
  jia['C'] = 0;jia['B'] = 0;jia['J'] = 0;
  yi['C'] = 0;yi['B'] = 0;yi['J'] = 0;
  char j,y;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> j >> y;
    int result = iswin(j,y);
    if (result == 1) {
      jia[j]++;
      win++;
    } else if(result == 2) {
      yi[y]++;
      lose++;
    }
  }
  cout << win << " " << n-win-lose << " " << lose << endl;
  cout << lose << " " << n-win-lose << " " << win << endl;
  char jiaMax = 'B';
  if (jia['C'] > jia[jiaMax]) {
    jiaMax = 'C';
  }
  if (jia['J'] > jia[jiaMax]) {
    jiaMax = 'J';
  }
  cout << jiaMax << " ";
  char yiMax = 'B';
  if (yi['C'] > yi[yiMax]) {
    yiMax = 'C';
  }
  if (yi['J'] > yi[yiMax]) {
    yiMax = 'J';
  }
  cout << yiMax;
  return 0;
}

/*
#include <cstdio>

int cal(char at, char bt,int* a,int* b)
{
	if (at == bt)
		return 0;
	else if (at == 'C')
	{
		if (bt == 'J')
		{
			a[0]++;
			return 1;
		}
		else
		{
			b[2]++;
			return -1;
		}
	}
	else if (at == 'J')
	{
		if (bt == 'C')
		{
			b[0]++;
			return -1;
		}
		else
		{
			a[1]++;
			return 1;
		}
	}
	else
	{
		if (bt == 'C')
		{
			a[2]++;
			return 1;
		}
		else
		{
			b[1]++;
			return -1;
		}
	}
}

int main()
{
	int n;
	char at, bt;
	scanf("%d", &n);
	int awin[3] = { 0 };
	int bwin[3] = { 0 };
	int anum[3] = { 0 };
	int bnum[3] = { 0 };
	for (int i = 0; i < n; i++)
	{
	  getchar();
		scanf("%c %c", &at, &bt);
		int win = cal(at, bt,anum,bnum);
		if (win == -1)
		{
			awin[2]++;
			bwin[0]++;
		}
		else if (win == 0)
		{
			awin[1]++;
			bwin[1]++;
		}
		else
		{
			awin[0]++;
			bwin[2]++;
		}
	}
	printf("%d %d %d\n", awin[0], awin[1], awin[2]);
	printf("%d %d %d\n", bwin[0], bwin[1], bwin[2]);
	int temp = 0,temps = 0,atemp = 2,btemp = 2;
	for (int i = 0; i < 3; i++)
	{
		if (anum[i] > temp)
		{
			temp = anum[i];
			atemp = i;
		}
		else if (anum[i] == temp)
		{
			if (i == 2)
				atemp = i;
		}
		if (bnum[i] > temps)
		{
			temps = bnum[i];
			btemp = i;
		}
		else if (bnum[i] == temps)
		{
			if (i == 2)
				btemp = i;
		}
	}
	switch (atemp) 
	{
	case(0):
		printf("C ");
		break;
	case(1):
		printf("J ");
		break;
	case(2):
		printf("B ");
		break;
	}
	switch (btemp)
	{
	case(0):
		printf("C\n");
		break;
	case(1):
		printf("J\n");
		break;
	case(2):
		printf("B\n");
		break;
	}
    return 0;
}

*/
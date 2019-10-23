#include <iostream>
#include <string>

using namespace std;

int main() {
  string a,b;
  char da,db;
  long long count = 0,numa = 0,numb = 0;
  cin >> a >> da >> b >> db;
  for (int i = 0;i < a.length();i++) {
    if (a[i] == da) {
      numa = numa*10 + (da-'0');
    }
  }
  for (int i = 0;i < b.length();i++) {
    if (b[i] == db) {
      numb = numb * 10 + (db - '0');
    }
  }
  count = numa + numb;
  cout << count << endl;
  return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	int da, db = 0;
	cin >> a >> da >> b >> db;
	int pa = 0;
	int pb = 0;
	while(a / 10 > 0)
	{ 
		int temp = a % 10;
		if (temp == da)
			pa = pa * 10 + da;
		a = a / 10;
	}
	if (a % 10 == da)
		pa = pa * 10 + da;
	while (b / 10 > 0)
	{
		int temp = b % 10;
		if (temp == db)
			pb = pb * 10 + db;
		b = b / 10;
	}
	if (b % 10 == db)
		pb = pb * 10 + db;
	cout << pa + pb << endl;
    return 0;
}*/
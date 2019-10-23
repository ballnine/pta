#include <iostream>

using namespace std;

int main() {
  int index[1010],num[1010];
  int ix = 0;
  cin >> index[ix] >> num[ix];
  while(num[ix] != 0) {
    ix++;
    cin >> index[ix] >> num[ix];
  }
  if (ix == 0) {
    cout << "0 0" << endl;
    return 0;
  }
  for (int i = 0;i < ix;i++) {
    cout << index[i] * num[i] << " ";
    cout << num[i]-1;
    if (i != ix-1) {
      cout << " ";
    }
  }
  return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
	int a[1010] = { 0 };
	int b, e = 0, count = 0;
	while (cin >> b)
	{
		cin>>e;
		a[e] = b;
	}
	for (int i = 1; i <= 1000; i++)
	{
		a[i - 1] = a[i] * i;
		a[i] = 0;
		if (a[i - 1] != 0) {
			count++;
		}
	}
	if (count == 0) {
		cout << "0 0";
	} else {
			for (int i = 1000; i >= 0; i--) {
				if (a[i] != 0) {
						cout << a[i] << " " << i;
						count--;
						if (count != 0) {
							cout << " ";
						}
				}
			}
	}
  return 0;
}*/
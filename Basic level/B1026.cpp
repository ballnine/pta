#include <iostream>

using namespace std;

int main() {
  int c1,c2;
  cin >> c1 >> c2;
  double second = ((c2-c1)* 1.0)/100.0;
  int hour = second / 3600;
  second = second - hour * 3600;
  int minute = second / 60;
  second = second - minute * 60;
  int se = second + 0.5;
  printf("%02d:%02d:%02d",hour,minute,se);
  return 0;
}

/*
#include <iostream>

using namespace std;


int main()
{
	float C1, C2;
	cin >> C1 >> C2;
	float temp = (C2 - C1) / 100;
	int time = 0;
	if ((temp - (int)temp) >= 0.5)
		time = (int)temp + 1;
	else
		time = (int)temp;
	int h = time / 3600;
	int temps = time - h * 3600;
	int m = temps / 60;
	temps = temps - m * 60;
	if (h <= 9)
		cout << "0";
	cout << h << ":";
	if (m <= 9)
		cout << "0";
	cout << m << ":";
	if (temps <= 9)
		cout << "0";
	cout << temps;
    return 0;
}
*/
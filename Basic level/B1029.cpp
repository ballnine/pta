#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  string origin,now,result = "";
  cin >> origin >> now;
  map<char,int> key;
  char temp;
  int jindex = 0;
  for (int i = 0;i < origin.length();i++) {
    if (origin[i] == now[jindex]) {
      jindex++;
    } else {
      temp = origin[i];
      if (origin[i] >= 'a' && origin[i] <='z'){
        temp = origin[i] + ('A' - 'a');
      }
      if(key[temp] != 1) {
        key[temp] = 1;
        result += temp;
      }
    }
  }
  cout << result;
  return 0;
}

/*

#include<iostream>
#include<cstdio>
#include<ctype.h>
#include<string>
using namespace std;
int main()
{
  int a[200]={0};
  string str1,str2;
  cin>>str1>>str2;
  int l1=str1.length();
  int l2=str2.length();
  for(int i=0;i<l2;i++)
  {
    a[toupper(str2[i])]++;
  }
  for(int i=0;i<l1;i++)
  {
    a[toupper(str1[i])]--;
    if(a[toupper(str1[i])]==-1)
    printf("%c",toupper(str1[i]));//注意输出形式，不能用cout输出
  }
  return 0;
}*/
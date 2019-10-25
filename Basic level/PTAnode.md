+    B1003 PAT字符串格式正确——总结规律

     以索引计数,map记字符串各字符数

     ```
     map<char,int>m;
     for (int j = 0;j < str.length();j++) {
      m[str[j]]++;
      if (str[j] == 'P')
        p = j;
      if (str[j] == 'T')
        t = j;
     }
     ```

+    B1005 注意给定值边界，不一定就是题目所给数字大小（需进行计算，如3*n+1）

+    B1009 输入一行字符串

     `getline(cin,string str)`
     
     `cin.getline(char*,length)`

     条件判断中注意数组越界情况

+    B1012 固定小数位数输出

     ```
     #include <iomanip>
     cout << setprecision(2) << count[i];
     ```

+    B1013 注意数据取值范围的判断

+    B1019 固定整数位的输出，可以用以下方法：

     1、固定格式输出
     
     ```
     #include <iomanip>
     
     cout << setw(5) << setfill('0');
     ```

     2、字符串插入补齐

     `str.insert(0, 4-str.length(), '0');`

     3、使用c

     `printf("%05d",x);`

+    字符串相关操作

     ```
     stoi(str) //字符串转整数

     str.insert() //字符串插入

     to_string(num)  //转为字符串

     s.begin()  //字符串开头

     s.end()   //字符串结尾
     ```

+    B1020 整数计算结果为浮点数，乘以1.0

+    B1022 进制转换

     十进制转n进制——除n取余

     n进制转十进制——$1*2^3+0*2^2+1*2^1+0$

+    B1025 链表逆序                                                                                      
     `reverse` 直接逆序，`begin`取地址

     ```
     reverse(begin(),begin()+k)
     ```

+    B1028 string字符串可以直接按字典序比较大小

+    B1029 toupper(char c)、tolower()大小写

+    B1033 注意空字符串可以输入的情况，不能用`cin`，可使用`getline(cin,str)`代替

/*#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

struct node {
  int data;
  int next;
} nodes[100000];

int main() {
  int first,count,k,addr;
  cin >> first >> count >> k;
  stack<int> renode;
  for (int i = 0;i < count;i++) {
    cin >> addr;
    cin >> nodes[addr].data >> nodes[addr].next;
  }
  int reverse = count,temp = 0,tempnext = 0;
  addr = first;
  while(reverse/k > 0) {
    for (int i = 0;i < k;i++) {
      renode.push(addr);
      addr = nodes[addr].next;
    }
    int last = addr;
    for (int i = 0;i < k-1;i++) {
      temp = renode.top();
      renode.pop();
      tempnext = renode.top();
      cout << setw(5) << setfill('0') << temp << " " << nodes[temp].data << " " << setw(5) << tempnext << endl;
    }
    temp = renode.top();
    renode.pop();
    cout << setw(5) << setfill('0') << temp << " " << nodes[temp].data << " " << setw(5) << last << endl;
    reverse = reverse - k;
  }
  while(nodes[addr].next != -1) {
    cout << setw(5) << addr << " " << nodes[addr].data << " " << setw(5) << nodes[addr].next << endl;
    addr = nodes[addr].next;
  }
  cout << setw(5) << addr << " " << nodes[addr].data << " " << nodes[addr].next << endl;
  return 0;
}*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int first,count,k,sum = 0,temp;
  cin >> first >> count >> k;
  int data[100000],list[100000],next[100000];
  for (int i = 0;i < count;i++) {
    cin >> temp;
    cin >> data[temp] >> next[temp];
  }
  while(first != -1) {
    list[sum++] = first;
    first = next[first];
  }
  for (int i = 0;i < (sum - sum % k);i += k) {
    reverse(begin(list)+i,begin(list)+i+k);
  }
  for (int i = 0;i < sum-1;i++) {
    printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
  }
  printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
  return 0;
}

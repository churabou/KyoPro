#include<iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
  int input[3];
  cin >> input[0] >> input[1] >> input[2];
 
  sort(input, input+3);
 
  int l, m, s;
  l = input[2];
  m = input[1];
  s = input[0];
 
 // (l-m)回mとsに１を足す
 //  l-(s+l-m)/2回sに2を足す。
 
  int ans = ((m-s)%2 == 0) ?  (l-m)+(m-s)/2 : 2+(l-m)+(m-s)/2;
  cout << ans << endl;
  return 0;
}

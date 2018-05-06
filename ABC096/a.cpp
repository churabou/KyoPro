#include<iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans =  b >= a ? a : (a - 1);
  cout << ans << endl;
  return 0;
}

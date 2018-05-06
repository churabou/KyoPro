#include <algorithm>
#include<iostream>
using namespace std;

int pow(int a, int b) {
  int c = a;
  for (int i = 1; i < b; i++) {
      c *= a;
  }
  return c;
}

int main() {
  int a, b, c;
  int k;
  cin >> a >> b >> c;
  cin >> k;

  int _max = max(a, max(b, c));
  int restSum = (a + b + c) - _max;

  int ans = _max * pow(2, k) + restSum;
  cout << ans << endl;
  return 0;
}

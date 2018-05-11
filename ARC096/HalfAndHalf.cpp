#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    //1 a+b<cなら min(x, y) だけ買う。|x-y|だけcで買うのかbで買うのか

    int ans = 0;

    int diff = abs(x-y);
    
    //a + b < 2*c なら別々に買った方が安い。
    if ((a+b) <= 2*c) {
       ans = a*x + b*y; 
    }
    //それ以外
    //表記は値段 * 個数に固定 
    else {
    
      if (x > y) { 

         ans += c*(y*2);
         
         if (a <= 2*c) {
            ans += a*diff;
         } else {
            ans += c*(diff*2);
         } 
      } else {
     
         ans += c*(x*2);
         
         if (b <= 2*c) {
            ans += b*diff;
         } else {
            ans +=  c * (diff*2);
         }     
      }
    }

    cout << ans << endl;
    return 0;	
}

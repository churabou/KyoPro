# KyoPro


``` .cpp

#include <iostream>
using namespace std;

int main() {
  cout << "hello world" << endl;
  return 0;
}
```


```
c++ -o file file.cpp
```

macは標準でc++使えるって書いてあった。


``` .cpp

int main() {

  string s;
  cin >> s;
  
  int price = 700;
  
  if (s[0] == 'o') {
    price += 100;
  } 
  
  if (s[1] == 'o') {
    price += 100;
  } 
  
  if (s[2] == 'o') {
    price += 100;
  } 
  
  cout << price << endl;
  return 0;
  
}
```

ダブルとシングル

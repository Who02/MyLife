#include <bits/stdc++.h>
using namespace std;

int main(){
   int64_t one,two,three;
    cin >> one >> two >> three;
  if (one > two && one > three) 
        cout << one;
    else if (two > one && two > three) 
        cout << two;
    else 
        cout << three;
    return 0;
}
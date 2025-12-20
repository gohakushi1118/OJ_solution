// Sprout OJ No.801-3n+1問題
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, count = 0;
  cin >> n;
  while(n != 1){
    if (n % 2 == 1){
      n = 3*n + 1;
    }
    else{
      n = n / 2;
    }
    count++;
  }
cout<< count << endl;
return 0;
}
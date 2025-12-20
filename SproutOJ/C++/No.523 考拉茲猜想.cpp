// Sprout OJ No.523-考拉茲猜想
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int t;
  cin >> t;

  while (t--){
    long long int x, y;
    cin >> x >> y;
    long long int big = x, second = 0;

    while (x != 1 && x <= y){
      if (x % 2 == 0){
        x /= 2;
      }
      else{
        x = 3 * x + 1;
      }

      if (x > big){
        second = big;
        big = x;
      }
      else if (x > second){
        second = x;
      }
    }
    cout << second << endl;
  }
  return 0;
}
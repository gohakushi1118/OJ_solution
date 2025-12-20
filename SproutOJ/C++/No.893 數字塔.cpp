// Sprout OJ No.893-數字塔
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++){
      for(int k = 0 ; k < n - i ; k++){
          cout << " " << endl;
      }
      for(int t = 0 ; t < i ; t ++){
          cout << i << endl;
      }
      cout << " ";
      for(int q = 0 ; q < i ; q ++){
          cout << i << endl;
      }
      cout << endl << endl;
  }
  return 0;
}
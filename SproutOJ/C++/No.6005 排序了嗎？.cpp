// Sprout OJ No.6005-排序了嗎?
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c;
    cin >> a >> b >> c;
    if (a < b < c){
        cout << "INCREASING" << endl;
    }
    else if (a > b > c){
        cout << "DECREASING" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
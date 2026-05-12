// Sprout OJ No.208-季節判斷
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    if (n <= 3 && n >= 1){
        cout << "spring" << endl;
    }
    if (n <= 6 && n >= 4){
        cout << "summer" << endl;
    }
    if (n <= 9 && n >= 7){
        cout << "fall" << endl;
    }
    if (n <= 12 && n >= 10){
        cout << "winter" << endl;
    }
    return 0;
}
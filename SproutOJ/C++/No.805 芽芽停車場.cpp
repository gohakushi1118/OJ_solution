// Sprout OJ No.805-芽芽停車場
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, x, y;
    cin >> a >> x >> y;
    cout << (a / 60) * x + (a % 60) * y << endl;
    return 0;
}
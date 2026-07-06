#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double pi = 3.141592653589793;
    
    double d;
    cin >> d;

    double n = d / 2;

    cout << fixed << setprecision(15);

    cout << pi * n * n;
}
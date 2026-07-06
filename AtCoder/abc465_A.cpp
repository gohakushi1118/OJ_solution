#include<iostream>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;

    if (a > b * (2.0 / 3.0)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
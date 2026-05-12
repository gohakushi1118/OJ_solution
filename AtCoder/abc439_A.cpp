#include<iostream>
using namespace std;

int function(int n){
    int sum = 1;
    for(int i=0; i<n; i++){
        sum *= 2;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << function(n) - 2*n << "\n";
    return 0;
}
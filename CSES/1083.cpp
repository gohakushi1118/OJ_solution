#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    vector<int> num(n-1);

    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    long long int n2 = 0;
    for(int i : num){
        n2 += i;
    }

    long long int n1 = ((n + 1) * n) / 2;

    cout << (n1 - n2) << "\n";
}
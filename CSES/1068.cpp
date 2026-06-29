#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

int main(){
    ll n;
    vector<ll> num;
    cin >> n;
    num.push_back(n);
    
    while (n != 1){
        if (n % 2 != 0){
            n = n*3+1;
            num.push_back(n);
        }
        else{
            n = n / 2;
            num.push_back(n);
        }
    }

    for(auto i : num){
        cout << i << " ";
    }
}
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    long long int ans = 1;
    cin >> n; 

    for (int i=0; i<n; i++){
        ans = (ans * 2) % (int)(1e9+7);
    }

    cout << ans;
}
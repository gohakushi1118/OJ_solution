// Sprout OJ No.209-σ．σ - 2015
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        cout << arr[arr[i]] << endl;
    }
    return 0;
}
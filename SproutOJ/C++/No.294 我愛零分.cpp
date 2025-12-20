// Sprout OJ No.294-我愛零分
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, arr[10000];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > 0){
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[n-i-1] << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool flag = 1;

    int num[100];

    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        num[i] = m;
    }

    for(int i=0; i<n; i++){
        if(num[i] >= 0){
            flag = 0;
            break;
        }
    }

    if(flag == 0){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
    }
}
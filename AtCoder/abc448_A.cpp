#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> num;
    
    for (int i=0;  i<n; i++){
        int v;
        cin >> v;
        num.push_back(v);
    }

    for (int i=0; i<n; i++){
        if (m > num[i]){
            cout << "1\n";
            m = num[i];
        }
        else{
            cout << "0\n";
        }
    }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int> num;
    cin >> n;

    for(int i=1; i<n+1; i++){
        num.push_back(i);
    }
    sort(num.begin(), num.end(), greater<int>());

    for(auto i : num){
        cout << i;
        if(i != 1){
            cout << ",";
        }
    }
}
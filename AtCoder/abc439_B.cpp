#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1; i*i<=n; i++){
        for(int j=i+1; i*i+j*j<=n; j++){
            v[i*i+j*j]++;
        }
    }

    vector<int> ans;

    for(int i=0; i<=n; i++){
        if(v[i] == 1){
            ans.push_back(i);
        }
    }
    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++){
        if(i>0){
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
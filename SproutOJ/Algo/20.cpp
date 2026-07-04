#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    int cmd;
    vector<int> member;
    
    cin >> num;
    cin >> cmd;

    for(int i=1; i<num+1; i++){
        member.push_back(i);
    }

    while(cmd--){
        int n, m;
        cin >> n >> m;

        auto it = find(member.begin(), member.end(), m);
        int idx = it - member.begin();

        if (n == 1 && idx != 0){
            swap(member[idx], member[idx-1]);
        }

        if(n == 0){
            member.erase(it);
        }
    }

    for (int i=0; i<member.size(); i++){
        cout << member[i];
        if (i != member.size()-1){
            cout << " ";
        }
    }
}
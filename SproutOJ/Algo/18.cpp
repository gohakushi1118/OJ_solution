#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        queue<int> q;
        stack<int> s;
        int m;
        cin >> m;

        for(int i=0; i<m; i++){
            int car;
            cin >> car;
            q.push(car)
        }

        for(int j=0; j<m; j++){
            s.push(j+1);
            while(s.size() != 0 && q.size() !=0 && q.front() == s.top()){
                q.pop();
                s.pop();
            }
        }

        if(s.empty() && q.empty()){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}
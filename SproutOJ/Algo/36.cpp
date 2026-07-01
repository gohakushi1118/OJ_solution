#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    while(n--){
        int cmd;
        cin >> cmd;
        if(cmd == 2){
            if(q.size() == 0){
                cout << "empty!\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else{
            int num;
            cin >> num;
            q.push(num);
        }
    }
}
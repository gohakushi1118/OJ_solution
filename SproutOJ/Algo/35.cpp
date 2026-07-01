#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    stack<int> s;
    cin >> n;
    while(n--){
        int cmd;
        cin >> cmd;
        if(cmd == 2){
            if(s.size() == 0){
                cout << "empty!\n";
            }
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else{
            int num;
            cin >> num;
            s.push(num);
        }
    }
}
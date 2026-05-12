// Sprout OJ No.36-stack練習
# include <bits/stdc++.h>
using namespace std ;

int main(){
    stack <int> s ;
    int num ;
    cin >> num ;
    for (int i = 0 ; i < num ; i++){
        int n ;
        cin >> n ;
        if (n == 1){
            int m ;
            cin >> m ;
            s.push(m) ;
        }
        else if (n == 2){
            if (!s.empty()){
                cout << s.top() << "\n" ;
                s.pop() ;
            }
            else{
                cout << "empty!\n" ;
            }
        }
    }
    return 0 ;
}
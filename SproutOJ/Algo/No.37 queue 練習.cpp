// Sprout OJ No.37-queue ½m²ß
# include <bits/stdc++.h>
using namespace std ;

int main(){
    int num ;
    queue <int> q ;
    cin >> num ;
    for (int i = 0 ; i < num ; i++){
        int n ;
        cin >> n ;
        if (n == 1){
            int m ;
            cin >> m ;
            q.push(m) ;
        }
        else if (n == 2){
            if (!q.empty()){
                cout << q.front() << "\n" ;
                q.pop() ;
            }
            else{
                cout << "empty!\n" ;
            }
        }
    }
    return 0 ;
}
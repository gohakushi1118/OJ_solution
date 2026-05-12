#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        // odd - odd
        if(n % 2 != 0 && m % 2 != 0){
            cout << "Yes\n";
        }
        // odd - even
        else if((n % 2 != 0 && m % 2 == 0) || (n % 2 == 0 && m % 2 != 0)){
            if (x >= 2 || y >= 2){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
        // even - even
        else if(n % 2 == 0 && m % 2 == 0){
            if (x >= 2){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }
    return 0;
}
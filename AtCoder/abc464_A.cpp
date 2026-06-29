#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int w = 0;
    int e = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'W'){
            w++;
        }
        else{
            e++;
        }
    }

        if(w > e){
        cout << "West\n";
    }
    else{
        cout << "East\n";
    }
}
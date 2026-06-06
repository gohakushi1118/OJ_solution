#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    int num = 0;
    cin >> n;
    cin >> s;

    while(s[num] == 'o' && num < n){
        num++;
    }

    cout << s.substr(num) << "\n";
}
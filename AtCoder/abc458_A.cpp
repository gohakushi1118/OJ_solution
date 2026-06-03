#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s;
    cin >> n;

    cout << s.substr(n, s.size()-n*2) << endl;
}
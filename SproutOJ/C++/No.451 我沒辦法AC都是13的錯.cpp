// Sprout OJ No.451-我沒辦法AC都是13的錯
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int d, w;
    cin >> d >> w;
    if (d > 31 || w > 7){
        cout << "= =" << endl;
    }
    else if (d == 13 && w != 5){
        cout << "QAQ" << endl;
    }
    else if (d == 13 && w == 5){
        cout << "._.zZ" << endl;
    }
    else{
        cout << "Oh,AC!" << endl;
    }
    return 0;
}
// Sprout OJ No.217-凱薩密碼
#include <bits/stdc++.h>
using namespace std;

int main(){
    char text[1000];
    cin >> text;
    for (int i = 0 ; text[i] != '\0' ; i++){
        if ((text[i] >= 'a') && (text[i] <= 'w')){
            text[i] = text[i] + 3;
        }
        else{
            text[i] = text[i] + 3 - 26;
        }
    }
    cout << text << endl;
    return 0;
}

// Sprout OJ No.953-維吉尼亞的統計學
#include <bits/stdc++.h>
using namespace std ;

int main() {
    char text[1005], key[1005] ;
    int count[26] = {0} ;
    cin >> text >> key ;

    int text_len = strlen(text) ;
    for (int i = 0; i < text_len; i++) {
        count[(int)(text[i] - 'a' + key[i] - 'a') % 26]++ ;
    }
    
    for (int i = 0; i < 26; i++) {
        cout << count[i] <<endl;
        if (i < 25){
            cout << " " << endl;
            }
    }
    return 0 ;
}
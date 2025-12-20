// Sprout OJ No.894-姓名縮寫
#include <bits/stdc++.h>
using namespace std;

int main(){
    char str1[1000], str2[1000], ans[1000];
    cin >> str1 >> str2;
    long long int m, n;
    cin >> m >> n;
    strncpy(ans, str1, m);
    ans[m] = '\0';
    strncat(ans, str2, n);
    cout << ans << endl;
    cout << ans << endl;
    cout << ans << endl;
    return 0;
}
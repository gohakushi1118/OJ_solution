#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    long long int ans=0, count=1;

    for(long long int i=0; i<s.length()-1; i++){
        if (s[i] == s[i+1]){
            count += 1;
        }
        else{
            count = 1;
        }
        ans = max(ans, count);
    }

    cout << max(ans, count) << "\n";
}
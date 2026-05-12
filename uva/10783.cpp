#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        int a, b;
        cin >> a;
        cin >> b;
        if(a % 2 == 0) a += 1;
        if(b % 2 == 0) b -= 1;
        int s1 = ((1+a)*((a+1)/2))/2;
        int s2 = ((1+b)*((b+1)/2))/2;
        sum = s2 - s1 + a;
        cout << "Case " << i << ": " << sum << "\n";
    }
    return 0;
}
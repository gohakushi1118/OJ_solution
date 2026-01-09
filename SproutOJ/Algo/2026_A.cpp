#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, time, count = 0;
    cin >> n >> time;
    vector <int> num(n+1, 0);
    for(int i=0; i<n; i++){
        int a, b, x;
        cin >> a >> b;

        x = num[a];

        int cost = max(1, b - x);

        if(time >= cost){
            time -= cost;
            count += 1;
            num[a]++;
        }
        else{
            break;
        }
    }
    cout << count << endl;
    return 0;
}
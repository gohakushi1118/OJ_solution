#include <iostream>
#include <vector>
#include <string>

using namespace std;

string s[10000000]; 
int a[10000000];
bool b[10000000];
int n, m, q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    if(!(cin >> n >> m >> q)){
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    while(q--) {
        int op, x, y, i, j;
        char c;
        cin >> op;
        if(op == 1) {
            cin >> x;
            b[x] = !b[x];
        }
        else if(op == 2) {
            int t;
            cin >> x >> t;
            if(!b[x]) {
                a[x] = (a[x] + t) % m;
            }
            else {
                a[x] = (a[x] - (t % m) + m) % m;
            }
        }
        else if(op == 3) {
            cin >> x >> i >> c;
            int idx = !b[x] ? (a[x] + i - 1) % m : (a[x] + m - i) % m;
            s[x][idx] = c;
        }
        else if(op == 4) {
            cin >> x >> i >> y >> j;
            int idx_y = !b[y] ? (a[y] + j - 1) % m : (a[y] + m - j) % m;
            int idx_x = !b[x] ? (a[x] + i - 1) % m : (a[x] + m - i) % m;
            s[x][idx_x] = s[y][idx_y];
        }
    }

    for(int k = 1; k <= n; k++) {
        for(int l = 1; l <= m; l++) {
            int idx = !b[k] ? (a[k] + l - 1) % m : (a[k] + m - l) % m;
            cout << s[k][idx];
        }
        cout << '\n';
    }
    return 0;
}
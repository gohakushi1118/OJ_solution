// Sprout OJ No.645-三角形判斷
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x, y, z;
    cin >> x >> y >> z;
    if (x == y && y == z && x == z){
        cout << "Equilateral Triangle" << endl;
    }
    else if (x == y && x != z || y == z && y != x || x == z && x != y){
        cout << "Isosceles Triangle" << endl;
    }
    else{
        cout << "Scalene Triangle" << endl;
    }
    return 0;
}
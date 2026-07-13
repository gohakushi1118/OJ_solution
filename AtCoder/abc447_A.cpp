#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if (n == m && n != ){
    	cout << "No";
    }
    else if (n % 2 == 0 && (n / 2) >= m){
    	cout << "Yes";
    }
    else if (n % 2 == 1 && (n / 2) + 1 >= m){
    	cout << "Yes";
    }
    else{
    	cout << "No";
    }
}
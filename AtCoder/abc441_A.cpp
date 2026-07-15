#include<iostream>
using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m;
	cin >> a >> b;

	if (n + 99 >= a && m + 99 >= b){
		cout << "Yes";
	}
	else{
		cout << "No";
	}

}

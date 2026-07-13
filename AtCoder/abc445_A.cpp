#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;

	if(s[0] == s[s.length()-1]){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}

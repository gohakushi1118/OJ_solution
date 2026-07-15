#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int sum = 0;
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		if (s[i] == "i" || s[i] == "j"){
			sum+=1;	
		}
	}
	cout << sum << "\n";
}

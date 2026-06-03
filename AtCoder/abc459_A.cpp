#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string word;
	cin >> n;

	word = "HelloWorld";

	word = word.erase(n-1, 1);

	cout << word << endl;
}
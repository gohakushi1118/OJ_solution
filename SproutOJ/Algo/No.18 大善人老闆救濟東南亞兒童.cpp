#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int num;
		cin >> num;
		stack<int> s;
		queue<int> q;
		for (int i = 0;i < num; i++) {
			int car;
			cin >> car;
			q.push(car);
		}
		for (int i = 0; i < num;i++) {
			s.push(i + 1);
			while (!s.empty() && !q.empty() && s.top() == q.front()) {
				s.pop();
				q.pop();
			}
		}
		if (s.empty() && q.empty()) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	return 0;
}
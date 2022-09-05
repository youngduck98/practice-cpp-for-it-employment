#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

int main() {
	string str;
	cin >> str;
	stack<int> stk;

	for (auto k : str) {
		if (k == '(') {
			stk.push(1);
		}
		else {
			stk.pop();
		}
	}

	if (stk.empty()) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
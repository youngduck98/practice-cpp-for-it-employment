#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	string s;
	stack<char> st;
	cin >> s;

	for (char k : s) {
		if (k == '(') {
			st.push(k);
		}
		else if (k == ')') {
			if (!st.empty()) {
				st.pop();
			}
			else {
				st.push(k);
				break;
			}
		}
	}

	if (st.empty()) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
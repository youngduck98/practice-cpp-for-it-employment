#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int ctoi(char a) {
	return a - '0';
}

int main() {
	int n;
	cin >> n;
	vector<int> vi;
	string s = to_string(n);
	int answer = 0;

	for (int i = 0; i < s.length(); i++) {
		int mul = pow(10, s.length() - i - 1);
		int front;
		if (i == 0){ front = 0; }
		else{ front = stoi(s.substr(0, i)); }
		int back;
		if (i == s.length() - 1) { back = 0; }
		else{ back = stoi(s.substr(i + 1)); }
		int now = ctoi(s[i]);

		if (now > 3) {
			answer += mul * (front + 1);
		}
		else if (now == 3) {
			answer += (front)*mul + back + 1;
		}
		else {
			answer += (front)*mul;
		}
	}

	cout << answer << endl;
}
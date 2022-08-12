#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int convert_i(char a) {
	if (int(a) >= int('a') && int(a) <= int('z')) {
		return int(int(a) - int('a')) + 26;
	}
	else if (int(a) >= int('A') && int(a) <= int('Z')) {
		return int(a) - int('A');
	}
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	vector<char> vc1(52, 0);
	vector<char> vc2(52, 0);
	bool flag = true;
	if (s1.length() == s2.length()) {
		for (char k: s1) {
			vc1[convert_i(k)]++;
		}
		for (char k : s2) {
			vc2[convert_i(k)]++;
		}

		for (int i = 0; i < 52; i++) {
			if (vc1[i] != vc2[i]) {
				cout << "NO" << endl;
				return 0;
			}
		}

		cout << "YES" << endl;
		return 0;
	}
	else {
		cout << "NO" << endl;
		return 0;
	}
}
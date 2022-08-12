#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n1, n2;
	cin >> n1;
	vector<int> vi1(n1, 0);
	for (int i = 0; i < n1; i++) {
		cin >> vi1[i];
	}
	cin >> n2;
	vector<int> vi2(n2, 0);
	for (int i = 0; i < n2; i++) {
		cin >> vi2[i];
	}

	vector<int> answer(n1 + n2, 0);
	for (int i = 0; i < n1 + n2; i++) {
		if (vi1.size() && vi2.size()) {
			if (vi1[0] > vi2[0]) {
				answer[i] = vi2[0];
				vi2.erase(vi2.begin());
			}
			else {
				answer[i] = vi1[0];
				vi1.erase(vi1.begin());
			}
		}
		else if (n1 > n2) {
			answer[i] = vi1[0];
			vi1.erase(vi1.begin());
		}
		else {
			answer[i] = vi2[0];
			vi2.erase(vi2.begin());
		}
	}

	for (int k : answer) {
		cout << k << " ";
	}
	cout << endl;
}
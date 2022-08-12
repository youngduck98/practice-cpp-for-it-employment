#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<vector<int>> answer(0);
	for (float a = 1; a < n - 1; a++) {
		for (float b = a+1; b < n; b++) {
			if (((b - a + 1) / 2) * (a + b) == n) {
				answer.push_back({ (int)a,(int)b });
			}
		}
	}

	reverse(answer.begin(), answer.end());

	for (vector<int> vi : answer) {
		int a = vi[0];
		int b = vi[1];
		for (int i = a; i < b; i++) {
			cout << i << " + ";
		}
		cout << b << " = " << n << endl;
	}
	cout << answer.size() << endl;
}
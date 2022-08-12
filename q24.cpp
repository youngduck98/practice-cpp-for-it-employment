#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n, before;
	cin >> n;
	vector<int> checker(n, 1);

	cin >> before;
	for (int i = 1; i < n; i++) {
		int k;
		cin >> k;
		if (abs(k - before) - 1 >= 0 && abs(k - before) - 1< n) {
			if (--checker[abs(k - before) - 1] != 0) {
				cout << "NO" << endl;
				return 0;
			}
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
		before = k;
	}
	cout << "YES" << endl;
	return 0;
}
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

int main() {
	int n;
	cin >> n;
	vector<int> col(n, 0);
	vector<int> row(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> col[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> row[i];
	}

	int sum = 0;
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			sum += min(row[r], col[c]);
		}
	}

	cout << sum << endl;
}
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

bool compare(int a, int b) {
	return a > b;
}

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> vi(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}
	sort(vi.begin(), vi.end(), compare);
	int before = -INT_MAX;
	int count = 1;
	int answer = 0;
	for (int k : vi) {
		if (before == -INT_MAX) {
			before = k;
			continue;
		}
		if (before != k) {
			before = k;
			count++;
		}
		if (count == 3)
			answer = k;
	}

	cout << answer << endl;
}
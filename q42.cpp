#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int find(vector<int> vi, int k) {
	int l = 0;
	int r = vi.size() - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (vi[m] == k)
			return m+1;
		else if (vi[m] < k)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> vi(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}
	sort(vi.begin(), vi.end());
	cout << find(vi, m) << endl;
}
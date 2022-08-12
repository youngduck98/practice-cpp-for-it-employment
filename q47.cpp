#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
bool find_peek(vector<vector<int>> a, int r, int c) {
	int N = a[r - 1][c];
	int S = a[r + 1][c];
	int E = a[r][c + 1];
	int W = a[r][c - 1];
	int mid = a[r][c];
	if (mid > N && mid > E && mid > S && mid > W)
		return true;
	else
		return false;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> map_peek(n+2, vector<int>(n+2, 0));
	for (int r = 0; r < n + 2; r++) {
		for (int c = 0; c < n+2; c++) {
			if (r == 0 || r == n + 1 || c == 0 || c == n+1) {map_peek[r][c] = 0;}
			else { cin >> map_peek[r][c]; }
		}
	}

	int count = 0;
	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= n; c++) {
			if (find_peek(map_peek, r, c))
				count++;
		}
	}

	cout << count << endl;
}
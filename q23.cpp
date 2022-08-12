#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n, max = 0, count = 0, before = 0;
	cin >> n;
	vector<int> vi(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}
	before = vi[0];
	for (int k : vi) {
		if (before <= k) {
			count++;
			if (max < count)
				max = count;
		}
		else {
			count = 1;
		}
		before = k;
	}
	cout << max << endl;
}
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> vi(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}
	int max = vi.back(), count = 0;
	reverse(vi.begin(), vi.end());
	for (int k : vi) {
		if (k > max) {
			max = k;
			count++;
		}
	}
	cout << count << endl;
}
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
	cin >> vi[0];
	for (int i = 1; i < n; i++) {
		cin >> vi[i];
		int num = vi[i];
		int pos = i;
		for (int k = 0; k < i; k++) {
			if (vi[k] > vi[i]) {
				pos = k;
				break;
			}
		}
		for (int k = i; k > pos;k--) {
			vi[k] = vi[k - 1];
		}
		vi[pos] = num;
	}

	for (int k : vi) {
		cout << k << " ";
	}
}
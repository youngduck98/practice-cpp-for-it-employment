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

	for (int i = 0; i < n; i++) {
		int min_i = i;
		for (int k = i + 1; k < n; k++) {
			if (vi[min_i] > vi[k]) {
				min_i = k;
			}
		}
		int c = vi[i];
		vi[i] = vi[min_i];
		vi[min_i] = c;
	}

	for (int k : vi) {
		cout << k << " ";
	}
	cout << endl;
}
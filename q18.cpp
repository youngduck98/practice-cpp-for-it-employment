#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n, crit;
	cin >> n >> crit;
	vector<int> vi(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	int max = 0, count_c = 0;;
	for (int k : vi) {
		if (k > crit) {
			count_c++;
		}
		else {
			count_c = 0;
		}

		if (count_c > max) {
			max = count_c;
		}
	}

	if (max == 0) {
		cout << -1 << endl;
		return 0;
	}
	cout << max << endl;
	return 0;
}
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n = 0;
	cin >> n;
	vector<int> plus;
	vector<int> minus;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k > 0) {
			plus.push_back(k);
		}
		else
			minus.push_back(k);
	}

	for (int p : plus) {
		minus.push_back(p);
	}

	for (int m : minus) {
		cout << m << " ";
	}
}
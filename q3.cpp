#include<iostream>
#include<vector>

using namespace std;
int main() {
	int n = 0, min, max;
	vector<int> v = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	min = max = v.front();

	for (int k : v) {
		if (k < min) {
			min = k;
		}
		else if (k > max) {
			max = k;
		}
	}

	cout << max - min << endl;
}
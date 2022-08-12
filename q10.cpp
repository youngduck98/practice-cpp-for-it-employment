#include<iostream>
#include<stack>
#include<string>
#include <vector>

using namespace std;

int digit_sum(int n) {
	string s = to_string(n);
	int sum = 0;
	for (char k : s) {
		sum += int(k) - int('0');
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<int> vi;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		vi.push_back(k);
	}

	int max = 0;
	int max_d = 0;
	for (int k : vi) {
		int max_c = digit_sum(k);
		if (max_d < max_c || (max_d == max_c && max < k)) {
			max_d = max_c;
			max = k;
		}
	}

	cout << max << endl;
}
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int reverse(int x) {
	string s = to_string(x);
	reverse(s.begin(), s.end());
	return stoi(s);
}

bool isPrime(int x) {
	if (x == 1)
		return false;
	int sqrt_x = int(sqrt(x));
	for (int i = 2; i <= sqrt_x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<int> vi(n,0);
	vector<int> answer;
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
		if (isPrime(reverse(vi[i]))) {
			answer.push_back(reverse(vi[i]));
		}
	}

	for (int k : answer) {
		cout << k << " ";
	}
	cout << endl;
	return 0;
}
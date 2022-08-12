#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool judge_prime_num(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

class prime_num {
public:
	int num;
	int count;
	prime_num(int num, int count);
};

prime_num::prime_num(int num, int count) {
	this->num = num;
	this->count = count;
}

int main() {
	int n;
	cin >> n;
	vector<prime_num> vp;

	for (int i = 2; i <= n; i++) {
		if (judge_prime_num(i)) {
			vp.push_back(prime_num(i, 1));
			continue;
		}
		int a = i;
		for (prime_num& k : vp) {
			while (a > 1) {
				if (a % k.num == 0) {
					a /= k.num;
					k.count++;
				}
				else {
					break;
				}
			}
		}
	}

	for (prime_num k : vp) {
		cout << k.count << " ";
	}
}
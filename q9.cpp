#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	int n = 0, count = 0;
	cin >> n;
	vector<int> answer(n, 0);
	for (int div = 1; div <= n; div++) {
		for (int i = div; i <= n; i += div) {
			answer[i-1]++;
		}
	}

	for (int k : answer) {
		cout << k << " ";
	}
}
#include<iostream>

using namespace std;
int main() {
	int m, n, sum = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		sum += i;
	}
	for (int i = m; i < n; i++) {
		cout << i << " + ";
	}
	cout << n << " = " << sum << endl;
}
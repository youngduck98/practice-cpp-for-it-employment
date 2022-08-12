#include<iostream>

using namespace std;
int main() {
	int m, n, sum = 0;
	cin >> m >> n;
	for (int i = 0; i <= m; i += n) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}
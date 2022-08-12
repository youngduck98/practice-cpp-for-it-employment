#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;

	int count = 0;
	for (int i = 5; i <= n; i+=5) {
		int test = i;
		while (test > 1 && test % 5 == 0) {
			test /= 5;
			count++;
		}
	}

	cout << count << endl;
}
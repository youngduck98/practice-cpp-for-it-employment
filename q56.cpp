#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void recursion(int now, int max) {
	if (now > max) { return; }
	cout << now << " ";
	recursion(now + 1, max);
}

int main() {
	int max;
	cin >> max;
	recursion(1, max);
}
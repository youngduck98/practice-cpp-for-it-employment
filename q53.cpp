#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

char convert(int k){
	switch (k) {
	case 10: return 'A';
	case 11: return 'B';
	case 12: return 'C';
	case 13: return 'D';
	case 14: return 'E';
	case 15: return 'F';
	}

	return k + ('0' - 0);
}

int main() {
	
	int n, k;
	cin >> n >> k;

	stack<int> kst;

	while (n > 0) {
		kst.push(n % k);
		n /= k;
	}

	while (!kst.empty()) {
		cout << convert(kst.top());
		kst.pop();
	}
	cout << endl;
}
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool find(vector<int> origin, int k) {
	int l = 0;
	int r = origin.size() - 1;
	while (l <= r) {
		int middle = (l + r) / 2;
		if (origin[middle] == k)
			return true;
		else if (origin[middle] > k)
			r = middle - 1;
		else
			l = middle + 1;
	}
	return false;
}

int main() {
	int n1, n2;
	cin >> n1;
	vector<int> vi1(n1, 0);
	for (int i = 0; i < n1; i++) {
		cin >> vi1[i];
	}
	sort(vi1.begin(), vi1.end());

	cin >> n2;
	vector<int> vi2(n2, 0);
	for (int i = 0; i < n2; i++) {
		cin >> vi2[i];
	}
	sort(vi2.begin(), vi2.end());
	
	vector<int> answer(0);

	for (int k : vi1) {
		if (find(vi2, k))
			answer.push_back(k);
	}

	for (int k : answer) {
		cout << k << " ";
	}
}
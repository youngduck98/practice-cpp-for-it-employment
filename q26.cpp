#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> vi(n, 0);
	vector<int> max(n, 0);//각 등수 최대 실력
	vector<int> answer(n, 1);

	for (int i = 0; i < n; i++) {
		cin >> vi[i];
		int count = 1;
		for (int k = i - 1; k >= 0; k--) {
			if (vi[i] <= vi[k]) {
				count++;
			}
		}
		answer[i] = count;
	}

	for (int k : answer) {
		cout << k << " ";
	}
}
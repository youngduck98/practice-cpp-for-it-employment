#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int before_max = INT_MAX;
	int now_max = -INT_MAX;
	int next_sequence = 1;
	int n;
	cin >> n;
	vector<int> vi(n, 0);
	vector<int> answer(n, 0);

	for(int i=0;i<n;i++){
		cin >> vi[i];
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (vi[k] < vi[i]) {
				answer[k]++;
			}
		}
	}
	for (int k : answer) {
		cout << k + 1 << " ";
	}
}
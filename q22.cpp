#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int m, n;
	cin >> n >> m;
	vector<int> vi(m+1, 0);
	int front = 0, rear = 0, size = 0, max = -INT_MAX;
	int before = 0, sum = 0;

	for (int i = 0; i < n; i++) {
		int k = 0;
		if ((rear + 1) % (m+1) == front) {
			before = vi[front];
			front = (front + 1) % (m+1);
		}
		cin >> vi[rear];
		sum += vi[rear];
		sum -= before;
		if (i == m - 1) {
			max = sum;
		}
		if (sum > max)
			max = sum;
		rear = (rear + 1) % (m+1);
	}
	cout << max << endl;
}
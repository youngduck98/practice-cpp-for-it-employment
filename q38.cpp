#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> vi(n, 0);//�Է�
	vector<int> rest(n, 0);//���� �ڸ�
	vector<int> answer(n, 0);//��

	for (int i = 0; i < n; i++) {
		cin >> vi[i];
		rest[i] = i;
	}

	for (int i = 0; i < n; i++) {
		int count = 0;
		int index = rest[vi[i]];
		rest.erase(rest.begin() + vi[i]);
		answer[index] = i+1;
	}
	for (int k : answer) {
		cout << k << " ";
	}
}
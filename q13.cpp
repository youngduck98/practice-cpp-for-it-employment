#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;
int main() {
	string s;
	cin >> s;
	vector<int> answer(10, 0);
	for (char k : s) {
		answer[int(k) - int('0')]++;
	}
	int max_n = 0 , max_c = 0;
	for (int i = 0; i < 10;i++) {
		if (max_c < answer[i] || (max_c == answer[i] && max_n<i)) {
			max_n = i;
			max_c = answer[i];
		}
	}
	cout << max_n << endl;
}
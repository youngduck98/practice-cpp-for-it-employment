#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main() {
	int total_train_num;
	queue<int> wait_train;

	cin >> total_train_num;
	for (int i = 0; i < total_train_num; i++) {
		int train_num;
		cin >> train_num;
		wait_train.push(train_num);
	}

	stack<int> save_train;
	int now_need_train = 1;
	string answer = "";

	while(now_need_train<=total_train_num){
		if (!save_train.empty() && save_train.top() == now_need_train) {
			now_need_train++;
			save_train.pop();
			answer.push_back('O');
		}
		else {
			if (wait_train.empty()) { answer = "impossible"; break; }
			save_train.push(wait_train.front());
			wait_train.pop();
			answer.push_back('P');
		}
	}

	cout << answer << endl;
}
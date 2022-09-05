#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

void ten_to_binary(stack<int>& answer, int num) {
	if (num == 0) {
		return;
	}
	int digit_int = num % 2;
	num /= 2;
	answer.push(digit_int);
	ten_to_binary(answer, num);
}

string stack_to_string(stack<int> stack_num) {
	string answer;
	while (!stack_num.empty()) {
		answer.push_back(stack_num.top() + '0');
		stack_num.pop();
	}
	return answer;
}

int main() {
	stack<int> stack_answer;
	int num;
	cin >> num;
	ten_to_binary(stack_answer, num);
	string answer = stack_to_string(stack_answer);
	cout << answer << endl;
}
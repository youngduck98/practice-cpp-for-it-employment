#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Student {
public:
	int num;
	int answer;
	Student(int num, int answer);
};

Student::Student(int num, int answer) {
	this->num = num;
	this->answer = answer;
}

int right_answer(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	vector<Student> stv;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stv.push_back(Student(0, 0));
		cin >> stv[i].num;
		cin >> stv[i].answer;
	}

	for (Student k : stv) {
		if (k.answer == right_answer(k.num)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
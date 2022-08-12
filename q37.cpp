#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class my_que {
public:
	vector<int> list;
	int max_size;
	int time;
private:
	int front;
	int rear;
public:
	my_que(int size);
	int inque(int k);
	int pop();
	void push(int k);
	void print();
};

my_que::my_que(int size) {
	this->max_size = size;
	this->list = vector<int>(max_size+1, 0);
	this->front = max_size;
	this->rear = max_size;
	this->time = 0;
}

int my_que::inque(int k) {
	for (int i = (this->front + 1) % (max_size + 1); (this->rear + 1) % (max_size + 1) != i; i = (i + 1) % (max_size + 1)) {
		if (this->list[i] == k) {
			return i;
		}
	}
	return -1;
}

int my_que::pop() {
	if (this->front == this->rear)
		return -INT_MAX;
	int a = this->list[this->rear];
	this->rear = (this->rear + max_size) % (this->max_size + 1);
	return a;
}

void my_que::print() {
	for (int i = (this->front + 1)%(max_size+1); (this->rear + 1)%(max_size+1) != i; i = (i + 1) % (max_size + 1)) {
		cout << list[i] << " ";
	}
	cout << endl;
}

void my_que::push(int k) {
	int in = this->inque(k);
	int t = 0;
	if (in != -1) {
		list.erase(list.begin() + in);
		if (this->front < this->rear) {
			list.insert(list.begin(), 0);
			this->front++;
		}
		else {
			list.insert(list.begin() + this->rear + 1, 0);
			if (in <= this->rear) {
				this->rear = (this->rear + max_size) % (max_size + 1);
			}
			else {
				this->front++;
			}
		}
		t -= 4;
	}
	else if (this->rear == (this->front + max_size) % (max_size + 1)) {
		this->pop();
	}
	this->list[this->front] = k;
	this->front = (this->front + max_size) % (max_size + 1);
	t += 5;
	time += t;
}

int main() {
	int size, N;
	cin >> size >> N;
	my_que mq(size);
	for (int i = 0; i < N; i++) {
		int k;
		cin >> k;
		mq.push(k);
	}
	mq.print();
}
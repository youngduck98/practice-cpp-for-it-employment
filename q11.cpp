#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int answer = 0, cl = 10, d = 9, i = 1;
	while (cl <= n) {
		answer += i * d;
		d *= 10;
		i++;
		cl *= 10;
	}

	answer += i * (n - cl/10 + 1);
	cout<<answer<<endl;
}
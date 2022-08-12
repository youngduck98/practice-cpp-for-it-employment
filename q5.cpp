#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s, s1;
	int iv = int('a') - int('A');
	getline(cin, s);

	for (char k : s) {
		if (int(k) >= int('a') && int(k) <= int('z')) {
			s1.push_back(k);
		}
		else if (int(k) >= ('A') && int(k) <= int('Z')) {
			s1.push_back(char(int(k) + iv));
		}
	}

	cout << s1 << endl;
}
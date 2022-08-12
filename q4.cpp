#include<iostream>
#include<string>
#include<vector>
#define year 2019

using namespace std;
int main() {
	string s;
	cin >> s;
	int y = stoi(s.substr(0, 2));
	char sex = '\0';
	switch (s[7]) {
	case'1': y += 1900; sex = 'M'; break;
	case '3': y += 2000;  sex = 'M'; break;
	case '2': y += 1900; sex = 'W'; break;
	case '4': y += 2000; sex = 'W'; break;
	}
	int age = year - y + 1;
	cout << age << " "<<sex << endl;
}
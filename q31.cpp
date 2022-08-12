#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	string s;
	cin >> s;

	int c = s.find('C');
	int h = s.find('H');
	int cn;
	if (h - c > 1) { cn = stoi(s.substr(c + 1, h)); }
	else { cn = 1; }
	int hn;
	if (h != s.length() - 1) { hn = stoi(s.substr(h + 1)); }
	else { hn = 1; }
	cout<<12 * cn + hn << endl;
}
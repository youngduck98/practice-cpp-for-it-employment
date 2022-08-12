#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int find_min(vector<int> a, vector<int> b) {
	int min = 0;
	for (int i = 1; i < a.size(); i++) {
		if (a[min] > a[i]) { min = i; }
		else if (a[min] == a[i]) {
			if (b[min] < b[i]) { min = i; }
		}
	}
	return min;
}

int main() {
	vector<vector<int>> cross(9, vector<int>(9, 0));
	vector<int> middle(9, 0);
	vector<int> simmilar(9, 0);
	for (int r = 0; r < 9; r++) {
		int sum = 0;
		for (int c = 0; c < 9; c++) {
			cin >> cross[r][c];
			sum += cross[r][c];
		}
		middle[r] = int(((float)sum) / 9 + 0.5);
	}

	cout << fixed;
	cout.precision(0);
	for (int r = 0; r < 9; r++) {
		vector<int> abs_f(9, 0);
		for (int c = 0; c < 9; c++) {abs_f[c] = abs(cross[r][c] - middle[r]);}
		cout << middle[r] << " " << cross[r][find_min(abs_f, cross[r])] << endl;
	}
}
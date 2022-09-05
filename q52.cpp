#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int find_min(int a, int b, int c) {
	if (a < b) {
		if (a < c)
			return a;
		else
			return c;
	}
	else {
		if (b < c)
			return b;
		else
			return c;
	}
}

int main() {
	vector<int> array(1501, 0);
	array[0] = 1;
	int p2 = 0, p3 = 0, p5 = 0;

	int n;
	cin >> n;

	int min = INT_MAX;

	for (int i = 1; i <= n; i++) {
		array[i] = find_min(array[p2] * 2, array[p3] * 3, array[p5] * 5);
		if (array[i] == array[p2] * 2)
			p2++;
		if (array[i] == array[p3] * 3)
			p3++;
		if (array[i] == array[p5] * 5)
			p5++;
	}

	cout << array[n - 1] << endl;
}
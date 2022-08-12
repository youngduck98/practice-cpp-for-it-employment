#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

char game_winner(int a, int b) {
	switch ((a - b + 3) % 3) {
	case 0: return 'D';
	case 1: return 'A';
	case 2: return 'B';
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> avi(n, 0);
	vector<int> bvi(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> avi[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> bvi[i];
	}

	for (int i = 0; i < n; i++) {
		cout << game_winner(avi[i], bvi[i]) << endl;
	}
}
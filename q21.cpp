#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Player {
public:
	vector<int> card;;
	int score;
	Player(int n);
};

Player::Player(int n) {
	this->score = 0;
	for (int i = 0; i < n; i++) {
		this->card.push_back(0);
	}
}

int main() {
	int n = 10;
	char last_winner = 'D';
	Player a = Player(10);
	Player b = Player(10);

	for (int i = 0; i < n; i++) {
		cin >> a.card[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b.card[i];
	}

	for (int i = 0; i < n; i++) {
		if (a.card[i] == b.card[i]) {
			a.score++;
			b.score++;
		}
		else if (a.card[i] > b.card[i]) {
			a.score += 3;
			last_winner = 'A';
		}
		else if(b.card[i]>a.card[i]) {
			b.score += 3;
			last_winner = 'B';
		}
	}

	cout << a.score << " " << b.score << endl;
	if (a.score == b.score) {
		cout << last_winner << endl;
	}
	else if (a.score > b.score) {
		cout << 'A' << endl;
	}
	else if (b.score > a.score) {
		cout << 'B' << endl;
	}
}
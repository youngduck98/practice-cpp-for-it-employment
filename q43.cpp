#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int need_record(vector<int> songs_time, int record_time) {
	int record_num = 1;
	int sum = 0;
	for (int k : songs_time) {
		sum += k;
		if (k > record_time) {
			return -1;
		}
		else if (sum > record_time) {
			sum = k;
			record_num++;
		}
	}
	return record_num;
}

int main() {
	int m, n;
	cin >> n >> m;
	int sum = 0;
	vector<int> song_times(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> song_times[i];
		sum += song_times[i];
	}

	int right = sum;
	int left = 1;
	int answer = sum;

	while (right >= left) {
		int mid = (right + left) / 2;
		int k = need_record(song_times, mid);
		if (need_record(song_times, mid) > m) {left = mid + 1;}
		else if (need_record(song_times, mid) == m) {
			answer = mid;
			right = mid - 1;
		}
		else {
			answer = mid;
			right = mid - 1;
		}
	}

	cout << answer << endl;
}
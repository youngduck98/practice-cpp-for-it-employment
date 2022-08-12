#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool compair_first(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

bool compair_second(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

void vector_minus_second(vector<pair<int, int>>& a, int b) {
	for (auto& k : a) {k.second -=  b;}
}

int main() {
	int n, work, time;
	cin >> n;
	vector<pair<int, int>> works_time_ary;// index: time
	for (int i = 0; i < n; i++) {
		cin >> work;
		works_time_ary.push_back(make_pair(i, work));
	}
	cin >> time;

	sort(works_time_ary.begin(), works_time_ary.end(), compair_second);

	int remain_work = works_time_ary.size();
	int add = 0;

	for (auto k : works_time_ary) {
		add = k.second - add;
		if (add <= 0) {
			remain_work--;
			continue;
		}
		int count = add * remain_work;
		if (time >= count) {
			time -= count;
			remain_work--;
		}
		else {
			time %= remain_work;
			break;
		}
	}

	if (remain_work == 0) {
		return -1;
	}
	else if (remain_work < works_time_ary.size()) {
		int sub_num = works_time_ary[works_time_ary.size() - remain_work - 1].second;
		vector_minus_second(works_time_ary, sub_num);
	}

	sort(works_time_ary.begin(), works_time_ary.end(), compair_first);
	
	int now = 0;
	for (int i = 0; i < time; i++, now++) {
		if (works_time_ary[now].second <= 0)
			i--;
	}

	while (works_time_ary[now].second <= 0) {
		now = (now + 1) % works_time_ary.size();
	}

	cout << now + 1 << endl;
}
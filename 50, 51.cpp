#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int cal_dy(vector<vector<int>> dy, int a, int b, int my_row, int my_col) {
	int cal_row = a + my_row;
	int cal_col = b + my_col;

	return dy[cal_row][cal_col] - dy[a][cal_col] - dy[cal_row][b] + dy[a][b];
}

int main() {
	int t_row, t_col;
	cin >> t_row >> t_col;
	vector<vector<int>> territory(t_row, vector<int>(t_col, 0));
	for (auto &r : territory) {
		for (auto &c : r) {
			cin >> c;
		}
	}

	int my_row, my_col;
	cin >> my_row >> my_col;

	vector<vector<int>> my_dy(t_row, vector<int>(t_col, 0));

	int r_sum = 0;
	int c_sum = 0;
	for (int i = 0; i < t_row; i++) {
		r_sum += territory[i][0];
		my_dy[i][0] = r_sum;
	}

	for (int i = 0; i < t_col; i++) {
		c_sum += territory[0][i];
		my_dy[0][i] = c_sum;
	}


	for (int r = 1; r < t_row; r++) {
		for (int c = 1; c < t_col; c++) {
			my_dy[r][c] = my_dy[r][c - 1] + my_dy[r - 1][c] - my_dy[r-1][c-1] + territory[r][c];
		}
	}

	int max = 0;
	int now = 0;
	for (int r = 0; r < t_row - my_row; r++) {
		for (int c = 0; c < t_col - my_col; c++) {
			now = cal_dy(my_dy, r, c, my_row, my_col);
			if (max < now) {
				max = now;
			}
		}
	}

	cout << max << endl;
}
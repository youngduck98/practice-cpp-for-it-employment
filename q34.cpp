#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>

bool compare(int a, int b) {
	return a < b;
}

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

using namespace std;
void bubble_sort(vector<int>& vi, bool (*cp)(int, int)) {
	int size = vi.size();
	for (int i = size-1; i >= 1; i--) {
		for (int k = 0; k < i; k++) {
			if (!cp(vi[k], vi[k + 1])) {
				swap(&vi[k], &vi[k+1]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> vi(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}
	bubble_sort(vi, compare);
	for (int k : vi) {
		cout<<k<<" ";
	}
}
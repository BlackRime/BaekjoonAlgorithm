#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAX 100001

int testcase, n, accept, best;
pair<int, int> result[MAX];

bool compare(pair<int, int> &a, pair<int, int> &b) {
	return a.first < b.first ? true : false;
}

void input() {
	cin >> n;
	int a, b;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		result[i] = make_pair(a, b);
	}
}

void solve() {
	accept = 1;

	sort(result, result + n, compare);

	best = result[0].second;

	for (int i = 1; i < n; ++i) {
		if (result[i].second < best) {
			++accept;
			best = result[i].second;
		}
	}

	cout << accept << endl;
}

int main() {
	cin >> testcase;
	while (testcase--) {
		input();
		solve();
	}
	// your code goes here
	return 0;
}
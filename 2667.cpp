#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 26

int n;
string map[MAX];
int dp[MAX][MAX];

vector<int> result;

int MapSearch(int current_y, int current_x) {
	if (current_y < 0 || current_y == n || current_x < 0 || current_x == n) {
		return 0;
	}

	if (dp[current_y][current_x]) {
		return 0;
	}
	if (map[current_y][current_x] == '1') {
		dp[current_y][current_x] = 1;
		return MapSearch(current_y - 1, current_x) + MapSearch(current_y, current_x - 1) +
			MapSearch(current_y + 1, current_x) + MapSearch(current_y, current_x + 1) + 1;
	}
	return 0;
}

int MapMove(int current_y, int current_x) {
	if (current_y < 0 || current_y == n || current_x < 0 || current_x == n) {
		return 0;
	}
	if (dp[current_y][current_x] == 2) {
		return 0;
	}
	if (map[current_y][current_x] == '1' && dp[current_y][current_x] != 1) {
		dp[current_y][current_x] = 1;
		result.push_back(MapSearch(current_y - 1, current_x) + MapSearch(current_y, current_x - 1) +
			MapSearch(current_y + 1, current_x) + MapSearch(current_y, current_x + 1) + 1);
	}
	dp[current_y][current_x] = 2;
	MapMove(current_y + 1, current_x);
	MapMove(current_y, current_x + 1);

	return 0;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> map[i];
	}

	MapMove(0, 0);

	cout << result.size() << endl;

	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); ++i) {
		cout << result[i] << endl;
	}

	return 0;
}
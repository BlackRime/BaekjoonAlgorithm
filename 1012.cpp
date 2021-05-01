#include <iostream>
#include <cstring>
using namespace std;

#define MAX 51

int y, x, n;
int testcase;
int field[MAX][MAX];
int dp[MAX][MAX];
int result;

int Search(int current_y, int current_x) {
	if (current_y < 0 || current_y == y || current_x < 0 || current_x == x) {
		return 0;
	}
	if (dp[current_y][current_x] == 1) {
		return 0;
	}


	if (field[current_y][current_x]) {
		dp[current_y][current_x] = 1;
		Search(current_y - 1, current_x);
		Search(current_y, current_x - 1);
		Search(current_y + 1, current_x);
		Search(current_y, current_x + 1);
	}
	return 0;
};

int Move(int current_y, int current_x) {
	if (current_y < 0 || current_y == y || current_x < 0 || current_x == x) {
		return 0;
	}
	if (dp[current_y][current_x] == 2) {
		return 0;
	}

	if (field[current_y][current_x] && dp[current_y][current_x] != 1) {
		++result;
		dp[current_y][current_x] = 1;
		Search(current_y - 1, current_x);
		Search(current_y, current_x - 1);
		Search(current_y + 1, current_x);
		Search(current_y, current_x + 1);
	}

	dp[current_y][current_x] = 2;
	Move(current_y + 1, current_x);
	Move(current_y, current_x + 1);


	return 0;
}

int main() {
	cin >> testcase;

	while (testcase--) {
		cin >> x >> y >> n;
		int a, b;
		result = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a >> b;
			field[b][a] = 1;
		}

		Move(0, 0);
		cout << result << endl;

		for (int i = 0; i < y; ++i) {
			memset(dp[i], 0, sizeof(int)*x);
			memset(field[i], 0, sizeof(int)*x);
		}
	}


}
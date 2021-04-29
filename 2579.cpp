#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 301

int n;
int stair[MAX];
int dp[MAX];

int UpStair(int current) {
	if (dp[current]) {
		return dp[current];
	}
	if (current < 2) {
		return 0;
	}

	return dp[current] = max(UpStair(current - 2),
		UpStair(current - 3) + stair[current - 1]) + stair[current];

}


int main() {
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> stair[i];
	}

	dp[0] = 0;
	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];

	cout << UpStair(n);
}
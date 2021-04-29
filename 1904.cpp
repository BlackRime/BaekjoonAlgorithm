#include <iostream>
using namespace std;

#define MAX 1000001

int dp[MAX];

int n;

int solve(int current) {
	if (current == 0) {
		return 0;
	}
	else if (current == 1) {
		return 1;
	}
	else if (dp[current]) {
		return dp[current];
	}
	else return dp[current] = (solve(current - 2) + solve(current - 1)) % 15746;

}

int main() {
	int n;

	cin >> n;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	cout << solve(n);
}
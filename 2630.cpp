#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MAX 129

int paper[MAX][MAX];
int n;
bool sw;

int solve(int startX, int startY, int size, int reverse) {
	if (size == 0) {
		return 0;
	}
	sw = false;

	for (int i = startX; i < startX + size; ++i) {
		for (int j = startY; j < startY + size; ++j) {
			if (paper[i][j] == reverse) {
				sw = true;
				break;
			}
		}
		if (sw) {
			break;
		}
	}
	if (sw == false) {
		return 1;
	}

	int half_size = size / 2;
	return solve(startX, startY, half_size, reverse) + solve(startX + half_size, startY, half_size, reverse) +
		solve(startX, startY + half_size, half_size, reverse) + solve(startX + half_size, startY + half_size, half_size, reverse);

}

int main() {

	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> paper[i][j];
		}
	}

	cout << solve(0, 0, n, 1) << endl;
	cout << solve(0, 0, n, 0) << endl;

	// your code goes here
	return 0;
}
#include <iostream>
using namespace std;

#define MAX 101

int node, edge;
int path[MAX][MAX];
int infested[MAX];

int solve(int current) {
	if (infested[current]) {
		return 0;
	}
	infested[current] = 1;
	int infest = 1;
	for (int i = 1; i <= node; ++i) {
		if (path[current][i]) {
			infest += solve(i);
		}
	}

	return infest;
}

int main() {
	cin >> node >> edge;

	int inputX, inputY;

	for (int i = 0; i < edge; ++i) {
		cin >> inputX >> inputY;
		path[inputX][inputY] = 1;
		path[inputY][inputX] = 1;
	}

	cout << solve(1) - 1;

	return 0;
}
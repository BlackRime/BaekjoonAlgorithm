#include <iostream>
#include <algorithm>
using namespace std;
int a[1001][1001];
int d[1001][1001];
int max3(int x, int y, int z) {
	return max(x, max(y, z));
}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			d[i][j] = max3(d[i - 1][j], d[i][j - 1], d[i - 1][j - 1]) + a[i][j];
		}
	}
	cout << d[n][m];
	return 0;
}
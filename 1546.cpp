#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, M(0);
	double a[1001];
	double sum(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (M < a[i]) {
			M = a[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		sum += (100 * a[i]) / M;
	}
	cout << fixed;
	cout.precision(2);
	cout << sum / n << endl;
}
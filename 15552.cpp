#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int testcase;

	cin >> testcase;

	while (testcase--) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
}
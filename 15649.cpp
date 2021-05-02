#include <iostream>
#include <vector>

#define MAX 9
using namespace std;

int n, m;
vector<int> v;
int visit[MAX];

void recursive(int count)
{
	if (count == m)
	{
		int vSize = v.size();
		for (int i = 0; i < vSize; ++i)
		{
			cout << v[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (visit[i] == true)
		{
			continue;
		}
		visit[i] = true;
		v.push_back(i);
		recursive(count + 1);
		visit[i] = false;
		v.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	recursive(0);

	return 0;
}
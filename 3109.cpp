#include <iostream>
using namespace std;

int r, c;
char map[10002][501];
int dx[] = { -1, 0, 1 };

bool dps(int y, int x)
{
	if (x == c - 1)
	{
		return 1;
	}

	map[y][x] = 'x';

	for (int i = 0; i < 3; ++i)
	{
		if (map[y + dx[i]][x + 1] == '.')
		{
			if (dps(y + dx[i], x + 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void input()
{
	cin >> r >> c;

	for (int i = 1; i < r + 1; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < c + 1; ++i)
	{
		map[0][i] = 'x';
		map[10001][i] = 'x';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count(0);

	input();

	for (int i = 1; i < r; ++i)
	{
		count += dps(i, 0);
	}

	cout << count;
}
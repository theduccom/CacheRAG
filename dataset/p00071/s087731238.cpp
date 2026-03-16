#include <string>
#include <iostream>

using namespace std;

string DATA[8];

void dfs(int x, int y)
{
	DATA[y][x] = '0';

	for (int dx = -3; dx <= 3; dx++)
	{
		if (x + dx >= 0 && x + dx < 8)
		{
			if (DATA[y][x + dx] == '1')
			{
				dfs(x + dx, y);
			}
		}
	}

	for (int dy = -3; dy <= 3; dy++)
	{
		if (y + dy >= 0 && y + dy < 8)
		{
			if (DATA[y + dy][x] == '1')
			{
				dfs(x, y + dy);
			}
		}
	}
}

int main()
{
	string ANS[1000][8];

	int N;

	int x, y;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int i = 0; i < 8; i++)
		{
			cin >> DATA[i];
		}

		cin >> x >> y;

		dfs(x - 1, y - 1);

		for (int j = 0; j < 8; j++)
		{
			ANS[i][j] = DATA[j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Data " << i + 1 << ":" << endl;

		for (int j = 0; j < 8; j++)
		{
			cout << ANS[i][j] << endl;
		}
	}

	return 0;
}
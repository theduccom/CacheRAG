#include <iostream>
#include <cstring>
using namespace std;

int dx[] = { 0, 1, 0, -1, 0, 1, 1, -1, -1, 2, 0, -2, 0 };
int dy[] = { 0, 0, 1, 0, -1, -1, 1, 1, -1, 0, 2, 0, -2 };

int main()
{
	int map[10][10];
	memset(map, 0, sizeof(map));
	int x, y, d;
	char c;

	while (cin >> x >> c >> y >> c >> d)
	{
		for (int i=0; i<=4*d; i++)
		{
			int tx = x + dx[i];
			int ty = y + dy[i];
			if (0 <= tx && tx < 10 && 0 <= ty && ty <= 10)
				map[ty][tx]++;
		}
	}

	int cnt = 0;
	int MAX = 0;
	for (int i=0; i<10; i++)
	for (int k=0; k<10; k++)
		if (map[i][k] == 0)
			cnt++;
		else if (map[i][k] > MAX)
			MAX = map[i][k];

	cout << cnt << endl;
	cout << MAX << endl;
}
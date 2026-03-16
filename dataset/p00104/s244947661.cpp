#include <iostream>
using namespace std;

char m[100][100];

int main()
{
	int h, w;
	while (cin >> h >> w, h+w)
	{
		for (int y = 0; y < h; y++)
		{
			for (int x = 0; x < w; x++)
			{
				cin >> m[x][y];
			}
		}
		int x = 0;
		int y = 0;
		for (int i = 0; i <= w * h; i++)
		{
			if (m[x][y] == '.')
			{
				cout << x << ' ' << y << endl;
				break;
			}
			else if (m[x][y] == '>') x++;
			else if (m[x][y] == '<') x--;
			else if (m[x][y] == 'v') y++;
			else if (m[x][y] == '^') y--;
			if (i == w * h) cout << "LOOP" << endl;
		}
	}

	return 0;
}
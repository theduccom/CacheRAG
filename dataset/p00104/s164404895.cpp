#include <iostream>
using namespace std;
int main()
{
	int w, h, i, j, c, x, y;
	char f[100][100];
	bool b;
	while (cin >> w >> h)
	{
		if (w == 0 && h == 0) break;
		x = y = 0;
		b = false;
		c = 0;
		for (i = 0; i < w; i++)
			for (j = 0; j < h; j++)
				cin >> f[i][j];
		while (c <= w*h)
		{
			switch (f[y][x])
			{
			case '>':
				x++;
				break;
			case '^':
				y--;
				break;
			case '<':
				x--;
				break;
			case 'v':
				y++;
				break;
			default:
				cout << x << " " << y << endl;
				b = true;
				break;
			}
			if (b) break;
			c++;
		}
		if (!b) cout << "LOOP" << endl;
	}
}
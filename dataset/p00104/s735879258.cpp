#include <iostream>
using namespace std;
int main()
{
	struct POINT {int x, y;} p;
	int w, h, i, j, c;
	char f[100][100];
	bool b;
	while (cin >> w >> h)
	{
		if (w == 0 && h == 0) break;
		p.x = p.y = 0;
		b = false;
		c = 0;
		for (i = 0; i < w; i++)
			for (j = 0; j < h; j++)
				cin >> f[i][j];
		while (c <= w*h)
		{
			switch (f[p.y][p.x])
			{
			case '>':
				p.x++;
				break;
			case '^':
				p.y--;
				break;
			case '<':
				p.x--;
				break;
			case 'v':
				p.y++;
				break;
			default:
				cout << p.x << " " << p.y << endl;
				b = true;
				break;
			}
			if (b) break;
			c++;
		}
		if (!b) cout << "LOOP" << endl;
	}
}
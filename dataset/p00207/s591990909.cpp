#include <iostream>
#include <string.h>
using namespace std;

int w, h, xs, ys, xg, yg, n;
int b[101][101];
bool f[101][101];

void maze(int x, int y) {
	f[x][y] = 1;

	int cl = b[xs][ys];

	if (x < w && !f[x + 1][y] && b[x + 1][y] == cl)
		maze(x + 1, y);

	if (x > 1 && !f[x - 1][y] && b[x - 1][y] == cl)
		maze(x - 1, y);

	if (y < h && !f[x][y + 1] && b[x][y + 1] == cl)
		maze(x, y + 1);

	if (y > 1 && !f[x][y - 1] && b[x][y - 1] == cl)
		maze(x, y - 1);
}

int main()
{
	cin >> w >> h;

	while (w != 0 || h != 0) {
		cin >> xs >> ys >> xg >> yg >> n;

		memset(b, 0, sizeof(b));
		memset(f, 0, sizeof(f));

		for (int i = 0; i < n; i++) {
			int c, d, x, y;

			cin >> c >> d >> x >> y;

			if (d) {
				for (int i = 0; i < 2; i++)
					for (int j = 0; j < 4; j++)
						b[x + i][y + j] = c;
			}
			else {
				for (int i = 0; i < 2; i++)
					for (int j = 0; j < 4; j++)
						b[x + j][y + i] = c;
			}
		}

		maze(xs, ys);

		if (f[xg][yg])
			cout << "OK" << endl;
		else
			cout << "NG" << endl;

		cin >> w >> h;
	}

	return 0;
}

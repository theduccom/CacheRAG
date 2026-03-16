#include <iostream>
#include <stack>
#include <complex>

using namespace std;

typedef complex<int> P;

int main() {
	int W, H;
	while (cin >> W >> H, W || H) {
		int sx, sy; cin >> sx >> sy; --sx, --sy;
		int gx, gy; cin >> gx >> gy; --gx, --gy;
		int n; cin >> n;

		int board[100][100] = {0};
		for (int i = 0; i < n; ++i) {
			int c, d, x, y; cin >> c >> d >> x >> y; --x, --y;
			int lx = x, ly = y;
			int rx, ry;

			if (d == 0) rx = x + 4, ry = y + 2;
			else rx = x + 2, ry = y + 4;

			for (y = ly; y < ry; ++y)
				for (x = lx; x < rx; ++x)
					board[y][x] = c;
		}

		bool f = false;
		P goal = P(gx, gy);
		int color = board[sy][sx];

		if (color == 0) {
			cout << "NG" << endl;
			continue;
		}

		stack<P> S; S.push( P(sx, sy) );
		while ( !S.empty() ) {
			P p = S.top(); S.pop();

			if (p.real() < 0 || p.real() >= W || p.imag() < 0 || p.imag() >= H) continue;
			if (board[p.imag()][p.real()] != color) continue;
			board[p.imag()][p.real()] = 0;

			if ( p == goal ) {
				cout << "OK" << endl;
				f = true;
				break;
			}

			S.push( p + P(1, 0) );
			S.push( p + P(-1, 0) );
			S.push( p + P(0, 1) );
			S.push( p + P(0, -1) );
		}
		if (f) continue;

		cout << "NG" << endl;
	}
}
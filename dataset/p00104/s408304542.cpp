#include <iostream>
#include <complex>
#include <map>

using namespace std;

typedef complex<int> P;

int main() {
	P dirs[5] = {
		P(0, 0),
		P(0, -1),
		P(1, 0),
		P(0, 1),
		P(-1, 0)
	};
	map<char, int> trans;
	trans['.'] = 0;
	trans['^'] = 1;
	trans['>'] = 2;
	trans['v'] = 3;
	trans['<'] = 4;

	int W, H;
	int m[100][100];
	while (cin >> H >> W, H || W) {
		for (int y = 0; y < H; ++y) {
			string str; cin >> str;
			for (int x = 0; x < W; ++x)
				m[y][x] = trans[str[x]];
		}

		P p = P(0, 0);
		for (int i = 0; i < W*H; ++i)
			p += dirs[m[p.imag()][p.real()]];

		if (m[p.imag()][p.real()]) cout << "LOOP" << endl;
		else cout << p.real() << " " << p.imag() << endl;
	}
}
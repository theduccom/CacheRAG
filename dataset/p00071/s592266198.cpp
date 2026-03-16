#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef vector<int> VI;
typedef vector< VI > VVI;

typedef long long LL;

typedef pair<int, int> PII;
typedef vector<PII> VPII;

#define X first
#define Y second

int W, H;
vector<string> bs;

void dfs(int y, int x) {
	bs[y][x] = '0';

	for (int dy = -1; dy <= 1; dy++) {
		for (int dx = -1; dx <= 1; dx++) {
			if (!(!dx ^ !dy)) continue;

			int nx = x, ny = y;

			for (int i = 0; i < 3; i++) {
				nx += dx;
				ny += dy;

				if (nx < 0 || ny < 0 || nx >= W || ny >= H) break;

				if (bs[ny][nx] == '1') {
					dfs(ny, nx);
				}
			}
		}
	}
}

int main(void) {
	int N;
	cin >> N;
	W = H = 8;

	for (int i = 0; i < N; i++) {
		bs = vector<string>(H);

		for (int y = 0; y < H; y++) {
			cin >> bs[y];
		}

		int tx, ty;
		cin >> tx >> ty;

		dfs(ty - 1, tx - 1);

		// dump
		cout << "Data " << (i + 1) << ":" << endl;
		for (int y = 0; y < H; y++){
			cout << bs[y] << endl;
		}

	}
	

	return 0;
}
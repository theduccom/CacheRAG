#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char board[101 * 101];

int solve(int pos) {
	char c = board[pos];
	board[pos] = '0';
	if (c == '.') return pos;
	else if (c == '0') return -1;
	else if (c == '>') return solve(pos + 1);
	else if (c== '<') return solve(pos - 1);
	else if (c == '^') return solve(pos - 101);
	else return solve(pos + 101);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int H, W;

	while (cin >> H >> W, H) {
		for(int y = 0; y < H; y++)
			for(int x = 0; x < W; x++)
				cin >> board[y*101 + x];
		int ret = solve(0);
		if (ret == -1)
			cout << "LOOP" << endl;
		else
			cout << ret % 101 << " " << ret / 101 << endl;
	}
}
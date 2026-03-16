# include <iostream>
# include <stack>
# include <cstring>

typedef std::pair<int, int> P;

constexpr int INF = (int)1e7;
constexpr int MAX = 100;

int w, h;
int board[MAX][MAX];
P start, goal;
int n;
int d[MAX][MAX], dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };

bool dfs(P s, P g) {
	bool res = false;
	for (int i = 0; i < h; ++i)
		for (int j = 0; j < w; ++j)
			d[i][j] = INF;
	std::stack<P> stk;
	stk.push(s);
	d[s.second][s.first] = 0;
	while (!stk.empty()) {
		P p = stk.top(); stk.pop();
		if (p == g) {
			res = true;
			break;
		}

		for (int i = 0; i < 4; ++i) {
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];
			if (0 <= nx&&nx < w &&
				0 <= ny&&ny < h&&
				d[ny][nx] == INF&&board[ny][nx] == board[p.second][p.first]) {
				d[ny][nx] = d[p.second][p.first] + 1;
				stk.push(P(nx, ny));
			}
		}
	}
	return res;
}

int main() {
	while (1) {
		std::cin >> w >> h;
		if (w + h == 0)
			break;
		std::memset(board, 0, sizeof(board));

		std::cin >> start.first >> start.second
			>> goal.first >> goal.second >> n;
		--start.first;
		--start.second;
		--goal.first;
		--goal.second;
		int c, d, x, y;
		for (int i = 0; i < n; ++i) {
			std::cin >> c >> d >> x >> y;
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 2; ++j) {
					int& a = (d) ? board[y - 1 + i][x - 1 + j] : board[y - 1 + j][x - 1 + i];
					a = c;
				}
			}
		}

		if (dfs(start, goal))
			std::cout << "OK" << std::endl;
		else
			std::cout << "NG" << std::endl;
	}
	return 0;
}
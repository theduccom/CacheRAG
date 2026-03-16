# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

int main() {
	int h, w;
	while (cin >> h >> w&&h != 0 && w != 0) {
		char maze[101][101];
		bool data[101][101] = { false };
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> maze[i][j];
			}
		}
		int posh = 0, posw = 0;
		bool isloop = false;
		while (maze[posh][posw] != '.') {
			if (data[posh][posw]) {
				isloop = true;
				break;
			}
			data[posh][posw] = true;
			if (maze[posh][posw] == '>')posw++;
			else if (maze[posh][posw] == '<')posw--;
			else if (maze[posh][posw] == '^')posh--;
			else posh++;
		}
		if (isloop) {
			cout << "LOOP" << endl;
		}
		else {
			cout << posw << " " << posh << endl;
		}
	}
}
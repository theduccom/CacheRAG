#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
using namespace std;

#define INF (1 << 20)
#define EPS (1e-10)
#define EQ(a,b) (fabs((a)-(b)) < EPS)

int main(){
	int field[10][10] = {};
	int dx[13] = {0, -1, 0, 1, 0, -1, 1, 1, -1, -2, 0, 2, 0};//5, 9, 13
	int dy[13] = {0, 0, -1, 0, 1, -1, -1, 1, 1, 0, -2, 0, 2};
	int x, y, size;
	char split;
	while (cin >> x >> split >> y >> split >> size) {
		int m = 1 + 4 * size;
		for (int i = 0; i < m; ++i) {
			if (x + dx[i] >= 0 && x + dx[i] < 10 && y + dy[i] >= 0 && y + dy[i] < 10)
				++field[x+dx[i]][y+dy[i]];
		}
	}
	int zero = 0;
	int maxnum = 0;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (field[i][j] == 0) ++zero;
			maxnum = max(maxnum, field[i][j]);
		}
	}
	cout << zero << endl;
	cout << maxnum << endl;

	return 0;
}
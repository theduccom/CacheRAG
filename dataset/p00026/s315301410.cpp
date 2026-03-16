#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <climits>
#include <utility>

#define PRINT(STR) cout << STR << endl;
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define SPACE " "

typedef long long ll;

using namespace std;

int nextInt() { int n = -1; cin >> n; return n; }
double nextDouble() { double d = -1; cin >> d; return d; }
ll nextll() { ll n = -1; cin >> n; return n; }
string nextString() { string str; cin >> str; return str; }

int INF = 1LL << 25;
double EPS = 1e-9;

// BEGIN //////////////////////////////////////////////////////////////
int board[14][14];
int main() {
	int x, y, s;
	while (scanf("%d,%d,%d", &x, &y, &s) != EOF) {
		x += 2;
		y += 2;
		switch (s) {
			case 1: {
				board[x][y]++; board[x+1][y]++; board[x][y+1]++;
				board[x-1][y]++; board[x][y-1]++;
				break;
			}
			case 2: {
				board[x][y]++; board[x][y-1]++; board[x+1][y-1]++;
				board[x+1][y]++; board[x+1][y+1]++; board[x][y+1]++;
				board[x-1][y+1]++; board[x-1][y]++; board[x-1][y-1]++;
				break;
			}
			case 3: {
				board[x][y]++; board[x][y-1]++; board[x+1][y-1]++;
				board[x+1][y]++; board[x+1][y+1]++; board[x][y+1]++;
				board[x-1][y+1]++; board[x-1][y]++; board[x-1][y-1]++;
				board[x][y-2]++; board[x+2][y]++; board[x][y+2]++;
				board[x-2][y]++;
				break;
			}
		}
	}
	int s_max = -1;
	int empty_num = 0;
	for (int i = 2; i < 12; i++) {
		for (int j = 2; j < 12; j++) {
			if (board[i][j] > s_max) {
				s_max = board[i][j];
			}
			if (board[i][j] == 0) {
				empty_num++;
			}
		}
	}
	cout << empty_num << endl << s_max << endl;
}
// END   //////////////////////////////////////////////////////////////
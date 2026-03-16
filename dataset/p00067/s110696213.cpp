#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 12
#define NIL -1

string M[MAX];
static int color[MAX][MAX + 1];

void dfs(int h, int w, int c) {
	color[h][w] = c;
	if (h != MAX - 1 && M[h + 1][w] == '1'&&color[h + 1][w] == NIL)
		dfs(h + 1, w, c);
	if (h != 0 && M[h - 1][w] == '1'&&color[h - 1][w] == NIL)
		dfs(h - 1, w, c);
	if (w != MAX - 1 && M[h][w + 1] == '1'&&color[h][w + 1] == NIL)
		dfs(h, w + 1, c);
	if (w != 0 && M[h][w - 1] == '1'&&color[h][w - 1] == NIL)
		dfs(h, w - 1, c);
}


int main() {

	for (string s; cin >> s && s != "S";) {
		M[0] = s;
		for (int h = 1; h < MAX; h++) {
			cin >> s;
			M[h] = s;
		}
		fill(color[0], color[MAX], NIL);
		int c = 0;
		for (int i = 0; i < MAX; i++) {
			for (int j = 0; j < MAX; j++) {
				if (color[i][j] == NIL&&M[i][j] == '1') { dfs(i, j, c++); }
			}
		}
		//for (int i = 0; i < MAX; i++) {
		//	for (int j = 0; j < MAX; j++) {
		//		cout << i << " " << j << " " << color[i][j] << endl;
		//	}
		//}
		cout << c << endl;
	}
	return 0;
}
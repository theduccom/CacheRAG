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
# include <bitset>
# include <complex>
#include<limits.h>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include<cstdio>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = 1000000000;
const double PI = acos(-1);
char w[14][14] = {};
LL ans = 0;
void dfs(LL x, LL y) {
	w[x][y] = '0';
	if (x < 11)
		if(w[x+1][y]=='1')
		dfs(x + 1, y);
	if (y < 11)
		if (w[x][y+1] == '1')
		dfs(x, y + 1);
	if (x > 0)
		if (w[x - 1][y] == '1')
		dfs(x - 1, y);
	if (y > 0)
		if (w[x][y-1] == '1')
		dfs(x, y - 1);
}
int main() {
	while (cin >> w[0][0]) {
		ans = 0;
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++) {
				if(!(i==0&&j==0))
				cin >> w[i][j];
			}	
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++) {
				if (w[i][j] == '1') {
					ans++; dfs(i, j);
				}
			}
	
		cout << ans << endl;
	}
	return 0;
}
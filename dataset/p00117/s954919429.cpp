#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
const int INF = 1 << 12;
int main()
{
	int map[21][21];
	int n, m,a,b,c,d;
	int x, y, xx, yy;
	char s;
	cin >> n;
	cin >> m;
	for (int i = 0; i <= n; i++){
		for (int i2 = 0; i2 <= n; i2++){
			map[i][i2] = INF;
		}
	}
	
	for (int i = 0; i < m; i++){
		cin >> a >> s >> b >> s >> c >> s >> d;
		map[a][b] = c;
		map[b][a] = d;
	}
	for (int k = 0; k <= n; k++){
		for (int i = 0; i <= n; i++){
			for (int i2 = 0; i2 <= n; i2++){
				map[i][i2] = min(map[i][i2],map[i][k] + map[k][i2]);
			}
		}
	}
	cin >> x >> s >> y >> s >> xx >> s >> yy;
	int ans = xx - (yy + map[x][y] + map[y][x]);
	cout << ans << endl;
}
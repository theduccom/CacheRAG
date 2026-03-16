#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ld long double
#define forever while(true)
int vx[13] = { -3,-2,-1,0,0,0,0,0,0,0,1,2,3 };
int vy[13] = { 0,0,0,0,-3,-2,-1,1,2,3,0,0,0 };
char a[8][8];
int blow(int x, int y)
{
	a[x][y] = '0';
	rep(i, 13) {
		int nextx = x + vx[i];
		int nexty = y + vy[i];
		if (nextx < 0 || 8 <= nextx || nexty < 0 || 8 <= nexty) {
			continue;
		}
		if (a[nextx][nexty] == '1')
		{
			int u = blow(nextx, nexty);
		}
		a[nextx][nexty] = '0';
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	rep(i, n) {
		//string muda;
		//cin >> muda;

		rep(i1, 8) {
			rep(i2, 8) {
				cin >> a[i2][i1];
			}
		}
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		cout << "Data " << i + 1 << ":" << endl;
		int u = blow(x, y);
		for (int k = 0; k < 8; k++)
		{
			for (int j = 0; j < 8; j++) {
				cout << a[j][k];
			}
			cout << endl;
		}
	}
	return 0;
}

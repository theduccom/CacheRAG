#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
int w, h;

int check(int xs, int ys, int xg, int yg ,int c, int board[110][110]) {
	int used[110][110] = { 0 };
	queue<pl> q;
	q.push({ xs, ys });

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ddx = dx[i] + x;
			int ddy = dy[i] + y;
			if (ddx >= 1 && ddx <= w && ddy >= 1 && ddy <= h && !used[ddy][ddx]) {
				used[ddy][ddx] = 1;
				if (board[ddy][ddx] == c && ddy == yg && ddx == xg)return 1;
				else if (board[ddy][ddx] == c) {
					q.push({ddx,ddy});
				}
			}
		}
	}
	return 0;
}

int main()
{
	while (cin >> w >> h, w, h) 
	{
		int xs, ys, xg, yg;
		int n;
		int board[110][110] = { 0 };
		cin >> xs >> ys >> xg >> yg;
		cin >> n;
		for (int i = 0; i < n; i++)
		{ 
			int c,d, x, y;
			cin >> c >> d >> x >> y;
			if (!d){
				for (int i = y; i < y+2; i++) {
					for (int j = x; j < x+4; j++) 
						board[i][j] = c;
				}
			}
			else {
				for (int i = y; i < y+4; i++) {
					for (int j = x; j < x+2; j++)
						board[i][j] = c;
				}
			}
		}
		if (check(xs, ys, xg, yg, board[ys][xs], board))
			cout << "OK" << endl;
		else
			cout << "NG" << endl;
	}
	return 0;
}
#include <iostream>
#include <queue>
using namespace std;
struct P{int x, y; P(){} P(int x_,int y_):x(x_),y(y_){}};
int main()
{
	const int dx[12] = {0, 0, 0, -3, -2, -1, 1, 2, 3, 0, 0, 0},
			  dy[12] = {-3, -2, -1, 0, 0, 0, 0, 0, 0, 1, 2, 3};
	int n;
	P s;
	cin >> n;
	for (int k = 0; k < n; ++k)
	{
		char f[8][9] = {""};
		for (int i = 0; i < 8; ++i) cin >> f[i];
		cin >> s.x >> s.y;
		queue<P> q; q.push(s);
		while (!q.empty())
		{
			P w(q.front().x, q.front().y); q.pop();
			f[w.y-1][w.x-1] = '0';
			for (int i = 0; i < 12; ++i)
			{
				P t(w.x+dx[i], w.y+dy[i]);
				if (1 <= t.x && t.x <= 8 && 1 <= t.y && t.y <= 8 && f[t.y-1][t.x-1] == '1') q.push(t);
			}
		}
		cout << "Data " << k+1 << ":" << endl;
		for (int i = 0; i < 8; ++i) cout << f[i] << endl;
	}
	return 0;
}
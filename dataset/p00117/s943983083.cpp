# define _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <string>
# include <bitset>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <cstdio>
# include <cstring>
# include <cstdlib>
# include <iomanip>
# include <queue>
# include <sstream>
# include <climits>
# include <cmath>
# include <list>
# include <functional>
# include <string>
# include <ctime>
# include <set>
# include <map>
# include <stack>
using namespace std;
# define M_PI 3.141592
# define FOR(i,n) for(int i=0;i<(int)n;i++)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define toRad 2.0*M_PI/360.0
# define inin(x) int x;cin>>x;
# define all(x) x.begin(),x.end()
# define debug(x) cout<<#x<<" :"<<x<<endl;
# define rep(i,n) for(int i=0;i<(int)n;i++)
# define EPS 1e-12
# define CHECK(i,a) FOR(i,a.size())cout<<#a<<"["<<i<<"] : "<<a[i]<<endl; 

int main()
{
	int n, m;
	cin >> n >> m; cin.ignore();
	int a[21][21];
	memset(a, -1, sizeof a);
	for (int i = 0; i < m; i++)
	{
		int x, y, z, w;
		scanf("%d,%d,%d,%d", &x, &y, &z, &w);
		a[x][y] = z;
		a[y][x] = w;
	}
	int s, g, p, v;
	scanf("%d,%d,%d,%d", &s, &g, &p, &v);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				if (a[i][k] == -1 || a[k][j] == -1)continue;
				if (a[i][j] == -1)a[i][j] = a[i][k] + a[k][j];
				else a[i][j] = min(a[i][k] + a[k][j], a[i][j]);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				if (a[i][k] == -1 || a[k][j] == -1)continue;
				if (a[i][j] == -1)a[i][j] = a[i][k] + a[k][j];
				else a[i][j] = min(a[i][k] + a[k][j], a[i][j]);
			}
		}
	}
	cout << p - v - a[s][g] - a[g][s] << endl;
}
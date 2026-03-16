#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define MOD 1000000007
#define ALL(a) (a).begin(),(a).end()
#define pb(x) push_back(x)
#define ms(m,v) memset(m,v,sizeof(m))
#define D10  fixed<<setprecision(10) 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> P;
typedef long long ll;

int main()
{
	int n, m;
	while (cin >> n >> m, n)
	{
		int cost[105][105]; int time[105][105];
		REP(i, m)REP(j, m)
		{
			cost[i][j] = (i == j ? 0 : INF);
			time[i][j] = (i == j ? 0 : INF);
		}
		int a, b, c, d;
		REP(i, n)
		{
			cin >> a >> b >> c >> d;
			a--; b--;
			cost[a][b] = cost[b][a] = c;
			time[a][b] = time[b][a] = d;
		}
		int k; cin >> k;
		int p, q, r;
		REP(i, k)
		{
			cin >> p >> q >> r;
			p--; q--;
			int d[105];
			fill(d, d + m, INF);
			d[p] = 0;
			bool used[105] = {};
			while (1)
			{
				int v = -1;
				REP(i, m) if (!used[i] && (v == -1 || d[i] < d[v])) v = i;
				if (v == -1) break;
				used[v] = true;
				REP(i, m) d[i] = min(d[i], d[v] + (r ? time[v][i] : cost[v][i]));
			}

			cout << d[q] << endl;
		}
	}
	return 0;
}
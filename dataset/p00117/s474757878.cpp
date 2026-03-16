#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <queue>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<22

using namespace std;

typedef pair<int,int> P;

struct edge
{
	int to;
	int cost;
};

vector<edge> G[21];

vector<string> split(string &str,char delim)
{
	vector<string> res;
	size_t current = 0,found;
	while((found = str.find_first_of(delim,current)) != string::npos)
	{
		res.push_back(string(str,current,found  - current));
		current = found + 1;
	}
	res.push_back(string(str,current,str.size() - current));
	return res;
}

int dijkstra(int s,int g,int n)
{
	int d[20];
	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d+n,INF);
	d[s] = 0;
	que.push(P(0,s));
	while(!que.empty())
	{
		P p = que.top();
		que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		rep(i,G[v].size())
		{
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.cost)
			{
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}
	return d[g];
}

int main()
{
	int n,m,cost[21][21];
	rep(i,21)
	{
		rep(j,21)
		{
			cost[i][j] = INF;
		}
	}

	cin >> n >> m;
	rep(i,m)
	{
		string s;
		cin >> s;
		vector<string> _s = split(s,',');
		int a = atoi(_s[0].c_str());
		int b = atoi(_s[1].c_str());
		int c = atoi(_s[2].c_str());
		int d = atoi(_s[3].c_str());

		edge t,t2;
		t.to = a-1;
		t.cost = d;
		t2.to = b-1;
		t2.cost = c;
		G[b-1].push_back(t);
		G[a-1].push_back(t2);
	}

	string s;
	cin >> s;
	vector<string> _s = split(s,',');
	int x1 = atoi(_s[0].c_str());
	int x2 = atoi(_s[1].c_str());
	int y1 = atoi(_s[2].c_str());
	int y2 = atoi(_s[3].c_str());
	int ans = y1 - y2;
	ans -= dijkstra(x1-1,x2-1,n) + dijkstra(x2-1,x1-1,n);
	cout << ans << endl;

}

int main_Volume0117_a()
{
	int n,m,cost[21][21];
	rep(i,21)
	{
		rep(j,21)
		{
			cost[i][j] = 1000000;
		}
	}

	cin >> n >> m;

	rep(i,m)
	{
		string s;
		cin >> s;
		vector<string> _s = split(s,',');
		int a = atoi(_s[0].c_str());
		int b = atoi(_s[1].c_str());
		int c = atoi(_s[2].c_str());
		int d = atoi(_s[3].c_str());

		cost[a][b] = c;
		cost[b][a] = d;
	}


	REP(k,1,n+1)
	{
		REP(i,1,n+1)
		{
			REP(j,1,n+1)
			{
				cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
			}
		}
	}

	string s;
	cin >> s;
	vector<string> _s = split(s,',');
	int x1 = atoi(_s[0].c_str());
	int x2 = atoi(_s[1].c_str());
	int y1 = atoi(_s[2].c_str());
	int y2 = atoi(_s[3].c_str());

	int ans = y1 - y2;
	ans -= cost[x1][x2] + cost[x2][x1];

	cout << ans << endl;
	return 0;
}
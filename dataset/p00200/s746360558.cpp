#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<28

using namespace std;

typedef long long ll;
typedef pair<int,int> P;

struct edge
{
	int to;
	int cost;

	edge(int to,int cost) : to(to),cost(cost) {}
};

vector<edge> G[3001];
vector<edge> G2[3001];
ll d[3001];

void dijkstra(int s,int n,int type)
{
	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d+n,INF);
	d[s] = 0;
	que.push(P(0,s));

	while(!que.empty())
	{
		P p = que.top();
		que.pop();

		ll v = p.second;
		if(d[v] < p.first) continue;


		if(type == 0)
		{
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
		else
		{
			rep(i,G2[v].size())
			{
				edge e = G2[v][i];
				if(d[e.to] > d[v] + e.cost)
				{
					d[e.to] = d[v] + e.cost;
					que.push(P(d[e.to],e.to));
				}
			}
		}


	}
}

int main()
{
	int n,m;
	while(cin >> n >> m)
	{
		if(n == 0 && m == 0) break;

		rep(i,m)
		{
			G[i].clear();
			G2[i].clear();
		}

		rep(i,n)
		{
			int a,b,cost,time;
			cin >> a >> b >> cost >> time;
		
			a--;
			b--;

			G[a].push_back(edge(b,cost));
			G[b].push_back(edge(a,cost));

			G2[a].push_back(edge(b,time));
			G2[b].push_back(edge(a,time));
		}

		int k;
		cin >> k;

		rep(i,k)
		{
			int s,t,type;
			cin >> s >> t >> type;

			s--;
			t--;

			dijkstra(s,m,type);
			cout << d[t] << endl;
		}

	}
	return 0;
}
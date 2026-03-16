#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;
typedef pair<int, int> P;
static const int INF = 99999999;
struct SEdge
{
	int To;
	int Cost;
};
int V, E;
vector<int> d;
vector< vector<SEdge> > G;

void Dijkstra(int s)
{
	fill(d.begin(), d.end(), INF);
	d[s] = 0;
	priority_queue<P, vector<P>, greater<P> > PQue;
	PQue.push(P(0, s));
	while(!PQue.empty())
	{
		P p = PQue.top();
		PQue.pop();
		int v = p.second;
		if(d[v] < p.first)
		{
			continue;
		}
		for(int i = 0; i < G[v].size(); ++i)
		{
			SEdge e = G[v][i];
			if(d[e.To] > d[v] + e.Cost)
			{
				d[e.To] = d[v] + e.Cost;
				PQue.push(P(d[e.To], e.To));
			}
		}
	}
}

void solve()
{
	cin >> V >> E;
	d.resize(V);
	G.resize(V);
	for(int i = 0; i < E; ++i)
	{
		int From, To, Cost1, Cost2;
		scanf("%d,%d,%d,%d", &From, &To, &Cost1, &Cost2);
		--From;
		--To;
		SEdge e1, e2;
		e1.To = To;
		e2.To = From;
		e1.Cost = Cost1;
		e2.Cost = Cost2;
		G[From].push_back(e1);
		G[To].push_back(e2);
	}
	int sum = 0;
	int x[2], y[2];
	scanf("%d,%d,%d,%d", &x[0], &y[0], &x[1], &y[1]);
	--x[0];
	--y[0];
	Dijkstra(x[0]);
	sum += d[y[0]];
	Dijkstra(y[0]);
	sum += d[x[0]];
	cout << x[1] - y[1] - sum << endl;
}

int main()
{
	solve();
	return(0);
}
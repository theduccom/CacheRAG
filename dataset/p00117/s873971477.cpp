#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> P;

vector<P> way[32];
int def, poal;
int n;

int mini(int s, int g, int money, int spend = 0);

int main()
{
	int m;
	
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++){
		int a, b, c, d;
		
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		way[a].push_back(P(c, b));
		way[b].push_back(P(d, a));
	}
	int s, g;
	scanf("%d,%d,%d,%d", &s, &g, &def, &poal);
	
	printf("%d\n", mini(g, s, mini(s, g, def, poal)));
}

int mini(int s, int g, int money, int spend)
{
	priority_queue<P, vector<P>, greater<P> > q;
	int dijkstra[32];
	
	for (int i = 0; i <= n; i++) dijkstra[i] = 1000000000;
	q.push(P(0, s));
	dijkstra[s] = 0;
	while (!q.empty()){
		P p = q.top(); q.pop();
		
		if (dijkstra[p.second] < p.first) continue;
		for (int i = 0; i < way[p.second].size(); i++){
			P edge = way[p.second][i];
			
			if (dijkstra[edge.second] > dijkstra[p.second] + edge.first){
				dijkstra[edge.second] = dijkstra[p.second] + edge.first;
				q.push(P(dijkstra[edge.second], edge.second));
			}
		}
	}
	return money - dijkstra[g] - spend;
}
#include <cstdio>
#include <vector>
#include <map>
#include <queue>
using namespace std;
#define INF 100000000
#define fi first
#define sec second
typedef pair<int,int> P;

int n, m, ans;
int x1, x2, y1, y2;
char tsh;
vector<P> G[20];
int dis[20];

void dijkstra(int s){
	for(int i = 0; i < 20; i++) dis[i] = INF;
	priority_queue<P, vector<P>, greater<P> > que;
	dis[s] = 0;
	que.push(P(0,s));
	
	while(!que.empty()){
		P p = que.top(); que.pop();
		int v = p.second;
		for(int i = 0; i < G[v].size(); i++){
			if(dis[G[v][i].fi] > dis[v]+G[v][i].sec){
				dis[G[v][i].fi] = dis[v]+G[v][i].sec;
				que.push(P(dis[G[v][i].fi],G[v][i].fi));
			}
		}
	}
}

int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++){
		int a,b,c,d;
		scanf("%d%c%d%c%d%c%d",&a,&tsh,&b,&tsh,&c,&tsh,&d);
		a--; b--;
		G[a].push_back(P(b,c));
		G[b].push_back(P(a,d));
	}
	scanf("%d%c%d%c%d%c%d",&x1,&tsh,&x2,&tsh,&y1,&tsh,&y2);
	ans = y1-y2;
	x1--; x2--;
	dijkstra(x1);
	ans -= dis[x2];
	dijkstra(x2);
	ans -= dis[x1];
	printf("%d\n", ans);
}
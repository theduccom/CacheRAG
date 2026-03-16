#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

struct edge{int to,cost;};
typedef pair<int,int> P; //?????¢?????????

const int MAX_V=100000;
vector<vector<edge> > G;
int d[MAX_V];
const int INF=100000000; // 10^8
void dijkstra(int from){
	priority_queue<P,vector<P>,greater<P> > q;
	fill(d,d+G.size(),INF);
	d[from]=0;
	q.push(P(0,from));

	while(!q.empty()){
		P p=q.top(); q.pop();
		int v=p.second;
		if(d[v]<p.first) continue;
		
		for(int i=0;i<G[v].size();i++){
			edge e=G[v][i];
			if(d[e.to]>d[v]+e.cost){
				d[e.to]=d[v]+e.cost;
				q.push(P(d[e.to],e.to));
			}
		}
		
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	G.resize(n);
	for(int i=0;i<m;i++){
		int a,b,c,dd;
		scanf("%d,%d,%d,%d",&a,&b,&c,&dd);
		a--; b--;
		G[a].push_back(edge{b,c});
		G[b].push_back(edge{a,dd});
	}
	
	int a,b,c,dd;
	scanf("%d,%d,%d,%d",&a,&b,&c,&dd);	
	a--; b--;
	int res=c-dd;
	dijkstra(a);
	res-=d[b];
	dijkstra(b);
	res-=d[a];
	cout<<res<<endl;
	
	return 0;
}
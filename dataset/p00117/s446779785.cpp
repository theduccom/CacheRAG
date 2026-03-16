#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=1000000000000000010LL;
const int MAX=10000010;
const double EPS=1e-3;
int dx[4]={0,1,0,1};
int dy[4]={0,0,1,1};
struct edge{int to,cost;};
vector<edge> G[30];
int d[30];
void dijkstra(int s){
	fill(d,d+25,INF);
	priority_queue<P,vector<P>,greater<P>> q;
	q.push(P(0,s));
	d[s]=0;
	while(!q.empty()){
		P p=q.top();
		int v=p.second;
		q.pop();
		for(auto e:G[v]){
			if(d[e.to]>d[v]+e.cost){
				d[e.to]=d[v]+e.cost;
				q.push(P(d[e.to],e.to));
			}
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b,c,d;scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		a--;b--;
		G[a].push_back({b,c});
		G[b].push_back({a,d});
	}
	int s,g,v,p;
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);s--;g--;
	int ans=v-p;
	dijkstra(s);
	ans-=d[g];
	dijkstra(g);
	ans-=d[s];
	cout<<ans<<endl;
}


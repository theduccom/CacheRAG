#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
typedef pair<int,int> pii;
#define MAX_V 30
#define INF (1<<30)

struct edge{int to,cost;};
vector<edge> G[MAX_V],IN[MAX_V];
int d[MAX_V];
 
void dijkstra(int s,int V){
    priority_queue< pii,vector<pii>,greater<pii> > que;
    rep(i,V)d[i]=INF;
    d[s]=0;
    que.push(pii(0,s));
     
    while(que.size()){
        pii p=que.top();
        que.pop();
         
        int v=p.second;
        if(d[v]<p.first)continue;
         
        rep(i,G[v].size()){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(pii(d[e.to],e.to));
            }
        }
    }
}

int N,M;
int maze[100][100],tim[100][100];
int main(void){
	cin>>N>>M;
	while(M--){
		int a,b,c,f;
		scanf("%d,%d,%d,%d",&a,&b,&c,&f);
		edge e = {b,c},e1 = {a,f};
		IN[a].push_back( e);
		IN[b].push_back(e1);
	}

	int a,b,c,f;
	scanf("%d,%d,%d,%d",&a,&b,&c,&f);
	rep(i,N+1)G[i] = IN[i];
	dijkstra(a,N+1);
	int s = d[b];
	//cout<<d[b]<<endl;
	rep(i,N+1)G[i] = IN[i];

	dijkstra(b,N+1);
	s += d[a];
	//cout<<d[a]<<endl;
	cout<<c-f-s<<endl;

}
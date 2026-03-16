#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define INF 1e9
#define rep(i,n) for(int i=0;i<n;i++)
struct edge{int to,cost,time;};
typedef pair<int,int> P;

int V,E,d[1001],a,b,c,t,S,G,k,r;
edge e;
vector<edge> g[1001];

int main(){
	while(cin>>E>>V&&V){
		rep(i,V+1)g[i].clear();
		rep(i,E){
			cin>>a>>b>>c>>t;
			e.to=b;e.cost=c;e.time=t;
			g[a].push_back(e);
			e.to=a;
			g[b].push_back(e);
		}
		cin>>k;
		rep(h,k){
		cin>>S>>G>>r;
		priority_queue<P,vector<P>,greater<P> > q;
		fill(d,d+V+1,INF);
		d[S]=0;
		q.push(P(0,S));
		while(!q.empty()){
			P p=q.top();q.pop();
			int v=p.second;
			if(d[v]<p.first)continue;
			rep(i,g[v].size()){
				e=g[v][i];
				if(!r)if(d[e.to]>d[v]+e.cost){
					d[e.to]=d[v]+e.cost;
					q.push(P(d[e.to],e.to));
				}
				if(r)if(d[e.to]>d[v]+e.time){
					d[e.to]=d[v]+e.time;
					q.push(P(d[e.to],e.to));
				}
			}
		}
		if(d[G]<INF)cout<<d[G]<<endl;
		else cout<<"unreachable"<<endl;
		}
	}
}
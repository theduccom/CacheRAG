#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
struct edge{
	int to,cost;
	edge(int a,int b):to(a),cost(b){}
};
vector<edge>az[25];
int V;
int d[25];
void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> > que;
	que.push(mp(0,s));
	fill(d,d+(V+1),INF);
	d[s]=0;
	while(!que.empty()){
		P p=que.top(); que.pop();
		if(d[p.second]<p.first) continue;
		for(int y=0;y<az[p.second].size();y++){
			edge e=az[p.second][y];
			if(d[e.to]>d[p.second]+e.cost){
				d[e.to]=d[p.second]+e.cost;
				que.push(mp(d[e.to],e.to));
			}
		}
	}
}
int main(){
	int m;
	scanf("%d %d",&V,&m);
	for(int i=0;i<m;i++){
		int aa,bb,cc,dd;
		scanf("%d,%d,%d,%d",&aa,&bb,&cc,&dd);
		az[aa].pb(edge(bb,cc));
		az[bb].pb(edge(aa,dd));
	}
	int st,en,total,cut;
	scanf("%d,%d,%d,%d",&st,&en,&total,&cut);
	dijkstra(st);
	total-=d[en];
	dijkstra(en);
	total-=d[st];
	total-=cut;
	printf("%d\n",total);
}
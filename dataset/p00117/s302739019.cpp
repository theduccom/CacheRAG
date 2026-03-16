#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#define rep(i,n) for(int i = 0;i<(n);i++)
const int inf = 1001001001;
using namespace std;
typedef pair<int,int> P;

int N,M;
int X1,X2,Y1,Y2;
int mindist[22];
vector<pair<int,int> > G[22];

void dijkstra(int s){
	rep(i,22){
		mindist[i] = inf;
	}
	mindist[s]=0;
	priority_queue<P, vector<P>, greater<P> > Q;
	Q.push(P(0,s));
	while(!Q.empty()){
		P p = Q.top(); Q.pop();
		int v = p.second;
		if(mindist[v] < p.first) continue;
		for(int i = 0;i < G[v].size();i++){
			P e = G[v][i];
			if(mindist[e.first] > mindist[v] + e.second){
				mindist[e.first] = mindist[v] + e.second;
				Q.push(P(mindist[e.first],e.first));
			}
		}
	}
}

int main(){
	scanf("%d",&N);
	scanf("%d",&M);
	rep(i,M){
		int a,b,c,d;
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		G[a].push_back(P(b,c));
		G[b].push_back(P(a,d));
	}
	scanf("%d,%d,%d,%d",&X1,&X2,&Y1,&Y2);
	int cost = 0;
	dijkstra(X1);
	cost += mindist[X2];
	//cout << cost << endl;
	dijkstra(X2);
	cost += mindist[X1];
	//cout << cost << endl;
	cout << Y1 - cost - Y2 << endl;
}
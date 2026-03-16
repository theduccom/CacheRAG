#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<(b); i++)
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

typedef vector<vi> vii;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=100000000;
const double EPS=1e-10;
//int mod=1000000007




const int MAX_V = 10000;


struct edge{ int to, cost; };


int V;
vector<edge> G[MAX_V];
int d[MAX_V];


void dijkstra(int s){
	//greater<pii>????????????????????¨??§first????°???????????????????????????????????????????
	priority_queue<pii, vector<pii>, greater<pii> > que;
	fill(d, d + V, INF);
	d[s] = 0;
	que.push(pii(0, s));

	while(!que.empty()){
		pii p = que.top();
		que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0; i < G[v].size(); i++){
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(pii(d[e.to],e.to));
			}
		}
	}
}


int main(){
	int n, m;
	cin>>n>>m;
	V = m;
	int a[4];
	edge tmp;
	rep(i,m){
		scanf("%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3]);
		// for(int j=0; j<4; j++){
		// 	cout<<" "<<a[j];
		// }
		// cout<<endl;
		a[0]--;
		a[1]--;
		tmp.to = a[1];
		tmp.cost = a[2];
		G[a[0]].pb(tmp);
		tmp.to = a[0];
		tmp.cost = a[3];
		G[a[1]].pb(tmp);
	}
	int x1,x2,y1,y2;
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	int ans = y1 - y2;
	x1--;
	x2--;
	dijkstra(x1);
	ans-=d[x2];
	// for(int i = 0; i < n; i++){
	// 	cout<<i+1<<":"<<d[i]<<endl;
	// }
	dijkstra(x2);
	ans-=d[x1];
	cout<<ans<<endl;
}
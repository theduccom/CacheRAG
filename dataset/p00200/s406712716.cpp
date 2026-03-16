#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
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
 
#define REP(i,s,e)	for(ll i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)
#define REPE(i,s,e)	for(ll i=s; i>e; i--)
#define repe(i,n)	REPE(i,n,-1)
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<vi> vvi;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=100000000;
const double EPS=1e-10;
//int mod=1000000007


const int MAX_V = 200;

int d[MAX_V][MAX_V];
int e[MAX_V][MAX_V];
int V;
 
void warshall_floyd_init(){
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			if(i == j) d[i][i] = e[i][i] = 0;
			else d[i][j] = e[i][j] = INF;
		}
	}
}

void warshall_floyd() {
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				e[i][j] = min(e[i][j], e[i][k] + e[k][j]);
			}
		}
	}
}

int main(){
	int n,m;
	while(cin>>n>>m){
		if(n == 0 && m == 0) break;
		V = m;
		int a,b,cost,time;
		warshall_floyd_init();
		rep(i, n) {
			cin>>a>>b>>cost>>time;
			a--; b--;
			d[a][b] = d[b][a] = cost;
			e[a][b] = e[b][a] = time;
		}
		warshall_floyd();
		int k, c;
		cin>>k;
		for(int i = 0; i < k; i++){
			cin>>a>>b>>c;
			a--; b--;
			if(c == 0) cout<<d[a][b]<<endl;
			else cout<<e[a][b]<<endl;
		}
	}
	
}
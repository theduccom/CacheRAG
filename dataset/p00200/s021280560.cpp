#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max)) 

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int n,m;
VI A,B;
VII C(2);

int dijkstra(int s,int g,int mode){
	VI dist(m + 1,INT_MAX);
	priority_queue<PII,vector<PII >,greater<PII > > que;
	que.push(mp(0,s));
	dist[s] = 0;
	while(!que.empty()){
		int d = que.top().first, u = que.top().second;
		que.pop();
		if(dist[u] < d) continue;
		rep(i,n){
			if(u == A[i] && dist[u] + C[mode][i] < dist[B[i]]){
				dist[B[i]] = dist[u] + C[mode][i];
				que.push(mp(dist[B[i]],B[i]));
			}
			if(u == B[i] && dist[u] + C[mode][i] < dist[A[i]]){
				dist[A[i]] = dist[u] + C[mode][i];
				que.push(mp(dist[A[i]],A[i]));
			}
		}
	}
	return dist[g];
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while(1){
		A.clear();
		B.clear();
		C[0].clear();
		C[1].clear();
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		
		rep(i,n){
			int a,b,c,t;
			cin >> a >> b >> c >> t;
			A.pb(a);
			B.pb(b);
			C[0].pb(c);
			C[1].pb(t);
		}
		int k;
		cin >> k;
		rep(i,k){
			int s,g,mode;
			cin >> s >> g >> mode;
			int ans = dijkstra(s,g,mode);
			cout << ans << endl;
		}
	}
	return 0;
}
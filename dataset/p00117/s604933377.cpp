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

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int n,m,ans;
	char ch;
	cin >> n >> m;
	VI A(m),B(m),C(m),D(m),cost(n + 1,INT_MAX);
	rep(i,m)
		cin >> A[i] >> ch >> B[i] >> ch >> C[i] >> ch >> D[i];
	int x1,x2,y1,y2;
	cin >> x1 >> ch >> x2 >> ch >> y1 >> ch >> y2;
	priority_queue< PII, vector< PII >,greater< PII > > que;
	que.push(mp(0,x1));
	cost[x1] = 0;
	while(!que.empty()){
		int d = que.top().first,u = que.top().second;
		que.pop();
		if(cost[u] < d) continue;
		rep(i,m){
			if(u == A[i] && cost[u] + C[i] < cost[B[i]]){
				cost[B[i]] = cost[u] + C[i];
				que.push(mp(cost[B[i]],B[i]));
			}
			if(u == B[i] && cost[u] + D[i] < cost[A[i]]){
				cost[A[i]] = cost[u] + D[i];
				que.push(mp(cost[A[i]],A[i]));
			}
		}
	}
	ans = cost[x2];
	rep(i,n + 1){
		cost[i] = INT_MAX;
	}
	que.push(mp(0,x2));
	cost[x2] = 0;
	while(!que.empty()){
		int d = que.top().first,u = que.top().second;
		que.pop();
		if(cost[u] < d) continue;
		rep(i,m){
			if(u == A[i] && cost[u] + C[i] < cost[B[i]]){
				cost[B[i]] = cost[u] + C[i];
				que.push(mp(cost[B[i]],B[i]));
			}
			if(u == B[i] && cost[u] + D[i] < cost[A[i]]){
				cost[A[i]] = cost[u] + D[i];
				que.push(mp(cost[A[i]],A[i]));
			}
		}
	}
	ans += cost[x1];
	ans = y1 - y2 - ans;
	cout << ans << endl;
	return 0;
}
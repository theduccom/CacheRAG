#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stack>
#include <queue>
#include <utility>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int c[101][101];
int t[101][101];//d[u][v]??????e=(u,v)????????????(?????¨???????????´??????INF,??????d[i][i]=0??¨??????)
int V;//????????°
const int INF=10000000;

void warshall_floyd(){
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
				t[i][j]=min(t[i][j],t[i][k]+t[k][j]);
			}
		}
	}
}

int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		V=m;
		if(n+m==0) break;
		rep(i,0,V){
			rep(j,0,V){
				if(i==j){
					c[i][j]=0;
					t[i][j]=0;
				}else{
					c[i][j]=INF;
					t[i][j]=INF;
				}
			}
		}
		int a,b,cost,time;
		rep(i,0,n){
			cin>>a>>b>>cost>>time;
			a--; b--;
			c[a][b]=cost;
			c[b][a]=cost;
			t[a][b]=time;
			t[b][a]=time;
		}
		warshall_floyd();
		int kazu,p,q,r;
		cin>>kazu;
		rep(i,0,kazu){
			cin>>p>>q>>r;
			p--; q--;
			o((r==0?c[p][q]:t[p][q]));
		}
	}
}
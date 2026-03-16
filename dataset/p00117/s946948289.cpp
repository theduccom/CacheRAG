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

int d[20][20];//d[u][v]??????e=(u,v)????????????(?????¨???????????´??????INF,??????d[i][i]=0??¨??????)
int V;//????????°

void warshall_floyd(){
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}

int main(){
	cin>>V;
	rep(i,0,20){
		rep(j,0,20){
			if(i==j) d[i][j]=0;
			else d[i][j]=1000000000;
		}
	}
	int m;
	cin>>m;
	int a,b,c,d1;
	rep(i,0,m){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d1);
		a--; b--;
		d[a][b]=c;
		d[b][a]=d1;
	}
	int x1,x2,y1,y2,MIN;
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	warshall_floyd();
	int ans=y1-y2-d[x1-1][x2-1]-d[x2-1][x1-1];
	o(ans);
}
#include <iostream>
#include <algorithm>
#define rep(i,j) FOR(i,0,j)
#define FOR(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int d[2][100][100];
int main(){
	int n,m;
	while(cin>>n>>m,n,m){
		rep(i,101)rep(j,101)rep(k,2)d[k][i][j]=99999999;
		int a,b,c,t;
		rep(i,n){
			cin>>a>>b>>c>>t;
			a--;b--;
			d[0][a][b]=d[0][b][a]=c;
			d[1][a][b]=d[1][b][a]=t;
		}
		rep(k,m)rep(i,m)rep(j,m)rep(l,2)d[l][i][j]=min(d[l][i][j],d[l][i][k]+d[l][k][j]);
		int k,p,q,r;
		cin>>k;
		rep(i,k){
			cin>>p>>q>>r;
			p--;q--;
			cout<<d[r][p][q]<<endl;
		}
	}
	return 0;
}
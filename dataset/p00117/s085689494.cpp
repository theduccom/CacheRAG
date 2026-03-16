#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> >cost(n,vector<int>(n));
	rep(i,n)rep(j,n)cost[i][j]=inf;
	int a,b,c,e;char x;
	rep(i,m){
		cin>>a>>x>>b>>x>>c>>x>>e;
		a--;b--;
		cost[a][b]=c;
		cost[b][a]=e;
	}
	cin>>a>>x>>b>>x>>c>>x>>e;
	a--;b--;
	vector<bool>used(n);
	vector<int>d(n,inf);
	d[a]=0;
	while(1){
		int v=-1;
		rep(i,n)if(!used[i]&&(v==-1||d[v]>d[i]))v=i;
		if(v==-1)break;
		used[v]=true;
		rep(i,n)d[i]=min(d[i],d[v]+cost[v][i]);
	}
	c-=d[b];
	rep(i,n){used[i]=false;d[i]=inf;}
	d[b]=0;
	while(1){
		int v=-1;
		rep(i,n)if(!used[i]&&(v==-1||d[v]>d[i]))v=i;
		if(v==-1)break;
		used[v]=true;
		rep(i,n)d[i]=min(d[i],d[v]+cost[v][i]);
	}
	c-=d[a];
	cout<<c-e<<endl;
	
}
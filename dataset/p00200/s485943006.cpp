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
typedef vector<vi> vvi;
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m,n+m){
		vvi cost(m,vi(m));
		vvi cost2(m,vi(m));
		rep(i,m)rep(j,m)cost[i][j]=cost2[i][j]=inf;
		rep(i,n){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			a--;b--;
			cost[a][b]=cost[b][a]=c;
			cost2[a][b]=cost2[b][a]=d;
		}
		int a;
		cin>>a;
		while(a--){
			int b,c,q;
			cin>>b>>c>>q;
			b--;c--;
			vi d(m);
			vi used(m);
			rep(i,m)d[i]=inf;
			d[b]=0;
			if(!q){
				while(1){
					int v=-1;
					rep(i,m)if(!used[i]&&(v==-1||d[i]<d[v]))v=i;
					if(v==-1)break;
					used[v]=true;
					rep(i,m)d[i]=min(d[i],d[v]+cost[v][i]);
				}
				cout<<d[c]<<endl;
			}else{
				while(1){
					int v=-1;
					rep(i,m)if(!used[i]&&(v==-1||d[i]<d[v]))v=i;
					if(v==-1)break;
					used[v]=true;
					rep(i,m)d[i]=min(d[i],d[v]+cost2[v][i]);
				}
				cout<<d[c]<<endl;
			}
		}
	}
}
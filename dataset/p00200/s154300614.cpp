#include<iostream>
#include<set>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 1e8
using namespace std;
int n,m,k,a,b,c,alt,p,q,r;
long long cost[101][101],tm[101][101],d[101];
bool used[101];

void dfunc(int s,int r){
	rep(i,101){
		used[i]=true;
		d[i]=INF;
	}
	d[s]=0;
	while(1){
		int mem=INF,now=-1;
		rep(i,101){
			if(used[i] && mem>d[i]){
				now=i;
				mem=d[i];
			}
		}
		if(now==-1)break;
		used[now]=false;
		rep(i,101){
			if(r==0){
				if(cost[now][i]!=INF)d[i]=min(d[i],d[now]+cost[now][i]);
			}else{
				if(tm[now][i]!=INF)d[i]=min(d[i],d[now]+tm[now][i]);
			}
		}
	}
}

int main(){
	while(cin>>n>>m,n||m){
		rep(i,101)rep(j,101){
			cost[i][j]=INF;
			tm[i][j]=INF;
		}
		rep(i,n){
			cin>>a>>b>>c>>alt;
			a--;
			b--;
			cost[b][a]=cost[a][b]=c;
			tm[b][a]=tm[a][b]=alt;
		}
		cin>>k;
		rep(i,k){
			cin>>p>>q>>r;
			dfunc(p-1,r);
			cout<<d[q-1]<<endl;
		}
	}
	return 0;
}
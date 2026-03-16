#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 1e9
using namespace std;
typedef long long ll;

ll min(ll a,ll b){
	if(a>b)return b;
	else return a;
}


int main(){
	int n,m,a,b,cost,time,l,p,q,r;
	while(cin>>n>>m,n||m){
		ll mt[m][m],mc[m][m];
		rep(i,m)rep(j,m)mt[i][j]=mc[i][j]=INF;
		rep(i,n){
			cin>>a>>b>>cost>>time;
			mt[a-1][b-1]=mt[b-1][a-1]=time;
			mc[a-1][b-1]=mc[b-1][a-1]=cost;
		}
		rep(k,m){
			rep(i,m){
				rep(j,m){
					mt[i][j]=min(mt[i][j],mt[i][k]+mt[k][j]);
					mc[i][j]=min(mc[i][j],mc[i][k]+mc[k][j]);
				}
			}
		}
		cin>>l;
		rep(i,l){
			cin>>p>>q>>r;
			if(r==0)cout<<mc[p-1][q-1]<<endl;
			else cout<<mt[p-1][q-1]<<endl;
		}
	}
	return 0;
}
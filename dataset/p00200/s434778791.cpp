#include<iostream>
#include<queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
using namespace std;
int main(){
	int n,m,k,p,q,r ,a,b,cost,time;
	while(cin>>n>>m,n){
		int c[m][m],t[m][m];
		rep(i,m)rep(j,m)c[i][j]=t[i][j]=INF;
		rep(i,n)cin>>a>>b>>cost>>time,a--,b--,
		c[a][b]=c[b][a]=cost,t[a][b]=t[b][a]=time;
		cin>>k; rep(i,k){
			cin>>p>>q>>r,p--,q--;
			if(r){
				int T[m]; rep(j,m)T[j]=INF;
				queue<int> F; T[p]=0; F.push(p);
				while(!F.empty()){
					int cur=F.front(); F.pop();
					rep(j,m)if(t[cur][j]&&T[j]>T[cur]+t[cur][j])
					F.push(j),T[j]=T[cur]+t[cur][j];
				}
				cout<<T[q]<<endl;
			}else{
				int C[m]; rep(j,m)C[j]=INF;
				queue<int> F; C[p]=0; F.push(p);
				while(!F.empty()){
					int cur=F.front(); F.pop();
					rep(j,m)if(c[cur][j]&&C[j]>C[cur]+c[cur][j])
					F.push(j),C[j]=C[cur]+c[cur][j];
				}
				cout<<C[q]<<endl;
			}
		}
	}
	return 0;
}
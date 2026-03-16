#include<bits/stdc++.h>
#define INF 1e9
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m,n,m){
		int cost[114][514];
		int time[114][514];
		for(int i=0;i<=m;i++)
		for(int j=0;j<=m;j++)cost[i][j]=INF,time[i][j]=INF;
		
		for(int i=0;i<n;i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			cost[a-1][b-1]=c;
			cost[b-1][a-1]=c;
			time[a-1][b-1]=d;
			time[b-1][a-1]=d;
			}
			
		for(int k=0;k<m;k++)
		for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]),time[i][j]=min(time[i][j],time[i][k]+time[k][j]);	
		
		int e;
		cin>>e;
		for(int i=0;i<e;i++){
			int p,q,r;
			cin>>p>>q>>r;
			if(r==0){
				cout<<cost[p-1][q-1]<<endl;
				}
			else cout<<time[p-1][q-1]<<endl;	
			}
		}
		return 0;
	}
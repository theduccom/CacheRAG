#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int cost[21][21];
	int n,m;
	char com;
	cin>>n>>m;
	for(int i=0;i<21;i++){
		for(int j=0;j<21;j++){
			cost[i][j]=1<<27;
		}
	}
	for(int i=0;i<m;i++){
		int a,b,c,d;
		cin>>a>>com>>b>>com>>c>>com>>d;
		cost[a][b]=c;cost[b][a]=d;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
			}
		}
	}
	int x1,x2,y1,y2;
	cin>>x1>>com>>x2>>com>>y1>>com>>y2;
	cout<<y1-y2-cost[x1][x2]-cost[x2][x1]<<endl;
}
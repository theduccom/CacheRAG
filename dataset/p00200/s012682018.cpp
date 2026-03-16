#include<iostream>

using namespace std;

int main(){
	int cost[101][101];
	int tims[101][101];
	
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0){
			break;
		}
		for(int i=0;i<101;i++){
			for(int j=0;j<101;j++){
				cost[i][j]=tims[i][j]=210000000;
			}
		}
		
		for(int i=0;i<n;i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			cost[a][b]=cost[b][a]=c;
			tims[a][b]=tims[b][a]=d;
		}
		
				for(int k=1;k<=m;k++){
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
					cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
					tims[i][j]=min(tims[i][j],tims[i][k]+tims[k][j]);
				}
			}
		}
		
		int l;
		cin>>l;
		for(int i=0;i<l;i++){
			int a,b,c;
			cin>>a>>b>>c;
			if(c==0){
				printf("%d\n",cost[a][b]);
			}else{
				
				printf("%d\n",tims[a][b]);
			}
		}
	}
}
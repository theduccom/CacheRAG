#include<cstdio>
#include<algorithm>

using namespace std;

int main(void){
	int floy[101][101][2];
	while(1){
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0&&m==0){
			break;
		}
			
		for(int b=0;b<2;b++){
			for(int i=0;i<=m;i++){
				for(int j=0;j<=m;j++){
					floy[i][j][b]=1<<29;
				}
			}
		}
		
		for(int i=0;i<n;i++){
			int a,b,cost,time;
			scanf("%d%d%d%d",&a,&b,&cost,&time);
			floy[a][b][0]=cost;
			floy[b][a][0]=cost;
			floy[a][b][1]=time;
			floy[b][a][1]=time;
		}
		
		for(int b=0;b<2;b++){
			for(int k=1;k<=m;k++){
				for(int i=1;i<=m;i++){
					for(int j=1;j<=m;j++){
							floy[i][j][b]=min(floy[i][j][b],floy[i][k][b]+floy[k][j][b]);
					}
				}
			}
		}
		
		
		int kazu;
		scanf("%d",&kazu);
		
		for(int i=0;i<kazu;i++){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			printf("%d\n",floy[a][b][c]);
		}
	}
}
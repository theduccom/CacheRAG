#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#define M 100
using namespace std;
int main(void)
{
	int n,i,j,k,a[41],b[41],c[41],d[41],m,min,kaku,cnt,F[100],ex;
	int x,y,x2,y2;
	int date[41][41];
	int cost[41],flg[41],cost1[41];
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(i=1;i<=m;i++) {
		scanf("%d,%d,%d,%d",&a[i],&b[i],&c[i],&d[i]);//?????????
	}
	
	scanf("%d,%d,%d,%d",&x,&y,&x2,&y2);//?????????
	
	for(i=1;i<=n;i++) {
		cost[i]=M;
		flg[i]=0;
	}
	
	
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			date[i][j]=M;
		}
	}
	
	for(i=1;i<=m;i++) {
		date[a[i]][b[i]]=c[i];
		date[b[i]][a[i]]=d[i];
	}
	
	for(i=1;i<=n;i++) date[i][i]=0;
	
	cost[x]=0;
	for(i=1;i<=n;i++) {
		min=M;
		for(j=1;j<=n;j++) F[i]=0;
		for(j=1;j<=n;j++) {
			if(flg[j]==0 && cost[j]<min) {
				kaku=j;
				min=cost[j];
			}
		}
		
		flg[kaku]=1;
		
		for(j=1;j<=n;j++) {
			if((cost[kaku]+date[kaku][j])<cost[j]) cost[j]=cost[kaku]+date[kaku][j];
		}
		
	}
//	for(i=1;i<=n;i++) printf("%d<-%d - %d\n",x,i,cost[i]);
	
//	printf("\n");
	//??°??????
	for(i=1;i<=n;i++) {
		cost1[i]=M;
		flg[i]=0;
	}
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			date[i][j]=M;
		}
	}
	
	for(i=1;i<=m;i++) {
		date[a[i]][b[i]]=c[i];
		date[b[i]][a[i]]=d[i];
	}
	
	for(i=1;i<=n;i++) date[i][i]=0;
	
	cost1[y]=0;
	for(i=1;i<=n;i++) {
		min=M;
		for(j=1;j<=n;j++) F[i]=0;
		for(j=1;j<=n;j++) {
			if(flg[j]==0 && cost1[j]<min) {
				kaku=j;
				min=cost1[j];
			}
		}
		
		flg[kaku]=1;
		
		for(j=1;j<=n;j++) {
			if((cost1[kaku]+date[kaku][j])<cost1[j]) cost1[j]=cost1[kaku]+date[kaku][j];
		}
	}
//	for(i=1;i<=n;i++) printf("%d<-%d - %d\n",y,i,cost1[i]);
	/**/
/*	printf("       ");
	for(i=1;i<=n;i++) printf("%4d ",i);
	printf("\n");
	printf("\n");
	for(i=1;i<=n;i++) {
		printf("%4d   ",i);
		for(j=1;j<=n;j++) {
			printf("%4d ",date[i][j]);
		}
		printf("\n");
	}*/
	/**/
	x2=x2-y2-cost[y]-cost1[x];
	printf("%d\n",x2);
	return 0;
}
	
	
	
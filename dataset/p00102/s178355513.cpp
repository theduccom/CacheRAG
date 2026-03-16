#include<stdio.h>
int d[10][10];
int t[10][10];
int n;
int i,j;
int res;

int main(){
	while(1){
	scanf("%d",&n);
	if(n==0)return 0;
	for(i=0;i<n;i++)for(j=0;j<n;j++){
		scanf("%d",&d[i][j]);
		t[i][j]=0;
	}
	for(i=0;i<n;i++){
		res=0;
		for(j=0;j<n;j++){
			res+=d[i][j];
			printf("%5d",d[i][j]);
		}
		printf("%5d\n",res);
	}
	for(i=0;i<n;i++){
		res=0;
		for(j=0;j<n;j++){
			res+=d[j][i];
		}
		printf("%5d",res);
	}
	res=0;
	for(i=0;i<n;i++)for(j=0;j<n;j++){
		res+=d[i][j];
	}
	printf("%5d\n",res);
	}
}

		
#include<stdio.h>
#include<memory.h>
int main(){
	int n;
	int i,j,a[110][110]={0};
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				scanf("%d",&a[i][j]);
				a[i][n+1]+=a[i][j];
				a[n+1][j]+=a[i][j];
			}
		}
		for(j=1;j<=n;j++){
			a[n+1][n+1]+=a[n+1][j];
		}
		for(i=1;i<=n+1;i++){
			for(j=1;j<=n+1;j++){
				printf("%5d",a[i][j]);
			}
			printf("\n");
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
	int i,j,n,a[101][101];
	while(scanf("%d",&n)==1&&n){
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				a[i][n] += a[i][j];
				a[n][j] += a[i][j];
				a[n][n] += a[i][j];
			}
		}
		for(i=0;i<=n;i++){
			for(j=0;j<=n;j++){
				printf("%5d",a[i][j]);
			}
			puts("");
		}
	}
	return 0;
}
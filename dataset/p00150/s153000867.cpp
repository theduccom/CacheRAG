#include<stdio.h>
int flg[10001];
int main(void){
	int n,i,j;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=2;i<=n;i++){
			if(flg[i]==0){
				for(j=i+i;j<=n;j+=i){
					flg[j]=1;
				}
			}
		}
		for(i=n;i>0;i--){
			if(flg[i]==0&&flg[i-2]==0){
				printf("%d %d\n",i-2,i);
				break;
			}
		}
	}
	return 0;
}
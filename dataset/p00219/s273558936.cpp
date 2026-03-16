#include<stdio.h>
int main(void)
{
	int n,c,x[11],i,j;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<10;i++) x[i]=0;
		for(i=0;i<n;i++){
			scanf("%d",&c);
			x[c]++;
		}
		for(i=0;i<10;i++){
			if(x[i]==0) printf("-\n");
			else{
				for(j=0;j<x[i];j++) printf("*");
				printf("\n");
			}
		}
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int n,a,c[10],i,k,h;
	scanf("%d",&n);
	while(n!=0){
		for(i=0;i<10;i++)  c[i]=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			c[a]++;
		}
		for(i=0;i<10;i++){
			if(c[i]==0)  printf("-\n");
			else{
				for(k=c[i];k>0;k--){
					printf("*");
				}
				printf("\n");
			}
		}
		scanf("%d",&n);
	}
	return 0;
}
#include<stdio.h>

int main(void)
{
	int ice[10],n,i,u,j;
	while(1){
		scanf("%d",&n);
		if(n==0)break;//終了条件
		for(i=0;i<10;i++) 
			ice[i]=0;
		
		for(i=0;i<n;i++){
			scanf("%d",&u);
			ice[u]++;
		}
		for(i=0;i<10;i++){
			if(ice[i]==0) printf("-\n");
			else {
				for(j=0;j<ice[i]-1;j++)
					printf("*");

				printf("*\n");
			}
		}
	}
	return 0;
}
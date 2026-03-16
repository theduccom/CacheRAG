#include<cstdio>
#include<algorithm>
int main(void)
{
	int n,uri,aic[10],i,j;
	scanf("%d",&n);
	while(n!=0){
		for(i=0;i<10;i++)	aic[i]=0;
		for(i=0;i<n;i++){
			scanf("%d",&uri);
			aic[uri]++;
		}
		for(i=0;i<10;i++){
			if(aic[i]==0)
				printf("-\n");
			else{
				for(j=0;j<aic[i];j++){
					printf("*");
				}
				printf("\n");
			}
		}
		scanf("%d",&n);
	}
	return 0;
}
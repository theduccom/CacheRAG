#include<stdio.h>
int main()
{
	int n,i,l[16],j;
	while(scanf("%d",&n)!=EOF){
		j=0;
		for(i=1024;i>0;i/=2){
			if(i<=n){
				l[j]=i;
				n-=i;
				j++;
			}
		}
		for(i=j-1;i>=0;i--){
			printf("%d",l[i]);
			if(i==0){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
	return 0;
}
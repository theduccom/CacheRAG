#include<stdio.h>
int main(void)
{
	int n,i;
	int p,d1,d2;
	int sum;
	int max,m;
	scanf("%d",&n);
	while(n!=0){
		max=0;
		m=0;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&p,&d1,&d2);
			sum=d1+d2;
			if(max<sum){
				max=sum;
				m=p;
			}
		}
		printf("%d %d\n",m,max);
		scanf("%d",&n);
	}
	return 0;
}
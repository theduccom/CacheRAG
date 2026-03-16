#include<stdio.h>
int main(void)
{
	int n,p,d1,d2,max,s,i;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		max=0;
		for(i=0;i<n;i++){
			scanf("%d%d%d",&p,&d1,&d2);
			if(max<d1+d2){
				max=d1+d2;
				s=p;
			}
		}
		printf("%d %d\n",s,max);
	}
	return 0;
}
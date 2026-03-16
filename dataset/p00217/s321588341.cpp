#include<stdio.h>
int main(void)
{
	int i,n,p,d1,d2,ps,d,max;
	max=-1;
	scanf("%d",&n);
	while(!(n==0)){
		p=0;
		d1=0;
		d2=0;
		max=-1;
		for(i=1;i<=n;i++){
			scanf("%d %d %d",&p,&d1,&d2);
			d=d1+d2;
			if(max<d){
				max=d;
				ps=p;
			}
		}
		printf("%d %d\n",ps,max);
		scanf("%d",&n);
	}
	return 0;
}
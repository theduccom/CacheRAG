#include<stdio.h>
int main(void)
{
	int i,p[10000],d1,d2,d[10000],xp,max,n;
	while(1){
		max=-1;
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&p[i],&d1,&d2);
			d[i]=d1+d2;
		}
		for(i=0;i<n;i++){
			if(max<d[i]){
				max=d[i];
				xp=p[i];
			}
		}
		printf("%d %d\n",xp,max);
	}
	return 0;
}
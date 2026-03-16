#include<stdio.h>
int main(void)
{
	int n,e,p,q,x[4001],X[1001],cnt,i;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		cnt=0;
		for(i=0;i<=4000;i++) x[i]=0;
		for(i=0;i<n;i++){
			scanf("%d%d%d",&e,&p,&q);
			if(x[e]>=1000000) x[e]=-1;
			if(x[e]!=-1){
				x[e]+=p*q;
			}
			if(x[e]>=1000000){
				cnt++;
				X[cnt]=e;
			}
		}
		if(cnt>0){
			for(i=1;i<=cnt;i++){
				printf("%d\n",X[i]);
			}
		}
		else printf("NA\n");
	}
	return 0;
}
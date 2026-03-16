#include<stdio.h>
int main()
{
	int n,p,d1,d2,i,m,a;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		m=0;
		for(i=0;i<n;i++){
			scanf("%d%d%d",&p,&d1,&d2);
			if(d1+d2>m){
				a=p;
				m=d1+d2;
			}
		}
		printf("%d %d\n",a,m);
	}
	return 0;
}
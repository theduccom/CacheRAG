#include<stdio.h>
int main(void){
	int n,d1,d2,i,a,b,c,p;
	while(1){
		b=0;
	scanf("%d",&n);
	if(n==0){
		break;
	}
	for(i=1;i<=n;i++){
		scanf("%d%d%d",&p,&d1,&d2);
		a=d1+d2;
		if(b<a){
			b=a;
			c=p;
		}
	}
	
	printf("%d %d\n",c,b);
	}
	return 0;

}
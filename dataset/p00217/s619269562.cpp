#include<stdio.h>
int main(void)
{
	int n,d1,d2,i,x,p,y;
	scanf("%d",&n);
	while(n!=0){
		x=0;  y=0;
		for(i=0;i<n;i++){
		scanf("%d %d %d",&p,&d1,&d2);
			if(y<d1+d2){
				x=p;  y=d1+d2;
			}
		}
		printf("%d %d\n",x,y);
		scanf("%d",&n);
	}
	return 0;
}
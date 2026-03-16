#include<stdio.h>
int main(void)
{
	int n,sum,x,m,i;
	while(1){
		sum=1150;
		scanf("%d",&n);
		if(n<0)break;
		m=n;
		if(m>10){
			for(i=0;i<10;i++){
				if(n-10==0)break;
				sum+=125;
				n-=1;
			}
		}
		if(m>20){
			for(i=0;i<10;i++){
				if(n-10==0)break;
				sum+=140;
				n-=1;
			}
		}
		if(m>30){
			m=n;
			for(i=0;i<m-10;i++){
				if(n-10==0)break;
				sum+=160;
				n-=1;
			}
		}
		x=4280-sum;
		printf("%d\n",x);
	}
	return 0;
}
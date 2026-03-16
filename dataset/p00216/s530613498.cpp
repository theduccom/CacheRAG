#include<stdio.h>
int main(void)
{
	int sum,n,c,i;
	while(1){
		sum=1150;
		scanf("%d",&n);
		if(n<0)break;
		c=n-10;
		if(n>10){
			for(i=0;i<10;i++){
				if(c==0)break;
				sum+=125;
				c-=1;
			}
		}
		if(n>20){
			for(i=0;i<10;i++){
				if(c==0)break;
				sum+=140;
				c-=1;
			}
		}
		if(n>30){
			while(1){
				if(c==0)break;
				sum+=160;
				c-=1;
			}
		}
		printf("%d\n",4280-sum);
	}
	return 0;
}
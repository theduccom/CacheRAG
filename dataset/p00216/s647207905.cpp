#include<stdio.h>
int main(void)
{
	int n,x;
	while (1){
		scanf("%d",&n);
		if(n==-1) break;
		if(n<=10) printf("3130\n");
		if(n>10&&n<20){
			x=n-10;
			printf("%d\n",4280-(x*125+1150));
		}
		if(n>20&&n<30){
			x=n-20;
			printf("%d\n",4280-(x*140+2400));
		}
		if(n>30){
			x=n-30;
			printf("%d\n",4280-(x*160+3800));
		}
		if(n==20) printf("1880\n");
		if(n==30) printf("480\n");
	}
	return 0;
}	
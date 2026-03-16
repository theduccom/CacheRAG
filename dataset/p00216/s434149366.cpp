#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n!=-1){
		if(n<=10){
			printf("%d\n",4280-1150);
		}
		else if(n<=20){
			printf("%d\n",4280-(1150+125*(n-10)));
		}
		else if(n<=30){
			printf("%d\n",4280-(1150+1250+140*(n-20)));
		}
		else {
			printf("%d\n",4280-(1150+1250+1400+160*(n-30)));
		}
		scanf("%d",&n);
	}
	return 0;
}
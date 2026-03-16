#include<stdio.h>
int main(void)
{
	int a,d;
	scanf("%d",&d);
		while(d!=-1){
			if(10>d){
				printf("%d\n",4280-1150);
			}
			if(10<=d && 20>d){
				printf("%d\n",4280-(1150+(d-10)*125));
			}
			if(20<=d && 30>d){
				printf("%d\n",4280-(1150+10*125+(d-20)*140));
			}
			if(30<=d){
				printf("%d\n",4280-(1150+10*125+10*140+(d-30)*160));
			}
		scanf("%d",&d);
		}
	return 0;
}
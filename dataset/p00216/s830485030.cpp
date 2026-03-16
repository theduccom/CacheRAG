#include<stdio.h>
int main()
{
	int n,r;
	while(1){
		scanf("%d",&n);
		if(n==-1){
			break;
		}else if(n<10){
			r=1150;
		}else if(n<20){
			r=1150+125*(n-10);
		}else if(n<30){
			r=2400+140*(n-20);
		}else{
			r=3800+160*(n-30);
		}
		printf("%d\n",4280-r);
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,s,d,f,g,h,i,j;
	scanf("%d",&a);
	while(a!=-1){
		s=4280-1150;
		if(a>10&&a<=20){
			s=4280-((a-10)*125+1150);
		}
		if(a>20&&a<=30){
			s=4280-((a-20)*140+1250+1150);
		}
		if(a>30){
			s=4280-((a-30)*160+1250+1400+1150);
		}
		printf("%d\n",s);
		scanf("%d",&a);
	}
	return 0;
}
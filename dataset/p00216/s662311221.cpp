#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int a,s,d,f,g,h,j,i;
	while(1){
		scanf("%d",&a);
		if(a==-1) break;
		if(a<10) s=1150;
		else if(a<20) s=1150+(a%10)*125;
		else if(a<30) s=1150+1250+(a%10)*140;
		else s=1150+1250+1400+(a-30)*160;
		printf("%d\n",4280-s);
	}
	return 0;
}
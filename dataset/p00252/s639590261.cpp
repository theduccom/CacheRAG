#include<stdio.h>
int main(void)
{
	int b1,b2,b3;
	scanf("%d %d %d",&b1,&b2,&b3);
	if((b1==1&&b2==0&&b3==0)||(b1==0&&b2==1&&b3==0)||(b1==0&&b2==0&&b3==0)){
		printf("Close\n");
	}
	else{
		printf("Open\n");
	}
	return 0;
}
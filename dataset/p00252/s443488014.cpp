#include<stdio.h>
int main(void)
{
	int a,b,c,o=0;
	scanf("%d %d %d",&a,&b,&c);
	o=a*100+b*10+c;
	if(o==100||o==10||o==0)
	printf("Close\n");
	if(o==110||o==1)
	printf("Open\n");
	return 0;
}
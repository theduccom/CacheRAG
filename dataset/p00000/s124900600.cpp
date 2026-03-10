#include<stdio.h>
int main(void)
{
	int i,j,x;
	for(i=1;i<=9;i++)	{
		for(j=1;j<=9;j++)	{
			x=i*j;
			printf("%dx%d=%d\n",i,j,x);
		}
	}
	return 0;
}

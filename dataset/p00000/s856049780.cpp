#include<stdio.h>

int main(void)
{
	int i,i2,a;
	for(i=1;i<=9;i++)
	{
		for(i2=1;i2<=9;i2++)
		{
			a=i*i2;
			printf("%dx%d=%d\n",i,i2,a);
		}
	}
	return 0;
}
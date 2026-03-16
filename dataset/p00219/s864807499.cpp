#include<stdio.h>
int main()
{
	int n,x;
	while(scanf("%d",&n),n)
	{
		int a[10]={0};
		while(n--)scanf("%d",&x),++a[x];
		for(n=0;n<10;++n)
		{
			if(a[n])while(a[n]--)putchar('*');
			else putchar('-');
			puts("");
		}
	}
	return 0;
}
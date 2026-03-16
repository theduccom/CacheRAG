#include<stdio.h>
int main()
{
	const int MASK = 0x10000000;
	unsigned n, i;
	while(scanf("%u", &n) == 1)
	{
		for(i = 1; i < 0x400; i<<=1)
		{
			if(n&i)
			{
				if(n&MASK)
					printf(" %d", i);
				else
					printf("%d", i), n|=MASK;
			}
		}
		putchar('\n');
	}
	return 0;
}
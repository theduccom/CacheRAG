#include <stdio.h>

int main()
{
	for(int i = 1; i <= 9; i++)
	{
		for(int ii = 1; ii <= 9; ii++)
		{
			printf("%dx%d=%d\n",i,ii,i * ii);
		}
	}
	return 0;
}
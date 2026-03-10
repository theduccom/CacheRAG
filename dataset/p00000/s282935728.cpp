#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
int main()
{
	int i,j;
	for(i = 1 ; i <= 9 ; i++)
	{
		for(j = 1 ;j <= 9 ; j++)
		{
			printf("%dx%d=%d\n",i , j ,i * j);	
		}
	}
	return 0;
}
#include <stdio.h>
 

int main()
{ 
	int i,j;
	char s,t;
	s='x';
	t='=';
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
		printf("%d%c%d%c%d\n",i,s,j,t,i*j);
		}
	}
	 	return 0;
}
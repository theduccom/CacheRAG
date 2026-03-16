#include<stdio.h>

int main()
{
	int m[10],v1,v2;

	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&m[0],&m[1],&m[2],&m[3],&m[4],&m[5],&m[6],&m[7],&m[8],&m[9],&v1,&v2)!=EOF)
	{
		int max=0;
		for(int x=0;x<10;x++)
		{
			max+=m[x];
		}

		double half;
		half=max*v1/(v1+v2);

		for(int x=0;x<10;x++)
		{
			if(half>m[x])
			{
				half-=m[x];
			}
			else if(half<=m[x])
			{
				
				printf("%d\n",(x+1));
				x=10;
			}
		}
	}
}
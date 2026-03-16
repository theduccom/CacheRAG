#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int l[11];
	int v1,v2,i,n;
	double tmp,tmp2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&l[10],&v1,&v2) != EOF)
	{
		n=0;
		for(i=1;i<=10;i++)
		{
			n += l[i];
		}
		tmp = (double)n/(v1+v2);
		tmp2 = (double)v1*tmp;
		n = 0;
		for(i=1;i<=10;i++)
		{
			n += l[i];
			if(n>=tmp2)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
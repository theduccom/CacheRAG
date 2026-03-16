#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g=0,max=0;
	while(scanf("%d",&a),a!=0)
	{
		for(e=0;e<a;e++)
		{
			scanf("%d %d %d",&b,&c,&d);
			f=c+d;
			if(max<f)
			{
				max=f;
				g=b;
			}
		}
		printf("%d %d\n",g,max);
		max=0;
	}
	return 0;
}
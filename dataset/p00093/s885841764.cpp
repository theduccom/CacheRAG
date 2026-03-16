#include<stdio.h>
int main()
{
	int a,b,c,i,d=0;
	while(scanf("%d%d",&a,&b),a)
	{
		if(d++) putchar('\n');
		for(c=0,i=a;i<=b;++i)
		{
			if(i%400 == 0 || (i%100 && (i&3)==0))
				printf("%d\n",i),++c;
		}
		if(!c)
			puts("NA");
	}
	return 0;
}
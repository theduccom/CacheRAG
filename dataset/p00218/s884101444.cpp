#include<stdio.h>
int main()
{
	int n,a,b,c,d,e;
	while(scanf("%d",&n),n)
	{
		while(n--)
		{
			scanf("%d%d%d",&a,&b,&c);
			d=(a+b+c)/3;
			e=(a+b)/2;
			if(a>99||b>99||c>99||e>89||d>79)puts("A");
			else if(d>69||d>49&&(a>79||b>79))puts("B");
			else puts("C");
		}
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int f,l,n=0;
	for(;scanf("%s",c)!=EOF;)
	{
		f=0,l=strlen(c)-1;
		do
			if(c[f]!=c[l])
				break;
		while(f++<=l--);
		if(f>l)
			n++;
	}
	printf("%d\n",n);
	return 0;
}
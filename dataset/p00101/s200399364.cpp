#include<stdio.h>
#include<string.h>
int main()
{
	char str[1024],*p;
	int n;
	
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		fgets(str,1024,stdin);
		p = str;
		for(;;)
		{
			p = strstr(p,"Hoshino");
			if(!p)
				break;
			p[6] = 'a';
			p += 7;
		}
		printf("%s", str);
	}
	return 0;
}
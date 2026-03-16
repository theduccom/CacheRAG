#include<cstdio>

char boul='A';

int main()
{
	char a,b;
	while(scanf("%c,%c",&a,&b)!=EOF)
	{
		if(a==boul)boul=b;
		else if(b==boul)boul=a;
		getchar();
	}

	printf("%c\n",boul);
	return 0;
}
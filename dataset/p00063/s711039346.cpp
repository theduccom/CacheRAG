#include<cstdio>

int answer=0;
char str[200];

int main()
{
	while(scanf("%s",str)!=EOF)
	{
		int len;
		for(int i=0;i<200;i++)
		{
			if(str[i]=='\0')
			{
				len=i-1;
				break;
			}
		}
		bool b=true;
		for(int i=0;i<len;i++)
		{
			if(str[i]!=str[len-i])b=false;
		}
		if(b==true)answer++;
	}
	printf("%d\n",answer);
}
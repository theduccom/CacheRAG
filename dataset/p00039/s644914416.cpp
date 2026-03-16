#include<cstdio>
#include<algorithm>

using namespace std;

char date[105];
int ndate[105];

int main()
{
	while(scanf("%s",date)!=EOF)
	{
		for(int i=0;i<105;i++)
		{
			if(date[i]=='I')ndate[i]=1;
			if(date[i]=='V')ndate[i]=5;
			if(date[i]=='X')ndate[i]=10;
			if(date[i]=='L')ndate[i]=50;
			if(date[i]=='C')ndate[i]=100;
			if(date[i]=='D')ndate[i]=500;
			if(date[i]=='M')ndate[i]=1000;
		}
		int answer=0;
		for(int i=104;i>0;i--)
		{
			if(ndate[i]>ndate[i-1])
			{
				answer-=ndate[i-1];
			}
			else if(ndate[i]==0)
			{
				answer+=ndate[i-1];
			}
			else
			{
				answer+=ndate[i-1];
			}
		}
		printf("%d\n",answer);
		fill(date,date+105,'\0');
		fill(ndate,ndate+105,0);
	}
}
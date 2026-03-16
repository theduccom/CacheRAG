#include<cstdio>
#include<algorithm>

using namespace std;

bool S[60000]={true};

void set()
{
	fill(S,S+60000,true);
	for(int i=2;i<60000;i++)
	{
		if(S[i]==true)
		{
			for(int j=2;j*i<60000;j++)
			{
				S[j*i]=false;
			}
		}
	}
}

int main()
{
	int n;
	set();
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=n-1;true;i--)
		{
			if(S[i])
			{
				printf("%d ",i);
				break;
			}
		}
		for(int i=n+1;true;i++)
		{
			if(S[i])
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}
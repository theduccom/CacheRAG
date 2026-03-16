#include<cstdio>
#include<algorithm>

using namespace std;

bool p[500000];
int s[100000];

void set()
{
	fill(p,p+500000,true);
	p[0]=false;
	p[1]=false;
	for(int i=2;i<500000;i++)
	{
		for(int j=2;j*i<500000;j++)
		{
			p[i*j]=false;
		}
	}
	int count=0;
	for(int i=0;i<500000;i++)
	{
		if(p[i])
		{
			s[count]=i;
			count++;
		}
	}
}

int main()
{
	set();
	while(true)
	{
		int n;
		int ans=0;
		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			ans+=s[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}
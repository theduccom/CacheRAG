#include<cstdio>
#include<algorithm>

using namespace std;

int roop(int j)
{
	int ans=1;
	for(int i=0;i<j;i++)
	{
		ans*=10;
	}
	return ans;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	int date[8];
	long long int max=0,min=0;
		char c[10];
		scanf("%s",c);
		for(int j=0;j<8;j++)
		{
			date[j]=c[j]-'0';
		}
		sort(date,date+8);
		for(int i=0;i<8;i++)
		{
			min+=date[i]*roop(7-i);
			max+=date[7-i]*roop(7-i);
		}
		printf("%ld\n",max-min);
	}
	return 0;
}
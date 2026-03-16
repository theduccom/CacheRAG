#include<iostream>

using namespace std;

bool sosu(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return false;
	}
	return true;
}

int main(void)
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)break;
		int ans;
		ans=0;
		int i,j;
		for(i=0,j=2;i<n;j++)
		{
			if(sosu(j))
			{
				ans+=j;
				i++;
			}
		}
		cout<<ans<<endl;
	}
}
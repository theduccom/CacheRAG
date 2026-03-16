#include<iostream>

using namespace std;

int a[50001];

int main(void)
{
	a[0]=a[1]=1;
	for(int i=2;i<=50000;i++)
	{
		for(int j=i+i;j<=50000;j+=i)
		{
			a[j]=1;
		}
	}
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)break;
		int ans=0;
		for(int i=2;i<=n/2;i++)
		{
			if(a[i]==0&&a[n-i]==0)
				ans++;
		}
		cout<<ans<<endl;
	}
}
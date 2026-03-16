#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;
int n,x;
bool isp[1<<20];
main()
{
	isp[0]=isp[1]=1;
	for(int i=2;i<1<<20;i++)
	{
		if(isp[i])continue;
		for(int j=i+i;j<1<<20;j+=i)isp[j]=1;
	}
	while(cin>>n>>x,x)
	{
		bitset<1000001>dp;
		dp[0]=1;
		for(int i=0;i<n;i++)
		{
			int v;cin>>v;
			for(int j=0;(v<<j)<=x;j++)dp|=dp<<(v<<j);
		}
		bool f=1;
		for(int i=x;i>0;i--)
		{
			if(!dp[i])continue;
			if(!isp[i])
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f)cout<<"NA"<<endl;
	}
}


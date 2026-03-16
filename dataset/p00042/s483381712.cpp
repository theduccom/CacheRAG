#include<iostream>
#include<algorithm>
#include<ios>
using namespace std;
int W,n,w,v;
int dp[1001];
int cnt;
main()
{
	while(cin>>W,W)
	{
		cnt++;
		cin>>n;
		for(int i=0;i<=W;i++)dp[i]=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d,%d",&v,&w);
			for(int i=W;i>=w;i--)dp[i]=max(dp[i],dp[i-w]+v);
		}
		while(W>0&&dp[W]==dp[W-1])W--;
		cout<<"Case "<<cnt<<":\n"<<dp[W]<<"\n"<<W<<"\n";
	}
}


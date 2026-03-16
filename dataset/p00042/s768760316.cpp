#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
#include<set>
#include<map>
#include<sstream>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
const ll MOD=1000000007;
int n,w;
int t;
int main()
{
	t=1;
	while(cin>>w,w)
	{
		int dp[1001][1001]={0};
		cin>>n;
		vector<P> num(n);
		for(int i=0;i<n;i++)
		{
		 	char tt;
		 	int x,y;
		 	cin>>x>>tt>>y;
		 	num[i].first=x;
		 	num[i].second=y;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=w;j++)
			{
				if(num[i].second-j<=0)dp[i+1][j]=max(dp[i][j],dp[i][j-num[i].second]+num[i].first);
				else dp[i+1][j]=dp[i][j];
			}
		}
		cout<<"Case "<<t<<":"<<endl;;
		t++;
		int mmax=0;
		int ans;
		for(int i=w;i>=0;i--)
		{
			if(mmax<=dp[n][i])
			{
				mmax=dp[n][i];
				ans=i;
			}
		}
		cout<<mmax<<endl;
		cout<<ans<<endl;
	}
	return 0;
}
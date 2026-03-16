#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

const int maxw = 1001;
const int maxn = 1001;
const int maxp = 10001;

int dp[maxn][maxw]={};
int w[maxn] = {};
int p[maxn] = {};
int W,N;

int main()
{
	int casenum = 0;
	
	while(cin >> W)
	{
		if(W==0)break;
		casenum++;
		cout << "Case " << casenum << ":" << endl;
		cin >> N;
		char t;
		rep(i,N) cin>>p[i] >> t >> w[i];

		memset(dp,0,sizeof(dp));
		rep(i,N)rep(j,W+1)
		{
			if(j-w[i]>=0) dp[i+1][j] = max(dp[i][j],dp[i][j-w[i]] + p[i]);
			else dp[i+1][j] = dp[i][j];
		}
		int ansp = 0,answ = 0;
		for(int j=W;j!=0;j--)if(ansp<= dp[N][j])
		{
			ansp = dp[N][j];
			answ = j;
		}
		
		cout << ansp << endl;
		cout << answ << endl;
	}
	return 0;
}
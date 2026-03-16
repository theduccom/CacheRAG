#include <iostream>
using namespace std;

int main()
{
	int N,W,T=0;
	while(cin>>W, W)
	{
		cin >> N;
		int dp[1024]={0};

		int v,w; char c;
		for(int i=0; i<N; i++)
		{
			cin>>v>>c>>w;
			for(int j=W-w; j>=0; j--)
			{
				dp[j+w] = max(dp[j+w], dp[j]+v);
			}
		}

		int mi=W;
		for(int i=W; i>=0; i--)
		{
			if(dp[i]!=dp[mi])
			{
				cout << "Case " << ++T << ":\n";
				cout << dp[mi] << "\n" << mi << "\n";
				break;
			}
			mi=i;
		}
	}
}
#include <iostream>
using namespace std;

int main()
{
	int W,N,c=1;
	char ch;
	while (cin >> W, W)
	{
		cin >> N;
		int a[N], w[N];
		for (int i=0; i<N; i++)
			cin >> a[i] >> ch >> w[i];

		int dp[W+1];
		for (int i=0; i<=W; i++)
			dp[i] = -1;

		dp[0] = 0;
		for (int i=0; i<N; i++)
		for (int k=W; k>=0; k--)
			if (dp[k] >= 0 && k+w[i] <= W)
				dp[k+w[i]] = max(dp[k]+a[i], dp[k+w[i]]);

		int MAX = 0;

		for (int i=1; i<=W; i++)
			if (dp[MAX] < dp[i])
				MAX = i;

		cout << "Case " << c++ << ':' << endl;
		cout << dp[MAX] << endl;
		cout << MAX << endl;
	}
}
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

typedef long long int64;

int main()
{
	int time = 1;

	while(true) {
	
		int w, n;
		int value[1000], weight[1000];
		
		scanf("%d", &w);
		if(w == 0)
			break;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i)
			scanf("%d,%d", value + i, weight + i);
			
		static int dp[1001][1001] = {0};
		
		for(int a = 1; a <= n; ++a) {
		
			int tw = weight[a - 1];
			int tv = value[a - 1];
			
			for(int b = 0; b <= w; ++b)
				dp[a][b] = dp[a - 1][b];
			
			for(int b = tw; b <= w; ++b)
				dp[a][b] = max(dp[a - 1][b - tw] + tv, dp[a][b]);
		}
		
		int ansv = dp[n][w];
		int answ = w;
		
		while(answ > 0) {
		
			if(dp[n][answ] == dp[n][answ - 1])
				answ -= 1;
			else
				break;
		}
		
		printf("Case %d:\n%d\n%d\n", time++, ansv, answ);
	}
	
	return 0;
}
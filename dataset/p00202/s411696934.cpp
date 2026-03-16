#include <cstdio>
#include <cstring>

using namespace std;

bool prime(int x)
{
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) return (false);
	return (x != 1);
}

int main()
{
	int n, x;
	static bool dp[1000001];
	
	while (scanf("%d %d", &n, &x) && n){
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int i = 0; i < n; i++){
			int y;
			scanf("%d", &y);
			for (int r = 0; r + y <= x; r++){
				if (dp[r]) dp[r + y] = true;
			}
		}
		
		bool ng = true;
		for (int i = x; i >= 2; i--){
			if (dp[i] && prime(i)){
				printf("%d\n", i);
				ng = false;
				break;
			}
		}
		if (ng) printf("NA\n");
	}
	return (0);
}
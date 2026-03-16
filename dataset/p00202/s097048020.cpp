#include <cstdio>
#include <cstring>
using namespace std;

bool prime[2000000];
bool dp[2000000];

int main()
{
	int n, x;
	
	prime[0] = true;
	for (int i = 2; i < 2000000; i++){
		prime[i] = true;
	}
	
	for (int i = 2; i * i < 2000000; i++){
		for (int j = i * i; j < 2000000; j += i){
			prime[j] = false;
		}
	}
	
	while (scanf("%d %d", &n, &x), n + x){
		memset(dp, 0, sizeof(dp));
		dp[0] = true;
		
		for (int i = 0; i < n; i++){
			int yen;
			scanf("%d", &yen);
			for (int i = 0; i <= 1000000; i++){
				if (dp[i]){
					dp[i + yen] = true;
				}
			}
		}
		
		for (int i = x; i >= 0; i--){
			if (dp[i] && prime[i]){
				if (i == 0){
					printf("NA\n");
				}
				else {
					printf("%d\n", i);
				}
				break;
			}
		}
	}
	
	return 0;
}
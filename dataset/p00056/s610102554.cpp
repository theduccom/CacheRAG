#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int prime[50000];
char flag[50001];

int getPrime()
{
	
	flag[0] = flag[1] = 0;
	
	memset(flag, 1, sizeof(flag));
	for (int i = 2; i < 50001; i++){
		if (flag[i] == 1){
			for (int j = 2; i * j < 50001; j++){
				flag[i * j] = 0;
			}
		}
	}
	int cnt = 0;
	for (int i = 2; i < 50001; i++){
		if (flag[i] == 1){
			prime[cnt++] = i;
		}
	}
	
	return (cnt);
}

int main(void)
{
	int primeCount;
	
	primeCount = getPrime();
	
	while (1){
		int n;
		int ans;
		
		scanf("%d", &n);
		
		if (n == 0){
			break;
		}
		
		ans = 0;
		for (int i = 0; prime[i] <= n / 2; i++){
			if (binary_search(prime, prime + primeCount, n - prime[i]) == true){
				ans++;
			}
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}
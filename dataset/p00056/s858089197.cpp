#include <cstdio>
using namespace std;

bool prime[50010];
int ans[50010];

int main(){
	for(int i = 2; i <= 50000; ++i){
		prime[i] = true;
	}
	for(int i = 2; i < 300; ++i){
		if(prime[i]){
			for(int j = i * i; j <= 50000; j += i){
				prime[j] = false;
			}
		}
	}

	int n;
	while(scanf("%d", &n), n){
		int c = 0;
		for(int i = 2; i * 2 <= n; ++i){
			if(prime[i] && prime[n-i]) ++c;
		}
		printf("%d\n", c);
	}
}
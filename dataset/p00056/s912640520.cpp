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
	
	for(int i = 2; i <= 25000; ++i){
		if(prime[i]){
			for(int j = i; j + i <= 50000; ++j){
				if(prime[j]){
					++ans[i + j];
				}
			}
		}
	}

	int n;
	while(scanf("%d", &n), n){
		printf("%d\n", ans[n]);
	}
}
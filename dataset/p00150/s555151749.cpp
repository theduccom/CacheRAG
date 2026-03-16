#include <cstdio>
#include <math.h>

int main(){
	bool prime[10001];
	int n, p1, q1;
	for(int i = 0; i < 10001; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i = 2; i < sqrt(10001); i++){
		if(prime[i]){
			
			for(int j = 2; j * i < 10001; j++){
				prime[j*i] = false;
			}
		}
	}
	
	while(scanf("%d", &n) != EOF){
		if(n == 0) break;
		for(int i = n; i > 0; i--){
			if(prime[i] && prime[i-2]){
				p1 = i-2;
				q1 = i;
				break;
			}
		}
		
		printf("%d %d\n", p1, q1);
	}
	
	return 0;
}
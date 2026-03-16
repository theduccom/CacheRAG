#include <cstdio>
#include <vector>
using namespace std;

#define SIZE 50000

int main(){
	int n, res;
	bool prime[SIZE + 1];
	fill(prime, prime + SIZE + 1, true);
	
	prime[1] = false;
	for(int i = 2; i <= SIZE; i++){
		if(prime[i]){
			for(int j = i * 2; j <= SIZE; j += i){
				prime[j] = false;
			}
		}
	}
	
	while(true){
		scanf("%d", &n);
		if(n == 0) break;
		
		res = 0;
		for(int i = 1; i <= n / 2; i++){
			if(prime[i] && prime[n - i]) res++;
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}
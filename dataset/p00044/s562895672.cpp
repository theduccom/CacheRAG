#include<cstdio>

using namespace std;

bool prime[100001];

void prime_checker(){
	for(int i = 3; i < 100000; i+=2){
		if(prime[i]){
			for(int j = i*2; j < 100000; j+=i){
				prime[j] = false;
			}
		}
	}
}

int main(void){
	
	int n;
	
	for(int i = 3; i < 100001; i+=2){
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	prime[2] = true;
	
	prime_checker();
	
	while(scanf("%d", &n) != EOF){
		
		for(int i = n-1; i >= 0; i--){
			if(prime[i]){
				printf("%d ",i);
				break;
			}
		}
		for(int i = n+1 ;; i++){
			if(prime[i]){
				printf("%d\n",i);
				break;
			}
		}
	}
	
	return 0;
}
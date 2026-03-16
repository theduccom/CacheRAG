#include<cstdio>

using namespace std;

bool prime[500000];

void check(){
	for(int i = 3; i < 400000; i+=2){
		if(prime[i]){
			for(int j = i*2; j< 400000; j+=i){
				prime[j] = false;
			}
		}
	}
}

int main(void){
	int n;
	
	for(int i = 3; i < 400000; i+=2){
		prime[i] = true;
	}
	prime[2] = true;
	
	check();
	
	while(scanf("%d", &n)  && n != 0 ){
		int c = 0;
		int ans = 0;
		for(int i = 0; c < n; i++){
			if(prime[i]){
				ans += i;
				c++;
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
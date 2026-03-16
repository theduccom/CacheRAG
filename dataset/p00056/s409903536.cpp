#include<cstdio>

int main(){
	int f[50000] = {1,1};
	for(int i = 2; i < 25000; i++){
		f[i * 2] = 1;
	}
	for(int i = 3; i <= 224; i += 2){
		for(int j = 3; j * i < 50000; j += 2){
			f[i*j] = 1;
		}
	}

	int n;
	scanf("%d", &n);
	while(n){
		int count = 0;
		for(int i = 2; i * 2 <= n; i++){
			if(!f[i] && !f[n-i]){
				count++;
			}
		}
		printf("%d\n", count);
		scanf("%d", &n);
	}

}
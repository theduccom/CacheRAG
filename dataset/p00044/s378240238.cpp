#include<cstdio>


int main(){
	int n, t;
	int f[50101] = {};

	for(int i = 2; i < 25051; i++){
		f[i * 2] = 1;
	}

	for(int i = 3; i <= 224; i += 2){
		for(int j = 3; j * i <= 50100; j += 2){
			f[i * j] = 1;
		}		
	}

	while(scanf("%d", &n) + 1){
		t = n - 1;
		while(f[t]){
			t--;
		}
		printf("%d ", t);
		t = n + 1;
		while(f[t]){
			t++;
		}
		printf("%d\n", t);
	}
	return 0;
}
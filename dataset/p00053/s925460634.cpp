#include<cstdio>

int main(){
	int f[104730] = {1,1};
	int a[10001] = {};
	int n = 0,t = 1;
	for(int i = 2; i < 52365; i++){
		f[i * 2] = 1;
	}
	for(int i = 3; i <= 324; i += 2){
		for(int j = 3; j * i < 104730; j += 2){
			f[i*j] = 1;
		}
	}

	for(int i = 1; i < 10001; i++){
		while(t){
			n++;
			t = f[n];
		}
		a[i] = a[i-1] + n;
		t = 1;
	}
	
	scanf("%d", &n);
	while(n){
		printf("%d\n", a[n]);
		scanf("%d", &n);
	}	
}
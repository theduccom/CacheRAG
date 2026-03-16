#include<cstdio>

int main(){
	int n = 0, sum = 0, v = 0;
	int a, b;
	while(1 + scanf("%d,%d", &a, &b)){
		sum += a * b;
		v += b;
		if(a == 0){
			break;
		}
		n++;
	}
	int t = v % n;
	if(2 * t / n){
		printf("%d\n%d\n", sum, v / n + 1 );
	}else{
		printf("%d\n%d\n", sum, v / n);
	}
}
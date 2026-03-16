#include <stdio.h>
#include <math.h>

int isprime(int);

int main(){
	int n,i;
	while(scanf("%d",&n) != EOF){
		for(i = 1;;i++) if(isprime(n - i)) {
			printf("%d ",n - i);
			break;
		}
		for(i = 1;;i++) if(isprime(n + i)) {
			printf("%d\n",n + i);
			break;
		}
	}
	return 0;
}

int isprime(int num){
	int i;
	for(i = 2;i <= (int)sqrt((double)num);i++){
		if(num % i == 0) return 0;
	}
	return 1;
}
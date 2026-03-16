#include <stdio.h>

int main(){
	int n,a;

	while(1){
		scanf("%d", &n);
		if(n==0) break;
		a = 0;
		while(n /= 5) a += n;
		
		printf("%d\n", a);
	}
	
	return 0;
}
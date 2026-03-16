#include <cstdio>

int n;

int main(){
	while(scanf("%d",&n), n != 0){
		int c = 0;
		while(n >= 5){
			n /=5;
			c += n;
		}
		printf("%d\n",c);
	}
	return 0;
}


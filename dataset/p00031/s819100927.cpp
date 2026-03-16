#include<cstdio>

int main(){
	int m, t;
	while(scanf("%d", &m) + 1){
		t = 1;
		bool f = 0;
		while(1024 - t){
			if(m & t){
				if(f){
					printf(" ");
				}
				printf("%d", t);
				f = 1;
			}
			t *= 2;
		}
		printf("\n");
	}
	return 0;
}
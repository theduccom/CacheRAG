#include <cstdio>

int main(){
	int n;
	while(scanf("%d", &n), n){
		int p[10] = {0}, t;
		for(;n;n--)
			scanf("%d", &t), p[t]++;

		for(t=0;t<10;t++){
			if(p[t])
				for(n=p[t];n;n--)
					printf("*");
			else printf("-");
			puts("");
		}
	}
}
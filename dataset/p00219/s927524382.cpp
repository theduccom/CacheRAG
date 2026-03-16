#include <cstdio>

int n,ice[10];

int main(){
	while(scanf("%d", &n),n){
		for(int i = 0; i < 10; i++) ice[i] = 0;
		for(int i = 0; i < n; i++){
			int x; scanf("%d", &x);
			ice[x]++;
		}
		for(int i = 0; i < 10; i++){
			if(ice[i] == 0) printf("-\n");
			else{
				for(int j = 0; j < ice[i]; j++) printf("*");
				printf("\n");
			}
		}
	}
}
#include<cstdio>

int main(){
	int t;
	while(scanf("%d", &t) + 1){
		int a[14] = {};
		int b[5] = {};
		a[t]++;
		for(int i = 0; i < 4; i++){
			scanf(",%d", &t);
			a[t]++;
		}
		t = 0;
		for(int i = 1; i < 14; i++){
			if(a[i]){
				t++;
			}else{
				t = 0;
			}

			b[a[i]]++;
			if(t == 5){
				printf("straight\n");
				break;
			}
		}
		if(t == 4 && a[1]){
			printf("straight\n");
		}else{
			if(b[4]){
				printf("four card\n");
			}else if(b[3]){
				if(b[2]){
					printf("full house\n");
				}else{
					printf("three card\n");
				}
			}else if(b[2]){
				if(b[2] -1){
					printf("two pair\n");
				}else{
					printf("one pair\n");
				}
			}else{
				if(t != 5){
					printf("null\n");
				}
			}
		}
	}
}
#include <stdio.h>

int a[2000000];

int main(){
	int n;
	for(int i = 0; i < 2000000; i++){
		a[i] = 1;
	}
	for(int i = 2; i < 2000000; i++){
		if(a[i]){
			for(int j = i * 2;j < 2000000; j = j + i){
					a[j] = 0;
			}
		}
	}

	while(scanf("%d",&n) != EOF){
		for(int i = n - 1; i > 1; i--){
			if(a[i]){
				printf("%d ",i);
				break;
			}
		}
		for(int i = n + 1; i < 2000000; i++){
			if(a[i]){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
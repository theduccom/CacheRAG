#include <stdio.h>

#define MYSCAN scanf

int main(void){
	int n, v;
	int ice[10] = { 0 };

	while (true){

		MYSCAN("%d", &n);
		if (n == 0){ break; }
		for (int i = 0; i < n; i++){
			MYSCAN("%d", &v);
			ice[v]++;
		}
		for (int i = 0; i < 10; i++){
			if (ice[i] == 0){
				printf("-\n");
			}
			else{
				for (int j = 0; j < ice[i]; j++){
					printf("*");
				}
				printf("\n");
				ice[i] = 0;
			}
		}

	}	
	return 0;
}
#include <stdio.h>
int main(){

	int b[3];
	int i;
	for ( i = 0; i < 3; i++){
		scanf("%d", &b[i]);
	}

	if (b[2] == 1)
		printf("Open\n");
	else if (b[0] == 1){
		if (b[1] == 1)
			printf("Open\n");
		else
			printf("Close\n");
	}
	else
		printf("Close\n");
}
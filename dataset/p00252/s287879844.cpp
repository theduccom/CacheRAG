#include <stdio.h>

int main(){

	int  a=0,b=0,c=0;
	
	scanf("%d%d%d", &a, &b, &c);

	if (c == 1 || a == 1 && b == 1){
		printf("Open\n");
	}
	else{
		printf("Close\n");
	}

	return 0;
}
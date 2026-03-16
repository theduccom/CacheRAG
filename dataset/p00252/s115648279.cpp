#include <stdio.h>

int main(void)
{
	int i;
	int f[3];
	
	scanf("%d %d %d", &f[0], &f[1], &f[2]);
	
	if (f[0] == 1 && f[1] == 1){
		printf("Open\n");
	}
	else if (f[2] == 1){
		printf("Open\n");
	}
	else {
		printf("Close\n");
	}
	
	return (0);
}
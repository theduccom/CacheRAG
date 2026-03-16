#include<stdio.h>
int main(void){
	int b[3];
	scanf("%d%d%d", &b[0], &b[1], &b[2]);

	if (b[0] == b[1] && b[0] != b[2])
		printf("Open\n");
	else
		printf("Close\n");
}

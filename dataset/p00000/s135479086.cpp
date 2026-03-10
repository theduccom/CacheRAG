#include <stdio.h>

int main(void)
{
	int i, j;
	for(j=1; j<10; j++){
		for(i=1; i<10; i++){
			printf("%dx%d=%d\n", j, i, j*i);
		}
	}
	return 0;
}
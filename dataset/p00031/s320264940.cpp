#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int n;
	char buf[256];
	int ans[10];
	
	
	while (fgets(buf, 256, stdin) != NULL){
		n = atoi(buf);
		
		int count = 0;
		for (int i = 0; i < 10; i++){
			if ((n & (1 << i)) != 0){
				ans[count++] = 1 << i;
			}
		}
		printf("%d", ans[0]);
		for (int i = 1; i < count; i++){
			printf(" %d", ans[i]);
		}
		puts("");
	}
	
	return (0);
}
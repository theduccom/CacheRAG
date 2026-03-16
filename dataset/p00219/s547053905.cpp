#include <cstdio>
#include <cstring>

int main(void) {
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == 0)
			break;
		int sold[10];
		memset(sold, 0, sizeof(sold));

		for(int i = 0; i < n; i++) {
			int t;
			scanf("%d", &t);
			sold[t]++;
		}
		for(int i = 0; i <= 9; i++) {
			if(sold[i] == 0)
				printf("-\n");
			else {
				for(int j = 0; j < sold[i]; j++)
					printf("*");
				printf("\n");
			}
		}
	}
	return 0;
}
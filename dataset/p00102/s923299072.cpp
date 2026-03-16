#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int h[16][16];
	
	while (scanf("%d", &n), n != 0){
		
		for (i = 0; i <= n; i++){
			for (j = 0; j <=n; j++){
				h[i][j] = 0;
			}
		}
		
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				scanf("%d", &h[i][j]);
				h[i][n] += h[i][j];
				h[n][j] += h[i][j];
			}
		}
		
		for (i = 0; i < n; i++){
			h[n][n] += h[i][n];
		}
		for (i = 0; i <= n; i++){
			for (j = 0; j <= n; j++){
				printf("%5d", h[i][j]);
			}
			printf("\n");
		}
	}
	return (0);
}
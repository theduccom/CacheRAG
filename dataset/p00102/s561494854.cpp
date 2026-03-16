#include <stdio.h>

#define MAX 16

int main(void){
	int a[MAX][MAX];
	int n;
	
	while (scanf("%d", &n), n){
		for (int i=0; i<=n; i++) a[n][i] = a[i][n] = 0;
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				scanf("%d", &a[i][j]);
				a[i][n] += a[i][j];
				a[n][j] += a[i][j];
				a[n][n] += a[i][j];
			}
		}
		for (int i=0; i<=n; i++){
			for (int j=0; j<=n; j++){
				printf("%5d",a[i][j]);
			}
			puts("");
		}
	}
	return 0;
}
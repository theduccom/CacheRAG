#include <cstdio>

int main(){
	int n;
	int M[11][11];
	int sum;
	
	for(;;){
		scanf("%d", &n);
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			sum = 0;
			for(int j = 0; j < n; j++){
				scanf("%d", &M[i][j]);
				sum += M[i][j];
			}
			M[i][n] = sum;
		}
	
		for(int i = 0; i <= n; i++){
			sum = 0;
			for(int j = 0; j < n; j++){
				sum += M[j][i];
			}
			M[n][i] = sum;
		}
	
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				printf("%5d", M[i][j]);
			}
			putchar('\n');
		}
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int in[11][11];
	int n;
	int nyu;

	scanf("%d",&n);

	while(n != 0){
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				in[i][j] = 0;
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				scanf("%d",&in[i][j]);
				in[i][n] += in[i][j];
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j <= n; j++){
				in[n][j] += in[i][j];
			}
		}

		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				printf("%5d",in[i][j]);
			}
			printf("\n");
		}

		scanf("%d",&n);
	}

	return 0;
}
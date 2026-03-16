#include <cstdio>
using namespace std;

int main()
{
	int n;
	
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		int x[11][11] = {0};
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &x[i][j]);
				x[i][10] += x[i][j];
				x[10][j] += x[i][j];
			}
			x[10][10] += x[i][10];
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%5d", x[i][j]);
			}
			printf("%5d\n", x[i][10]);
		}
		for (int j = 0; j < n; j++){
			printf("%5d", x[10][j]);
		}
		printf("%5d\n", x[10][10]);
	}
	
	return (0);
}
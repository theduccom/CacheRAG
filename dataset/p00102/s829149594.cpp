#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int cell[11][11], n;

	while (cin >> n, n){
		for (int i = 0; i < 11; i++){
			for (int j = 0; j < 11; j++){
				cell[i][j] = 0;
			}
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> cell[i][j];
				cell[n][n] += cell[i][j];
				cell[i][n] += cell[i][j];
				cell[n][j] += cell[i][j];
			}
		}

		for (int i = 0; i < n + 1; i++){
			for (int j = 0; j < n + 1; j++){
				printf("%5d", cell[i][j]);
			}
			printf("\n");
		}
	}
	return (0);
}
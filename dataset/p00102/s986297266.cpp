#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	
	while (scanf("%d", &n), n != 0){
		int t[11][11] = {0};
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> t[i][j];
				t[i][n] += t[i][j];
				t[n][j] += t[i][j];
			}
			t[n][n] += t[i][n];
		}
		for (int i = 0; i <= n; i++){
			for (int j = 0; j <= n; j++){
				printf("%5d", t[i][j]);
			}
			printf("\n");
		}
	}
	return (0);
}
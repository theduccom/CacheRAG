#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a[16][16];

	while (cin >> n, n){
		
		memset(a, 0, sizeof(a));

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				a[i][n] += a[i][j];
			}
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j <= n; j++){
				a[n][j] += a[i][j];
			}
		}

		for (int i = 0; i <= n; i++){
			for (int j = 0; j <= n; j++){
				printf("%5d", a[i][j]);
			}
			puts("");
		}
	}
}
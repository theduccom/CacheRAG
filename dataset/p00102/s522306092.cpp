#include <stdio.h>

int main(void)
{
	int a[11][11];
	int n, i, j;

	scanf("%d", &n);
	while (n != 0)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &a[i][j]);

		a[n][n] = 0;
		for (i = 0; i < n; i++)
		{
			a[i][n] = 0;
			for (j = 0; j < n; j++)
				a[i][n] += a[i][j];
			a[n][n] += a[i][n];
		}

		for (j = 0; j < n; j++)
		{
			a[n][j] = 0;
			for (i = 0; i < n; i++)
				a[n][j] += a[i][j];
		}

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
				printf("%5d", a[i][j]);
			printf("\n");
		}
		
		scanf("%d", &n);
	}

	return 0;
}
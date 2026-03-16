#include <stdio.h>

int factorial(int a, int i)
{
	if(a % 5 == 0) return factorial(a/5, i+1);
	else return i;
}

int main()
{
	int n, k;

	while(1){
		k = 0;
		scanf("%d", &n);

		if(n == 0) break;

		for(int i = 1; i <= n; i++) {
			k += factorial(i, 0);
		}

		printf("%d\n", k);
	}
	
	return 0;
}
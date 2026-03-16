#include <stdio.h>

int main()
{
	int n;

	while (1) {
		int x = 0, emp[4000] = {};

		scanf("%d", &n);
		if(n == 0) break;

		for (int i = 0; i < n; i++) {
			int e, p, q;
			scanf("%d %d %d", &e, &p, &q);

			emp[e] += p*q;

			if(emp[e] >= 1000000) {printf("%d\n", e); x = 1;}
		}

		if (x != 1) printf("NA\n");
	}

	return 0;
}
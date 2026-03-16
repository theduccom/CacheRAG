#include <stdio.h>

int leap_year(int, int);

int main(void)
{
	int a, b;
	int i = 0;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		if (i++) {
			printf("\n");
		}
		leap_year(a, b);
	}
	return 0;
}

int leap_year(int a, int b)
{
	int leap_year_number = 0;
	for (int i = a; i <= b; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			printf("%d\n", i);
			leap_year_number += 1;
		}
	}
	if (leap_year_number == 0) {
		printf("NA\n");
	}
	return 0;
}
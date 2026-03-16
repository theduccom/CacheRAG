#include <stdio.h>

int divide(int, int, int);

int main(void)
{
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0) 
			break;
	    int grade[n][3];
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &grade[i][0], &grade[i][1], &grade[i][2]);
			divide(grade[i][0], grade[i][1], grade[i][2]);
		}
	}
	return 0;
}

int divide(int m, int e, int j)
{
	if (m == 100 || e == 100 || j == 100 ||
		(m + e) / 2 >= 90 ||
		(m + e + j) / 3 >= 80) {
		printf("A\n");
	} else if ((m + e + j) / 3 >= 70 ||
		       ((m + e + j) / 3 >= 50 && (m >= 80 || e >= 80))) {
		printf("B\n");
	} else {
		printf("C\n");
	}
	return 0;
}
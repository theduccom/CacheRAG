#include <stdio.h>

int main(void)
{
	double a[16];
	int i;
	double total;
	
	while (scanf("%lf", &a[0]) != EOF){
		total = a[0];
		for (i = 1; i < 10; i++){
			if (i % 2 == 0){
				a[i] = a[i - 1] / 3;
			}
			if (i % 2 == 1){
				a[i] = a[i - 1] * 2;
			}
			total += a[i];
		}
		printf("%lf\n", total);
	}
	return (0);
}
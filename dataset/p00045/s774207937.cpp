#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int k;
	int total;
	double ave;
	int s;
	
	total = 0; s = 0; ave = 0;
	while (scanf("%d,%d", &n, &k) != EOF){
		total += n * k;
		s++;
		ave += k;
	}
	ave /= s;
	ave = floor(ave + 0.5);
	printf("%d\n%.0lf\n", total, ave);
	
	return (0);
}
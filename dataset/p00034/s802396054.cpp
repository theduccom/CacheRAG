#include <stdio.h>

int main(void)
{
	int i;
	double l[16];
	double v[2];
	double vi;
	double total;
	double t;
	
	while (scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v[0], &v[1]) != EOF){
		total = 0;
		for (i = 0; i < 10; i++){
			total += l[i];
		}
		vi = v[0] + v[1];
		t = total / vi;
		t = v[0] * t;
		
		total = 0;
		for (i = 0; i < 10; i++){
			total += l[i];
			if (t <= total){
				printf("%d\n", i + 1);
				break;
			}
		}
	}
	return (0);
}
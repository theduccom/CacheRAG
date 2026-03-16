#include <cstdio>

int main(void)
{
	double a, res;
	while (scanf("%lf", &a) != EOF){
		res = a;
		for (int i = 2; i <= 10; i++){
			if (i % 2 == 0){
				a *= 2.0;
			}
			else {
				a /= 3.0;
			}
			res += a;
		}
		printf("%.8lf\n", res);
	}
	
	return (0);
}
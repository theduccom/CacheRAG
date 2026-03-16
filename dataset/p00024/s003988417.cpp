#include <stdio.h>

int main()
{
	double v;
	double y;
	int n;
	while(scanf("%lf",&v) != EOF){
		y = v * v / 19.6;
		n = y / 5;
		if(n * 5 != y){
			n++;
		}
		printf("%d\n",n+1);
	}
	return 0;
}
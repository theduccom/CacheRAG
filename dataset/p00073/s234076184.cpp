#include <stdio.h>
#include <math.h>

int main(void){
	int x, h;
	double ans;

	while(1){
		scanf("%d %d", &x, &h);
		if(x == 0 && h == 0) break;

		ans = x*x + 4*(sqrt((x/2.0)*(x/2.0) + h*h) * x / 2.0);
		printf("%6f\n", ans);
	}


	return 0;
}
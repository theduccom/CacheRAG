#include <cmath>
#include <stdio.h>

using namespace std;

int main(void)
{
	int x,h;
	double ans;

	scanf("%d", &x);
	scanf("%d", &h);
	while(x != 0 || h != 0){
		if(x == 0){
			printf("0\n");
		scanf("%d", &x);
		scanf("%d", &h);
			continue;
		}
		ans = (1 / cos(atan((double)h * 2 / (double)x)) + 1) * x * x;

		printf("%f\n",ans);
		scanf("%d", &x);
		scanf("%d", &h);

	}
	return 0;
}
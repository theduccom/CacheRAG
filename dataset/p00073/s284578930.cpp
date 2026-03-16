#include <stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){

	double x,h;

	while(true){
		scanf("%lf",&x);
		scanf("%lf",&h);
		if(x == 0 && h == 0)break;

		printf("%.6lf\n",x*x+2*x*sqrt(h*h+(x/2)*(x/2)));
	}

    return 0;
}
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
	int x,h;
	double ans;

	while(scanf("%d\n%d", &x, &h)){
		if(x==0 && h==0) break;
		ans = 0;
		ans += (double)x*x;
		double ah = sqrt(x/2.0*x/2.0+h*h);
		ans += (ah*x)/2.0*4.0;
		printf("%f\n", ans);
	}

	return 0;
}
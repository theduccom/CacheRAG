#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
	double x,h;
	while(cin >> x >> h){
		if(!x) break;
		double s;
		s=x*(x+2*sqrt(h*h+x*x/4));
		printf("%f\n",s);
	}
	return 0;
}
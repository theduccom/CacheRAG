#include "math.h"
#include <iostream>
#include "stdio.h"
using namespace std;

/** Problem0073 : Surface Area of Quadrangular Pyramid **/
int main()
{
	double x, h, S;
	
	while (cin >> x >> h) {
		if (x == 0 && h == 0) break;
		S = x*x + x*sqrt(x*x+4*h*h);
		printf("%.6lf\n", S);
	}
}
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
	int x,h;
	double halfx;
	double s;
	while(1){
		cin >> x >> h;
		if(x == 0 && h == 0)	return 0;
		halfx = x / 2.0;
		s = x * x + 4 * ((x*sqrt((double)(halfx*halfx + h*h)))/2);
		printf("%.7lf\n",s);
	}
}
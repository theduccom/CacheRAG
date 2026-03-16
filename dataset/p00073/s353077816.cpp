#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    double x,h;
	while(cin >> x >> h) {
    if ( x+h == 0) break; 
	printf("%.6lf\n",x*x+2*x*sqrt(h*h+x*x/4));
	}
	return 0;
}
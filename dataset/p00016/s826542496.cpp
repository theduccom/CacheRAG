#include <iostream>
#include <cstdio>
#include <algorithm>
#include <complex>
#include <string>
#include <math.h>
using namespace std;
typedef complex<double> P;
const double PI = 4*atan(1.0);
 
int main(){
	P p(0, 0), dir(0,1);
	while(1){
		double d,r;
		scanf("%lf,%lf", &d, &r);
		if(d==0) break;
		p += dir*d;
		dir *= P(cos(r*PI/180), -sin(r*PI/180));
	}
	int x=p.real(), y=p.imag();
	cout << x << endl << y << endl;
}
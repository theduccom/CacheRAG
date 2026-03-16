#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;
double a, b, c, d, e, f;
double x, y;


void function(){
	if(a == 0){
		y = c/b;
		x = (f - c*e/b)/d;
	}else if(b == 0){
		x = c/a;
		y = (f - c*d/a)/e;
	}else if(d == 0){
		y = f/e;
		x = (c - f*b/e)/a;
	}else if(e == 0){
		x = f/d;
		y = (c - a*f/d)/b;
	}else{
		y = (c - a*f/d)/(b - a*e/d);
		x = (c - b*y)/a;
	}
	return;
}


int main(){
	int n;
	cin >> n;

	for(int i=0 ; i<n ; i++){
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		a = 2*(x2 - x1);
		b = 2*(y2 - y1);
		c = (x2 - x1)*(x1 + x2) + (y2 - y1)*(y1 + y2);

		d = 2*(x3 - x1);
		e = 2*(y3 - y1);
		f = (x3 - x1)*(x3 + x1) + (y3 - y1)*(y1 + y3);

		function();
		double r;
		r = sqrt((x - x1)*(x - x1) + (y - y1)*(y - y1));

		printf("%.3lf %.3lf %.3lf\n",x, y, r);
	}
	return 0;
}
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

void square(double, double, double, double, double, double);
double edge(double, double, double, double);
void center(double, double, double, double, double, double);

double xp, yp;

int main () {

	double x1, y1, x2, y2, x3, y3, n;

	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		square(x1, y1, x2, y2, x3, y3);
	}

}


void square(double x1, double y1, double x2, double y2, double x3, double y3) {

	double r, a, b, c, s;

	a=edge(x1, x2, y1, y2);
	b=edge(x2, x3, y2, y3);
	c=edge(x3, x1, y3, y1);
	center(x1, y1, x2, y2, x3, y3);
	s=(a+b+c)/2;
	r=0.25*a*b*c/sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.3f %.3f %.3f\n", xp, yp, r);

}

double edge(double a, double b, double c, double d) {

	return sqrt(pow(a-b, 2)+pow(c-d, 2));

}

void center(double x1, double y1, double x2, double y2, double x3, double y3) {

	double a1=2*(x2-x1);
	double b1=2*(y2-y1);
	double c1=x1*x1-x2*x2+y1*y1-y2*y2;
	double a2=2*(x3-x1);
	double b2=2*(y3-y1);
	double c2=x1*x1-x3*x3+y1*y1-y3*y3;
	xp=(b1*c2-b2*c1)/(a1*b2-a2*b1);
	yp=(c1*a2-c2*a1)/(a1*b2-a2*b1);

}
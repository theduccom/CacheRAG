#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include<iomanip>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;

double hankei(double z1,double z2,double dx,double dy){
	 
	double r = sqrt((dx - z1)*(dx - z1) + (dy - z2)*(dy - z2));
	return r;
}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
		double x1, y1, x2, y2, x3, y3,px,py;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		px = ((y1 - y3)*(y1*y1 - y2*y2 + x1*x1 - x2*x2) - (y1 - y2)*(y1 *y1 - y3*y3 + x1 *x1 - x3 *x3)) / (2 *(y1 - y3)*(x1 - x2) - 2 * (y1 - y2)*(x1 - x3));
		py = ((x1 - x3)*(x1*x1 - x2*x2 + y1*y1 - y2*y2) - (x1 - x2)*(x1 *x1 - x3*x3 + y1 *y1 - y3 *y3)) / (2 *(x1 - x3)*(y1 - y2) - 2 * (x1 - x2)*(y1 - y3));

		printf("%.3f %.3f %.3f\n",floor(px * 1000 + 0.5) / 1000,floor(py * 1000 + 0.5) / 1000 ,floor(hankei(x1, y1, px, py) * 1000 + 0.5) / 1000);
	}
	
	return 0;
}
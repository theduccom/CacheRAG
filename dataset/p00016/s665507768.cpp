#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265358979
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include<iomanip>
#include<vector>
#include<cmath>
#include <algorithm>
#include <cstdlib>
#include <typeinfo>
using namespace std;

int main(){
	double n, m, x = 0, y = 0, arg=0;
	while (1)
	{
		double a, b;
		scanf("%lf,%lf", &a, &b);
		if (a == 0 && b == 0)break;
		double rad = arg * PI / 180;
		x += a*cos(rad);
		y += a*sin(rad);
		arg += b; 
	
	}
	cout << (int)y << endl << (int)x << endl;
}
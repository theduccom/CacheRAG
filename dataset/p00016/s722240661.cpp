#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <stack>
using namespace std;


double rad(int degree){
	return (M_PI*degree) / 180;
}


int main(){
	double x = 0, y = 0;
	int d, dir = 90, a;
	char comma;

	while (cin >> d >> comma >> a, d || a){
		x += d * cos(rad(dir));
		y += d * sin(rad(dir));
		dir -= a;
	}

	cout << (int)x << endl;
	cout << (int)y << endl;

	return 0;
}
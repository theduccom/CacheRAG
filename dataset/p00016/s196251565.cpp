#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double totheta(int k){
	double ret = k * M_PI / 180.0;
	return ret;
}

int main(){
	string input;
	int meter = 0, theta = 0;
	float x=0, y=0, c=0;
	while (true)
	{
		scanf("%d,%d", &meter, &theta);
		if (meter == 0 && theta == 0) { break; }
		x += meter * sin(c);
		y += meter * cos(c);
		c += totheta(theta);
	}
	int ansx, ansy;
	ansx = x;
	ansy = y;
	cout << ansx << endl << ansy << endl;
	return 0;
}
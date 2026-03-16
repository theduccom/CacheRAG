#include <iostream>
#include <cmath>
#include <cstdio>
#define PI 3.14159265
#define RAD (PI/180)

using namespace std;

int main() {
	
	int m, angle;
	double x=0, y=0, deg=90;

	while(1) {
		scanf("%d, %d", &m, &angle);
		if(m==0&&angle==0)
			break;
		x+=(double)m*cos(deg*RAD);
		y+=(double)m*sin(deg*RAD);
		deg-=(double)angle;
	}

	cout << (int)x << endl << (int)y << endl;

	return 0;

}
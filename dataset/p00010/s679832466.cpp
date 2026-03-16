//#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int n;
	double ax, ay, bx, by, cx, cy;
	double A, B, C,S2;
	double x, y,r;

	cin >> n;

	while (n--){
		cin >> ax >> ay >> bx >> by >> cx >> cy;

		A = (bx - cx)*(bx - cx) + (by - cy)*(by - cy);
		B = (cx - ax)*(cx - ax) + (cy - ay)*(cy - ay);
		C = (bx - ax)*(bx - ax) + (by - ay)*(by - ay);
		S2 = A*(B + C - A) + B*(C + A - B) + C*(A + B - C);

		x = (A*(B + C - A)*ax + B*(C + A - B)*bx + C*(A + B - C)*cx) / S2;
		y = (A*(B + C - A)*ay + B*(C + A - B)*by + C*(A + B - C)*cy) / S2;

		r = sqrt((x - ax)*(x - ax) + (y - ay)*(y - ay));

		printf("%.3f %.3f %.3f\n", x, y, r);
	}
}
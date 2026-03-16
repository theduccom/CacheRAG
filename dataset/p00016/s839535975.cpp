#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>

using namespace std;


int main(){

	int r;
	char c;
	float x, y;
	double th0,th1;

	th1 = M_PI_2;
	x = 0.0;
	y = 0.0;

	while (1){
		cin >> r >> c >> th0;
		if (r == 0 && th0 == 0)break;

		x += r * cos(th1);
		y += r * sin(th1);

		th1 -= th0 * M_PI / 180.0;
	}
	cout << (int)x << endl << (int)y << endl;


	return 0;
}
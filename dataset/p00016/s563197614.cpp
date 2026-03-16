#include <iostream>
#include <math.h>

static const double PI = 6*asin(0.5);

using namespace std;

int debug = 0;

int main(void){
	int len, deg, direction=90;
	double x=0, y=0;
	int i_x, i_y;

	while(cin >> len){
		cin.ignore(); //read ,
		cin >> deg;

		if(len == 0 && deg == 0) break;

		//proceed
		x += len * cos(direction * PI / 180);
		y += len * sin(direction * PI / 180);
		
		//turn clockwise
		direction -= deg;

	}

	i_x = x;
	i_y = y;

	cout << i_x << endl;
	cout << i_y << endl;

	return 0;
}
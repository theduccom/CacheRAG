#define RAD M_PI/180
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	int  move, angle;
	double x = 0, y = 0, theta = 90;
	
	while (scanf("%d,%d", &move, &angle), (move != 0) && (move != 0)) {
		x += (double)move * cos(theta*RAD); y += (double)move * sin(theta*RAD);
		theta -= angle;
	}
	
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}
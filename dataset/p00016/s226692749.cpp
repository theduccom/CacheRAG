#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int walk,ang;
	char c;
	double x=0.0,y=0.0,angle = 90;

	while (cin >> walk >> c >> ang)
	{

		if (walk == 0 && ang == 0) break;
		x += cos(angle*M_PI / 180)*walk;
		y += sin(angle*M_PI / 180)*walk;
		angle -= ang;

	}
	cout << (int)x << endl << (int)y << endl;
}
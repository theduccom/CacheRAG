#include <iostream>
#include <cmath>

using namespace std;

const double Pi = 3.14159265;
const double Degree = Pi / 180;

int main(int argc, char const* argv[])
{
	double scale,dTheta,theta;
	double x,y;
	char comma;
	x = y = 0;
	theta = 0;

	while( cin >> scale >> comma >> dTheta && scale != 0 ){
		x += scale * cos( -theta * Degree );
		y += scale * sin( -theta * Degree );
		theta += dTheta;
	}
	cout << static_cast<int>(-y) << endl;
	cout << static_cast<int>(x) << endl;
	return 0;
}
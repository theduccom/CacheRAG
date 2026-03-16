#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
int main( void )
{
	double x = 0.0, y = 0.0, angle = 0.0;

	int walk, rotate;
	char split;
	string input;
	while ( cin >> input && input != "0,0" )
	{
		istringstream is( input );
		is >> walk >> split >> rotate;

		double radian = angle * M_PI / 180.0;
		x += walk * sin( radian );
		y += walk * cos( radian );
		angle += rotate;
	}

	cout << (int)x << endl;
	cout << (int)y << endl;

	return 0;
}
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	double x, y;
	int currentAngle = 0;
	string buffer;


	while ( true )
	{
		cin >> buffer;

		for ( unsigned int i = 0; i < buffer.size(); i++ )
		{
			if ( buffer[i] == ',' )
			{
				buffer[i] = ' ';
				break;
			}
		}

		int pedometer, angle;

		istringstream is( buffer );
		is >> pedometer >> angle;

		if ( pedometer == 0 && angle == 0 )
		{
			break;
		}

		x += sin( currentAngle * M_PI / 180 ) * pedometer;
		y += cos( currentAngle * M_PI / 180 ) * pedometer;
		currentAngle += angle;
	}

	cout << (int)x << endl;
	cout << (int)y << endl;

	return 0;
}
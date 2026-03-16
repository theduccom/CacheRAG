#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double x = 0, y = 0;
	int hosuu, kakudo;
	char tmp;
	int theta = 90;

	while ( 1 )
	{
 		cin >> hosuu >> tmp >> kakudo;
		if ( hosuu == 0 && kakudo == 0 )
		{
			break;
		}

		y = y + hosuu * sin( theta * M_PI / 180 );
		x = x + hosuu * cos( theta * M_PI / 180 );

		theta = theta - kakudo;
	}

	cout << ( int )x << endl;
	cout << ( int )y << endl;

	return 0;
}
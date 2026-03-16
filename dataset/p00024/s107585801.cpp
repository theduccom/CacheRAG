#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i = 0;
	double min_v = 0, y, t, height;

	while ( cin >> min_v )
	{
		t = min_v / 9.8;
		y = 4.9 * t * t;
		height = ( y + 5 ) / 5;
		height = ceil( height );
		cout << ( int )height << endl;
	}
	return 0;

}
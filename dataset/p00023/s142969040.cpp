#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double xa, ya, ra, xb, yb, rb, distance, x, y;
	int i = 0, j = 0;

	cin >> i;
	while ( j < i )
	{
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		x = xa - xb;
		y = ya - yb;
		distance = sqrt( x*x + y*y );

		if ( ra >= rb )
		{ // circle a bigger than circle b
			if ( distance > ra + rb )
			{ // circle b in circle a 
				cout << 0 << endl;
			}
			else if ( distance <= ra + rb && distance >= ra - rb )
			{
				cout << 1 << endl;
			}
			else if ( distance < ra - rb )
			{
				cout << 2 << endl;
			}
		}

		if ( rb > ra )
		{ // circle b bigger than circle a
			if ( distance > rb + ra )
			{ // circle a in circle b
				cout << 0 << endl;
			}
			else if ( distance <= ra + rb && distance >= rb - ra )
			{
				cout << 1 << endl;
			}
			else if ( distance < rb - ra )
			{
				cout << -2 << endl;
			}
		}

		j = j + 1;
	}

	return 0;
}
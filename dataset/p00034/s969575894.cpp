#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
typedef vector <int> VI;
typedef vector <double> VD;

int main( void )
{
	VD l(10); char c; double v1, v2;
	while ( cin.eof() == false )
	{
		for ( int i = 0; i < 10; i++ ) cin >> l[i] >> c;
		cin >> v1 >> c >> v2;

		if ( cin.eof() ) break;

		double length = accumulate( l.begin(), l.end(), 0.0 );
		double tc = length / ( v1 + v2 );
		double now = v1 * tc;

		int answer = -1;
		double sum = 0;
		for ( int i = 0; i < l.size(); i++ )
		{
			if ( sum <= now && now <= sum + l[i] )
			{
				answer = i+1;
				break;
			}
			sum += l[i];
		}

		cout << answer << endl;
	}
	return 0;
}
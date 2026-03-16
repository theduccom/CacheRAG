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
	while ( true )
	{
		int x, h;
		cin >> x >> h;

		if ( x == 0 && h == 0 )
		{
			break;
		}

		double area = x * x;
		area += 2 * sqrt( pow( x / 2.0, 2 ) + pow( h, 2 ) ) * x;

		printf("%.6lf\n", area );
	}

	return 0;
}
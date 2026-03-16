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

double abso( double n )
{
	if ( n < 0 )
	{
		return -n;
	}
	else
	{
		return n;
	}
}

int main()
{
	vector<double> height;

	double input;

	while ( cin >> input )
	{
		height.push_back( input );
	}

	sort( height.begin(), height.end() );

	cout << abso( *height.begin() - *height.rbegin() ) << endl;

	return 0;
}
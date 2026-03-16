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

void rev( bool &a, bool &b )
{
	a = !a;
	b = !b;

	return;
}

int main()
{
	bool cups[] = { true, false, false };

	string buffer;

	while ( cin >> buffer )
	{
		int a, b;

		a = buffer[0] - 'A';
		b = buffer[2] - 'A';

		rev( cups[a], cups[b] );
	}

	for ( int i = 0; i < 3; i++ )
	{
		if ( cups[i] )
		{
			cout << (char)( i + 'A' ) << endl;
		}
	}

	return 0;
}
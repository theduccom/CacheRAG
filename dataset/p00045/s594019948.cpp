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

unsigned int adjust( double n )
{
	if ( (int)( n * 10 ) % 10 < 5 )
	{
		return n;
	}
	else
	{
		return n + 1;
	}
}

int main()
{
	unsigned long totalprice = 0, totalnum = 0, n = 0;
	string buffer;

	while ( cin >> buffer )
	{
		for ( unsigned int i = 0; i < buffer.length(); i++ )
		{
			if ( buffer[i] == ',' )
			{
				buffer[i] = ' ';
				break;
			}
		}

		unsigned int price, num;
		istringstream iss( buffer );

		iss >> price >> num;

		totalprice += price * num;
		totalnum += num;
		n++;
	}

	cout << totalprice << endl;
	cout << adjust( (double)totalnum / n ) << endl;

	return 0;
}
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

int getIndex( string type )
{
	if ( type == "A" )
	{
		return 0;
	}
	else if ( type == "B" )
	{
		return 1;
	}
	else if ( type == "AB" )
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

int main()
{
	int count[] = { 0, 0, 0, 0 };

	string buffer;
	while ( cin >> buffer )
	{
		for ( unsigned int i = 0; buffer.length(); i++ )
		{
			if ( buffer[i] == ',' )
			{
				buffer[i] = ' ';
				break;
			}
		}			

		int number;
		string type;

		istringstream( buffer ) >> number >> type;

		count[ getIndex( type ) ]++;
	}

	for ( int i = 0; i < 4; i++ )
	{
		cout << count[i] << endl;
	}

	return 0;
}
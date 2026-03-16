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
	string buffer;

	while ( cin >> buffer )
	{
		for ( unsigned int i = 0; i < buffer.length(); i++ )
		{
			if ( buffer[i] == '@' )
			{
				int num = buffer[++i] - '0';
				char c = buffer[++i];

				for ( int i = 0; i < num; i++ )
				{
					cout << c;
				}
			}
			else
			{
				cout << buffer[i];
			}
		}
		cout << endl;
	}

	return 0;
}
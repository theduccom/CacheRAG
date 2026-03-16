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
	string word;
	bool first = true;

	while ( cin >> word )
	{
		int pos;
		
		if ( ( pos = word.find( "peach" ) ) != string::npos )
		{
			word.replace( pos, 5, "apple" );
		}
		else if ( ( pos = word.find( "apple" ) ) != string::npos )
		{
			word.replace( pos, 5, "peach" );
		}

		if ( first )
		{
			first = false;
		}
		else
		{
			cout << ' ';
		}

		cout << word;
	}

	cout << endl;

	return 0;
}
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
	int count = 0;
	string input;

	while ( cin >> input )
	{
		string rev = input;
		reverse( rev.begin(), rev.end() );

		if ( input == rev )
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
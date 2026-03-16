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

int stoi( string str )
{
	int res = 0;

	for ( unsigned int i = 0; i < str.length(); i++ )
	{
		res *= 10;
		res += str[i] - '0';
	}

	return res;
}

int main()
{
	int n;

	cin >> n;

	for ( int i = 0; i < n; i++ )
	{
		string buffer;
		cin >> buffer;

		string big, small;
		big = small = buffer;

		sort( big.begin(), big.end(), greater<char>() );
		sort( small.begin(), small.end() );

		cout << stoi( big ) - stoi( small ) << endl;
	}

	return 0;
}
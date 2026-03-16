#include <iostream>
#include <string>
#include <map>
#include <string.h>

using namespace std;

int main()
{
	map< char, int > table;
	table['A'] = 0;
	table['I'] = 1;
	table['V'] = 5;
	table['X'] = 10;
	table['L'] = 50;
	table['C'] = 100;
	table['D'] = 500;
	table['M'] = 1000;
	string str;
	int sum, sz;

	while ( cin >> str )
	{
		sum = 0;
		sz = str.size();
		str.push_back( 'A' );
		for ( int i = 0 ; i < sz ; i++ )
		{
			if( table[str[i]] < table[str[i+1]] )
				sum = sum - table[str[i]];
			else 
				sum = sum + table[str[i]];
		}
		cout << sum << endl;
	}

	return 0;
}
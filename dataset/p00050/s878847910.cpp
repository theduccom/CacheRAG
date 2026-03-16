#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main( void )
{
	int index;
	string in;
	getline( cin, in );

	vector <int> p_list;
	vector <int> a_list;

	// peach
	index = 0;
	while ( in.substr( index ).find( "peach" ) != string::npos )
	{
		int n = in.substr( index ).find( "peach" ) + index;
		p_list.push_back( n );
		index = n + 5;
	}

	// apple
	index = 0;
	while ( in.substr( index ).find( "apple" ) != string::npos )
	{
		int n = in.substr( index ).find( "apple" ) + index;
		a_list.push_back( n );
		index = n + 5;
	}

	for ( vector <int>::iterator it = p_list.begin(); it != p_list.end(); it++ )
	{
		in.replace( *it, 5, "apple" );
	}

	for ( vector <int>::iterator it = a_list.begin(); it != a_list.end(); it++ )
	{
		in.replace( *it, 5, "peach" );
	}

	cout << in << endl;

	return 0;
}
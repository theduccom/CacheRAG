#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main( void )
{
	int a;
	char t;
	string b;

	vector <int> result( 4, 0 );

	while ( cin >> a >> t >> b )
	{
		if ( b == "A" )
			result[0]++;
		else if ( b == "B" )
			result[1]++;
		else if ( b == "AB" )
			result[2]++;
		else if ( b == "O" )
			result[3]++;
	}

	for ( int i = 0; i < 4; i++ )
	{
		cout << result[i] << endl;
	}

	return 0;
}
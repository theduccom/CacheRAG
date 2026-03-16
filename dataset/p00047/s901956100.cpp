#include <iostream>
using namespace std;
int main( void )
{
	char a, tmp, b, now;
	now = 'A';
	while ( cin >> a >> tmp >> b )
	{
		if ( a == now )
		{
			now = b;
		}
		else if ( b == now )
		{
			now = a;
		}
	}
	cout << now << endl;
	return 0;
}
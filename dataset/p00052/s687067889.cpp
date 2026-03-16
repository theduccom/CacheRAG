#include <iostream>
#include <math.h>
using namespace std;

int main( void )
{
	int n;
	int k;
	while ( cin >> n && n > 0 )
	{
		int kotae = 0;
		k = 5;
		while ( n/k >= 1.0 )
		{
			kotae += (int)floor((double)(n/k));
			k *= 5;
		}
		cout << kotae << endl;
	}


	return 0;
}
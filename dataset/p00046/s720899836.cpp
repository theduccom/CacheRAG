#include <iostream>
#include <climits>
using namespace std;
int main( void )
{
	double height, max_height = INT_MIN, min_height = INT_MAX;
	while ( cin >> height )
	{
		max_height = height > max_height ? height : max_height;
		min_height = height < min_height ? height : min_height;
	}
	cout << max_height - min_height << endl;
	return 0;
}
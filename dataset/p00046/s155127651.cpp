#include <iostream>

using namespace std;

int main()
{
	double height;
	double max_height = 0.0, min_height = 1.0e+6;
	
	while ( cin >> height ) {
		if ( max_height < height ) max_height = height;
		if ( min_height > height ) min_height = height;
	}
	
	cout << max_height - min_height << endl;
	
	return 0;
}
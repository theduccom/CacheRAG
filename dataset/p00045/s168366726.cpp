#include <iostream>
#include <math.h>
using namespace std;
int main( void )
{
	int sum_of_price = 0;
	int sum_of_number = 0;
	int price, number;
	char tmp;
	int count = 0;
	while ( cin >> price >> tmp >> number )
	{
		sum_of_price += price * number;
		sum_of_number += number;
		count++;
	}
	cout << sum_of_price << endl;
	cout << (int)ceil( (double)sum_of_number/count ) << endl;
	return 0;
}
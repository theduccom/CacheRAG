#include <iostream>
#include <array>

using namespace std;

void sortnumber( char * number )
{
	char tmp;
	unsigned int tmp_num, sum = 0;
	for ( int i = 1 ; i < 8 ; i++ )
	{
		for ( int j = 0 ; j < i ; j++ )
		{
			if ( number[i] > number[j] )
			{
				tmp = number[i];
				number[i] = number[j];
				number[j] = tmp;
			}
				
		}
	}
}

int minNum( char * number )
{
	unsigned int tmp_num = 0, sum = 0;
	for ( int i = 0 ; i < 8 ; i++ )
	{
		tmp_num = number[i] - 48;
		for ( int j = 0 ; j < i ; j++ )
		{
			tmp_num = tmp_num * 10;
		}
		sum = tmp_num + sum;
	}
	return sum;
}

int maxNum( char * number )
{
	unsigned int tmp_num = 0, sum = 0;
	for ( int i = 0 ; i < 8 ; i++ )
	{
		tmp_num = number[i] - 48;
		for ( int j = 7 ; j > i ; j-- )
		{
			tmp_num = tmp_num * 10;
		}
		sum = tmp_num + sum;
	}
	return sum;
}

int main()
{
	char number[9];
	unsigned int num, min, max;

	cin >> num;
	while ( num > 0 )
	{
		cin >> number;
		sortnumber( number );
		max = maxNum( number );
		min = minNum( number );
		printf( "%d\n", max-min );
		num--;
	}
	return 0;
}


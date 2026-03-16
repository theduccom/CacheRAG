#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef vector <int> VI;

VI string_to_vi( string number )
{
	VI converted( number.size() );
	for ( int i = 0; i < number.size(); i++ ) converted[i] = (int)( number[i] - '0' );
	return converted;
}

VI add( VI left, VI right )
{
	VI result;
	reverse( left.begin(), left.end() );
	reverse( right.begin(), right.end() );
	VI::iterator it_left = left.begin();
	VI::iterator it_right = right.begin();

	int carry = 0;
	while ( it_left != left.end() || it_right != right.end() )
	{
		int l = 0, r = 0;
		if ( it_left != left.end() ) l = *it_left;
		if ( it_right != right.end() ) r = *it_right;

		result.push_back( ( l + r + carry ) % 10 );
		carry = ( l + r + carry >= 10 ) ? 1 : 0;

		if ( it_left != left.end() ) it_left ++;
		if ( it_right != right.end() ) it_right ++;
	}
	if ( carry ) result.push_back( 1 );

	reverse( result.begin(), result.end() );
	return result;
}

void print_number( VI& number )
{
	for ( VI::iterator it = number.begin(); it != number.end(); it++ ) cout << *it;
	cout << endl;
}

int main( void )
{
	int n; cin >> n;
	for ( int i = 0; i < n; i++ )
	{
		string input_a, input_b;
		cin >> input_a >> input_b;

		VI a = string_to_vi( input_a );
		VI b = string_to_vi( input_b );
		VI c = add( a, b );

		if ( c.size() > 80 ) cout << "overflow" << endl;
		else print_number( c );

	}
	return 0;
}
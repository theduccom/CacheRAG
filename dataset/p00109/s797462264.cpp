#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getNumber( string& str, int* index )
{
	int ret = 0;
	while( *index < (int)str.size() ){
		if( str[ *index ] < '0' || str[ *index ] > '9' ){
			break;
		}
		ret *= 10;
		ret += ( str[ *index ] - '0' );
		++(*index);
	}
	return ret;
}

int rec( string& formula, int* index )
{
	int ret = 0;
	vector<int> num_list;
	vector<char> sign_list( 1, '.' );
	bool end = false;

	while( !end && *index < (int)formula.size() ){
		if( formula[ *index ] >= '0' && formula[ *index ] <= '9' ){
			num_list.push_back( getNumber( formula, index ) );
			continue;
		}else{
			switch( formula[ *index ] ){
				case '(':
					++(*index);
					num_list.push_back( rec( formula, index ) );
					break;
				case ')':
				case '=':
					++(*index);
					end = true;
					break;
				default:
					sign_list.push_back( formula[ *index ] );
					++(*index);
					break;
			}
		}
	}

	vector<int> num2_list;
	vector<char> sign2_list( 1, '.' );

	for( int i = 0; i < (int)num_list.size(); ++i ){
		int num = num_list[ i ];
		switch( sign_list[ i ] ){
			case '.':
				ret = num;
				break;
			case '*':
				ret *= num;
				break;
			case '/':
				ret /= num;
				break;
			default:
				num2_list.push_back( ret );
				ret = num;
				sign2_list.push_back( sign_list[ i ] );
				break;
		}
	}
	num2_list.push_back( ret );

	for( int i = 0; i < (int)num2_list.size(); ++i ){
		int num = num2_list[ i ];
		switch( sign2_list[ i ] ){
			case '.':
				ret = num;
				break;
			case '+':
				ret += num;
				break;
			case '-':
				ret -= num;
				break;
		}
	}

	return ret;
}

int solve( string& formula ){
	int index = 0;
	return (int)rec( formula, &index );
}

int main()
{
	int n;
	cin >> n;

	for( int i = 0; i < n; ++i ){
		string formula;
		cin >> formula;
		cout << solve( formula ) << endl;
	}

	return 0;
}
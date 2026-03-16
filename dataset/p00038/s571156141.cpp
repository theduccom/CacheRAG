#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector< std::string > split( const std::string &str, char delm )
{
	std::vector< std::string > v;
	std::stringstream ss( str );
	std::string buffer;
	while ( std::getline( ss, buffer, delm ) )
	{
		if ( buffer == "A" )
			buffer = "1";
		else if ( buffer == "J" )
			buffer = "11";
		else if ( buffer == "Q" )
			buffer = "12";
		else if ( buffer == "K" )
			buffer = "13";

		v.push_back( buffer );
	}

	return v;
}

std::string maxthree( std::unordered_map< std::string, int > ump )
{
	if ( ump.size() == 2 )
	{
		return "full house";
	}
	else 
	{
		return "three card";
	}
}

std::string maxone( std::unordered_map< std::string, int > ump )
{
	array< int, 5 > ar;
	int i = 0, tmp = 0;
	auto itr = ump.begin();
	const char * ch;

	for ( ; itr != ump.end() ; itr++ )
	{
		ch = itr->first.c_str();
		ar[i] = atoi( ch );
		i++;
	}

	for ( int j = 0 ; j < 5 ; j++ )
	{
		for ( int k = j+1 ; k < 5 ; k++ )
		{
			if ( ar[j] > ar[k] )
			{
				tmp = ar[j];
				ar[j] = ar[k];
				ar[k] = tmp;
			}
		}
	}

	if ( ar[0]+1 == ar[1] && ar[0]+2 == ar[2] && ar[0]+3 == ar[3] && ar[0]+4 == ar[4] )
	{
		return "straight";
	}
	else 
	{
		if ( ar[0] == 1 && ar[1] == 10 && ar[2] == 11 && ar[3] == 12 && ar[4] == 13 )
			return "straight";
		else 
			return "null";
	}
}

std::string maxtwo( std::unordered_map< std::string, int > ump )
{
	if ( ump.size() == 4 )
	{
		return "one pair";
	}
	else 
	{
		return "two pair";
	}
}

int main()
{
	int max = 0;
	vector< std::string > str_v;
	unordered_map< std::string, int > ump;
	string str;

	while ( cin >> str )
	{
		str_v = split( str, ',' );	
		for ( int i = 0 ; i < 5 ; i++ )
		{
			ump[str_v[i]]++;
		}

		auto itr = ump.begin();
		for ( ; itr != ump.end() ; itr++ )
		{
			if ( itr->second > max )
			{
				max = itr->second;
			}
		}

		if ( max == 1 )
			cout << maxone( ump ) << endl;
		else if ( max == 2 )
			cout << maxtwo( ump ) << endl;
		else if ( max == 3 )
			cout << maxthree( ump ) << endl;
		else if ( max == 4 )
			cout << "four card" << endl;

		max = 0;
		ump.clear();
	}

	return 0;
}
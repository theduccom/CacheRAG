#include <iostream>
#include <string>
using namespace std;
int main( void )
{
	// ³ê½f[^É the, this, that Ì¢¸ê©ªÜÜêéÈçÎ
	// »êðoÍµÄI¹·éÆ¢¤àÌÅµå¤B

	string keys[3] = { "the", "this", "that" };
	string input;
	while ( cin.eof() == false )
	{
		getline( cin, input );
		for ( int i = 0; i <= 26; i++ )
		{
			for ( string::iterator it = input.begin(); it != input.end(); it++ )
			{
				if ( *it == '\n' ) it = input.erase( it );
				if ( 'a' <= *it && *it <= 'z' )
				{
					(*it)++;
					if ( *it > 'z' ) *it = 'a';
				}
			}
			bool not_found = true;
			for ( int j = 0; not_found && j < 3; j++ )
			{
				if ( input.find( keys[j] ) != string::npos ) not_found = false;
			}
			if ( not_found == false )
			{
				cout << input << endl;
				break;
			}
		}
	}

	return 0;
}
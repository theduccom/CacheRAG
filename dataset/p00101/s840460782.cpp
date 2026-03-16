#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main( void )
{
	string search_text = "Hoshino";
	string replace_text = "Hoshina";

	int n;
	char c;
	cin >> n;
	cin.get();

	for ( int i = 0; i < n; i++ )
	{
		string text;
		getline( cin, text );

		while ( text.find( search_text ) != string::npos )
		{
			text.replace( text.find( search_text ), replace_text.length(), replace_text );
		}
		cout << text << endl;
	}
	return 0;
}
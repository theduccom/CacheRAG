#include <iostream>
#include <string>

using namespace std;

int main ( void )
{
	string in;

	while ( cin >> in )
	{
		string out = "";
		
		for (int i = 0; i < in.size();)
		{
			if ( in[i] == '@' )
			{
				int len = in[i + 1] - '0';
				for (int j = 0; j < len; ++j)
					out += in[i + 2];
				i += 3;
			}
			else
				out += in[i++];
		}

		cout << out << endl;
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;

	while(getline(cin,s))
	{
		for ( int i=0; i<26; i++ )
		{
			string t;
			for ( int j=0; j<(int)s.length(); j++ )
				if ( 'a'<=s[j]&&s[j]<='z' )
					t += (s[j]-'a'+i)%26+'a';
				else
					t += s[j];
			if ( t.find("the")!=t.npos ||
				 t.find("this")!=t.npos ||
				 t.find("that")!=t.npos )
			{
				cout << t << endl;
				break;
			}

		}
	}
	return 0;
}
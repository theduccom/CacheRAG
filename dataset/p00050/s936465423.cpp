#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	getline(cin, s);
	n = s.size();
	for (int i = 0; i < n; i++)
	{

		if (s[i] == 'a' && s[i + 1] == 'p' && s[i + 2] == 'p' && s[i + 3] == 'l' && s[i + 4] == 'e')
		{
			s[i] = 'p';
			s[i + 1] = 'e';
			s[i + 2] = 'a';
			s[i + 3] = 'c';
			s[i + 4] = 'h';
			continue;
		}
		
		if (s[i] == 'p' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'c' && s[i + 4] == 'h')
		{
			s[i] = 'a';
			s[i + 1] = 'p';
			s[i + 2] = 'p';
			s[i + 3] = 'l';
			s[i + 4] = 'e';
			continue;
		}
	}
	cout << s << endl;


	return 0;
}


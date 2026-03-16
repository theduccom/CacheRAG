#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, j;
	string s, res, tmp;
	while (!cin.eof())
	{
		getline(cin, s);
		res = tmp = s;
		for (i = 0; i < 27; i++)
		{
			res = tmp;
			for (j = 0; j < (int)s.size(); j++)
			{
				if (s[j] != ' ' && s[j] != '.')
				{
					if (s[j] + i > 'z')
						res[j] = 'a' + s[j] + i - 'z' - 1;
					else
						res[j] = s[j] + i;
				}
				else
				{
					res[j] = s[j];
				}
			}
			if (res.find("the") != string::npos || res.find("this") != string::npos || res.find("that") != string::npos)
			{
				cout << res << endl;
				break;
			}
		}
	}
}
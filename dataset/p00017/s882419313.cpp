#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	while (getline(cin, s))
	{
		n = s.size();
		for (int i = 1; i < 27; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (s[j] == ' ' || s[j] == '.')
				{
					continue;
				}
				if (s[j] == 'z')
				{
					s[j] = 'a';
					continue;
				}
				s[j] ++;

			}
			

			bool ba = s.find("the") != string::npos;
			bool bb = s.find("this") != string::npos;
			bool bc = s.find("that") != string::npos;
			if (ba || bb || bc)
			{
				cout << s << endl;
			}
			
		}
	}

	return 0;
}
